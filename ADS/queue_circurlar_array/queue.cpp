//One default constructor and three member functions for the class queue were defined
// One difference between pop and push is that in pop function, the front can catch the rear so you don't need to check possible conflict
// But in push function, when rear=MAX-1, you can just use rear++; rear=rear%(MAX+1) because front might be zero.
// Or front is larger than rear by 1;
#include <iostream>
#include "queue.h"

Queue::Queue()
{
	 front = -1;
		rear = -1;

}

// you can visualize the branching using a table, whose rows represent front
// and whose column represents rear
//       rear:  MAX-1   Not MAX-1 
// front 
//   -1         front=rear=0                  
//   0          Full      rear++
//   Not 0      rear=0    if front-rear==1--full; else rear++
//
//   At the end arr[rear] = item;
bool Queue::push(const int & item)
{
	 if (front == -1)
		 	front=rear=0;
  else
		{
			  if (front == 0)
				 {
							 if (rear == MAX-1)
								{ std::cout <<"Overflow \n\n";
									 return false;
								}
								else
									 rear++;
				 }
				 else 
				 { 
					   if (rear == MAX-1)
					  		  rear = 0;
						  else
							    if (front-rear == 1)
							 	  { std::cout <<"Overflow \n\n";
									    return false;
							 	  }
							    else
											  rear++;	
				}
		}

		arr[rear] = item;
		return true;
}






// Popping out the element at the front is more straigt forward: three braches
// if front == -1. No item in the arr
// Otherwise, poptout arr[front] then update the front:
//     if front == rear. Set the front and rear to -1
//     Otherwise, front++; front%(MAX+1) takes care of circling the index 

bool Queue::pop(int & item)
{
 if (front == -1)
 	{
    std::cout <<" Underflow \n \n";
	  	return false;
	 }
	 else
	 { 
			 item = arr[front];

    if (front == rear)
				      front=rear=-1;
		 	else
				  {
								   front ++;
											front = front%(MAX+1);
					 }
				return true;
		}
}

void Queue::show() const
{
  int front_p = front, rear_p = rear;
		if (front_p == -1)
			  std::cout << "No items to show\n";
		else 
		{
						if (front_p <= rear_p)
								{
									while (front_p <=rear_p)
											{
												std::cout << arr[front_p++] << ", ";
											}

								}
						else
						{
							while (front_p <= MAX-1)
									{
										std::cout << arr[front_p++] << ", ";
									}
							front_p = 0;
							while (front_p <= rear_p)
										std::cout << arr[front_p++] <<", ";

						}
						std::cout <<"----- end of array\n";
		}
  return;
}











