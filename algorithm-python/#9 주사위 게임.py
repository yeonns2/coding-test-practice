n=int(input())

max = 0
for i in range(n):    
    m = list(map(int, input().split()))
    m.sort()
    if(m[0]==m[1]==m[2]):
        sum = m[0]*1000+10000
    elif m[0]==m[1] and m[1]==m[2]:
        sum = m[1]*100+1000
    else :
        sum=m[2]*100
    if(sum > max):
        max = sum

print(max)