__author__ = 'shadrack'
import requests
from bs4 import BeautifulSoup

urls_list = {"nypost":"http://www.nypost.com/news/", "nytimes":"http://international.nytimes.com"}
#urls_list = {"nypost":"http://www.nypost.com/news/"}
dates_tags = {"nypost":"div", "nytimes":"time"}
dates_class = {"nypost":"entry-meta", "nytimes":"timestamp"}
summary_tags = {"nypost":"div", "nytimes":"p"}
summary_class = {"nypost":"entry-content", "nytimes":"summary"}

for dict in urls_list:
    url=urls_list[dict]
    r = requests.get(url)
    #soup = BeautifulSoup(r.content,"lxml")
    soup = BeautifulSoup(r.content,"html.parser")
    TempList = []
    date_data = soup.find_all(dates_tags[dict], {"class":dates_class[dict]})

    # site-specific parsings
    if dict == "nytimes":
        currentdate = soup.find_all("li",{"class":"date"})
        a = str(currentdate)
        curr_date = a[2:][1+a[2:].find('>'):a[2:].find('<')]

    for item in date_data:
        print item.text
        if dict == "nypost":
            dateString = (item.text).replace('Published:',"")
        else:
            dateString = item.text

        if dict == "nytimes":
            dateString = curr_date + "| " + dateString

        TempList.append((dateString).strip())

    ## end site-specific parsings

    TempList2 = []
    news_data = soup.find_all(summary_tags[dict], {"class":summary_class[dict]})

    for item in news_data:
        TempList2.append((item.text).strip())


    HeadLines = []
    for count in xrange(len(TempList)):
        HeadLines.append([TempList[count],TempList2[count]])


    for count in xrange(len(HeadLines)):
        print HeadLines[count][0],
        print ": ",
        print HeadLines[count][1],
        print '\n'


















