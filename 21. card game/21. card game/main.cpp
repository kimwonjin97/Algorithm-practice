#include <iostream>
#include <algorithm>

using namespace std;
int a[10];
int b[10];
int main(void){
    int acnt = 0;
    int bcnt = 0;
    for(int i=0; i<10; i++){
        cin >> a[i];
    }
    for(int i=0; i<10; i++){
        cin >> b[i];
    }
    for(int i=0; i<10; i++){
        if(a[i] == b[i]){
            acnt++;
            bcnt++;
        }
        
        else if(a[i]<b[i]){
            bcnt+=3;
        }else{
            acnt+=3;
        }
    }
    printf("%d %d\n", acnt, bcnt);
    
    if(acnt == bcnt){
        for(int i=10; i>=0; i--){
            if(a[i]<b[i]){
                cout<<"B\n";
                exit(0);
            }else{
                cout<<"A\n";
                exit(0);
            }
        }
    }
    else if(acnt<bcnt){
        cout << "B\n";
    }
    else {
        cout << "A\n";
    }
    return 0;
}
