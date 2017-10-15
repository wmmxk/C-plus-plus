/*
	
This code is to break a parallel for loop

	*/

#include <omp.h>
#include <stdio.h>
#include <stdlib.h>
#include <vector>

int main(int argc, char *argv[]){


  int int_max = atoi(argv[1]);
		std::vector<int> data;
		for (int i =0; i < int_max; i++)
		{
      data.push_back(rand()%int_max);
		}

		int to_check;
		if (int_max < 10000000001)
		    to_check = rand()%int_max;
		else 
			   to_check = data[100];

  bool go = true;
  int start = 0;
		bool found = false;
  #pragma omp parallel
		{
			  int i, stop;
     #pragma omp critical 
					{
					i  = start;
					start += int_max/omp_get_num_threads();
					stop = start;
     if (omp_get_thread_num() == omp_get_num_threads()-1)
						   stop = int_max-1;
					}

					while (go && stop < int_max-2)
					{
					  if(data[i] == to_check) {
						 go = false;
							found = true;
							}
					}
					
		}
  if (!found) printf("Not found \n");
		else printf("Found");
		return 0;
}
