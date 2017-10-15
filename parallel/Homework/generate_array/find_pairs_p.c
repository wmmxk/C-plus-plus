#include "find_pairs_p.h"
#include <omp.h>

#define true 1
#define false 0

// find num of reciprocal pairs
int recippar(int **data, int N) {
 bool found;
	int score = 0;
	for (int i = 0; i < N; i++) {
		found = false;
  #pragma omp parallel shared(data,found)
		{
					#pragma omp for

					for (int j = N-1; j > -1 ; j--) {
			  //for (int j = 0; j < N; j++ ) {
						if (data[i][0] == data[j][1] && data[i][1] == data[j][0]) {
						  #pragma omp critical 
							 {	
										score += 1;
										found = true;
								}
        #pragma omp cancel for
						}
					}
		}
	}
	return score / 2;
}
