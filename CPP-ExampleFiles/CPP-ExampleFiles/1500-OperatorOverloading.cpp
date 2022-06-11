#include <iostream>
#include <cstdio>
using namespace std;
class TimeSpan
{
private:
	int ElapsedSeconds;
	string FormatHMS();
public:
	TimeSpan(int h, int m, int s)
	{
		ElapsedSeconds = (long)h * 3600 + (long)m * 60 + s;
	}
	void operator += (TimeSpan t);
	void displayDuration();
};
void TimeSpan::operator +=(TimeSpan t)
{
	this->ElapsedSeconds += t.ElapsedSeconds;
}
string TimeSpan::FormatHMS()
{
	int h, m, s;
	long t = ElapsedSeconds;
	h = t / 3600;
	t = t - h * 3600;
	m = t / 60;
	t = t - m * 60;
	s = t;
	char res[80];
	sprintf(res, "%02d:%02d:%02d", h, m, s);
	string ress(res);
	return ress;
}
void TimeSpan::displayDuration()
{
	cout << "Elapsed Time : " << FormatHMS() << "\n";
}
int main()
{
	TimeSpan timeTakenA(0, 30, 30), timeTakenB(1, 20, 15);
	timeTakenA.displayDuration();
	timeTakenA += timeTakenB;
	timeTakenA.displayDuration();
}

