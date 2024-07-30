#include <iostream>
using namespace std;
int main()
{
	cout << "edded daxil edin - ";
	int num5;
	cin >> num5;
	cout << "sola surusmeni daxil edin - ";
	int sur;
	cin >> sur;
	int uzun5 = 0;
	int i5 = num5;
	do
	{
		uzun5++;
		i5 /= 10;
	} while (i5 > 0);
	int uz5 = 1;
	i5 = uzun5;
	do
	{
		uz5 *= 10;
		i5--;

	} while (i5 > 1);

	do
	{
		int q = num5 / uz5;
		num5 -= q * uz5;
		num5 *= 10;
		num5 += q;
		sur--;
	} while (sur > 0);
	cout << num5 << endl;








	cout << "gunu daxil edin - ";
	int gun;
	cin >> gun;
	cout << "ayi daxil edin - ";
	int ay;
	cin >> ay;
	cout << "il daxil edin - ";
	int il;
	cin >> il;
	long long int iltogun = (il-1) * 365 + (il-1) / 4-(il-1)/100+(il-1)/400;
	int aytogun = 0;
	
	 if (ay > 1) {
		aytogun += 31;

	}
	 if (ay > 2 && (il % 4 == 0&&il%100!=0)||il%400==0) {
		aytogun += 29;

	}
	else if (ay > 2 && il % 4 != 0)
		aytogun += 28;
	 if (ay > 3)
		aytogun += 31;
	 if (ay > 4)
		aytogun += 30;
	 if (ay > 5)
		aytogun += 31;
	 if (ay > 6)
		aytogun += 30;
	 if (ay > 7)
		aytogun += 31;
	 if (ay > 8)
		aytogun += 31;
	 if (ay > 9)
		aytogun +=  30;
	 if (ay > 11)
		aytogun +=  31;
	 if (ay > 12)
		aytogun  += 30;

	long long gunlercemi = iltogun + aytogun + gun;
	if (gunlercemi%7==1)
	{
		cout << "Monday";
	}
	else if (gunlercemi % 7 == 2)
	{
		cout << "Tuesday";
	}
	else if (gunlercemi % 7 == 3)
	{
		cout << "Wendsday";
	}
	else if (gunlercemi % 7 == 4)
	{
		cout << "Thursday";
	}
	else if (gunlercemi % 7 == 5)
	{
		cout << "Friday";
	}
	else if (gunlercemi % 7 == 6)
	{
		cout << "Saturday";
	}
	else if (gunlercemi % 7 == 0)
	{
		cout << "Sunday";
	}
	cout << endl << gunlercemi;








}

