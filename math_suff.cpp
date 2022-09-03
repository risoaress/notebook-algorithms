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

int is_prime(long long int n){ // O(N^1/2)
    for(int i = 2; i<sqrt(n); i++){
        if(n%i==0)
            return 0;
    }
    return 1;
}

vector <int> dist_prime_factors(long long int n){ // Need to make it cleaner... It's O(N) though

    vector<int> primes;
    primes.push_back(2);
    int curr = 2;

    while(n>1){
        if(n%curr == 0){
            if(primes.back() != curr){
                primes.push_back(curr);
            }
            n /= curr;
        }else{
            curr++;
        }
    }

    return primes;

}
