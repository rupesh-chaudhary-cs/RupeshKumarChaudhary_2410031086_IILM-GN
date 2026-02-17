#wap to check whether the given year is leap year or not
Year=int(input("enter the year:"))
if(Year%400==0 and Year%100!=0) or  (Year%4==0):
    print("The given year is leap year:",Year)
else:
    print("The given year is not leap year:",Year)