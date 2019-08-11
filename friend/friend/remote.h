#ifndef __REMOTE__H__
#define __REMOTE__H__
#include <iostream>
#include"tv.h"
using namespace std;


class Remote 
{
private:
	int mode;
public:
	Remote(int m = Tv::TV) : mode(m) {};
	bool volup(Tv& t) { return t.volup();}
	bool voldown(Tv& t) { return t.voldown(); }
	void onoff(Tv& t) { t.onoff();}
	void chandown(Tv& t) { t.chandown(); }
	void chanup(Tv& t) { t.chanup(); }
	void set_chan(Tv& t, int c) { t.channel = c; }
	void set_mode(Tv& t) { t.set_mode(); }
	void set_inpt(Tv& t) { t.set_input(); }
};




#endif