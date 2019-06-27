#include <iostream>

using namespace std;

int main(){
    freopen("input.txt", "rt", stdin);
    int n, a, b;
    cin >> n;
    for(int i=0; i<n; i++){
        int sum=0;
        cin >> a >> b;
        for(int i=0; i<=a; i++){
            sum += i;
        }
        if(sum==b){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}
