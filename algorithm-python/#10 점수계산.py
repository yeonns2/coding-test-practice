n=int(input())
score = list(map(int, input().split()))
cnt=[0]*n
flag = 0
for i in range(n):
    if score[i]== 0 :
        flag = 0
    elif flag == 0 :
        cnt[i]=1
        flag = 1
    else :
        cnt[i]=cnt[i-1]+1  

print(sum(cnt))