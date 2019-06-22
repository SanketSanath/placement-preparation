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
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);

int t;
cin>>t;
while(t--){
	ll n, max_work = 0;
	cin>>n;
	vector< pair <ll, ll> > v;

	bool arr[n];
	f(i,0,n) arr[i] = false;

	f(i,0,n){
		ll a, b;
		cin>>a>>b;
		v.push_back(make_pair(a, b));
	}

	sort(v.begin(), v.end());

	f(i,0,n){
		if(arr[i] == true continue;

		ll s = v[i].second, work = 0; arr[i] = true;
		f(j,i+1,n){
			if(v[j].first >= s){
				s = v[j].second;
				arr[j] = 1;
				work++;
			}
		}
		max_work = max(work, max_work);
	}

	cout<<max_work+1<<endl;
}
return 0;
}

