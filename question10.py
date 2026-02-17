#wap to print the sum of natural number from 1 to n
n=int(input("enter the value of n:"))
sum=0
for i in range(1,n+1,1):
    sum+=i
print(sum)