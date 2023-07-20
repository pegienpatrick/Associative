#ifndef associative_h
#define associative_h
#include <iostream>
#include<string>

using namespace std;

class associative
{
	struct node
	{
		double marks;
		string index;
		struct node * next;
	};

private:
node * head;
public:
	associative();

	~associative();

	void addindex(string index);

	bool indexfound(string index);

	double & operator [] (string index);

};
#endif