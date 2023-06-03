sum = 0
for i in range(3):
    t = int(input())
    sum = 0
    for a in range(t):
        push = int(input())
        sum += push
    if(sum > 0):
        print("+")
    elif(sum == 0):
        print(0)
    else:
        print("-")