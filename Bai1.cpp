#include<iostream>
#include<cstring>
#include<cmath>
#include<iomanip>
using namespace std;

bool Check_rows(int *x, int n){
    for (int i = 0; i < n-1; i++) {
        for (int j = 1; j < n; j++) {
            if (x[i] == x[j] && i != j) return 1;
        }
    }
    return 0;
}
bool Check_cols(int *y, int n){
    for (int i = 0; i < n-1; i++) {
        for (int j = 1; j < n; j++) {
            if (y[i] == y[j] && i != j) return 1;
        }
    }
    return 0;
}
bool Check_right_dig(int *x, int *y, int n){
    int z[n];
    for (int i = 0 ;i < n; i++) {
        z[i] = x[i] + y[i];
    }
    for (int i = 0; i < n-1; i++) {
        for (int j = 1; j < n; j++) {
            if (z[i] == z[j] && i != j) return 1;
        }
    }
    return 0;
}
bool Check_left_dig(int *x, int *y, int n){
    int z[n];
    for (int i = 0 ;i < n; i++) {
        z[i] = x[i] - y[i];
    }
    for (int i = 0; i < n-1; i++) {
        for (int j = 1; j < n; j++) {
            if (z[i] == z[j] && i != j) return 1;
        }
    }
    return 0;
}
int main () {
    int n;
    cin >> n;
    int x[n], y[n];
    for (int i = 0; i< n; i++) {
        cin >> x[i] >> y[i];
    }
    if (Check_rows(x,n) || Check_cols(y,n) || Check_right_dig(x,y,n) || Check_left_dig(x,y,n))
        cout << "yes";
    else cout << "no";
return 0;
}
