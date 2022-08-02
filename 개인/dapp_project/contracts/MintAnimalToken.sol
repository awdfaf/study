// SPDX-License-Identifier: MIT

pragma solidity ^0.8.0;

import "@openzeppelin/contracts/token/ERC721/extensions/ERC721Enumerable.sol";

contract MintAnimalToken is ERC721Enumerable{
    constructor() ERC721("awdAnimals", "HAS") {} //name, symbol

     mapping(uint256 => uint256) public animalTypes; //매핑, 앞256은 animaltokenid, 뒤 256은 animaltype


    function mintAnimalToken() public {         // public은 아무나 사용할 수 있다(범위 설정)
        uint256 animalTokenId = totalSupply() + 1;    //nft가 가지는 유일한 값, 지금까지 발행된 민팅된 nft의 양 + 1, 이 값이 유일해야함

        uint256 animalType = uint256(keccak256(abi.encodePacked(block.timestamp, msg.sender, animalTokenId))) % 5 + 1; //랜덤뽑기

        animalTypes[animalTokenId] = animalType; // 1~5번까지 값이 들어감

         _mint(msg.sender, animalTokenId); //민트하는 함수 (명령어를 실행한 사람, 유일한 값 토큰id)
    }
    

}