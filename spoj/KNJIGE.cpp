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
cin>>n;
ll a[n], maxi;

f(i,0,n){
	cin>>a[i];
	if(a[i] == n){
		maxi = i;
	}
}

ll next = n, placed = 0;
for(ll i = maxi; i>= 0; i--){
	if(a[i] == next){
		placed++;
		next--;
	}
}

cout<<n-placed<<endl;

return 0;
}

