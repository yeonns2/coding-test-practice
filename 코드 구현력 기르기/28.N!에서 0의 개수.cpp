// 자연수 N이 입력되면 N! 값에서 일의 자리부터 연속적으로 ‘0’이 몇 개 있는지 구하는 프로그램을 작성하세요.
// 만약 5! = 5 ×4 × 3 × 2 ×1 = 120으로 일의자리부터 연속적된 ‘0’의 개수는 1입니다.
// 만약 12! = 479001600으로 일의자리부터 연속적된 ‘0’의 개수는 2입니다.
#include <iostream>
using namespace std;

int main(){

    int n, i,j, tmp, cnt1=0, cnt2=0;
    int x=1;
    cin >> n;
    for(int i=2;i<=n;i++){
        tmp =i;
        j=2;
        while(1){
            if(tmp%j==0){
                if(j==2) cnt1++;
                else if(j==5) cnt2++;
                tmp=tmp/j;
            }
            else j++;
            if(tmp==1) break;
        }
    }
    
    if(cnt1 <cnt2) printf("%d\n",cnt1);
    else printf("%d\n",cnt2);
}

// 각 인수를 소인수분해하여 2와 5의 개수 찾기 -> 그것이 바로 0의 개수!