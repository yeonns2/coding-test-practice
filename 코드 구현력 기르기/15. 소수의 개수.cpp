#include <stdio.h>

int main() {
    int n,i,j,cnt=0;
    
    scanf("%d",&n);
    for(i=2;i<=n;i++){
        
        for(j=2;j<=i;j++){
            if(i%j==0){
                break;
            }
        }
        if(i==j) cnt++;
    }
    printf("%d",cnt);
}
