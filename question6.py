#wap to calculate fare of the bus ticket depend upon people age:
#age<5 -- no fair:
#age>=5 to age<=12 --half fair;
#age>=13 to age<=60 -- full fair;
#more than 60-30% discount;
age=int(input("enter the age of the person:"))
ticketPrice=int(input("enter the ticket price:"))
if(age<5):
    print("There is no ticket,it is free")
elif(age>=5 and age<=12):
    ticketPrice=ticketPrice-ticketPrice*0.5
    print("The ticket is 50 percentage OFF:",ticketPrice)
elif (age>=13 and age<=60):
    print("The ticket price is full")
else:
    ticketPrice=ticketPrice-0.3*ticketPrice
    print("The ticket after 30% OFF is:",ticketPrice)