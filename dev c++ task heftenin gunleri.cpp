#include<iostream>
using namespace std;
int main()
{
	int day;
	cout<<"Heftenin gununu daxil edin:";
	cin>>day;
	switch(day)
	{
		case 1:cout<<day<<"-Bazar ertesi"; break;
		case 2:cout<<day<<"-cersenbe axsami"; break;
		case 3:cout<<day<<"-cersenbe"; break;
		case 4:cout<<day<<"-cume axsami"; break;
		case 5:cout<<day<<"-cume"; break;
		case 6:cout<<day<<"-senbe"; break;
		case 7:cout<<day<<"-bazar"; break;
		default:cout<<day<<"-heftenin bele gunu yoxdur"
		<<endl;
	}
	return 0;
}

