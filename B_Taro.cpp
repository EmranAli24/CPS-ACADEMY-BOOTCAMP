#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,m;
   cin >> n >> m;
   vector<char> vc[n+1];

   for(int i=0;i<m;i++){
    int x;
    char c;
    cin >> x >> c;
    bool flag = true;
    if(c == 'F') flag = false;
    else flag = true;
    for(auto temp : vc[x]){
        if(temp == 'M') flag = false;
    }
    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;
    vc[x].push_back(c);
    
   }
}