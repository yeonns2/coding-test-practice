#include <iostream>
using namespace std;

int main(){

   int n;
   int cnt=0;
   cin >> n;
   
   for(int i=i;i<=n;i++){
       int x=i;
       while(x>0){
           if(x%10==3){
               cnt++;
           }
           x=x/10;   
       }
   }
   
   cout<< cnt;
}