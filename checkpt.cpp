#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--){
      int n, c;
      scanf("%d %d", &n, &c);
      map <pair <int, int>, vector <pair <int, int>>> cont;
      for(int i = 1; i <= n; i++) {
    	int x, y;
    	scanf("%d %d", &x, &y);
    	cont[make_pair(x - y, ((x % c) + c) % c)].emplace_back(x, y);
      }
      
      int checkpoint = cont.size();
      long long moves = 0;
      for(auto i : cont) {
    	auto v = i.second;
    	sort(v.begin(), v.end());
    	auto pivot = v[v.size() / 2];
    	for(auto j : v) {
    	  moves += abs(pivot.first - j.first) / c;
    	}
      }
      cout<<checkpoint<<" "<<moves<<endl;
  }
  return 0;
}
