#include <stdio.h>

int main() {
    int num,i,x=0,max=0;
    int cnt[10]={0};
    scanf("%d",&num);
    while(num!=0){
        i=num%10;
        cnt[i]++;
        num=num/10;
        if (cnt[i]>max){
            max=cnt[i];
            x=i;
        }
    }
    printf("%d\n",x);
}
