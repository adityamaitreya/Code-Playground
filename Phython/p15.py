#electric bill calculation

u=float(input("Enter number of unit used: "))

#rate of unit
#from 0 to 150
a=10
#from 150 to 300
b=15
#above 300
c=25



if u<=150:
 print("Your bill is",u*a)
elif u<=300:
 print("Your bill is",(150*a)+((u-150)*b))
elif u>300:
 print("Your bill is",(150*a)+(150*b)+((u-300)*c))