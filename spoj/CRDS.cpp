#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
#include<string>
#define ll long long int
#define f(i,a,b) for(ll i = a; i < b; i++)

using namespace std;

int main(){
	ll t,n;
	cin>>t;
	while(t--){
		cin>>n;
		ll s1, s2, nmo = n-1, hn = n/2;

		s1 = n * (4 + nmo * 2) / 2;
		s2 = n * nmo / 2;

		ll ans = (s1 + s2) % 1000007;
		cout<<ans<<endl;
	}

return 0;
}

