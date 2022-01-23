//
// Created by Siva Ganesh on 23-01-2022.
//
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        unsigned long long int mask=1,res=0,c=31;
        while(mask<=n){
            if(mask&n){
                res=res|(1<<c);
            }
            c--;
            mask<<=1;
            //cout<<res<<endl;
        }
        // cout<<mask<<endl;
        return res;
    }
};
