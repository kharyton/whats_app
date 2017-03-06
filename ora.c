#include<ora.h>
int setOra(int hh, int mm, recMESSAGE *pn){
	
	int anwser = 0;
	
	if((hh<=24) && (hh>=1)) (*pn).ora.hh = hh;
	else return anwser;

	if((mm<=59) && (mm>=0)) (*pn).ora.mm = mm;
	else return anwser;

	return (anwser = 1);
}
