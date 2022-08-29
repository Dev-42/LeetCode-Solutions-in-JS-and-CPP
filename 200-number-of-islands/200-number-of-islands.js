/**
 * @param {character[][]} grid
 * @return {number}
 */
var numIslands = function(grid) {
    let rows = grid.length;
    let cols = grid[0].length;
    let no_of_islands = 0;
    for(let i = 0 ;i< rows ;i++)
        {
            for(let j = 0 ; j< cols;j++)
                {
                    if(grid[i][j] == '1')
                        {
                            markIslands(grid,i,j,rows,cols);
                            no_of_islands += 1;
                        }
                }
        }
    return no_of_islands;
};

var markIslands = function(grid,x,y,r,c){
    if(x < 0 || y < 0 || x >= r || y >= c || grid[x][y] != '1')
        return;
    grid[x][y] = 2;
    markIslands(grid,x+1,y,r,c);
    markIslands(grid,x-1,y,r,c);
    markIslands(grid,x,y-1,r,c);
    markIslands(grid,x,y+1,r,c);
}