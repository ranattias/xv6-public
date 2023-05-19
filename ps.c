#include "types.h"
#include "user.h"
#include "processInfo.h"

struct processInfo* pi;

enum procstate { UNUSED, EMBRYO, SLEEPING, RUNNABLE, RUNNING, ZOMBIE };
const char* proc_state[] = {"UNUSED", "EMBRYO", "SLEEPING", "RUNNABLE", "RUNNING", "ZOMBIE"};



int main(void)
{
  
  
  printf(1,"Total number of active processes: %d\n", getNumProc());

  int maxPid = getMaxPid();

  printf(1, "Maximum PID: %d\n", maxPid);

  printf(1, "PID       STATE         PPID      SZ    NFD    NRSWITCH\n");
  printf(1, "--------------------------------------------------------\n");

  for(int i=maxPid; i>0 ; --i){ 
    if (getProcInfo(i, pi)==0){
        printf(1," %d\t %s\t %d\t %d\t %d\t %d\t\n", i, proc_state[pi->state], pi->ppid, pi->sz, pi->nfd, pi->nrswitch);
    }
  }

  exit();

}
