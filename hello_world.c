#include "types.h"
#include "user.h"

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
  f();
  exit();
}
