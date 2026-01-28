#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

int
main()
{
  int saved_errno;

  saved_errno = errno;

  printf("errno = %d\n", errno);

  errno = ENOENT;
  errno = 0;

  exit(0);
}
