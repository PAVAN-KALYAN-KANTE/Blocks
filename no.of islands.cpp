class Solution {
    void mark_island_visited(vector<vector<char>>& grid,int n,int m,int x,int y){
        if(x<0 or x>=n or y<0 or y>=m or grid[x][y]!='1'){
            return;
        }
        
        grid[x][y]='2';
        mark_island_visited(grid,n,m,x+1,y);
        mark_island_visited(grid,n,m,x-1,y);
        mark_island_visited(grid,n,m,x,y+1);
        mark_island_visited(grid,n,m,x,y-1);

    }
public:
    int numIslands(vector<vector<char>>& grid) {
        
        int n=grid.size();
        if(n==0){return 0;}
        int m=grid[0].size();
        int num_islands=0;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1'){
                    mark_island_visited(grid,n,m,i,j);
                    num_islands+=1;
                }
            }
        }
        return num_islands; 
    }
};