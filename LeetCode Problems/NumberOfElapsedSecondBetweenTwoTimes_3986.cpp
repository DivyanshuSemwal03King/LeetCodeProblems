#include <iostream>
#include <string>

using namespace std;

int secondsBetweenTimes(string startTime, string endTime)
{
    int totalSeconds = 0;

    int startHours = (startTime[0] - '0') * 10 + (startTime[1] - '0');
    int startMinutes = (startTime[3] - '0') * 10 + (startTime[4] - '0');
    int startSecond = (startTime[6] - '0') * 10 + (startTime[7] - '0');

    int totalStartSeconds = startHours * 3600 + startMinutes * 60 + startSecond;

    int EndHours = (endTime[0] - '0') * 10 + (endTime[1] - '0');
    int EndMinutes = (endTime[3] - '0') * 10 + (endTime[4] - '0');
    int EndSecond = (endTime[6] - '0') * 10 + (endTime[7] - '0');

    int totalEndSeconds = EndHours * 3600 + EndMinutes * 60 + EndSecond;

    return totalSeconds = totalEndSeconds - totalStartSeconds;
}

int main(){

    string s ="01:00:00";
    string e = "01:00:25";

    cout<<secondsBetweenTimes(s,e);
    return 0;
}