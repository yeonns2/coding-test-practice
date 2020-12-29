#include <iostream>
using namespace std;

int main() {
    
    int n,m,i,sum=0; 
    
    cin>>n>>m; // n과 m을 입력받음
    
    for(i=0;i<=n;i++){ // 0부터 n까지 돌면서
        if (i%m==0) // m으로 나누었을 때 나머지가 0이면 (즉 m의 배수이면)
            sum+=i; // sum에 그 값을 더한다
    }
    
    cout<<sum; // 결과(sum) 출력
    
    
}
