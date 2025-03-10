#include <stdio.h>

int main() {
    int R; // Number of rooks
    int rook_positions[9][2]; // Array to store rook positions (maximum 9 rooks for a 3x3 board)
    int board[3][3] = {0}; // Chessboard initialized to 0 (0 means empty, 1 means occupied)

    // Input the number of rooks
    scanf("%d", &R);

    // Input the positions of the rooks
    for (int i = 0; i < R; i++) {
        int x, y;
        scanf("%d %d", &x, &y);
        board[x - 1][y - 1] = 1; // Mark the cell as occupied
    }

    // Count and display empty cells
    int empty_cells = 0;
    printf("Total empty cells - ");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == 0) { // If the cell is empty
                empty_cells++;
            }
        }
    }
    printf("%d\n", empty_cells);

    // Print the positions of empty cells
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == 0) { // If the cell is empty
                printf("%d %d\n", i + 1, j + 1); // Convert back to 1-based indexing
            }
        }
    }

    return 0;
}

