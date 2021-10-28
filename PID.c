#include <stdio.h>
#include <unistd.h>
int main()
{
printf("Parent Process ID = %d\nChild Process ID = =%d\n", getppid(),getpid());
return 0;

}
