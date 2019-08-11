#ifndef __TV__H__
#define __TV__H__
#include <iostream>
using namespace std;

class Tv
{
	friend class Remote;
	

public:
	enum{Off, On};
	enum{MinVal,MaxVal = 20};
	enum{Antenna, Cable};
	enum{TV,DVD};
	
	//TV的构造函数
	Tv(int s = Off, int mc = 125) :state(s),volume(5),maxchannel(mc),channel(2),mode(Cable),input(TV){}
public:
	void onoff() { state = (state == On) ? Off : On; } //state是on吗，如果是state==off, 不是的话state==on。
	bool ison()const { return state == On; } //当stat==on时反回true。
	bool volup();
	bool voldown();
	void chanup();
	void chandown();
	void set_mode() { mode = (mode == Antenna) ? Cable : Antenna;}
	void set_input() { input = (input == TV) ? DVD : TV; }
	void settings()const; //display all settings

private:
	int state;		//on or off
	int volume;		//assumed to be digitized
	int maxchannel;	//maximum number of channels
	int channel;	//current channel setting
	int mode;		//broadcast or cable
	int input;		//Tv or DVD
};



#endif