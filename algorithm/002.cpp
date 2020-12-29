#include <iostream>
using namespace std;

int main() {
    
    int A,B,i,sum=0;
    
    cin>>A>>B; //A부터 B 입력받기

    for(i=A;i<=B;i++){
        
        if(i==B) // B일 땐 i만 출력
            cout<<i;
        else
            cout<<i<<" + "; //그 외엔 i + 형태로 출력
        sum+=i;
    }
    
    cout<<" = "<<sum<<endl; // = 결과(sum) 출력
}
