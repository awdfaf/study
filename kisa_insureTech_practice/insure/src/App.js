import { BrowserRouter, Routes, Route } from "react-router-dom";
import InputTest from "./components/InputTest";
import Listcomponents from "./components/Listcomponents";
import Header from "./components/Header";
import AxiosTest from "./pages/AxiosTest";
import SearchPage from "./pages/SearchPage";
import PhamacyPage from "./pages/PhamacyPage";
import HospitalPage from "./pages/HospitalPage";
import HospitalDetailPage from "./pages/HospitalDetailPage";
import EncryptPage from "./pages/EncryptPage";







function App() {
  return (
    <BrowserRouter>
      <Routes>
        <Route path="/" element={<Header></Header>}></Route>
        <Route path="/test" element={<InputTest></InputTest>}></Route>
        <Route path="/test2" element={<Listcomponents></Listcomponents>}></Route>
        <Route path="/axios" element={<AxiosTest />}></Route>
        <Route path="/news" element={<SearchPage />}></Route>
        <Route path="/pharmacy" element={<PhamacyPage></PhamacyPage>}></Route>
        <Route path="/hospital" element={<HospitalPage></HospitalPage>}></Route>
        <Route path="/hospitalDetail" element={<HospitalDetailPage></HospitalDetailPage>}></Route>
        <Route path="/encrypt" element={<EncryptPage />}></Route>
      </Routes>
      
    </BrowserRouter>
  )
}

export default App;
