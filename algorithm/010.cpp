#include <stdio.h>

int main() {
    int n,num,sum=0,i,max=0;
    int res=0,x;
    
    scanf("%d",&n);
    for(i=0;i<n;i++){
        sum=0;
        max=0;
        scanf("%d",&num);
        x=num;
        while(num!=0){
            sum+=num%10;
            num=num/10;
        }
        if(max<sum){
            max=sum;
            res=x;
        }
        else if (max==sum){
            if(num>res) res=num;
        }
    }
    
    printf("%d\n",res);
}
