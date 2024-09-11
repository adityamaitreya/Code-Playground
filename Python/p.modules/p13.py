#by user input check which number is greater

a=float(input("Enter 1st number: "))
b=float(input("Enter 2nd number: "))

if a>b:
 print(a," is greater than ",b)
elif a==b:
 print("Both numbers are equal i.e. ",a)
else:
 print(b," is greater than ",a)