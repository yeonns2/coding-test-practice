#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


int turtleGame(string s){
    int dx[4] = {0,1,0,-1};
    int dy[4] = {1,0,-1,0}; 
    int d=0,x=0,y=0;
    int minx=0, miny=0, maxx=0, maxy=0;
    for(int i=0;i<s.size();i++){
        switch(s[i]){
            case 'F':
                x+=dx[d%4];
                y+=dy[d%4];
                break;
            case 'B':
                x+=dx[(d+2)%4];
                y+=dy[(d+2)%4];
                break;
            case 'L':
                d++;
                break;
            case 'R':
                d--;
                if(d<0){
                    d +=4;
                }
                break;
            
        }
        if (maxx < x)
			maxx = x;
		if (maxy < y)
			maxy = y;
		if (minx > x)
			minx = x;
		if (miny > y)
			miny = y;
    }
    return (maxx-minx)*(maxy-miny);
}


int main() {
    int n;
    cin >> n;
    int result =0;
    for(int i=0; i<n ;i++){
        string s;
        cin >> s;
       
        cout << turtleGame(s) << endl;
        
    }
    return 0;
}
