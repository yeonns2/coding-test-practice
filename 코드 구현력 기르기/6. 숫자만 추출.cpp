#include <stdio.h>

int main() {
    char s[50];
    int i,result=0,cnt=0;
    
    scanf("%s",s);
    for (i=0;i<50;i++){
        if (s[i]-'0'>=0 && s[i]-'0'<=9){
            result=result*10;
            result+=s[i]-'0';
        }
    }
    
    for (i=1;i<=result;i++){
        if(result%i==0)
            cnt++;
    }
    printf("%d\n%d\n",result,cnt);
    
}
