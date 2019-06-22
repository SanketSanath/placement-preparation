#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
#include<string>
#define ll long long int
#define f(i,a,b) for(ll i = a; i < b; i++)

using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
/* freopen("input.txt", "r", stdin); */
/* freopen("output.txt", "w", stdout); */

ll n;

while(true){
	cin>>n;
	if(n == 0) break;

	ll add = 0, cost = 0;

	f(i,0,n){
		int temp;
		cin>>temp;
		add += temp;
		cost += abs(add);
	}

	cout<<cost<<endl;
}

return 0;
}

