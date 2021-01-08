#include <stdio.h>

int main() {
    int n,x[10001],k,i,j;
    int sum=0,max=0;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++) scanf("%d",&x[i]);
    
    for(i=0;i<n-k;i++){
        sum=0;
        for(j=0;j<k;j++){
            sum+=x[i+j];
            if(sum>max) max=sum;
        }
    }
    printf("%d\n",max);
    
    
}
