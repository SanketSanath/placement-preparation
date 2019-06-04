#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
#include<string>
#define ll long long int
#define f(i,a,b) for(ll i = a; i < b; i++)

using namespace std;

ll fun(ll n){
	ll val[] = {1, 3, 2};
	n = n % 6;
	if(n == 0)
		n = 6;

	switch (n){
		case 1:
			return val[0];
		case 2:
			return val[1];
		case 3:
			return val[2];
		case 4:
			return -val[0];
		case 5:
			return -val[1];
		case 6:
			return -val[2];
	}
	return 0;
}

int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		if(n == 1)
			cout<<"1\n";
		else if(n== 2)
			cout<<"4\n";
		else {
			ll ans = 3 + fun(n-1);
			cout<<ans<<endl;
		}
	}
return 0;
}

