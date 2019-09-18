#define _POSIX_SOURCE
#include <signal.h>
#include <stdio.h>
#include <unistd.h>
void myHandler(int sigNumber) {
  if(sigNumber == SIGUSR1) 
    printf("Event SIGUSR1\n") ;
}

int main(void) {
  signal(SIGUSR1, myHandler) ;
 sleep (600) ;
  return 0 ;
}