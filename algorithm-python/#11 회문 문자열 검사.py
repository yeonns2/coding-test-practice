n = int(input())

for i in range(n):
    s = input()
    s = s.lower()

    if(list(s) == list(reversed(s))):
        print('# YES')
    else : 
        print('# NO')
   
    
