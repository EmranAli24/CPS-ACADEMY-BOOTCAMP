#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        
        vector<vector<char>> grid(8, vector<char>(8));

        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                cin >> grid[i][j];
            }
        }
 
        int cnt = 0;
        bool flag = false;
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                if(grid[i][j] == 'R') cnt++;
            }
            if(cnt == 8){
                flag = true;
                break;
            }
            else cnt = 0;
        }

        if(flag) cout << "R" << endl;
        else cout << "B" << endl;
    }
    return 0;
}