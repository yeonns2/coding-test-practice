#include <stdio.h>

int main() {
    int n,x[100],max=0,i;
    int cnt=0;
    scanf("%d",&n);
    for(i=0;i<n; i++){
        scanf("%d",&x[i]);
    }
    max=x[n];
    for(i=n-1;i<=0;i--){
        if(x[i]>max){
            max = x[i];
            cnt++;
        }
    }
    printf("%d\n",cnt);
}
