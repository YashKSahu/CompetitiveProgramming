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
#define REP(i,a,b) 		for(int i = a; i < b; i++)
#define PB 			push_back

vi permutation;
bool chosen[10000];

vector<vi> all_premutations;

void search(int n) {
	if (permutation.size() == n) {
	// process permutation
	all_premutations.push_back(permutation);
	} else {
		for (int i = 1; i <= n; i++) {
			if (chosen[i]) continue;
			chosen[i] = true;
			permutation.push_back(i);
			search(n);
			chosen[i] = false;
			permutation.pop_back();
		}
	}
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	search(4);

	// printing saved permutations
	for (int i = 0; i < all_premutations.size(); i++){
		for (int j = 0; j < all_premutations[i].size(); j++){
			cout << all_premutations[i][j] << " ";
		}
		cout<<"\n";
	} 
	
	return 0;
}
