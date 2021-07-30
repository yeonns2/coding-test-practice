#include <stdio.h>

int main() {
    char a[100];
    char b[100];
    int i,cnt=0;
   
    gets(a);
    
    for (i=0;a[i]!='\0';i++){
        if(a[i]>='A' && a[i]<='Z'){
            b[cnt++]=a[i]+32;
        }
        
        if (a[i]>='a' && a[i]<='z'){
            b[cnt++]=a[i];
        }
        
    }
    b[cnt]='\0';
    printf("%s\n",b);
    
}
