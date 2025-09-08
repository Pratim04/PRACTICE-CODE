import React from 'react'
import { Route,Routes } from 'react-router-dom'
import About from './pages/About';
import Home from './pages/Home';
import Product from './pages/Product';



const App = () => {
  return (
    <div>
      <Routes>
        <Route path='/' element = {<Home/>} />
        <Route path='/about' element = {<About/>} />
        <Route path='/product' element = {<Product/>} />
      </Routes>
    </div>
  )
}

export default App
