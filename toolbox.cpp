#include <bits/stdc++.h>
using namespace std;

vector <int> sum_vector(vector <int> v){
    vector <int> current;
    current.push_back(0);
    
    for(int i = 0; i<v.size(); i++){
        current.push_back(v[i]+current[current.size() - 1]);
    }
    
    return current;
}


string join_vector(vector <string> v){
    
    string current = v[0];
    
    for(int i = 1; i<v.size(); i++)
        current += " " + v[i];
    
    return current;
    
}

// I will add a splitter function soon
