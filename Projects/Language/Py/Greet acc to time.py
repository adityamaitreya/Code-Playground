import time

timestamp = time.strftime('%H:%M:%S')
print("It's\nand\n",timestamp)

H= int(time.strftime('%H'))

if(H<12):
    print("Good Morning")
elif(12<=H<16):
    print("Good afternoon")
elif(16<=H<20):
    print("Good evening")
else:
    print("Good ningt")

#install speech function

    

