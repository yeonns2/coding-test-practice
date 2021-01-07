#include <stdio.h>

int main() {
    int n,m,i,x;
    int max=-1, sec=0;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++){
        scanf("%d",&x);
        if(x>m){
            sec++;
            if(sec>max)
                max=sec;
        }
	else sec=0;      
    }
    printf("%d\n",max);
}
