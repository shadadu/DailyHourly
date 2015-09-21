#include <cstdlib>
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <thread>
#include <mutex>
#define _USE_MATH_DEFINES
#include "math.h"
#include <ctime>
#include "archive.h"
#include "ticker.h"


using namespace std;



void dh()
{
	int NumberTickers;
	vector<ticker> TickerVector(NumberTickers);
	for (int i = 0; i < NumberTickers; i++)
	{
		TickerVector.push_back(ticker());
	}

	string filename;
	ofstream ToDrive;
	ToDrive.open(filename);
	for (size_t j = 0; j < NumberTickers; j++)
	{
		map<string, string> NewsDataObject = TickerVector[j].GetTimeStamped();
		map<string, string>::iterator it = NewsDataObject.begin();
		while (it != NewsDataObject.end())
		{
			ToDrive <<TickerVector[j].GetSourceID()<<"\t,\t"<< it->first << "\t,\t" << it->second << endl;
		}

	}
	ToDrive.close();
	
	cout << "dh function\n";	
}