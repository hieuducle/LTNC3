#include <iostream>

using namespace std;

bool songuyento(int n){
    // if(n == 2) return true;
    for(int i = 2 ; i < n; i++){
        if(n % i == 0) return false;
        
    }
     return true;
}
int main(){
    int n;
    cin >> n;
    int *a = new int[n];
    for(int i = 2; i <= n ; i++){
        a[i] = i;
    }
    for(int i = 2; i <= n; i++){
        if(songuyento(a[i]) == true){
            cout << a[i] << " ";
        }
    }
    return 0;
}

