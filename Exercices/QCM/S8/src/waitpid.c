/**************************************
 * nfork.c
 * 
 * Programme lan�ant plusieurs copies
 * de lui m�me
 *
 *************************************/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>

int main (int argc, char *argv[])  {

  int status;
  int err=waitpid(getpid(),&status,0);
  printf("%s\n",strerror(errno));
}

