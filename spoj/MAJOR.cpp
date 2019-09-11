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
while(T--){
	int n, temp;
	cin>>n;
	int arr[n];
	f(i,0,n){
		cin>>arr[i];
	}
	sort(arr, arr+n);
	int count = 1, number = arr[0];
	f(i,1,n){
		if(number == arr[i]){
			count++;
		} else {
			number = arr[i];
			count = 1;
		}

		if(count > n/2){
			break;
		}
	}

	if(count > n/2){
		cout<<"YES "<<number<<"\n";
	} else{
		cout<<"NO\n";
	}
}

return 0;
}

