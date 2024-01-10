#WAP to find factorial oof given number using 'Recursion'

def fact(n):
    if n==0 or n==1:
        return 1
    else:
        return n*fact(n-1)
a=int(input("Enter a number to find factorial: "))
f=fact(a)
print("Result:",f)
