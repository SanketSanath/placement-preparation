#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
#include<string>
#define ll long long int
#define f(i,a,b) for(ll i = a; i < b; i++)

using namespace std;

unsigned int reverseBits(unsigned int num){
	int rev = 0;

	while(num){
		rev <<= 1;
		if((num & 1)== 1){
			rev ^= 1;
		}
		num >>= 1;
	}

	return rev;
}

int main(){
	int n;
	cin>>n;
	while(n--){
		int temp;
		cin>>temp;
		if(temp%2 == 0){
			cout<<reverseBits(temp)<<endl;
		} else {
			cout<<temp<<endl;
		}
	}
return 0;
}

