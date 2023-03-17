#simple if
x=int(input())
print("by using if")
if(x>0):
    print("x is +ve")
# if_else
print("by using if_else")
if(x>0):
    print("x is +ve")
else:
    print("x is -ve")
#if_elif
print("by using if_elif")
if(x>0):
    print("x is +ve")
elif x<0:
    print("x is -ve")
else:
    print("x is zero")
# nested if
print("by using nested if")
if x>=0:
    print("x is +ve")
    if x==0:
        print("x is zero")
    else:
        print("x is +ve")
else:
    print("x is -ve")
