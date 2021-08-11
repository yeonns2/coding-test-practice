n = int(input())
a=[list(map(int,input().split())) for _ in range(n)]
largest = -214700000

for i in range(n):
    sum1=sum2=0
    for j in range(n):
        sum1+=a[i][j]
        sum2+=a[j][i]
    if sum1>largest:
        largest = sum1
    if sum2>largest:
        largest = sum2

# 대각선의 합
sum1 = sum2 = 0
for i in range(n):
    sum1+=a[i][i]
    sum2+=a[i][n-i-1]

if sum1 > largest :
    largest = sum1

if sum2 > largest :
    largest = sum2

print(largest)

