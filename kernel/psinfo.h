// NEW!!!!! New file, step 3
struct ps_proc {
  char proc_name[16];
  int state;
  int pid;
  int memory;
  int priority;
};

enum procstate {
  USED = 1,
  SLEEPING = 2,
  RUNNABLE = 3,
  RUNNING = 4,
  ZOMBIE = 5
};

#define MAX_PROCS 15

struct ps_proc local_array[MAX_PROCS];
