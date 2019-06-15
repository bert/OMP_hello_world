/*!
 * \brief OpenMP program to print Hello World using C language.
 *
 * Retrieved from:  https://www.geeksforgeeks.org/openmp-hello-world-program/
 */

/* OpenMP header. */
#include <omp.h>

#include <stdio.h>
#include <stdlib.h>

int
main (int argc, char* argv[])
{
  /* Beginning of parallel region.*/
  #pragma omp parallel
  {
    printf("Hello World... from thread = %d\n", omp_get_thread_num());
  }
  /* Ending of parallel region. */
}

/* EOF */
