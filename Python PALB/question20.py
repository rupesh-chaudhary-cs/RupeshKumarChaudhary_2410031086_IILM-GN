#WAP in python to print number traingle 
n=int(input("enter the number of row:"))
for i in range(1,n+1,1):
    for j in range(1,i+1):
        print(j,end=" ")
    print()