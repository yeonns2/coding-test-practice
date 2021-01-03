#include <stdio.h>

int reverse(int x){
    int r=0;
    
    while(x!=0){
        r=r*10+x%10;
        x=x/10;
    }
    return r;
}
bool isPrime(int x){
    int i,cnt=1;
    for(i=2;i<x;i++){
	       if(x%i==0){
						cnt++;
            break;
				}
    }
    if(cnt==1)
        return true;
    else
        return false;
}

int main() {
    int n,num,r,i;
    
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&num);
        r=reverse(num);
        if (isPrime(r))
            printf("%d ",r);
        
    }
}
