
#include <string>
#include "associative.h"

using namespace std;

associative::associative()
{
	head=NULL;
}

associative::~associative()
{
	node * current=head;
	node * linked=NULL;
	while(current!=NULL)
	{
		linked=current->next;
		delete current;
		current=linked;
	}

}

void associative::addindex(string index)
{
node * me=new node();
me->index=index;
me->marks=0.0;
me->next=NULL;

if(head==NULL)
{
head=me;
}
else
{
node * home=head;
while(home!=NULL)
{
	if(home->next==NULL)
	{
		home->next=me;
		break;
	}
	home=home->next;
}
}
}

bool associative::indexfound(string index)
{
	bool res=false;
node * home=head;
while(home!=NULL)
{
	if(home->index==index)
	{
		res=true;
		break;
	}
	home=home->next;
}
	return res;
}


double & associative::operator [] (string index)
{
	if(!indexfound(index))
	{
		addindex(index);
	}
	
double * me=new double();
node * home=head;
while(home!=NULL)
{
	if(home->index==index)
	{
		me=&home->marks;
		break;
	}
	home=home->next;
}

return *me;
}