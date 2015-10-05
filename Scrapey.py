import requests
from bs4 import BeautifulSoup

url = "http://www.nypost.com/news/"
r = requests.get(url)
soup = BeautifulSoup(r.content,"lxml")

TempList = []
date_data = soup.find_all("div", {"class":"entry-meta"})

for item in date_data:
	dateString = (item.text).replace("Published:","")
	TempList.append((dateString).strip())
	

TempList2 = []
news_data = soup.find_all("div", {"class":"entry-content"})

for item in news_data:
	TempList2.append((item.text).strip())
	

HeadLines = []
for count in xrange(len(TempList)):
	HeadLines.append([TempList[count],TempList2[count]])

for count in xrange(len(HeadLines)):
	print HeadLines[count][0],
	print ": ",
	print HeadLines[count][1],
	
	
	
   
    




