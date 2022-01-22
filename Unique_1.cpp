//
// Created by Siva Ganesh on 22-01-2022.
//
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size(),res=0;
        for(int i=0;i<n;i++)res^=nums[i];

        return res;
    }
};
int main(){

}