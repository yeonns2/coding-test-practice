#include <stdio.h>

int main() {
    int n,a[100],b[100],i;
    scanf("%d",&n);
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++){
        scanf("%d",&b[i]);
    }
    for(i=0;i<5;i++){
        if(a[i]==b[i]) printf("D\n");
        else if (a[i]>b[i]){
            if(a[i]==3 && b[i]==1)
                printf("B\n");
            else
                printf("A\n");
        }
        else{
            if(b[i]==3 && a[i]==1)
                printf("A\n");
            else
                printf("B\n");
        }
    }
}
