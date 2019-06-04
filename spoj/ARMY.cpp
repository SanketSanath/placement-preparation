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
		int ng, nm;
		cin>>ng>>nm;
		int nga[ng], nma[nm], ngm = 0, nmm = 0;
		f(i,0,ng){
			cin>>nga[i];
			if(nga[i] > ngm){
				ngm = nga[i];
			}
		}
		f(i,0,nm){
			cin>>nma[i];
			if(nma[i] > nmm){
				nmm = nma[i];
			}
		}

		bool isgodzilla = ngm>=nmm ? true : false;

		if(isgodzilla){
			cout<<"Godzilla\n";
		} else {
			cout<<"MechaGodzilla\n";
		}
	}
	return 0;
}

