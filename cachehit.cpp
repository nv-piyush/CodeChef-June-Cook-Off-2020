#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,m,s;
	cin>>t;
	while(t--){
	    int count=0,curr=-1;
	    cin>>s>>n>>m;
	    int a[m];
	    for(int i=0;i<m;i++){
	        cin>>a[i];
	    }
	    for(int i=0;i<m;i++){
	        if(a[i]/n!=curr){
	            curr=a[i]/n;
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
