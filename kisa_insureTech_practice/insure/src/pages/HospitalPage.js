import axios from "axios";
import React, { useState } from "react";
import Header from "../components/Header";
import SearchInput from "../components/Hospital/SearchInput";
import SearchResult from "../components/Hospital/SearchResult";

const HospitalPage = () => {
    const [hospitalList, sethospitalList] = useState([]);
    const [searchInputText, setSearchInputText] = useState("");
  
    const handleChange = (event) => {
      const { value } = event.target;
      setSearchInputText(value);
    };
  
    const handleClick = () => {
      const option = {
        method: "GET",
        url: "http://apis.data.go.kr/B551182/hospInfoService1/getHospBasisList1",
        params: {
            ServiceKey:
                "KG9HQH8sOT5j5R/tnEqZ3T3EIvuHdQ5qcltbY3I+skwvxnA0Z4/ydvuK9jDZXtfH98MDKaAEWn/T4PpFPOzPNw==",
            sidoCd: 110000,
            clCd: 31,
            yadmNm: searchInputText,
            
        },
      };
  
      axios(option).then(function ({ data }) {
        console.log(data);
        sethospitalList(data.response.body.items.item);
      });
    };
    return (
      <div>
        <Header title={"병원 정보 목록"}></Header>
        <SearchInput
          handleChange={handleChange}
          handleClick={handleClick}
        ></SearchInput>
        <SearchResult hospitalList={hospitalList}></SearchResult>
      </div>
      // 약국명과 약국 주소에대한 검색 결과를 표시 하세요
    );
  };
export default HospitalPage