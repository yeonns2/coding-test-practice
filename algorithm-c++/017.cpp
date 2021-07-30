#include <stdio.h>

int main() {
    int n,a,b,i;
    int sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        sum=0;
        scanf("%d%d",&a,&b);
        sum=a*(a+1)/2;
        if(sum==b) printf("YES\n");
        else printf("NO\n");
    }
}
