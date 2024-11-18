a=int(input("Ente 1st no: "))
b=int(input("Ente 2nd no: "))
cal=input("Enter operation(+ , _ , * , /, %) --> ")
print("Answer: ")
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
            if a>b:
                print(b/a)
            else:
                print(a/b)
    case '%':
        print(a%b)