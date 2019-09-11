#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
#include<string>
#include<unordered_set>
#include<iterator>
#define ll long long int
#define f(i,a,b) for(ll i = a; i < b; i++)

using namespace std;

vector<ll> raceman(int n){
	vector<ll> v;
	v.push_back(0);
	unordered_set<ll> s;
	s.insert(0);

	ll prev = 0;
	for(int i=1; i<n; i++){
		ll curr = prev - i;
		
		if(curr <= 0 || s.find(curr) != s.end()){
			curr = prev + i;
		}
		prev = curr;
		s.insert(curr);
		v.push_back(curr);
	}
	return v;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
/* freopen("input.txt", "r", stdin); */
/* freopen("output.txt", "w", stdout); */

vector<ll> v;
v = raceman(500001);


while(true){
	int temp;
	cin>>temp;
	if(temp == -1)
		break;
	cout<<v[temp]<<endl;
}

return 0;
}

