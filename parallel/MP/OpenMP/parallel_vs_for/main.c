#include <stdio.h>
#include <omp.h>

int main()
{
#pragma omp parallel
	{
	  int me = omp_get_thread_num();
	  printf(" outer thread %d\n",me);
      #pragma omp for
	  for (int i =1; i<=3; i++)
	  {
       printf("inner iteration %d\n",i);
	  }
	}
return 0;
}
