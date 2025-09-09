import React, { useContext } from 'react'
import { dataContext } from './contex/UserContext'

const App = () => {
  const data = useContext(dataContext)
  console.log(data)
  return (
    <div>
      <h1>This is app {data}</h1>
    </div>
  )
}

export default App
