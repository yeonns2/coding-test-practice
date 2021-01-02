#include <stdio.h>

int main() {
    char s[31];
    int i,cnt=0;
    
    scanf("%s",s);
    
    for (i=0;i<31;i++){
        if(s[i]=='(')
            cnt+=1;
        if(s[i]==')')
            cnt-=1;
        if (cnt<0)
            break;
    }
    
    if(cnt==0)
        printf("YES\n");
    else
        printf("NO\n");
}

