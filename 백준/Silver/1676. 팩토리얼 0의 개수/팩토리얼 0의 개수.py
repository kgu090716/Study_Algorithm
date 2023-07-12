n = int(input())
res = 1
cnt = 0
for i in range(1, n+1):
    res *= i;
s = str(res)
for i in range(len(s)-1, -1, -1):
    if s[i] == '0':
        cnt+=1
    else:
        break;
print(cnt)