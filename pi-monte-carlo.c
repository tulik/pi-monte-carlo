#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

int main (int argc, char *argv[])
{
  double x, y, z, pi;
  int i, count = 0;
  int niter = strtol (argv[1], NULL, 0);
  srand (time (0));
  count = 0;
  for (i = 0; i < niter; i++){
    x = (double) rand () / RAND_MAX;
    y = (double) rand () / RAND_MAX;
    z = x * x + y * y;
    if (z <= 1)
    count++;
  }
  pi = (double) count / niter * 4;
  printf ("# of trials= %d , estimate of pi is %g \n", niter, pi);
  return 0;
}
