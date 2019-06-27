#include <iostream>

using namespace std;

int main(){
    int n, m, cnt=0, max=0, noise;
    cin >> n >> m;
    for(int i=0; i<n; i++){
        cin>>noise;
        if(noise>m)cnt++;
        else cnt = 0;
        if(cnt>max)max = cnt;
    }
    if(max == 0) cout << "-1\n";
    else cout << max << endl;
    }
