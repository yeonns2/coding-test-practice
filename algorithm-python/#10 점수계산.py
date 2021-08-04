n=int(input())
score = list(map(int, input().split()))

cnt=0
sum=0

for x in score:
    if x==0:
        cnt=0
    else :
        cnt+=1
        sum+=cnt

print(sum)