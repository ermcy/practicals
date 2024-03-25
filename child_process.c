#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main() { 
    pid_t pid;
    pid = fork();

    if (pid < 0) { 
        printf("Fork failed :(\n");
        return 1;
    }
    if (pid == 0) { 
        printf("I am the child process. My process ID is %d\n", getpid());
    } else { 
        printf("I am the parent process. My process ID is %d and the child process ID is %d\n", getpid(), pid);
    }

    return 0;
}