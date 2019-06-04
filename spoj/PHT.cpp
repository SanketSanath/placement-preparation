#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
#include<string>
#define ll long long int
#define f(i,a,b) for(ll i = a; i < b; i++)

using namespace std;

ll fun(ll n){
	ll l1, l2;
	ll d = sqrt(1+n);
	l1 = (-1 + d); 
	l2 = (-1 - d);

	return l1 > l2 ? l1:l2;
}

int main(){
	ll t, n, level;
	cin>>t;
	f(i,0,t){
		cin>>n;
		level = fun(n);
		cout<<"Case "<<i+1<<": "<<level<<endl;
	}

	return 0;
}

