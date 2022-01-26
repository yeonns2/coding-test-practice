#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    int k;
    vector<int> v;
    cin >> k;
    
    for(int i=0;i<k;i++){
        int x;
        cin >> x;
        v.push_back(x);   
    }
    
    
    sort(v.begin(), v.end());


    int result = 0;
    for(int i=0;i<k;i++){
        int sum = v[i]*(k-i);
        if (sum > result)
            result = sum;
    }
        
    cout << result << endl;
        

    return 0;
}
