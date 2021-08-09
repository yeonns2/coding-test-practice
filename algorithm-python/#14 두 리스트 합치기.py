n = int(input())
l1 = list(map(int, input().split()))
m = int(input())
l2 = list(map(int, input().split()))

l1.extend(l2)
l1.sort()

for x in l1:
    print(x, end=' ')
