n = int(input())
a = list(map(int, input().split()))
    
m = int(sum(a)/n + 0.5) # 평균에서 반올림하는 법
min = 1000

for i,x in enumerate(a):
   tmp = abs(x-m) # abs = 절댓값 함수
   if tmp < min :
      min = tmp
      score = x
      res = i
   elif tmp == min :
      if x > score :   
         score = x
         res = i

print(m,res+1) # 

