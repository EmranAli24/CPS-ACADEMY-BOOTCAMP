#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin >> n >> k;
    vector<int> vc(n);
    for(int i=0; i<n;i++){
        cin >> vc[i];
    } 

    int num = vc[k-1];
    int cnt = 0;
    for(int i=0; i<n;i++){
        if(vc[i]>= num && vc[i]>0){
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}