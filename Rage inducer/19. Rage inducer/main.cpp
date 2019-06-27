#include <iostream>

using namespace std;

int main(){
    int n, cnt=0, h[101], max;
    cin >> n;
    for(int i=1; i<=n; i++){
        scanf("%d", &h[i]);
    }
    max = h[n];
    for(int i=n; i!=0; i--){
        if(h[i]>max){
            max = h[i];
            cnt++;
        }
    }
    printf("%d\n", cnt);
    return 0;
}
