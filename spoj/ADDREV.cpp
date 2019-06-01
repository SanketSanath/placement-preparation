#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
#include<string>
#define ll long long int
#define f(i,a,b) for(ll i = a; i < b; i++)

using namespace std;

int reverse(int num){
	int rnum = num % 10;
	num = num / 10;

	while(num != 0){
		int digit = num % 10;
		num /= 10;
		rnum = rnum * 10 + digit;
	}

	return rnum;
}

int main(){
	int T;
	cin>>T;
	f(i,0,T){
		int n1, n2;
		cin>>n1>>n2;
		cout<<reverse(reverse(n1)+reverse(n2))<<endl;
	}

return 0;
}

