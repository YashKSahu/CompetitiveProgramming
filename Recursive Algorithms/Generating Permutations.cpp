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

const int n=4;
vi permutation;
bool chosen[n+1];

void search() {
	if (permutation.size() == n) {
	// process permutation
	} else {
		for (int i = 1; i <= n; i++) {
			if (chosen[i]) continue;
			chosen[i] = true;
			permutation.push_back(i);
			search();
			chosen[i] = false;
			if(permutation.size()>=n){
				for(auto j:permutation)
					cout<<j<<" ";
				cout<<"\n";
			}
			permutation.pop_back();
		}
	}
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	search();
	
	return 0;
}
