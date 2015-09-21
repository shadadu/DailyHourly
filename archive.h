#ifndef ARCHIVE_H_INCLUDED
#define ARCHIVE_H_INCLUDED
#include <string>
#include <map>

using namespace std;

class archive
{
	map<string, string> TimeStamped;
	
public:
	void InsertInArchive(string, string);
	map<string,string> GetTimeStamped();
	string GetNews();
	string GetDateTime();
	
};



#endif