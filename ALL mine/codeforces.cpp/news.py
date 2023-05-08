function largestLakeVolume(grid) {
const rows = grid.length;
const cols = grid[0].length;
const visited = new Array(rows).fill().map(() => new Array(cols).fill(false));
let maxVolume = 0;
// Define helper function to explore the lake using BFS
function exploreLakeBFS(grid, row, col, visited) {
    const queue = [];
    queue.push([row, col]);
    visited[row][col] = true;
    let lakeVolume = grid[row][col];
    
    while (queue.length) {
        const [row, col] = queue.shift();
        const directions = [[-1, 0], [1, 0], [0, -1], [0, 1]];
        for (const [dRow, dCol] of directions) {
            const nRow = row + dRow;
            const nCol = col + dCol;
            if (nRow >= 0 && nRow < rows && nCol >= 0 && nCol < cols && grid[nRow][nCol] > 0 && !visited[nRow][nCol]) {
                visited[nRow][nCol] = true;
                queue.push([nRow, nCol]);
                lakeVolume += grid[nRow][nCol];
            }
        }
    }
    
    return lakeVolume;
}

// Find largest lake volume using BFS
for (let row = 0; row < rows; row++) {
    for (let col = 0; col < cols; col++) {
        if (grid[row][col] > 0 && !visited[row][col]) {
            const lakeVolume = exploreLakeBFS(grid, row, col, visited);
            maxVolume = Math.max(maxVolume, lakeVolume);
        }
    }
}

return maxVolume;
// Read input and solve each test case
const readline = require('readline');
const rl = readline.createInterface({
input: process.stdin,
output: process.stdout
});

rl.on('line', (input) => {
const [rows, cols] = input.trim().split(' ').map(Number);
const grid = [];
rl.pause();
for (let i = 0; i < rows; i++) {
rl.once('line', (line) => {
grid.push(line.trim().split(' ').map(Number));
if (i === rows - 1) {
console.log(largestLakeVolume(grid));
rl.resume();
}
});
}
});