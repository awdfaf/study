const { createCipheriv,  createHash } = require("crypto");
const makeAES = (plainText) => {
// 암호화 로직
// AES-CBC-256 방식으로 암호화 로직 작성
// Enckey : 2tDTJyLYG4J+EJ24s+s4vDD6tN66h6Ng
// EncIV :!4R4NGJteELLJ!g2
// base64 형태로 encoding 하기
// 검증 : !Kwic123테스트 => tMaNdbwFzi/5H4V360i5G4nLjOPV3jZK3X0BFJogRyE=
    const key = "2tDTJyLYG4J+EJ24s+s4vDD6tN66h6Ng"
    const iv = "!4R4NGJteELLJ!g2"
    const cipher = createCipheriv('aes-256-cbc', key, iv)


    
    let encrypted = cipher.update(plainText,'utf8','base64')
    encrypted += cipher.final('base64')

    console.log("AES-CBC-256 방식으로 암호화한 값 : ",encrypted)
    return encrypted
// 1. 평문(plainText)을 Enckey, EnIv 값을 이용해 AES-CBC-256 방식으로 암호화
// 2. 암호화된 결과를 base64 인코딩 하기
// 3. return 암호화 된 값
};
// makeAES("!Kwic123테스트")


//tMaNdbwFzi/5H4V360i5G4nLjOPV3jZK3X0BFJogRyE=
//tMaNdbwFzi/5H4V360i5G4nLjOPV3jZK3X0BFJogRyE=









// const sha256Enc = (plainText) => {
//     const secret = "abcdefg"
//     const hash = createHmac("sha256", secret)
//         .update(plainText)
//         .digest("base64")
//     console.log(hash)
// }

// sha256Enc("12341234")

// const hsKey = () => {
//     const key = appSecretKey + timeSt;
//     var hmac = crypto.createHmac("sha512", new Buffer.from(key, 'utf-8'));
//     var signed = hmac.update(new Buffer.from(str, 'utf-8')).digest("base64");
//     console.log(signed);
//     return signed
//   };
  
//   const dbInsureEncrypt = () => {
//     const timeSt = "" ;
//     const appSecretKey = "";
//     const serial = timeSt + appSecretKey;
//     let secureKey = rpad(serial, 32, '0')
//     var bytes = crypto.randomBytes(20);
//     let iv = crypto.randomBytes(16)
//     console.log(bytes);
//     const key = crypto.pbkdf2Sync(secureKey, bytes, 70000, 32, 'sha1');
//     const cipher = crypto.createCipheriv('aes-256-cbc', key, iv);
//     cipher.setAutoPadding(false);
//     console.log('b:' , bytes.toString('base64'))
//     console.log('iv:', iv.toString('base64'))
//     let encrypted = cipher.update(pkcs7Pad(ssnnum), 'utf8','base64');
//     encrypted += cipher.final('base64');
//     console.log("here :", encrypted)
//     var encBuf = Buffer.from(encrypted,'base64');
//     let arr = [bytes, iv, encBuf];
//     let conBuf = Buffer.concat(arr);
//     console.log(conBuf.toString('base64'));
//     // encrypted += conBuf.toString('base64');
//     console.log(encrypted);
//     return conBuf.toString('base64');
//   };

export default{
    makeAES
}