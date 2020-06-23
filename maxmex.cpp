#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	    int n,m,a;
	    cin>>n>>m;
	    set<int> s;
	    int ans=0;
	    for(int i=0;i<n;i++){
	        cin>>a;
	        if(a!=m){
	            s.insert(a);
	            ++ans;
	        }
	    }
	    int mex=1;
	    while(s.count(mex))
	        ++mex;
	    
	    if(mex!=m)  ans=-1;
	    
	    cout<<ans<<endl;
	}
	
	return 0;
}
