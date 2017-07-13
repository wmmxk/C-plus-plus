#include <iostream>
#include <cctype>
#include "queue.h"

using namespace std;

int main()
{

  Queue qe;
		int choice, item;
		cout << "Capicity of the queue is 4. \n";
		do
		{
    cout << "1: push. 2: pop out. 3: Display. 4: Quit\n";

				cin >> choice;
				switch(choice)
				{
      case 1:
							  cout << "Input a integer\n";
									cin >> item;
									qe.push(item);
									break;
						case 2:
         qe.show();
									if (qe.pop(item))
									{
										    cout << "The item just poped out:\n"
							           << item
									         << "\n";
									}
									break;
						case 3:
						   qe.show();
						case 4:
						   break;
						default:
						   cout << "Wrong choice \n";
				}
		}
		while (choice !=4);
  return 0;

}
