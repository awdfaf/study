// SPDX-License-Identifier: MIT

pragma solidity ^0.8.0;

import "MintAnimalToken.sol"; //임포트

contract SaleAnimalToken{
    MintAnimalToken public mintAnimalTokenAddress; 


    constructor (address _mintAnimalTokenAddress) {      // mintanimaltoken을 deploy하게 되면 deploy한 주소값이 나오는데 그 값을 여기에 담음
        mintAnimalTokenAddress = MintAnimalToken(_mintAnimalTokenAddress);
    }

    mapping(uint256 => uint256) public animalTokenPrices; //조건3 가격 관리 매핑, 첫 256은 animaltokenid(입력), 두번째 256은 출력 -> 가격

    uint256[] public onSaleAnimalTokenArray; //프론트엔드에서 배열로 어떤것이 판매중인지 확인할 수 있다.

    function setForSaleAnimalToken(uint256 _animalTokenId, uint256 _price) public {    //판매등록함수, 판매등록필요 (무엇을 팔지, 가격)
        address animalTokenOwner = mintAnimalTokenAddress.ownerOf(_animalTokenId);  //주소 필요 , 해당하는 주인이 판매필요

        require(animalTokenOwner == msg.sender, "Caller is not animal token owner."); //조건1, 주인이 맞는지 확인, 맞으면 다음 코드, 틀리면 에러 출력
        require(_price > 0, "Price is zero or lower.");     //조건2
        require(animalTokenPrices[_animalTokenId] == 0, "This animal token is already on sale."); //조건3 , 값이 있거나 0원이거나 
        require(mintAnimalTokenAddress.isApprovedForAll(animalTokenOwner, address(this)), "Animal token owner did not approve token."); 
                                                                                           //조건4, 판매권한, (주인, 이 파일의 스마트컨트랙트)

        animalTokenPrices[_animalTokenId] = _price; //매핑

        onSaleAnimalTokenArray.push(_animalTokenId); //판매중인지 확인
    }

    function purchaseAnimalToken(uint256 _animalTokenId) public payable {  //구매함수 payable -> 폴리곤네트워크 함수 실행가능
        uint256 price = animalTokenPrices[_animalTokenId];  //매핑에 담겨진 것을 꺼내옴 
        address animalTokenOnwer = mintAnimalTokenAddress.ownerOf(_animalTokenId);  //주소 필요 , 해당하는 주인

        require(price > 0, "Animal token not sale.");  //조건1
        require(price <= msg.value, "Caller sent lower than price.");  //조건2
        require(animalTokenOnwer != msg.sender, "Caller is animal token owner."); //조건3, 주인이 아니어야 구매가능

        payable(animalTokenOnwer).transfer(msg.value);  //구매 로직, 돈을 주인에게 보냄 
        mintAnimalTokenAddress.safeTransferFrom(animalTokenOnwer, msg.sender, _animalTokenId); //nft카드는 구매자에게 전송, (보내는 사람, 받는사람 , 무엇을 보낼 것인가)

        animalTokenPrices[_animalTokenId] = 0; //값 초기화

        for(uint256 i = 0; i < onSaleAnimalTokenArray.length; i++) {    //판매목록 제외
            if(animalTokenPrices[onSaleAnimalTokenArray[i]] == 0) {
                onSaleAnimalTokenArray[i] = onSaleAnimalTokenArray[onSaleAnimalTokenArray.length - 1];
                onSaleAnimalTokenArray.pop();
            }
        }
    }
    function getOnSaleAnimalTokenArrayLength() view public returns (uint256) { //판매중인 토큰배열의 길이 출력 함수 , 읽기 전용 
        return onSaleAnimalTokenArray.length;  //길이 , 프론트엔드에서 for문 돌려서 길이만큼 출력 할 수 있다.
    }

    function getAnimalTokenPrice(uint256 _animalTokenId) view public returns (uint256) {
        return animalTokenPrices[_animalTokenId];
    }

}