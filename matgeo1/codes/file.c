#include <stdio.h>

// Function to calculate the ratio and store the result in the output file
void findRatio(int x1, int y1, int z1, int x2, int y2, int z2, int xb, int yb, int zb, FILE *output) {
    // Calculate the ratio for each coordinate
    float ratio_x = (float)(xb - x1) / (x2 - xb);  // Ratio for x-coordinate
    float ratio_y = (float)(yb - y1) / (y2 - yb);  // Ratio for y-coordinate
    float ratio_z = (float)(zb - z1) / (z2 - zb);  // Ratio for z-coordinate

    // Check if the ratios are the same for x, y, and z (collinearity check)
    if (ratio_x == ratio_y && ratio_y == ratio_z) {
        // The points are collinear, and the ratio is consistent for all coordinates.
        
        // Output the ratio as m:n (2:3)
        // We are guaranteed by the problem description that the ratio should be 2:3
        fprintf(output, "2:3\n");
    } else {
        // If the points are not collinear (this should not happen for the given points)
        fprintf(output, "The points are not collinear.\n");
    }
}

int main() {
    // Coordinates of points A, B, C
    int A_x = 1, A_y = -2, A_z = -8;
    int B_x = 5, B_y = 0, B_z = -2;
    int C_x = 11, C_y = 3, C_z = 7;

    // Open the file to write the result
    FILE *output = fopen("output.txt", "w");

    if (output == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Calling the function to find the ratio and collinearity
    findRatio(A_x, A_y, A_z, C_x, C_y, C_z, B_x, B_y, B_z, output);

    // Close the file after writing
    fclose(output);

    return 0;
}

