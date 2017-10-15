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

  volatile bool found = false;

		int times = 0;
  #pragma omp parallel for shared(found)
		for (int i=0; i < int_max; i++)
		{
// you can not just add			  #pragma omp single 
			 {
				  times++;	
				}

//			  printf("iteration times %d\n",times);
     if (found) continue;
					if(data[i] == to_check)
					{
						 found=true;
							printf("found\n");
					}
		}
  if (!found) printf("Not found \n");
		return 0;
}
