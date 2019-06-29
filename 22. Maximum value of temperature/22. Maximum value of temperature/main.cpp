#include <iostream>
#include <limits.h>

using namespace std;

int main(){
    int n, k;
    int max = INT_MIN;
    scanf("%d %d", &n, &k);
    int *temp = (int *)malloc(sizeof(int)*n);
    for(int i=0; i<n; i++){
        scanf("%d", &temp[i]);
    }
    
    for(int i=0; i<n; i++){
        int var=0;
        for(int j=i; j<i+k; j++){
            if(j==n) break;
            var+=temp[j];
        }
        if(var>max){
            max = var;
        }
    }
    printf("%d", max);
}
