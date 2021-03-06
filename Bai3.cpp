#include <iostream>
#include <cmath>
 
using namespace std;
 
long pow ( long a,  long b, long mod ) {
long res = 1;
for ( long i=b; i; i>>=1 ) {
if ( i & 1 )
res = res * a % mod;
a = a * a % mod;
}
return res;
}
int main()
{
	long a,b, p;
	cin >> a >> b >> p;
	cout << pow(a,b,p);
 
	return 0;
}
