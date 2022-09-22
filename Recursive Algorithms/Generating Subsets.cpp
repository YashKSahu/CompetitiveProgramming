// C++ Program 
#include <bits/stdc++.h>
using namespace std;

typedef long long int		ll;
typedef unsigned long long  ull;
typedef vector<int> 		vi;
typedef vector<double> 		vd;
#define PI 			3.14159265
#define M			1000000007
#define M2			998244353
#define REP(i,a,b) 	for(int i = a; i < b; i++)
#define PB 			push_back

int n=3;
vi subset;
vector<vi> all_subsets;
void search(int k) {
	if (k == n+1) {
		// process subset
		all_subsets.push_back(subset); 
	} else {
		// include k in the subset
		subset.push_back(k);
		search(k+1);
		subset.pop_back();
		// don’t include k in the subset
		search(k+1);
	}
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
		
	search(1);

	// printing saved subsets
	// sort(all_subsets.begin(), all_subsets.end());
	for (int i = 0; i < all_subsets.size(); i++){
		for (int j = 0; j < all_subsets[i].size(); j++){
			cout << all_subsets[i][j] << " ";
		}
		cout<<"\n";
	} 
	
	return 0;
}
