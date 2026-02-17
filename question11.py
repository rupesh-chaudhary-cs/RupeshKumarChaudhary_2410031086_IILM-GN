n=int(input("enter number of rows:"))
for i in range(1,n+1,1):
    for j in range (i):
        print('*',end=" ")
    print()

n2=int(input("enter the number n2:"))
for i in range(n,0,-1):
    for j in range(i):
        print('*',end=" ")
    print()

