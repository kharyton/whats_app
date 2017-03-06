#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<data.h>
#include<ora.h>
#include<mittente.h>
#include<destinatario.h>
#include<message.h>
#include<other_function.h>

static int const TRUE = 1;
static int const FALSE = 0;
static int const ERROR = -1;

//macrosss
#define EXIT_SUCCES TRUE
#define EXIT_FAILED ERROR

void OutPut(recMESSAGE*);

int main (void){
		
	recMESSAGE message1;

	//ORA
	int hh;
	int mm;	

	//DATA
	int anno;
	int mese;
	int giorno;

	//strings
	char mit[100];
	char des[100];
	char message[1000];

	//other
	char error;

	int boolean;

	//linker
	recMESSAGE *pn = &message1;	

	clearScreen(); 

	//INSERT DATA VALUES
	printf("\r\n Inserisci la data(anno) >>> \t ");
	scanf("%i",&anno);
	clearScreen();
	printf("\r\n Inserisci la data(mese) >>> \t");
	scanf("%i",&mese);
	clearScreen();
	printf("\r\n Inserisci la data(giorno) >>> \t");
	scanf("%i",&giorno);
	clearScreen();

	//SET DATA
	boolean = setData(anno, mese, giorno, pn);

	if (boolean==TRUE) printf("Data e' stata inserita correttamente \r\n");
	else errorExit();

	//clearing BOOLEAN
	boolean = FALSE;
	
	//INSERT TIME VALUES
	printf("Inserisci l'ora(ora) >>> \t");
	scanf("%i",&hh);
	clearScreen();
	printf("\r\n Inserisci l'ora(minuti) >>> ");
	scanf("%i",&mm);
	clearScreen();
	clearBuffer();
	
	

	//SET ORA
	boolean = setOra(hh, mm, pn);
	if (boolean==TRUE) printf("L'ora e' stata inserita correttamente \r\n");
	else errorExit();

	clearScreen();


	//SET MITTENTE
	printf("\r\n Inserisci il nome del Mittente >>> ");
	fgets(mit,100,stdin);

	boolean = setMittente(mit, pn);
	if (boolean==TRUE) printf("Il mittente e' stato inserito correttamente \r\n");
	else errorExit();

	//clearing BOOLEAN
	boolean = FALSE;
	
	
	clearScreen();
	clearBuffer();

	//SET DESTINATARIO
	printf("\r\n Inserisci il nome del Destinatario >>> ");
	fgets(des,100,stdin);
	
	boolean= setDestinatario(des, pn);
	if (boolean==TRUE) printf("Il destinatario e' stato inserito correttamente \r\n");
	else errorExit();	
	
	clearScreen();
	clearBuffer();
	clearScreen();

	//clearing BOOLEAN
	boolean = FALSE;
	
	//SET MESSAGIO
	
	printf("Inserisci il messagio\r\n");
	fgets(message,100,stdin);

	clearBuffer();

	boolean= setMessagio(message, pn);
	if (boolean==TRUE) printf("Il destinatario e' stato inserito correttamente \r\n");
	else errorExit();	
	
	//SHOW VALUES
		
	OutPut(pn);
	
	//SUCCES EXIT
	return 0;
}


void OutPut(recMESSAGE *pn){
		clearScreen();
		printf("-----------------------------------------\r\nLa data e' %i/%i/%i \r\nl'ora e' %i:%i \r\nNome mittente: %s\r\nNome destinatario : %s\r\nMessagio: %s\r\n-----------------------------------------\r\n",(*pn).data.anno, (*pn).data.mese, (*pn).data.giorno, (*pn).ora.hh, (*pn).ora.mm, (*pn).nome_mittente, (*pn).nome_destinatario, (*pn).message);
}

void errorExit(){
	perror("Programma verra sospeso \r\n");
	exit(EXIT_SUCCES);
}


void clearScreen(){
	system("clear");
}

void clearBuffer(){
	printf("Enter to continue\r\n");
	char error = getchar();
	fflush(stdin);	
}







