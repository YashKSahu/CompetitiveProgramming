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
 
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	ll n;
	cin>>n;
	cout<<n<<" ";
	while(n!=1){
		if(n%2==0)
			n=n/2;
		else
			n=n*3+1;
		cout<<n<<" ";
	}
}
