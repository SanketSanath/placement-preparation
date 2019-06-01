#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
#include<string>
#define ll long long int
#define f(i,a,b) for(ll i = a; i < b; i++)

using namespace std;

int main(){
	int T;
	cin>>T;
	while(T--){
		int n;
		ll sum=0;
		cin>>n;
		vector<int> men, women;
		f(i,0,n){
			int temp;
			cin>>temp;
			men.push_back(temp);
		}
		f(i,0,n){
			int temp;
			cin>>temp;
			women.push_back(temp);
		}

		sort(men.begin(), men.end());
		sort(women.begin(), women.end());
		

		f(i,0,n){
			sum += women[i]*men[i];
		}
		cout<<sum<<endl;
	}
return 0;
}

