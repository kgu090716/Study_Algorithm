D = []
n = int(input())
D.append(0)
D.append(1)
for i in range(2,n+1):
    D.append(D[i-2] + D[i-1])
print(D[n])