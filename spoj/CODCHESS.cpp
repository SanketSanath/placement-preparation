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
		int n;
		cin>>n;
		n = n%2;
		if(n==0){
			cout<<"1\n";
		} else {
			cout<<"0\n";
		}
	}

return 0;
}

