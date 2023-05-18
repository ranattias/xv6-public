#include "processInfo.h"
#include "defs.h"





int getNumProc(void){
    cprint("hi from getNumProc system call\n");
}

int getMaxPid(void){
    cprint("hi from getMaxPid system call\n");

}
int getProcInfo(int pid, struct processInfo*){
    cprint("hi from getProcInfo system call\n");
    cprint("got pid nu.: %d \n",pid);
}

