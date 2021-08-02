def func(num):
    sum = 0
    while num !=0 :
        sum = num % 10
        num = num // 10
    return sum;

n = int(input())
m = list(map(int, input().split()))
l = []
for i in range(n):
    l.append(func(m[i]))

print(m[l.index(max(l))])


