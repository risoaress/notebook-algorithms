#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    int m = max(a, b);
    int n = (a+b)-m;

    int r = m - n*floor(m/n); // remainder

    if(r==0){
        return n;
    }else{
        return gcd(n, r);
    }
}

// NOTE: lcm(a, b) can be implemented as a*b/gcd(a, b). A independent implementation will be provided soon though
