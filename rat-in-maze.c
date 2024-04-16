#include <stdio.h>
#include <stdbool.h>

#define N 4 // Size of the maze

// Function to check if the cell (row, col) is inside the maze and unblocked
bool isValid(int row, int col, int maze[N][N]) {
    return (row >= 0 && row < N && col >= 0 && col < N && maze[row][col] == 1);
}

// Function to solve the Rat in a Maze problem
bool solveMazeUtil(int maze[N][N], int x, int y, int sol[N][N]) {
    if (x == N - 1 && y == N - 1) {
        sol[x][y] = 1;
        return true;
    }

    if (isValid(x, y, maze)) {
        sol[x][y] = 1;

        // Move right
        if (solveMazeUtil(maze, x, y + 1, sol))
            return true;

        // Move down
        if (solveMazeUtil(maze, x + 1, y, sol))
            return true;

        // Backtrack
        sol[x][y] = 0;
        return false;
    }

    return false;
}

// Function to solve the Rat in a Maze problem
void solveMaze(int maze[N][N]) {
    int sol[N][N] = {0}; // Initialize solution matrix

    if (solveMazeUtil(maze, 0, 0, sol)) {
        printf("Solution exists. The path taken by the rat:\n");
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++)
                printf("%d ", sol[i][j]);
            printf("\n");
        }
    } else {
        printf("No solution exists.\n");
    }
}

int main() {
    int maze[N][N] = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {0, 1, 0, 0},
        {1, 1, 1, 1}
    };

    solveMaze(maze);

    return 0;
}
