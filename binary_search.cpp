#include <bits/stdc++.h>
using namespace std;


int bin_search(int target, vector <int> vec){

    int len = vec.size();
    int lo = 0, hi = len-1;

    while(lo != hi-1){
        int mid = (lo+hi)/2;

        if(vec[mid] == target)
            return mid;

        if (vec[mid] > target)
            hi = mid;
        else
            lo = mid;
    }

    if(vec[hi]==target)
     return hi;
    return -1;

}
