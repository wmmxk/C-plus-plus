/* source: https://stackoverflow.com/questions/26389205/difference-between-omp-for-and-omp-parallel
 *
 */
#include <omp.h>
#include <stdio.h>

int main(){
    int i,j = 0 ;
    int tid;
    # pragma omp parallel private(i,j,tid)
    {
       tid = omp_get_thread_num();
       printf("Thread %d\n",tid);
          # pragma omp for
          for(j=0; j<3;j++){
             tid = omp_get_thread_num();
             printf("j = %d Thread %d\n",j,tid);
          }
     }
     return 0;
}
