class Solution {
private:
    void travelIsland(vector<vector<char>> &grid, int row, int col, int maxRow, int maxCol) {
        if((row < 0) || (col < 0) || (row >= maxRow) || (col >= maxCol)) return;
        
        if(grid[row][col] == '0' || grid[row][col] == '2') return;
        
        grid[row][col] = '2';
        
        travelIsland(grid, row - 1, col, maxRow, maxCol);
        travelIsland(grid, row + 1, col, maxRow, maxCol);
        travelIsland(grid, row, col - 1, maxRow, maxCol);
        travelIsland(grid, row, col + 1, maxRow, maxCol);
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        int islandCount = 0;
        
        for(int i = 0; i < row; i++) {
            for(int j = 0;j < col; j++) {
                if(grid[i][j] == '0' || grid[i][j] == '2') continue;
                
                islandCount++;
                
                travelIsland(grid, i, j, row, col);
            }
        }
        
        return islandCount;
    }
};