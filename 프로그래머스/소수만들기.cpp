#include <iostream>
using namespace std;

int isprime(int n){
    int i=0;
    for(i=2;i<n;i++){
        if(n%i==0)
            return -1;
    }
    if(i==n) return 1;
}

int solution(vector<int> nums) {
    int answer = -1;
    int n=nums.size();
    int cnt=0;
    
    for (int i=0;i<n-2;i++){
        for (int j=i+1;j<n-1;j++){
            for (int k=j+1;k<n;k++){
                if(isprime(nums[i]+nums[j]+nums[k])==1)
                    cnt++;
            }
        }
    }
    return cnt;
}