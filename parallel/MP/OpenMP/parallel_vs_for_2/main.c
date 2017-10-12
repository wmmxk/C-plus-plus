/* source: https://stackoverflow.com/questions/26389205/difference-between-omp-for-and-omp-parallel


omp_set_num_threads(4) / set the number of thread 


 */
#include <omp.h>
#include <stdio.h>

int main(){
    int i,j = 0 ;
    int tid;
				omp_set_dynamic(0);     // Explicitly disable dynamic teams
				omp_set_num_threads(4); // specify the number of threads
    # pragma omp parallel private(i,j,tid)
    {
       tid = omp_get_thread_num();
       printf("Thread %d\n",tid);
							for (i=0; i<2; i++) {
          # pragma omp for
          for(j=0; j<3;j++){
             tid = omp_get_thread_num();
             printf("(i,j) = (%d,%d)  Thread %d\n",i,j,tid);
          }
     }
				}
    return 0;
}
