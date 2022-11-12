// A C++ Program to demonstrate various methods of graph representation
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

void adjacencyList(){
    cout<<"---------------------------------------------------\n";
    cout<<"***Adjacency List based represenation of Graph***\n";
    const int N = 5;
    vector<pair<int,int>> adj[N];

    adj[1].PB({2,5});
    adj[2].PB({3,7});
    adj[2].PB({4,6});
    adj[3].PB({4,5});
    adj[4].PB({1,2});

    for(int i=1; i<5; ++i){
        for(auto node : adj[i])
            cout<<"\t"<<i<<" -> "<<node.first<<" - "<<node.second<<"\n";
    }
    cout<<"---------------------------------------------------\n\n";
    return;
}

void adjacencyMatrix(){
    cout<<"---------------------------------------------------\n";
    cout<<"***Adjacency Matrix based represenation of Graph***\n";
    const int N = 5;
    int adj[N][N];
    memset(adj,0,sizeof(adj));

    adj[1][2]=5;
    adj[2][3]=7;
    adj[2][4]=6;
    adj[3][4]=5;
    adj[4][1]=2;

    for(int i=1; i<5; ++i){
        cout<<"\t";
        for(int j=1; j<5; ++j)
            cout<<adj[i][j]<<" ";
        cout<<"\n";
    }
    cout<<"---------------------------------------------------\n\n";
    return;
}

void edgeList(){
    cout<<"---------------------------------------------------\n";
    cout<<"***Edge List based represenation of Graph***\n";
    
    vector<tuple<int,int,int>> edges;

    edges.PB({1,2,5});
    edges.PB({2,3,7});
    edges.PB({2,4,6});
    edges.PB({3,4,5});
    edges.PB({4,1,2});

    for(auto tuple : edges){
        cout<<"\t" \
        <<get<0>(tuple)<<" -> " \
        <<get<1>(tuple)<<" - " \
        <<get<2>(tuple)<<"\n";
    }
    cout<<"---------------------------------------------------\n\n";
    return;
}

int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);

    adjacencyList();
    adjacencyMatrix();
    edgeList();

    return 0;
}
