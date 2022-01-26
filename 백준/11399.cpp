#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    int n;
    vector<int> a;
    
    cin >> n;
    
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        a.push_back(x);
    }
    
    sort(a.begin(),a.end());

    int sum = 0;
    for(int i=0;i<n;i++){
        for(int j=0; j<i+1; j++)
            sum+=a[j];
        
    }
    cout << sum << endl;

    return 0;
}
