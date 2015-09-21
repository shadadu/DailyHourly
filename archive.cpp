#include <cstdlib>
#include <iostream>
#include <fstream>
#include "ticker.h"
#include "archive.h"
#include <string>
#include <vector>

using namespace std;

void archive::InsertInArchive(string DateTime, string News )
{
	TimeStamped.insert(make_pair(DateTime, News));
}

map<string, string> archive::GetTimeStamped()
{
	return TimeStamped;
}
