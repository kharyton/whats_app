#include<mittente.h>
int setMittente(char mit[], recMESSAGE *pn){
	if(strcpy((*pn).nome_mittente, mit)) return TRUE;
	else return FALSE;
}
