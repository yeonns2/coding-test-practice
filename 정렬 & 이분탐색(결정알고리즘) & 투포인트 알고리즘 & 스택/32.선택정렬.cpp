#include <stdio.h>

int main(){

    int n,idx,tmp;
    int a[10];
    
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    for (int i=0;i<n-1;i++){
        idx=i;
       for(int j=i+1;j<n;j++){
           if(a[j]<a[idx]) idx = j;
       } 
        tmp=a[i];
        a[i]=a[idx];
        a[idx]=tmp;
              
    }
    
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
  
  
}