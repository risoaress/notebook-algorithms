#include <bits/stdc++.h>
using namespace std;

vector <int> sum_vector(vector <int> v){
 
    int n = v.size();
    vector <int> current;
    current.push_back(0);
    
    for(int i = 0; i<n; i++){     
        int s = 0;
        
        for(int j = 0; j<i+1; j++){
            s += v[j];
        }
        
        current.push_back(s);
    }
    return current;
}
