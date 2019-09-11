#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
#include<string>
#include<stack>
#define ll long long int
#define f(i,a,b) for(ll i = a; i < b; i++)

using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
/* freopen("input.txt", "r", stdin); */
/* freopen("output.txt", "w", stdout); */

string s;
int test = 0;

while(true){
	test++;
	cin>>s;

	int value = 0;
	if(s[0] == '-') break;

	stack<char> st;


	f(i,0,s.size()){
		if(s[i] == '}' && !st.empty() && st.top() == '{'){
			st.pop();
		} else {
			st.push(s[i]);
		}
	}

	while(!st.empty()){
		char a = st.top(); st.pop();
		char b = st.top(); st.pop();

		if(a != '}') value++;
		if(b != '{') value++;
	}

	cout<<test<<". "<<value<<endl;
}

return 0;
}

