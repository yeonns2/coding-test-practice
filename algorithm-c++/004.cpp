#include <iostream>
using namespace std;

int main() {
		//freopen("input.txt", "rt", stdin); // 파일 자동 입력으로 실행하기
    int n,i; 
    int age,max=0,min=999;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>age;
        if (age>max) max=age;
        if (age<min) min=age;
    }
    cout<<max-min<<endl;
}
