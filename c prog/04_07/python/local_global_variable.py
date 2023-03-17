a=55
b=77
# local b
# if we declare like we are getting error on line no 3
def sum():
    global b # b is global variable
    a=5 # a is local variable
    b=3 # b take these value
    c=a+b
    print(a,b,c)
    return c+2
d=sum()
print(d,a,b) # a is global variable here