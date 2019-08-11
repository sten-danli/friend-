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
	
	//TV�Ĺ��캯��
	Tv(int s = Off, int mc = 125) :state(s),volume(5),maxchannel(mc),channel(2),mode(Cable),input(TV){}
public:
	void onoff() { state = (state == On) ? Off : On; } //state��on�������state==off, ���ǵĻ�state==on��
	bool ison()const { return state == On; } //��stat==onʱ����true��
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