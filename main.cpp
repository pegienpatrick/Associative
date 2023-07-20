#include <iostream>

#include "associative.h"

int main()
{


associative student;

student["patrick"]=98.0;
student["Joan"]=99;
student["James"]=50.8;
student["Dennis"]=78.9;
student["lawrence"]=67.8;
student["Mercy"]=67.9;
student["eliphas"]=98.7;
student["eva"]=40.0;

student["eva"]+=20;

student["patrick"]=85.5;
student["Mercy"]+=5.2;


string names[]={"patrick","Joan","James","Dennis","lawrence","Mercy","eliphas","eva"};

for(string me:names)
{
	cout<<"\n\n Marks for "<<me<<" is "<<student[me];
}



cout<<"\n\n";





	return 0;
}