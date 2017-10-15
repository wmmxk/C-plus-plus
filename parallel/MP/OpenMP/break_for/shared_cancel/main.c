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
		if (int_max < 100000000001)
		    to_check = rand()%int_max;
		else 
			   to_check = data[100];
  bool found = false;

  #pragma omp parallel shared(data, found)
		{
					#pragma omp for
					for (int i=0; i < int_max; i++)
			 	{
							if(data[i] == to_check)
							{
										#pragma omp critical
										{
											found=true;
										}
          #pragma omp cancel for
							}
			 	}
		}
  if (!found) printf("Not found \n");
		else printf("Found\n");
		return 0;
}
