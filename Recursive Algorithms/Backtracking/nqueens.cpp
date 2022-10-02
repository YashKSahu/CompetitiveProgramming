#include <bits/stdc++.h>

int count=0;
int col[1000],diag1[1000],diag2[1000];

void nqueens(int y, int n){
    if(y == n){
        count++;
        return;
    }
    for(int x=0; x<n; ++x){
        if(col[x] || diag1[x+y] || diag2[x-y+n-1]) continue;
        col[x] = diag1[x+y] = diag2[x-y+n-1] = 1;
        nqueens(y+1,n);
        col[x] = diag1[x+y] = diag2[x-y+n-1] = 0;
    }
}

int main(){
    std::cout<<"*** n Queens ***\n";
    std::cout<<"Enter n: ";
    int n;
    std::cin>>n;
    
    memset(col, 0, sizeof(col));
    memset(diag1, 0, sizeof(diag1));
    memset(diag2, 0, sizeof(diag2));

    nqueens(0,n);
    std::cout<<"Total no. of possible ways = "<<count<<"\n";
}