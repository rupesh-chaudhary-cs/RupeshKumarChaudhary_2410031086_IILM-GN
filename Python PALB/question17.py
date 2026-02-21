#wap to print reverse of string without using reverse:
str=input("enter the string:")
str_reverse=str[::-1]
print("reversed_string=",str_reverse)

str2=input("enter the string:")
for i in str2[::-1]:
    print(i)

str3=input("enter the string:")
length_str=len(str3)
new_index=length_str-1
print(length_str)
for i in range(str3[new_index],str3[-1],-1):
    print(i)
    
    