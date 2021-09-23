#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> participant, vector<string> completion){
    string answer= "";
    sort(participant.begin(),participant.end());
    sort(completion.begin(),completion.end());
   
   for(int i=0; i< completion.size();i++){
       if (participant[i]!=completion[i]){
           return participant[i];
       }
      
   }
    return participant[participant.size()-1];
}

int main(){
    
    vector <string> participant;
    vector <string> completion;
    int n;
    string tmp;
    cin >>n;
    
    for(int i=0;i<n;i++){
        cin >> tmp;
        participant.push_back(tmp);
    }
    for(int i=0;i<n-1;i++){
        cin >> tmp;
        completion.push_back(tmp);
    }
    tmp = solution(participant,completion);
    
    cout << tmp << endl;

}

