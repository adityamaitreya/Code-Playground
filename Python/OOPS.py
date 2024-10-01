class student:
    def __init__(self,name,marks,section):
        self.name=name
        self.marks=marks
        self.section=section

s1=student('aditya',45,'A')
print(s1.name,s1.marks,s1.section)
s2=student('Avi',34,"b")
print(s2.name,s2.marks,s2.section)