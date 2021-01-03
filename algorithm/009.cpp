#include <stdio.h>

int main() {
    int n,i,j,cnt;
    int x[500000];
    
    scanf("%d",&n);
    
    for(i=1;i<=n;i++){
        cnt=0;
        for(j=1;j<=i;j++){
            if(i%j==0)
                cnt++;
        }
        x[i-1]=cnt;
    }
    
    for(i=0;i<n;i++){
        printf("%d ",x[i]);
        
    }
}
