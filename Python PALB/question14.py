#wap in python to find total number of times letter p appeard in string:
str=input("enter the string:")
times=0
for i in str:
    if(i=="p"):
        times+=1
print("The total number:",times)
