#include <iostream>

using namespace std;

int main()
{
    
    int N,M,K;
    
    cin >> N >> M >> K;
    
    int cnt =0;
    int total = N+M+K;
    
    while(N >=2 && M>=1){
        
        N=N-2;
        M=M-1;
        
        cnt++;
    }
    
    while(N+M < K){
		N+= 2;
		M++;
		cnt--;
	}

    
    cout << cnt;
   
    return 0;
}
