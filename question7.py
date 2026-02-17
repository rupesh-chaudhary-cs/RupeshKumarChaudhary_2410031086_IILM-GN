#WAP to calculate employee bonus;
workExperience=int(input("enter the working years:"))
Salary=int(input("enter the salary:"))
if(workExperience>=5):
    if(Salary>=50000):
        print("The total new salary:",Salary+0.1*Salary)
    else:
        print("The total new salary:",Salary+0.1*Salary+0.05*Salary)
else:
    print("The normal salary is:",Salary)