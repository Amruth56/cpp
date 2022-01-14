#include<iostream>
using namespace std;

string weekelyDay(int dayNum)
{
	string weekDay;
	
	switch(dayNum)
	{
		case 0:
			weekDay="Sunday";
			break;
		case 1:
			weekDay="Monday";
			break;
		case 2:
			weekDay="Tuesday";
			break;
		case 3:
			weekDay="Wednesday";
			break;
		case 4:
			weekDay="Thursday";
			break;
		case 5:
			weekDay="Friday";
			break;
		case 6:
			weekDay="Saturday";
			break;
		default:
			weekDay="Invalid";
			
	}
	return weekDay;
}

int main(){
	cout<<weekelyDay(0);
	return 0;
}
