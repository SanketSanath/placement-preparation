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

int T;
cin>>T;
int t = T;
while(T--){
	int n, r;
	cin>>n>>r;
	int arr[n];

	f(i,0,n) arr[i] = 0;

	f(i,0,r){
		int a, b;
		cin>>a>>b;
		if(arr[a] == 0) arr[a] = 1;
		else if(arr[a] == 2) arr[a] = 3;

		if(arr[b] == 0) arr[b] = 2;
		else if(arr[b] == 1) arr[b] = 3;
	}

	cout<<"Scenario #"<<t-T<<": ";
	f(i,0,n){
		if(arr[i] == 3){
			cout<<"spied"<<endl;
			break;
		} else if(i==n-1){
			cout<<"spying\n";
		}
	}
}

return 0;
}

