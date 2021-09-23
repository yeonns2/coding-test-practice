// 대문자 소문자 변환
#include <iostream>
#include <string>

using namespace std;

int main()
{
   string str;
   
   cin >> str;
   
   for (int i=0;i<str.size();i++){
       str[i] = toupper(str[i]);
   }

    cout<<str<<endl;
    return 0;
}