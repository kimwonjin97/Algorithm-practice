#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int *a = (int*)malloc(sizeof(int)*n);
    int *b = (int*)malloc(sizeof(int)*n);
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(int i=0; i<n; i++){
        scanf("%d", &b[i]);
    }
    for(int i=0; i<n; i++){
        if(a[i]==b[i]) printf("D\n");
        if(a[i]==1){
            if(b[i]==2)printf("B\n");
            else if(b[i]==3)printf("A\n");
        }
        
        if(a[i]==2){
            if(b[i]==1)printf("A\n");
            else if(b[i]==3)printf("B\n");
        }
        
        if(a[i]==3){
            if(b[i]==1)printf("B\n");
            else if(b[i]==2)printf("A\n");
        }
        /* //이부분을 간단히 하려면 a가 이기는 과정을 먼저 출력한 후 나먼지는 전부 b를 출력하게 만들면 된다.
         if(a[i]==b[i]) printf("D\n");
         else if(a[i]==1 && b[i]==3) printf("A\n");
         else if(a[i]==2 && b[i]==1) printf("A\n");
         else if(a[i]==3 && b[i]==2) printf("A\n");
         else printf("B\n");
         */
    }
    
}
