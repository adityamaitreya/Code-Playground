#by user input check which number is greater in 3 numbers

a=float(input("Enter 1st number: "))
b=float(input("Enter 2nd number: "))
c=float(input("Enter 3rd number: "))

if a==b==c:
 print("All are equal")
elif a>b and a>c:
 print(a,"is greater")
elif b>a and b>c:
 print(b,"is greater")
else:
 print(c,"is greater")