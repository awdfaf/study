import React from "react";

const NewsList = ({ newsList }) => {
  return (
    <div>
      {newsList.map((data, index) => {
        return(
          <div>
            <p key={index}>{data.title}</p>
            <p key={index}>{data.url}</p>
          </div>
        )
      })}
      
      
    </div>
  );
};

export default NewsList;