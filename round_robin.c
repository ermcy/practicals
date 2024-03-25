#include <stdio.h>


void roundRobin(int bt[], int n, int quantum) { 
    int rem_bt[n];

    for (int i = 0; i < n; i++) { 
        rem_bt[i] = bt[i];
    }

    int t = 0;

    while (1) { 
        int done = 1;

        for (int i = 0; i <= n; i++) { 
            if (rem_bt[i] > 0) { 
                done = 0;

                if (rem_bt[i] > quantum) { 
                    t += quantum;
                    rem_bt[i] -= quantum;
                } else { 
                    t = t + rem_bt[i];
                    rem_bt[i] = 0;
                    printf("Process %d completed at time %d\n", i + 1, t);
                }
            }
        }
        if (done == 1) break;
    }
}

int main() { 
    int n, quantum;
    printf("Enter the number of processes:\n");
    scanf("%d", &n);

    int burst_time[n];

    printf("Enter burst times for each process:\n");
    for (int i = 0; i < n; i++) { 
        printf("Process: %d: ", i + 1);
        scanf("%d", &burst_time[i]);
    }

    printf("Enter time quantum:\n");
    scanf("%d", &quantum);

    roundRobin(burst_time, n, quantum);

    return 0;
}