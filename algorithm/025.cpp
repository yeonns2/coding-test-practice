#include <stdio.h>

int main() {
    int n,i,score[100],j,rank[100]={1};
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&score[i]);
        rank[i]=1;
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(score[i]>score[j]) rank[j]++;
        }
    }
    for(i=0;i<n;i++){
        printf("%d ",rank[i]);
    }
    
}
