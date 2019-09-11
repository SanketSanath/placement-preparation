#include<iostream>
#include<stack>
 
using namespace std;
 
int main(){
while(1){
int n,j=0;
cin>>n;
if(n==0)
return 0;
 
int a[n],v[n];
stack <int> s;
	for(int i=0;i<n;i++)
		cin>>a[i];
	int i=0; 
	while(i<n){
		//when s is not empty
		if(!s.empty()){
			if(s.top()<a[i]){
				v[j]=s.top();
				j++;
				s.pop();
			}
			else{
				if(a[i]>a[i+1]){
					s.push(a[i]);
				}
				else{
					v[j]=a[i];
					j++;
				}
				i++;
			}
		}
		//when s is empty
		else{
			if(a[i]>a[i+1]){
					s.push(a[i]);
				}
				else{
					v[j]=a[i];
					j++;
				}
				i++;
		}
	}
	while(!s.empty()){
		v[j]=s.top();
		j++;
		s.pop();
	}
	string ans="yes";
	for(int i=0;i<n;i++){
		if(v[i]!=i+1)
			ans="no";
	}
	cout<<ans<<endl;
}//end of while
} 
