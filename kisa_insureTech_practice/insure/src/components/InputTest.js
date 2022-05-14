import React, {useState} from 'react'

const InputTest = () => {

    // let text = "text"
    const [text,setText] = useState("초기값")
    const handleChange = (event) => {
        const {value} = event.target
        setText(value)
    }
    return (
        <div>
            <p>{text}</p>
            <input onChange={handleChange}></input>
        </div>
    )
}

export default InputTest