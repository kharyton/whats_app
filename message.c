#include<message.h>
int setMessagio(char message[], recMESSAGE *pn){
	if(strcpy((*pn).message, message)) return TRUE;
	else return FALSE;
}

