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

int Fibonacci(long int n){
    
    int Fib[n];
    Fib[0] = 1;
    Fib[1] = 1;
    
    for(int i = 2; i<n; i++)
        Fib[i] = Fib[i-1] + Fib[i-2];
    

    return Fib[n-1];
}

// Quantifiers for a single variable predicate over a vector. I'll improve it later and make it more complex

int forAll(vector <int> v, int (*Pred)(int)){
    for(int i = 0; i<v.size(); i++)
        if(!Pred(v[i]))
         return 0;
    return 1;
}

int exists(vector <int> v, int (*Pred)(int)){
    for(int i = 0; i<v.size(); i++)
      if(Pred(v[i]))
        return 1;
    return 0;
}
