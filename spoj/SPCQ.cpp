#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
#include<string>
#define ll long long int
#define f(i,a,b) for(ll i = a; i < b; i++)

using namespace std;

int main(){
	int t;
	cin>>t;
	
	while(t--){
		unsigned ll n, dn, sum = 0;
		cin>>n;
		dn = n;
		while(dn > 0){
			ll digit = dn % 10;
			/* cout<<digit<<" "; */
			sum += digit;
			dn = dn / 10;
		}
		/* cout<<endl<<"sum: "<<sum<<endl; */

		ll r = n % sum;

		if(r == 0){
			cout<<n<<endl;
		} else{
			cout<<n + sum - r<<endl;
		}
	}

return 0;
}

