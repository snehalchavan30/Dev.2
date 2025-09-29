#include <stdio.h>

int main() {
    int m, n, p, q;
    int i, j, k, sum = 0;

    // Declare matrices
    int first[10][10], second[10][10], multiply[10][10];

    printf("Enter the number of rows and columns of first matrix:\n");
    scanf("%d%d", &m, &n);

    printf("Enter the elements of first matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &first[i][j]);
        }
    }

    printf("Enter the number of rows and columns of second matrix:\n");
    scanf("%d%d", &p, &q);

    // Check if matrix multiplication is possible
    if (n != p) {
        printf("Matrices with entered orders cannot be multiplied with each other.\n");
        printf("The number of columns of the first matrix must be equal to the number of rows of the second matrix.\n");
    } else {
        printf("Enter the elements of second matrix:\n");
        for (i = 0; i < p; i++) {
            for (j = 0; j < q; j++) {
                scanf("%d", &second[i][j]);
            }
        }

        // Perform matrix multiplication
        for (i = 0; i < m; i++) {
            for (j = 0; j < q; j++) {
                sum = 0; // Reset sum for each element of the resultant matrix
                for (k = 0; k < n; k++) {
                    sum += first[i][k] * second[k][j];
                }
                multiply[i][j] = sum;
            }
        }

        // Print the resultant matrix
        printf("\nThe product of entered matrices is:\n");
        for (i = 0; i < m; i++) {
            for (j = 0; j < q; j++) {
                printf("%d\t", multiply[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
