// 자연수 N이 입력되면 N! 값에서 일의 자리부터 연속적으로 ‘0’이 몇 개 있는지 구하는 프로그램을 작성하세요.
// 만약 5! = 5 ×4 × 3 × 2 ×1 = 120으로 일의자리부터 연속적된 ‘0’의 개수는 1입니다.
// 만약 12! = 479001600으로 일의자리부터 연속적된 ‘0’의 개수는 2입니다.
#include <iostream>
using namespace std;

int main(){

    int n;
    int x=1;
    cin >> n;
    for(int i=2;i<=n;i++){
        x*=i;
    }
    cout << x;
    
}