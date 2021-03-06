#include <iostream>

using namespace std;

int check(int a[], int left, int right, int x){
	int mid;
	while(left <= right){
		mid = (left + right) / 2;
		if(a[mid] == x)return true;
		if(x > a[mid]) left = mid+1;
		else right = mid -1;
	}
	return false;
}
int main(){
	int n,x;
	cin >> n >> x;
	int *a = new int [n];
	for(int i = 0; i < n ; i++){
		cin >> a[i];
	}
	if(check(a,0,n-1,x) == true) cout <<"YES";
	else cout <<"NO";
	return 0;
}
