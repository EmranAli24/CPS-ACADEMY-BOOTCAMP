#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> vc(n);

    for(int i=0;i<n;i++){
        cin >> vc[i];
    }

   sort(vc.begin(),vc.end());
   int cnt = 0;
   for(int i=0;i<n;i++){
     if(vc[i] > cnt){
        cnt++;
       // cout << vc[i] << " " << cnt << endl;
     }
   }
   cout << cnt << endl;
   return 0;
}