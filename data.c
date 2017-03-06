#include<data.h>
int setData(int anno, int mese, int giorno, recMESSAGE *pn ){

	int anwser = 0;
	
	if((mese<12) && (mese>1)) (*pn).data.mese = mese;
	else return anwser;

	if((giorno<32) && (giorno>1))(*pn).data.giorno = giorno;
	else return anwser;
	
	(*pn).data.anno = anno;
	
	return (anwser=1);
}

