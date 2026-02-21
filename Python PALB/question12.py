#wap in python to take digit as an input from the user from 0 to 9 and print taken digit in the word;
digit=int(input("enter the digit:"))
if(digit==0):
    print("zero")
elif(digit==1):
    print("One")
elif(digit==2):
    print("Two")
elif(digit==3):
    print("Three")
elif(digit==4):
    print("Four")
elif(digit==5):
    print("Five")
elif(digit==6):
    print("Six")
elif(digit==7):
    print("Seven")
elif(digit==8):
    print("Eight")
elif(digit==9):
    print("Nine")
else:
    print("Invalid")

my_dict={
    1:"one",
    2:"Two",
    3:"Three",
    4:"Four",
    5:"Five",
    6:"Six",
    7:"Seven",
    8:"Eight",
    9:"Nine"
}
if(digit in my_dict):
    print(my_dict[digit])
else:
    print("Invalid")