#include <ctime>

struct Date
{
	int day;
	int month;
	int year;
};

Date setDate(int day, int month, int year)
{
	Date date;
	date.year = year;
	date.month = month;
	date.day = day;
	return date;
}

bool isToday(int day, int month, int year)
{
	time_t now = time(0);
	tm ltm;
	localtime_s(&ltm, &now);

	bool result = 1900 + ltm.tm_year == year &&
		1 + ltm.tm_mon == month &&
		ltm.tm_mday == day;

	return result;
}

bool isToday(int day, int month)
{
	time_t now = time(0);
	tm ltm;
	localtime_s(&ltm, &now);

	bool result = 1 + ltm.tm_mon == month &&
		ltm.tm_mday == day;

	return result;
}

bool isToday(Date date)
{
	time_t now = time(0);
	tm ltm;
	localtime_s(&ltm, &now);

	bool result = 1900 + ltm.tm_year == date.year &&
		1 + ltm.tm_mon == date.month &&
		ltm.tm_mday == date.day;

	return result;
}
