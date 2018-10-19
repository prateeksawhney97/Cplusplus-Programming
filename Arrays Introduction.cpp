#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int number;
    scanf("%d", &number);
    int arr[number];
    for(int i=0;i<number;i++){
        scanf("%d", &arr[i]);
    }
    for(int k=(number-1);k>=0;k--){
        printf("%d ", arr[k]);
    }
    return 0;
}
