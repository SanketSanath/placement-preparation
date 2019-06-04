#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
#include<string>
#include <boost/multiprecision/cpp_int.hpp>
#define ll long long int
#define f(i,a,b) for(ll i = a; i < b; i++)

using namespace std;

int main(){
	int t;
	using boost::multiprecision::cpp_int;
	cpp_int a[101];
	a[0] = 1;
	f(i,1,101){
		a[i] = a[i-1] * i;
	}
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<a[n]<<endl;
	}
return 0;
}

