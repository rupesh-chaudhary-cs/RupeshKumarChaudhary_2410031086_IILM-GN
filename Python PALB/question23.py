#wap in python to design a calculator;
def calculator(a,b,operator):
    if(operator=="+"):
        print("sum=",a+b)
    elif(operator=="-"):
        print("diff=",a-b)
    elif(operator=="*"):
        print("product=",a*b)
    elif(operator=="/"):
        print("division=",a/b)
    else:
        print("operator is invalid")
calculator(2,2,"/")