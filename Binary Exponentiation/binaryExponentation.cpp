// C++ Program 
#include <bits/stdc++.h>
using namespace std;

typedef long long int		ll;
typedef unsigned long long  ull;
typedef vector<int> 		vi;
typedef vector<double> 		vd;
#define PI 					3.14159265
#define M					1000000007
#define M2					998244353
#define REP(i,a,b) 			for(int i = a; i < b; i++)
#define PB 					push_back

ll binpow(ll a, ll b){
	ll res=1;
	while(b>0){
		cout<<b<<"\n";
		if(b&1) res=res*a;
		a=a*a;
		b=b>>1;
	}
	return res;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout<<binpow(3,16)<<"\n";
	return 0;
}
