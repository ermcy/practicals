#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main() { 
    int i;
    pid_t pid;

    for (i = 0; i < 5; i++)
    {
        pid = fork();
        if (pid == 0)
        {
            printf("Child Process: %d.\n", i);
            break;
        } else if (pid > 0)
        {
            printf("Parent Process.\n");
        }
        else { 
            printf("Fork failed.\n");
            break;
        }
    }
    
    return 0;
    
}