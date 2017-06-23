#include<iostream>
#include<fstream>

using namespace std;




class Employee

{
        int id,salary;
	public:
	   Employee() {}
	   ~Employee() {}

	   void setData()
	      {
                cout << "\n Enter ID: ";
		cin >> id;
		cout << "\n Enter salary: ";
		cin >> salary;
	      }
           void display()
	      {
                cout << "\n ID: " <<id;
		cout << "\n Salary: " << salary<<"\n";
	      }
};

int main()
{
       int arr[]={10,20,30,40,50};

       fstream fobj("one.dat",ios::out);
       fobj.write((char *) & arr, sizeof(arr));
       fobj.close();

       // read in the array
       fobj.open("one.dat",ios::in);
       int arr2[5];
       fobj.read((char *)&arr2,sizeof(arr2));

       for (int i=0;i<5; i++)
       {
	       cout<<arr2[i] << "\n";
       }

       fobj.open("one.dat",ios::out);
       Employee e1;

       e1.setData();
       fobj.write((char *) & e1,sizeof(e1));
       fobj.close();
       
       e1.display();

       //read in the saved object to another object and display 
       fobj.open("one.dat",ios::in);
       Employee e2;
       fobj.read((char *)&e2, sizeof(e2));

       e2.display();
       fobj.close();
       return 0;
}

