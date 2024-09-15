#Fac using recirssion
# def fac(num):
#     if(num==1 or num==0):
#         return 1
#     else:
#         return num * fac(num-1)
    
# n=int(input("Enter num: "))
# print(fac(n))


#sun of first n natural number
# def sum(n):
#     if(n==0):
#         return 0
#     else:
#         return  n + sum(n-1)
    
# n=int(input("Enter num: "))
# print(sum(n))



#print all elements of list
# def ele(list,idx=0):
#     if idx==len(list):
#         return 0
#     print( list[idx])
#     ele(list,idx+1)

# list=[1,2,3,4,5]
# ele(list)


#print sum of all elements of list
# def ele(list,idx=0):
#     if idx==len(list):
#         return 0
#     return list[idx] + ele(list,idx+1)
    
# list=[1,2,3,4,5]
# print(ele(list))