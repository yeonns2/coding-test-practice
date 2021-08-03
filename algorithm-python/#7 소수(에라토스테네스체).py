# n = int(input())
# cnt=0

# def func(n):
#     cnt=0
#     for i in range(1,n):
#         if(n%i==0):
#             cnt+=1
#     if cnt == 1:
#         return True
#     else :
#         return False

# for i in range(2,n+1):
#     if func(i)==True:
#         cnt+=1

# print(cnt)

n = int(input())
cnt = 0
c =[0]*(n+1)

for i in range(2,n+1):
    if(c[i]==0):
        cnt+=1
        for j in range(i,n+1,i):
            c[j]=1
print(cnt)