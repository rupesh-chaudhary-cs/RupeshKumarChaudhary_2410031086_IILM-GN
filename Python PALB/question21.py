#WAP in python to print floyds traingle;
k=0
n=int(input("enter the number of rows:"))
for i in range(1,n+1,1):
    for j in range(1,i+1):
        print(k+1,end=" ")
        k+=1
    print()
