#include<destinatario.h>
int setDestinatario(char des[], recMESSAGE *pn){
	if(strcpy((*pn).nome_destinatario, des)) return TRUE;
	else return FALSE;
	
}
