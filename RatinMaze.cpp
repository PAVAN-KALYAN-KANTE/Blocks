//
// Created by Siva Ganesh on 22-02-2022.
//
// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    bool f=false;
    void ratinmaze(vector<vector<int>>& m,vector<vector<bool>>& visited,vector<string>& res,int i,int j,int n,string s){
        if(i>=n-1 and j>=n-1)
        {
            if(m[i][j]){
                f=true;
                res.push_back(s);
            }
            return;
        }
        if(!visited[i][j] and m[i][j]){
            visited[i][j]=true;
            if(i+1<n)
                ratinmaze(m,visited,res,i+1,j,n,s+'D');
            if(j-1>=0)
                ratinmaze(m,visited,res,i,j-1,n,s+'L');
            if(j+1<n)
                ratinmaze(m,visited,res,i,j+1,n,s+'R');
            if(i-1>=0)
                ratinmaze(m,visited,res,i-1,j,n,s+'U');
            visited[i][j]=false;
        }
        return;
    }
public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string> res;
        vector<vector<bool>> v(n,vector<bool> (n,false));
        string s;
        ratinmaze(m,v,res,0,0,n,s);
        if(f)
            return res;
        vector<string> res1;
        res1.push_back("-1");
        return res1;
    }
};




// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
            cout << endl;
    }
    return 0;
}  // } Driver Code Ends

