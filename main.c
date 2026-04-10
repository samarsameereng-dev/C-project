#include <stdio.h>

int main(){


    // ** print the task instructions & print the solution author’s name **
    printf("\nCreating a two dimensional array & sorting it in asending order!!");
    printf("\nSoultion By: Samar Samir");

    int N, i, j;
    printf("\nPlease enter the size of the matrix : ");
    scanf("%d", &N);


    // ** enter input data for array A **
    float A[N][N];
    for( i = 0; i < N; i++){
        for( j = 0; j < N; j++){
            do{
                printf("A[%d][%d]: ", i, j);
                scanf("%f", &A[i][j]);
            } while(A[i][j] < -1000 || A[i][j] > 1000);
        }
    }

    // ** print the entered input data **
    printf("\nArray elements are:\n");
    for( i = 0; i < N; i++){
        for( j = 0; j < N; j++){
            printf("%.2f  ", A[i][j]);
        }   printf("\n");
    }


    // ** • create a one-dimensional array, C, containing the elements from array A that fall within the
    // specified range [K-L], where K & L are input values **
    float C[N], K, L;
    printf("\nPlease enter the limit of the matrix.");
    printf("\nLowest value: ");
    scanf("%f", &K);
    printf("\nLargest value: ");
    scanf("%f", &L);

    int s = 0;
    for( i = 0; i < N; i++){
        for( j = 0; j < N; j++){
            if (A[i][j] >= K && A[i][j] <= L){
                C[s] = A[i][j];
                s++;
            }
        }
    }


    // ** sort array C in ascending order && print array C before & after sorting **
    printf("\nElements in the range [%.2f, %.2f] BEFORE sorting:\n", K, L);
    for(i = 0; i < s; i++){
        printf("%.2f ", C[i]);
    }

    for(i = 0; i < s - 1; i++){
        for(j = i + 1; j < s; j++){
            if(C[i] > C[j]){
                float temp = C[i];
                C[i] = C[j];
                C[j] = temp;
            }
        }
    }

    printf("\nElements in the range [%.2f, %.2f] AFTER sorting:\n", K, L);
    for(i = 0; i < s; i++){
        printf("%.2f ", C[i]);
    }


    return 0;
}