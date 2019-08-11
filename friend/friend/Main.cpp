#include<iostream>
using namespace std;
#include "tv.h"
#include "remote.h"

int main()
{
	Tv s42;
	cout << " Initial settings for 42\" TV:\n";
	s42.settings();

	cout << "\nAdjusted settings for 42\"TV:\n";
	s42.onoff();
	s42.chanup();
	s42.settings();
	cout << "--------------------------------------\n";
	
	Remote grey;
	grey.onoff(s42);
	grey.onoff(s42);
	grey.set_chan(s42, 10);
	s42.settings();
	cout << "--------------------------------------\n";

	Tv s62;
	s62.onoff();
	s62.set_mode();
	
	s62.settings();

	




}