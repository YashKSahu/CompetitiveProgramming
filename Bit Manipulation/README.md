# Bit Manipulation
## Invert Bits
```cpp
int a;
int b = ~a; //inverse
std::bitset<32> var(b); //save 32-bit binary notation of b in var
```
## Bit Shift
- $x$ ${<<}$ $k = {x*2^{k}}$
- $x>>k = floor(x/2^{k})$
```cpp
int x=13;
int k=3;
int value = x<<k;   //13*2^3 = 13*8
```

## Make I/O more efficient
```cpp
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    // Logic
}
```

## Working with Numbers
| Data Type | Size | Range | Approx Value |
|-|-|-|-|
|int|32-bit|$-2^{31}$ to $2^{31}-1$|$-2.10^{9}$ to $2.10^{9}$|
|long long int|64-bit|$-2^{63}$ to $2^{63}-1$|$-9.10^{18}$ to $9.10^{18}$|
|\_\_int128\_t|128-bit|$-2^{127}$ to $2^{127}-1$|$-10^{38}$ to $10^{38}$|

## Modular Arithmatic
$(a+b)\%m = (a\%m+b\%m)\%m$ <br>
$(a-b)\%m = (a\%m-b\%m)\%m$ <br>
$(a*b)\%m = (a\%m*b\%m)\%m$ <br>

## 
