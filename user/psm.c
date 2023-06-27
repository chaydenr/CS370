#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/syscall.h>
#include "psinfo.h"

void print_ps_info(struct ps_proc *ps_array, int count)
{
    printf("Process Status (version: Chayden)\n");
    printf("----------------------------------------\n");
    printf("pid\tname\t\tstate\t\tmemory\t\tpriority\n");

    for (int i = 0; i < count; i++)
    {
        printf("%d\t%s\t\t%d\t\t%lu\t\t%d\n", 
        ps_array[i].pid, 
        ps_array[i].proc_name, 
        ps_array[i].state, 
        ps_array[i].memory, 
        ps_array[i].priority);
    }
}

int main()
{
    sys_ps(local_array);
    print_ps_info(local_array, sizeof(local_array));

    return 0;
}
