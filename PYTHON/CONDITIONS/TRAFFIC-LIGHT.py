light = input("Light : ")
if(light == "red" or "RED" or "Red"):
    print("STOP")
elif(light == "yellow" or "YELLOW" or "Yellow"):
    print("LOOK")
elif(light == "green" or "GREEN" or "Green"):
    print("GO")
else:
    print("Light is broken")