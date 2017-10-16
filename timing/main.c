#include <time.h>
#include <stdio.h>

int main()
{

int i;
int j;
clock_t begin_parallel = clock();
for (i=0; i< 10000000; i++){
printf("%d",i);
}

clock_t end_parallel = clock();
double time_spent_parallel = (double)(end_parallel - begin_parallel) / CLOCKS_PER_SEC;
printf("\ntime parallel: %f\n", time_spent_parallel);



return 0;
}
