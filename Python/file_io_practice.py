# with open("practice.txt", "w") as f:
#     f.write("Hi everyone\nwe are learning file I/O\nusing java.\nI like java in programing.")


# with open("practice.txt", "r") as f:
#     data=f.read()
# ndata=data.replace("java", "python")
# print(ndata)

# with open("practice.txt", "w") as f:
#     f.write(ndata)
#     f.close()


def check_for_words():
    with open("practice.txt", "r") as f:
        data=f.read()
        if data.find("learning")!=-1:
            print("yes")
        else:
            print("no")
# check_for_words()

def count_words():
    with open("practice.txt", "r") as f:
        data=f.read()
        words=data.split()
        print(len(words))   

# count_words()
