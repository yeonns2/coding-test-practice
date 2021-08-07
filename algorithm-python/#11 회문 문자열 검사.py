n = int(input())

for i in range(n):
    s = input()
    s = s.lower()

    if(list(s) == list(reversed(s))):
        print('#%d YES' %(i+1))
    else : 
        print('#%d NO' %(i+1))
   