typedef struct {
	//data
	recData data;
	recOra ora;
	//destinatario
	char nome_destinatario[100];
	//mittente
	char nome_mittente[100];
	//message
	char message[1000];
}recMESSAGE;

int setMessagio(char [], recMESSAGE*);
