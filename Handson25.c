#include <stdio.h>

int checkRowsAndColumns(int grid[9][9]) {
    int seen[10]; 

    for (int i=0; i<9; i++) {
        for (int k=1; k<=9; k++)
            seen[k]=0; 

        for (int j=0; j<9; j++) {
            int val=grid[i][j];

            if (val<1 || val>9)
                return 0; 

            if (seen[val]==1)
                return 0; 

            seen[val]=1;
        }
    }

    for (int j=0; j<9; j++) {
        for (int k=1; k<=9; k++)
            seen[k]=0; 

        for (int i=0; i<9; i++) {
            int val=grid[i][j];

            if (val<1 || val>9)
                return 0;

            if (seen[val]==1)
                return 0; 

            seen[val]=1;
        }
    }
    return 1; 
}

int main() {
    int grid[9][9] = {
        {5,3,4,6,7,8,9,1,2},
        {6,7,2,1,9,5,3,4,8},
        {1,9,8,3,4,2,5,6,7},
        {8,5,9,7,6,1,4,2,3},
        {4,2,6,8,5,3,7,9,1},
        {7,1,3,9,2,4,8,5,6},
        {9,6,1,5,3,7,2,8,4},
        {2,8,7,4,1,9,6,3,5},
        {3,4,5,2,8,6,1,7,9}
    };

    if (checkRowsAndColumns(grid))
        printf("Each row and column contains unique numbers from 1 to 9.\n");
    else
        printf("Invalid: Duplicate or out-of-range numbers found.\n");

    return 0;
}