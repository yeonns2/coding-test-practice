n, k = map(int, input().split())
a = list(map(int, input().split()))
l = list()
for i in range(n) :
    for j in range(i+1,n):
        for m in range(j+1,n):
                l.append(a[i]+a[j]+a[m])

l = list(set(l)) #중복제거
l.sort(reverse=True)
print(l)
print(l[k-1])
