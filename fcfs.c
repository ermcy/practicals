#include <stdio.h>

void fcfs(int bt[], int n) { 
    int wt[n], tat[n];
    wt[0] = 0;

    // Calculating waiting time
    for (int i = 1; i < n; i++) { 
        wt[i] = wt[i - 1] + bt[i - 1];
    }

    // Calculating turn around time
    for (int i = 0; i < n; i++) { 
        tat[i] = wt[i] + bt[i];
    }

    // Displaying the results
    printf("Process\t Burst Time\t Waiting Time\t Turnaround Time\n");

    for (int i = 0; i < n; i++) { 
        printf("P[%d]\t %d\t\t %d\t\t %d\n", i + 1, bt[i], wt[i], tat[i]);
    }
}

int main() { 
    int n;
    printf("Enter the number of processes:\n");
    scanf("%d", &n);

    int burst_time[n];

    printf("Enter burst times for each process:\n");
    for (int i = 0; i < n; i++) { 
        printf("Process: %d: ", i + 1);
        scanf("%d", &burst_time[i]);
    }

    fcfs(burst_time, n);

    return 0;
}