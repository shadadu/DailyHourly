#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include "UserInput.h"

using namespace std;

UserInput::UserInput(){}

UserInput::UserInput(string s)
{

}

UserInput::~UserInput(){}

void UserInput::SetQuitOrNot(string s)
{
	QuitOrNot = s;
}
string UserInput::GetQuitOrNot()
{
	return QuitOrNot;
}