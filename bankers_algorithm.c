#include <stdio.h>

// Number of processes
#define P 5

// Number of resources
#define R 3

// Function to find the need of each process
void calculateNeed(int need[P][R], int max[P][R], int allot[P][R])
{
    for (int i = 0; i < P; i++)
        for (int j = 0; j < R; j++)
            need[i][j] = max[i][j] - allot[i][j];
}

// Function to check if the process can be allocated the resources
int isSafe(int processes[], int avail[], int max[][R], int allot[][R])
{
    int need[P][R];
    calculateNeed(need, max, allot);

    int finish[P] = {0};

    int safeSeq[P];
    int work[R];
    for (int i = 0; i < R; i++)
        work[i] = avail[i];

    int count = 0;
    while (count < P)
    {
        int found = 0;
        for (int p = 0; p < P; p++)
        {
            if (finish[p] == 0)
            {
                int j;
                for (j = 0; j < R; j++)
                    if (need[p][j] > work[j])
                        break;

                if (j == R)
                {
                    for (int k = 0; k < R; k++)
                        work[k] += allot[p][k];

                    safeSeq[count++] = p;
                    finish[p] = 1;
                    found = 1;
                }
            }
        }

        if (found == 0)
        {
            printf("System is not in safe state");
            return 0;
        }
    }

    printf("System is in safe state.\nSafe sequence is: ");
    for (int i = 0; i < P; i++)
        printf("%d ", safeSeq[i]);
    printf("\n");

    return 1;
}

int main()
{
    int processes[] = {0, 1, 2, 3, 4};

    int avail[] = {3, 3, 2};

    int max[][R] = {
        {7, 5, 3},
        {3, 2, 2},
        {9, 0, 2},
        {2, 2, 2},
        {4, 3, 3}};

    int allot[][R] = {
        {0, 1, 0},
        {2, 0, 0},
        {3, 0, 2},
        {2, 1, 1},
        {0, 0, 2}};

    isSafe(processes, avail, max, allot);

    return 0;
}