#include <string>
#include <vector>
#ifndef USERINPUT_H_INCLUDED
#define USERINPUT_H_INCLUDED

using namespace std;

class UserInput
{
	string QuitOrNot;

public:
	UserInput();

	UserInput(string);
	

	~UserInput();
	void SetQuitOrNot(string);
	string GetQuitOrNot();
	
};

#endif
