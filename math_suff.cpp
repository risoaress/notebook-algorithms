#include <bits/stdc++.h>

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
