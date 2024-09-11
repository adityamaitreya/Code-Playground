# Write a program to take a point as input now find its quadrant

x=int(input("Enter value of x: "))
y=int(input("Enter value of y: "))
if x>0 and y>0:
#give space i.e. intendation
	print("Point is in 1st quadrant")
elif x<0 and y>0:
	print("Point is in 2nd quadrant")
elif x<0 and y<0:
	print("Point is in 3rd quadrant")
elif x>0 and y<0:
	print("Point is in 4th quadrant")
elif x==0 and y==0:
	print("Point is at origin")
elif x==0:
	print("Point is at x axis")
elif y==0:
	print("Point is at y axis")
else:
	print("🙄🙄")