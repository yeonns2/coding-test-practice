#include <stdio.h>

int main() {
    int n,i,cnt=0,x;
    
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        x=i;
        while(x!=0){
            cnt++;
            x=x/10;
            
        }
    }
    printf("%d\n",cnt);
}
