#ifndef TICKER_H_INCLUDED
#define TICKER_H_INCLUDED
#include <vector>
#include <string>

using namespace std;


class ticker
{
	string sourceName;
	string sourceURL;
	int sourceID;
	vector<string> InstantNews;
	string NewsDate;
	archive ActiveArchive;


public:
	void ScrapeURL();
	void SetSoureName(string );
	string GetSourceName();
	void SetSourceURL(string);
	string GetSourceURL();
	void SetSourceID(int);
	int GetSourceID();
	vector<string> GetInstantNews();
	void SetInstantNews(string);
	size_t printout(size_t, size_t, vector<char> &);
	void DisplayNews(size_t );
	string GetNewsDate();
	map<string, string> GetTimeStamped();
	void SetNewsDate(string);
	void WriteArchiveToDatabase();

	

	

};


#endif