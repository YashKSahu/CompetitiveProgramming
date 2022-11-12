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
const int N = 7;
vector<int> adj[N];

bool visited[N];
int node_distance[N];

void adjacencyList(){
    cout<<"---------------------------------------------------\n";
    cout<<"***Adjacency List based represenation of Graph***\n";

    adj[1].PB(2);
    adj[1].PB(4);
    adj[2].PB(1);
    adj[2].PB(3);
    adj[2].PB(5);
    adj[3].PB(2);
    adj[3].PB(6);
    adj[4].PB(1);
    adj[5].PB(2);
    adj[5].PB(6);
    adj[6].PB(3);
    adj[6].PB(5);

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

void bfs(int start_node){
    visited[start_node] = true;
    node_distance[start_node] = 0;
    queue<int> q;
    q.push(start_node);

    while(!q.empty()){
        int s = q.front();
        q.pop();
        cout<<s<<" -> ";
        for(auto node:adj[s]){
            if(visited[node]) continue;
            visited[node] = true;
            node_distance[node] = node_distance[s]+1;
            q.push(node);
        }
    }
}

int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);

    adjacencyList();
    cout<<"bfs search: start -> ";
    bfs(1);
    cout<<"end\n";
    cout<<"---------------------------------------------------\n";

    return 0;
}
