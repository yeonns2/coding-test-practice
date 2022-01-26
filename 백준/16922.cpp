#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int> v;
    
    for (int i=0; i<=n; i++) {
        for (int j=0; j<=n-i; j++) {
            for (int k=0; k<=n-i-j; k++) {
                int l = n-i-j-k;
                v.push_back(i*1+j*5+k*10+l*50);
            }
        }
    }
    
    
    // 중복제거 
    sort(v.begin(),v.end());
    v.erase(unique(v.begin(),v.end()),v.end());
   
    cout << v.size() << endl;
    return 0;
}
