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

while(true){
	int w, d, arr[2][21] = {{0}, {0}}, temp, cube = 0;
	cin>>w>>d;
	if(w==0 || d==0)
		break;

	f(i,0,w){
		cin>>temp;
		arr[0][temp]++;
	}
	f(i,0,d){
		cin>>temp;
		arr[1][temp]++;
	}

	f(i,0,21){
		cube += (i * max(arr[0][i], arr[1][i]));
	}
	cout<<cube<<endl;
}

return 0;
}

