#include <stdio.h>

int main() {
    char a[101],b[101];
    int i,j,flag=0;
    
    scanf("%s%s",a,b);
    for(i=0;a[i]!='\0';i++){
        for(j=0;b[j]!='\0';j++){
            if(a[i]==b[j]){
                b[j]='0';
                flag++;
                break;
            }
        }
    }
    if(i==flag)
        printf("YES\n");
    else
        printf("NO\n");
    
}
