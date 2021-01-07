#include <stdio.h>

int main() {
    int a[10],b[10],i;
    int sum1=0,sum2=0;
    
    for(i=0;i<10;i++) scanf("%d",&a[i]);
    for(i=0;i<10;i++) scanf("%d",&b[i]);
    for(i=0;i<10;i++){
        if(a[i]>b[i]) sum1+=3;
        else if (a[i]==b[i]) {
            sum1+=1;
            sum2+=1;
        }
        else sum2+=3;
    }
    if(sum1>sum2) printf("%d %d\nA\n",sum1,sum2);
    if(sum2>sum1) printf("%d %d\nB\n",sum1,sum2);
    if(sum1==sum2){
        for(i=9;i>=0;i--){
            if(a[i]>b[i]){
                printf("%d %d\nA\n",sum1,sum2);
                break;
            }
            else if (b[i]>a[i]){
                printf("%d %d\nB\n",sum1,sum2);
                break;
            }
        }
        if(i==-1) printf("%d %d\nD\n",sum1,sum2);
    }
    
    
}
