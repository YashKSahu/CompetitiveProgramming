// A C++ Program to implement Depth First Search Algorithm
#include <bits/stdc++.h>
using namespace std;
 
typedef long long int		ll;
typedef unsigned long long  ull;
typedef vector<int> 		vi;
typedef vector<double> 		vd;
 
#define PI 				3.14159265
#define M				1000000007
#define M2				998244353
#define REP(i,a,b) 		for(int i = a; i < b; i++)
#define PB 				push_back

//global Adjacency List
const int N = 6;
vector<int> adj[N];

bool visited[N];

void adjacencyList(){
    cout<<"---------------------------------------------------\n";
    cout<<"***Adjacency List based represenation of Graph***\n";

    adj[1].PB(2);
    adj[1].PB(4);
    adj[2].PB(3);
    adj[2].PB(5);
    adj[3].PB(5);

    for(int i=1; i<N; ++i){
        for(auto node : adj[i])
            cout<<"\t"<<i<<" -> "<<node<<"\n";
    }
    cout<<"---------------------------------------------------\n";
    return;
}

void dfs(int s){
    if (visited[s]) return;
    visited[s]=true;
    cout<<s<<" -> ";
    for(auto node:adj[s])
        dfs(node);
}

int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);

    adjacencyList();
    cout<<"dfs search: start -> ";
    dfs(1);
    cout<<"end\n";
    cout<<"---------------------------------------------------\n";

    return 0;
}
