#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
#include<string>
#define ll long long int
#define f(i,a,b) for(ll i = a; i < b; i++)
#define MAX_VAL 1000006

using namespace std;

int main(){
	int T;
	cin>>T;
	while(T--){
		ll n1, n2;
		cin>>n1;
		ll arr1[n1];
		f(i,0,n1)
			cin>>arr1[i];
		cin>>n2;
		ll arr2[n2];
		f(i,0,n2)
			cin>>arr2[i];

		sort(arr1, arr1+n1);
		sort(arr2, arr2+n2);

		ll min = MAX_VAL, a= 0, b = 0;

		while(a< n1 && b< n2){
			ll temp = (arr1[a] - arr2[b]);
			if(abs(temp) < min) {
				min = abs(temp);
			}

			if(temp > 0){
				b++;
			} else{
				a++;
			}
		}
		cout<<min<<endl;

	}

return 0;
}

