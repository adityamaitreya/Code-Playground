a=int(input("Ente 1st no:"))
b=int(input("Ente 2nd no:"))
cal=input("Enter operation(+ , _ , * , /) --> ")

match cal:
    case '+':
        print(a+b)
    case '-':
        print(a-b)
    case '*':
        print(a*b)
    case '/':
        if b==0:
            print("cannot devide")
        else:
            print(a/b)
    case _:
        print("Cannot perform")