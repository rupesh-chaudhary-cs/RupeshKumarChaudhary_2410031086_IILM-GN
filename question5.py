unit=int(input("enter the units of electricity:"))
if(unit<=100):
    total_cost=unit*3
    print("The total cost till <=100 units is:",total_cost)
elif(unit<=200):
    total_cost=100*3+(unit-100)*5
    print("The total cost of electricity till <=200 is:",total_cost)
else:
    total_cost=100*3+100*5+(unit-200)*7
    print("The total cost of electricity when unit>200 is:",total_cost)