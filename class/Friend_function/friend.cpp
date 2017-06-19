#include<iostream>

using namespace std;

class Second;

class First
{
	int val1;

	public:

	void setValue(int tval1)
	{
		val1=tval1;
	}

	void display()
	{
		cout<<"\n The Value of First Class is:"<<val1<<"\n";
	}

	friend Second sum(First fobj,Second sobj);
};

class Second
{
	int val2;

	public:

	void setValue(int tval2)
	{
		val2=tval2;
	}

	void display()
	{
		cout<<"\n The Value of Second Class is:"<<val2<<"\n";
	}

	friend Second sum(First fobj,Second sobj);
};

Second sum(First fobj,Second sobj)
{
	Second rel;

	rel.val2=fobj.val1+sobj.val2;

	return(rel);
}

int main()
{
	First f1;
	Second s1;

	f1.setValue(100);
	s1.setValue(200);

	f1.display();
	s1.display();

	Second rel=sum(f1,s1);

	rel.display();
	return 0;
}
