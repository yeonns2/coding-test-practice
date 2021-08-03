def reverse(x):
    n=0
    while(x!=0):
        n=n*10
        n+=x%10
        x=x//10

    return n;

def isPrime(x):
    if x==1:
        return False
    for i in range(2,x//2+1): # 약수는 절반까지만 존재하게 되어있음!! 따라서 절반까지만 돌면 됨.
        if x%i==0 : # 약수가 발견되면 바로 false 리턴
            return False
    else : # 정상적으로 종료되면 약수가 없는 것이므로 소수임.
        return True

n=int(input())
m = list(map(int,input().split()))

for i in range(n):
    tmp = reverse(m[i])
    if isPrime(tmp) == True:
        print(tmp,end=' ')