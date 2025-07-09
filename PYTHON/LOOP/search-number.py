nums =[1,4,9,16,25,36,49,64,81,100]
user = int(input("Enter a number : "))
i=0
while i<len(nums):
    if (nums[i] == user):
        print("FOUND AT INDEX",i)
    else:
        print("NOT FOUND AT INDEX",i)
    i+=1