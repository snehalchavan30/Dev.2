#include <stdio.h>

int main() {
    FILE *fp;
    fp = fopen("example.txt", "w"); // Open "example.txt" in write mode
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1; // Indicate an error
    }
    // File successfully opened, proceed with operations
    fclose(fp); // Close the file
    return 0;
}
