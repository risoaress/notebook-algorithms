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

vector <string> split_by_space(string s){
    
    vector <string> splitted;
    vector <int> splitPoints;
    
    splitPoints.push_back(0);
    for(int i = 0; i<s.size(); i++){
        if(isspace(s[i]))
            splitPoints.push_back(i+1);
    }
    
    for(int j = 0; j<splitPoints.size()-1; j++){
        splitted.push_back(s.substr(splitPoints[j], splitPoints[j+1] - splitPoints[j] - 1));
    }
    
        splitted.push_back(s.substr(splitPoints.back(), splitPoints.size()));
        
    return splitted;
    
}
