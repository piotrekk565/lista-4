#include <stdio.h>
#include <unistd.h>
#include <signal.h>

void sig_handler(int signum)
{
  printf("\n...");
 }

int main()
{
  signal(SIGALRM, sig_handler);
  signal(SIGTERM, sig_handler);
  signal(SIGUSR1, sig_handler);
  signal(SIGUSR2, sig_handler);
  
  int i = 0;
  while(1)
    {
      i++;
      sleep(1);
    }
  return 0;
}
