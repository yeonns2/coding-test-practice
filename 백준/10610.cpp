#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

bool compare(int a, int b){
    return a>b;
}

int main()
{
    
    string s;
    int cnt =0;
    
    cin >> s;
    
    sort(s.begin(), s.end(), compare);

    
    long long sum = 0;
    for(int i=0;i < s.size();i++){
        sum += s[i]-'0';
    }
    
    if(s[s.size()-1]!='0' || sum%3!=0)
        cout << -1 << endl;
    else
        cout << s << endl;
    

    return 0;
}
