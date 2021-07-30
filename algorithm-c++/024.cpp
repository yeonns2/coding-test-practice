#include <stdio.h>

int main() {
    int n,num,tmp=0,max=0,i,cnt=1;
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        scanf("%d",&num);
        if(tmp<=num){
            cnt++;
            if(cnt>max)
                max=cnt;
        }
        else cnt=1;
        tmp=num;
    }
    printf("%då\n",max);
}
