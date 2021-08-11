n,m = map(int, input().split())
A = list(map(int, input().split()))
cnt=0
for i in range(n):
    for j in range(i,n):
        sum=0
        for k in range(i,j+1):
            sum+=A[k]
        if(sum==m):
            cnt+=1
            break

print(cnt)