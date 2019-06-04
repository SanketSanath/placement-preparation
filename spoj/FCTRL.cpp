#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
#include<string>
#define ll long long int
#define f(i,a,b) for(ll i = a; i < b; i++)

using namespace std;

ll fun(ll n){
	int i = 1, mof = 0, total = 0; //mof = multiple of 5
	while(true){
		mof = n / pow(5, i);
		total += mof;
		if(mof == 0)
			break;
		i++;
	}
	return total;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll trailing_zero = fun(n);
		cout<<trailing_zero<<endl;
	}

return 0;
}

