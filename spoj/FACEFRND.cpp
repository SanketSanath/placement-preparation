#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
#include<string>
#include<set>
#define ll long long int
#define f(i,a,b) for(ll i = a; i < b; i++)

using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
/* freopen("input.txt", "r", stdin); */
/* freopen("output.txt", "w", stdout); */

int n, friend_id, m, f_f_id;
vector<int> friend_list;
set<int> s;
cin>>n;
f(i,0,n){
	cin>>friend_id;
	friend_list.push_back(friend_id);
	cin>>m;
	f(j,0,m){
		cin>>f_f_id;
		s.insert(f_f_id);
	}
}

for(int i=0; i<friend_list.size(); i++){
	s.erase(friend_list[i]);
}

cout<<s.size()<<endl;


return 0;
}

