import React from 'react'
import axios from "axios"
import Header from '../components/Header'

const AxiosTest = () => {
    const handleClick = () => {
        // Make a request for a user with a given ID
        axios.get("https://newsapi.org/v2/everything?q=삼&from=2022-04-14&sortBy=publishedAt&apiKey=cda7e673ed5949338cf54ecf866ddb1d&to=2022-05-01&language=ko")
        .then(function (response) {
            //handle success
            console.log(response);
        })
        // .catch(function (error) {
        // // handle error
        // console.log(error);
        // })
        // .then(function () {
        // // always executed
        // });
    }
    return (
        <>
            <Header title={"데이터 요청 실습"}></Header>
            <button onClick={handleClick}>요청 전송</button>
        </>
    )
}

export default AxiosTest