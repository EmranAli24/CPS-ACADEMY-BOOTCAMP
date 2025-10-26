#include<bits/stdc++.h> 
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> vc(n+1);
    int ans = 0;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        if(x > n) ans++;
        else vc[x]++;
    }

    for(int i=1;i<=n;i++){
        if(vc[i] >= i) ans += vc[i]-i;
        else ans += vc[i];
    }

    cout << ans << endl;
    return 0;

}