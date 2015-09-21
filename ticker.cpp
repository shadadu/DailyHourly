#include <cstdlib>
#include <iostream>
#include <vector>
#include <string>
#include "ticker.h"
#include "archive.h"


using namespace std;

void ticker:: ScrapeURL()
{

}

void ticker::SetSoureName(string s)
{
	sourceName = s;
}

string ticker::GetSourceName()
{
	return sourceName;
}

void ticker::SetSourceURL(string s)
{
	sourceURL = s;
}

string ticker::GetSourceURL()
{
	return sourceURL;
}

void ticker::SetSourceID(int x)
{
	sourceID = x;
}

int ticker::GetSourceID()
{
	return sourceID;
}

vector<string> ticker::GetInstantNews()
{
	return InstantNews;
}

map<string, string> ticker::GetTimeStamped()
{
	return ActiveArchive.GetTimeStamped();
}

size_t ticker::printout(size_t j, size_t k, vector<char> & tempchars)
{
	size_t MaxLine = 50;
	while (k < MaxLine)
	{

		if (k == (MaxLine - 1) && tempchars[j] != ' ')
		{
			cout << '-';

		}
		else{
			cout << tempchars[j] << endl;
			k++;
		}
		j++;
	}
	cout << '\n';
	k = 0;
	return j;
}

void ticker::DisplayNews(size_t i)
{
	vector<char> tempchars(InstantNews[i].begin(), InstantNews[i].end());
	
	size_t k = 0;
	size_t j = 0;
	while (j < tempchars.size())
	{
		j = printout(j, k, tempchars);	
		
	}

}




