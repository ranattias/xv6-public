#include "types.h"
#include "user.h"
#include "processInfo.h"

struct processInfo* pi;

void printstring(char *s)
{
  write(1, s, strlen(s));
}

void printchar(char c)
{
  write(1, &c, 1);
}

void displaydigit(char name, int *val)
{
  printchar(name);
  printstring(" is ");
  printchar('0' + *val);
  printchar('\n');
}

void f(void)
{
  int a = 5, b = 3, c;

  displaydigit('a', &a);
  displaydigit('b', &b);
  c = a + b;
  displaydigit('c', &c);
}

int main(void)
{
  
  
  printf(1,"Total number of active processes: %d\n", getNumProc());

  int maxPid = getMaxPid();
  printf(1, "Maximum PID: %d\n", maxPid);

  printf(1, "PID    STATE    PPID      SZ    NFD    NRSWITCH\n");

  for(int i=maxPid; i>0 ; --i){
    if (getProcInfo(i, pi)==1)
        printf(1," %d\t %d\t %d\t %d\t %d\t %d\t\n", i, pi->state, pi->ppid, pi->sz, pi->nfd, pi->nrswitch);
  }

  exit();

}
