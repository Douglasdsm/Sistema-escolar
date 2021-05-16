#include<stdio.h>
#include<string.h>
#include<conio2.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
#include<stdbool.h>
void Rolagen(int cont){

	textbackground(31);
	textcolor(19);
	int ajuste = 28;
if(cont >= 6){
	//printf("VALOR DE CONT E %d \n ",cont);
	//system("pause");
	ajuste = cont+20;
	textbackground(31);
	textcolor(19);
	clrscr();
}
gotoxy(8,8);
int c;
for( c=2; c<80; c++)
{
gotoxy(c,3);
printf("%c",205);
gotoxy(c,1);
printf("%c",205);
gotoxy(c,ajuste);
printf("%c",205);
gotoxy(c,ajuste-2);
printf("%c",205);

	
}
// LINHAS VERTICAIS
int l;
for(l = 2; l < ajuste; l++)
{
	gotoxy(1,l);
	printf("%c",186);
	gotoxy(80,l);
	printf("%c",86);
	gotoxy(80,l);
	printf("%c",186);
	
}
// CANTOS 
	gotoxy(1,1);
	printf("%c",201);
	gotoxy(1,ajuste-2);
	printf("%c",205);
	gotoxy(80,1);
	printf("%c",187);
	gotoxy(80,ajuste-2);
	printf("%c",185);
	gotoxy(1,ajuste-2);
	printf("%c",204);
	gotoxy(80,1);
	printf("%c",187);
	gotoxy(1,ajuste);
	printf("%c",200);
	gotoxy(1,3);
	printf("%c",204);
	gotoxy(80,3);
	printf("%c",185);
	gotoxy(80,ajuste);
	printf("%c",188);
}
void PrintarTurma(int cont,char teste[],int Num){
typedef struct cadastroTurma{
int Codigo;
int turma;
char sala[10];
char horario[25];
char disciplina[25]	;	
}turma;
int x = 0;
turma vetores;
turma registro;
turma vetor[cont];

//system("pause");
//system("pause");
int valor = cont;
	int t = 0;
	int r = 9;
		//Rolagen(26+valor);
		FILE * arq = fopen("C:\\Sistema\\Turmas","rb");
		int ct = 0 ;
		while(x <= valor ){
			fseek(arq,x*sizeof(turma),SEEK_SET);
			fread(&registro,sizeof(turma),1,arq);
			strupr(registro.disciplina);
			//printf("\n %s = %s",registro.disciplina,teste);
			r = strcmp(registro.disciplina,teste);
			if(r == 0){
				vetor[ct].Codigo = registro.Codigo;
				vetor[ct].turma = registro.turma;
				strcpy(vetor[ct].sala,registro.sala);
				strcpy(vetor[ct].horario,registro.horario);
				strcpy(vetor[ct].disciplina,registro.disciplina);
				ct++;
				
				
				
				
			}
			x++;
			
		}
	
	fclose(arq);
	
	Rolagen(ct);
	
		
	//===============================================================================================================================================================
		FILE * arquivo = fopen("C:\\Sistema\\Turmas","rb");
	if(arquivo == NULL){
		printf("\n ERRO AO ABRIR O ARQUIVO2");
	}else{
		textcolor(23);
		gotoxy(2,8);
		printf("CODIGO");
		gotoxy(9,8);
		textcolor(22);
		printf("|");
		gotoxy(12,8);
		textcolor(26);
		printf("TURMA");
		textcolor(20);
		gotoxy(33,8);
		printf("|");
		textcolor(19);
		gotoxy(35,8);
		printf("HORARIO");
		gotoxy(50,8);
		printf("|");
		textcolor(20);
		gotoxy(52,8);
		printf("SALA");
		textcolor(22);
		gotoxy(60,8);
		printf("|");
		textcolor(23);
		gotoxy(62,8);
		printf("DISCIPLINA");
		int k =0;
		int p;
		for( p = 4; p < ct + 4; p++ ){
		fseek(arquivo,p*sizeof(turma),SEEK_SET);
		fread(&vetor,sizeof(turma),1,arquivo);
		gotoxy(5,5+p);
		textcolor(23);
		printf("%d",vetor[k].Codigo);
		gotoxy(9,5+p);
		textcolor(22);
		printf("|");
		textcolor(26);
		gotoxy(11,5+p);
		printf(" %d",vetor[k].turma);
		textcolor(20);
		gotoxy(33,5+p);
		printf("|");
		textcolor(19);
		gotoxy(35,5+p);
		printf("%s",vetor[k].horario);
		gotoxy(50,5+p);
		printf("|");
		textcolor(20);
		gotoxy(54,5+p);
		printf("%s",vetor[k].sala);
		textcolor(22);
		gotoxy(60,5+p);
		printf("|");
		textcolor(23);
		gotoxy(62,5+p);
		printf("%s",vetor[k].disciplina);
		k++;
}
		fclose(arquivo);
		printf("\n");
		
	
	
}//============================================================================================================================================MENU SAIR OU NOVA BUSCA
int lado = 1;
	int controle = 0;
	bool print = true;
	do{
		if(print == true){
	textbackground(31);
	textcolor(23);
	gotoxy(3,4);
	printf("DISCIPLINA:");
	gotoxy(16,4);
	textbackground(46);
	printf("                                      ");
	gotoxy(16,4);
	textcolor(16);
	printf("%s",teste);	
	gotoxy(3,6);
	textbackground(31);
	textcolor(23);
	printf("TURMA:");
	gotoxy(12,6);
	textbackground(46);
	printf("                                      ");
	gotoxy(12,6);
	textcolor(16);
	printf("%d",Num);
	textbackground(31);
	print=false;
		}
		void retangulo(int x, int y,int c, int l,int txt,int tb);
		void nomeposicionado(int x,int y,char nome[40],int cor);
		if(lado ==1){
			retangulo(25,10+cont,16,2,20,31);
			gotoxy(26,11+cont);
			textcolor(20);
			printf("NOVA CONSULTA");
		}else{
			retangulo(25,10+cont,16,2,19,31);
			gotoxy(26,11+cont);
			textcolor(19);
			printf("NOVA CONSULTA");
		}
		if(lado == 2){
			retangulo(42,10+cont,10,2,20,31);
			gotoxy(43,11+cont);
			textcolor(20);
			printf("SAIR");
		}else{
			retangulo(42,10+cont,10,2,19,31);
			gotoxy(43,11+cont);
			textcolor(19);
			printf("SAIR");
		}
		if((controle == 13)&&(lado == 1)){// Salvando Dados
			controle = 12;
			void BuscarTurma();
			BuscarTurma();
		
			
		}
		if((controle == 13)&&(lado==2)){
			controle = 12;
			break;
			//a = 1;
		}
		if(controle !=12){
		
		controle = getch();
		controle = getch();
		
		if((controle == 77)&&(lado ==1)){
			lado++;
		}
		if((controle == 75)&&(lado == 2)){
			lado--;
		}
	}
	}while(controle != 12);





}


 BuscarTurma(){
typedef struct cadastroTurma{
int Codigo;
int turma;
char sala[10];
char horario[25];
char disciplina[25]	;	
}turma;
turma vetores;
int ct = 0;
	int p = 0;
	int cont = 0;
	
	FILE * ver = fopen("C:\\Sistema\\Turmas","rb");
	if(ver == NULL){
		printf("\n ERRO AO ABRIR O ARQUIVO");
	}else{
	
		fseek(ver,-sizeof(turma),SEEK_END);
		fread(&vetores,sizeof(turma),1,ver);
		cont = vetores.Codigo;
		cont = cont +1;
	}fclose(ver);
	turma vetor[cont];
textbackground(31);
	textcolor(19);
	clrscr();


Rolagen(1);

		gotoxy(28,2);
		textcolor(20);
	printf("LISTRANDO Turmas");
	//textcolor(26);
	//=======================================================================================================================================================================
	int Nturma;
	char teste[25];
	// BUSCAR DISCIPLINA ====================================================================================================================================================
	textbackground(31);
	gotoxy(3,4);
	textcolor(23);
	printf("DISCIPLINA:");
	gotoxy(16,4);
	textbackground(46);
	printf("                                      ");
	gotoxy(16,4);
	//textbackground(31);
	textcolor(16);
	fflush(stdin);
	scanf("%[^\n]s",&teste);
	strupr(teste);
	gotoxy(16,4);
	printf("%s",teste);				
	// BUSCAR NUMERO DA TURMA ===========================================================================================================================================
textbackground(31);
	gotoxy(3,6);
	textcolor(23);
	printf("TURMA:");
	gotoxy(12,6);
	textbackground(46);
	printf("                                      ");
	
	gotoxy(12,6);
	textcolor(16);
	fflush(stdin);
	scanf("%d",&Nturma);
	strupr(teste);
	
	gotoxy(12,6);
	printf("%d",Nturma);
	textbackground(31);
	// COPIAR ARQUIVOS DESEJADOS
	
	turma registro;
	FILE * arq = fopen("C:\\Sistema\\Turmas","rb");
	if(arq == NULL ){
		//achado = 1;
	}else{
		
		int valor = 1;
		int r;
		fseek(arq,-sizeof(turma),SEEK_END);
		fread(&registro,sizeof(turma),1,arq);
		valor = registro.Codigo;
		//printf("VALOR E %d ",valor);
		
		PrintarTurma(valor,teste,Nturma);
}
}

void tela()
{
	textbackground(31);
	textcolor(19);
	clrscr();
	// LINHAS HORIZONTAIS
	int c=0;
for(c=2; c<80; c++)
{
gotoxy(c,3);
printf("%c",205);
gotoxy(c,1);
printf("%c",205);
gotoxy(c,26);
printf("%c",205);
gotoxy(c,24);
printf("%c",205);

	
}
// LINHAS VERTICAIS
int l;
for(l = 2; l < 26; l++)
{
	gotoxy(1,l);
	printf("%c",186);
	gotoxy(80,l);
	printf("%c",86);
	gotoxy(80,l);
	printf("%c",186);
	
}
// CANTOS 
	gotoxy(1,1);
	printf("%c",201);
	gotoxy(1,24);
	printf("%c",205);
	gotoxy(80,1);
	printf("%c",187);
	gotoxy(80,24);
	printf("%c",185);
	gotoxy(1,24);
	printf("%c",204);
	gotoxy(80,1);
	printf("%c",187);
	gotoxy(1,26);
	printf("%c",200);
	gotoxy(1,3);
	printf("%c",204);
	gotoxy(80,3);
	printf("%c",185);
	gotoxy(80,26);
	printf("%c",188);


}
void Cadastro(){
	typedef struct Cadastro{
	int Codigo;
	char nome[120];
	char RGA[14];
	char data[12];
	char telefone[22];
	char nomePai[120];
	char nomeMae[120];
	char email[120];
	char endereco[120];
	
}Dad;
struct acesso{
	char login[15];
	char senha[15];
	int cod;
};

struct acesso usuario;
struct acesso d;
int tdate = 0;
		Dad Dados;
	 strcpy(Dados.data,"NN/NN/NNNN");
	tela();
	
	//retangulo(x,y,c,l,txt,tb)
	//CADASTRO NOME
	
	gotoxy(3,4);
	textcolor(23);
	printf("NOME:");
	gotoxy(8,4);
	textbackground(46);
	printf("                                      ");
	gotoxy(8,4);
	textcolor(16);
	fflush(stdin);
	scanf("%[^\n]s",&Dados.nome);
	strupr(Dados.nome);
	gotoxy(8,4);
	printf("%s",Dados.nome);
	//CADASTRO RGA
	int chaveMestre = 0;
	textbackground(31);
	gotoxy(48,4);
	textcolor(23);
	printf("RGA:");
	gotoxy(52,4);
	textbackground(46);
	printf("             ");
	//
	do{
	
	
	int chave = 0;
	int i,j;
	j = 0;
	chave = 0;
	do{
	if(j !=0){
			
			gotoxy(52,4);
			textbackground(46);
			printf("             ");
			gotoxy(52,5);
			textcolor(14);
			textbackground(36);
			printf("RGA INVALIDO: ");
			gotoxy(52,4);
			textbackground(46);
			chave = 0;
		}  // 201719a81010
	gotoxy(52,4);
	textcolor(16);
	fflush(stdin);
	scanf("%[^\n]s",&Dados.RGA);
	char c;
	for(i = 0; i < 12; i++){
		
		c = Dados.RGA[i];
		if(isdigit(c) != 0){
			//printf("[%d]",i);
			
		}else{
			chave = 1;
		}
		
	}
	
	j++;
	gotoxy(52,6);
	
}while(chave !=0);
// TESTANDO RGA 
// TESTANDO ANO
// RGA O ANO NAO PODE SER SUPERIOR A 2018
int chave1 = 0;
int chave2 = 0;
int chave3 = 0;
int chave4 = 0;
int chave5 = 0;
char dado[15];
if(chave == 0){

strncpy(dado,Dados.RGA,4);
int verificar = atoi(dado);

for(i = 2014; i < 2019; i++){
	if(verificar == i){
		i = 3000;
		chave1= 0;
	}else{
		chave1 = 1;
	}
}
if(chave1 == 0){
	
}else {
			gotoxy(52,4);
			textbackground(46);
			printf("             ");
			gotoxy(52,5);
			textcolor(14);
			textbackground(36);
	printf("ANO RGA INCORRETO");
			gotoxy(52,4);
			textbackground(46);
}
// Verificar semestre 
if(chave1 == 0){

int verificar2 = 0;
char dado2[15];
chave2 = 0;
strncpy(dado,Dados.RGA,5);
strncpy(dado2,Dados.RGA,5);
dado2[4] = '0';
verificar = atoi(dado);
verificar2 = atoi(dado2);
verificar = verificar - verificar2;
if((verificar == 1)||(verificar ==2) )
{
	chave2 = 0;
	//printf("\n SEMESTRE %d \n ",verificar);
}else{
	chave2 = 1;
			gotoxy(52,4);
			textbackground(46);
			printf("             ");
			gotoxy(52,5);
			textcolor(14);
			textbackground(36);
	printf("SEMESTRE DO RGA INCORRETO");
		gotoxy(52,4);
			textbackground(46);
}
// TESTANDO O CAMPUS
if(chave2 == 0){
verificar2 = 0;
strncpy(dado,Dados.RGA,6);
strncpy(dado2,Dados.RGA,6);
dado2[5] = '0';
verificar = atoi(dado);
verificar2 = atoi(dado2);
verificar = verificar - verificar2;
if((verificar == 1)||(verificar ==2) ){
	if(verificar == 1 ){
		gotoxy(68,6);
		printf("CAMPUS DE VG");
		
	}
	if(verificar == 2){
		gotoxy(64,6);
		printf("CAMPUS DE CUIABA");
	}
	chave3 =0;
}else{
			gotoxy(52,4);
			textbackground(46);
			printf("             ");
			gotoxy(52,5);
			textcolor(14);
			textbackground(36);
	printf("CAMPUS NAO CADASTRADO");
		gotoxy(52,4);
			textbackground(46);
	chave3 =1;
}
//TESTANDO CURSO
if(chave3 == 0){
verificar2 = 0;
strncpy(dado,Dados.RGA,9);
strncpy(dado2,Dados.RGA,9);
dado2[6] = '0';
dado2[7] = '0';
dado2[8] = '0';
verificar = atoi(dado);
verificar2 = atoi(dado2);
verificar = verificar - verificar2;	
if((verificar > 900)&&(verificar < 906)){
	if(verificar == 901){
		gotoxy(56,7);
		printf("ENGENHARIA DE COMPUTACAO");
	}
	if(verificar == 902){
		gotoxy(53,7);
		printf("ENG DE CONTROLE E AUTOMACAO");
	}
	if(verificar == 903){
		gotoxy(61,7);
		printf("ENGENHARIA DE MINAS");
	}
	if(verificar == 904){
		gotoxy(56,7);
		printf("ENGENHARIA DE TRANSPORTE");
	}
	if(verificar == 905){
		gotoxy(62,7);
		printf("ENGENHARIA QUIMICA");
	}
	chave4 = 0;
}else{
			gotoxy(52,4);
			textbackground(46);
			printf("             ");
			gotoxy(52,5);
			textcolor(14);
			textbackground(36);
	printf("CURSO INEXISTENTE ");
			gotoxy(52,4);
			textbackground(46);
	chave4 = 1;
}
//VERIFICAR NUMERO DO ALUNO
if(chave4 == 0 ){
verificar2 = 0;
strncpy(dado,Dados.RGA,12);
strncpy(dado2,Dados.RGA,12);

dado2[9] = '0';
dado2[10] = '0';
dado2[11] = '0';
verificar = atoi(dado);
verificar2 = atoi(dado2);
verificar = verificar - verificar2;	
if(verificar < 36){

chave5 = 0;
}else{
			gotoxy(52,4);
			textbackground(46);
			printf("             ");
			gotoxy(52,5);
			textcolor(14);
			textbackground(36);
	printf("ALUNOS > 35");
	gotoxy(52,4);
			textbackground(46);
	chave5 = 1;
}





}
}
}
}
}
if(chave != 0){
	chaveMestre = 1;
	//printf("VALOR DE CHAVE1 MESTRE E %d",chaveMestre);
}
if(chave1 != 0){
	chaveMestre = 1;
	//printf("VALOR DE CHAVE2 MESTRE E %d",chaveMestre);
}
if(chave2 != 0){
	chaveMestre = 1;
	//printf("VALOR DE CHAVE3 MESTRE E %d",chaveMestre);
}
if(chave3 != 0){
	chaveMestre = 1;
	//printf("VALOR DE CHAVE4MESTRE E %d",chaveMestre);
}
if(chave4 != 0){
	chaveMestre = 1;
	//printf("VALOR DE CHAVE5MESTRE E %d",chaveMestre);
}
if(chave5 != 0){
	chaveMestre = 1;
	//printf("VALOR DE CHAVE6 MESTRE E %d",chaveMestre);
}
}while(	chaveMestre == 1);
	
	//DATA DE NASCIMENTO
	textbackground(31);
	gotoxy(3,6);
	textcolor(23);
	printf("DATA NASC:");
	gotoxy(14,6);
	textbackground(46);
	printf("           ");
	gotoxy(14,6);
	textcolor(16);
	
	do{
	
	fflush(stdin);
	if((tdate == 2)||(tdate == 5)){
		Dados.data[tdate]='/';
		gotoxy(14+tdate,6);
		printf("/");
	}else{
	gotoxy(14+tdate,6);
	Dados.data[tdate]= getch();
	printf("%c",Dados.data[tdate]);
}
	tdate++;
	
}while(tdate !=10);
//CADASTRO TELEFONE
	textbackground(31);
	gotoxy(32,6);
	textcolor(23);
	printf("TELEFONE:");
	gotoxy(41,6);
	textbackground(46);
	printf("               ");
	gotoxy(41,6);
	textcolor(16);
	tdate = 0;
	do{
	
	fflush(stdin);
	if(tdate == 0){
		Dados.telefone[tdate]='(';
		gotoxy(41+tdate,6);
		printf("(");
	}if(tdate == 3){
		Dados.telefone[tdate]=')';
		gotoxy(41+tdate,6);
		printf(")");
	}if(tdate == 9){
		Dados.telefone[tdate]='-';
		gotoxy(41+tdate,6);
		printf("-");
	}
	if((tdate != 0)&&(tdate != 3)&&(tdate != 9)){
	gotoxy(41+tdate,6);
	Dados.telefone[tdate]= getch();
	printf("%c",Dados.telefone[tdate]);
}
	tdate++;
	
}while(tdate !=14);
//Nome do PAI
	textbackground(31);
	gotoxy(3,8);
	textcolor(23);
	printf("NOME DO PAI:");
	gotoxy(15,8);
	textbackground(46);
	printf("                        ");
	gotoxy(15,8);
	textcolor(16);
	fflush(stdin);
	scanf("%[^\n]s",&Dados.nomePai);
	strupr(Dados.nomePai);
	gotoxy(15,8);
	char nomeP[120];
	strcpy(nomeP,Dados.nomePai);
	gotoxy(15,9);
	printf("NOME PAI : %s",nomeP);
	
//Nome da Mae
	textbackground(31);
	gotoxy(3,10);
	textcolor(23);
	printf("NOME DO MAE:");
	gotoxy(15,10);
	textbackground(46);
	printf("                        ");
	gotoxy(15,10);
	textcolor(16);
	fflush(stdin);
	scanf("%[^\n]s",&Dados.nomeMae);
	strupr(Dados.nomeMae);
	gotoxy(15,10);
	printf("%s",Dados.nomeMae);
	// EMAIL
	
	tdate = 0;
	int chave34 = 456;
	int v = 9;
	int v1 = 9;
	char dado6[17];
	char gmail[19];
	char hotmail[19];
	do{
	textbackground(31);
	gotoxy(3,12);
	textcolor(23);
	printf("EMAIL(gmail ou hotmail):");
	gotoxy(28,12);
	textbackground(46);
	printf("                        ");
	gotoxy(28,12);
	textcolor(16);
	fflush(stdin);
	scanf("%[^\n]s",&Dados.email);


	
	strcpy(dado6,"------");
	strcpy(gmail,"gmail.com");
	strcpy(hotmail,"hotmail.com");
	// teste email;
	int i,j,l;
	for(i = 0; i < strlen(Dados.email); i++){
		if(Dados.email[i] == '@'){
			l = i+1;
			for(j = 0; j < strlen(Dados.email);j++){
				dado6[j] = Dados.email[l];
				l++;
			}
		}
	}
	
	
	v = strcmp(dado6,gmail);
	v1 = strcmp(dado6,hotmail);
	//printf("\n VALOR DE EMAIL = %s",gmail);
	//printf("\n VALOR DE DADO = %s",dado);
	//printf("\n Valor de v = %d",v);
	//printf("\n Valor de v1 = %d \n ",v1);
	//system("pause");

	if(v == 0){
		chave34 = 10;
		//	printf("%d = 0",v);
	}
	
	if(v1 == 0){
		chave34 = 10;
		//printf("%d = 0",v1);
	}
	//printf("\n VALOR DE CHAVE E %d",chave);
}while(chave34 != 10);
    //
    //ENDEREÇO
	textbackground(31);
	gotoxy(3,14);
	textcolor(23);
	printf("ENDERECO:");
	gotoxy(15,14);
	textbackground(46);
	printf("                                              ");
	gotoxy(15,14);
	textcolor(16);
	fflush(stdin);
	scanf("%[^\n]s",&Dados.endereco);
    //
   
    //LOGIN
    // LEITURA DE CODIGO
    int codigoUsuario = 1;
    FILE * ler = fopen("C:\\Sistema\\Login","rb");
    if(ler == NULL){
    //	printf("ERRO AO ABRIR");
	}else{
	//	printf("DENTRO");
		fseek(ler,-sizeof(struct acesso),SEEK_END);
		fread(&d,sizeof(struct acesso),1,ler);
		codigoUsuario = 1+d.cod;
		gotoxy(3,30);
	//	printf("CODIGO:  %d \n USUARIO: %s",d.cod,d.login);
		
		
	}
	fclose(ler);
   chave34 = 0;
    do{
    		
	usuario.cod = codigoUsuario;
	Dados.Codigo = codigoUsuario;
	//printf("CODIGO E %d",usuario.cod);
		//printf("\n CODIGO DADOS  E %d",Dados.Codigo);
	//system("pause");
    textbackground(31);
	gotoxy(3,16);
	textcolor(23);
	printf("LOGIN:");
	gotoxy(15,16);
	textbackground(46);
	printf("           ");
	gotoxy(15,16);
	textcolor(16);
	fflush(stdin);
	scanf("%[^\n]s",&usuario.login);
	if(strlen(usuario.login) == 10){

	int i;
	int numero = 0;
	int letras = 0;
	int caracterEspecial =0 ;
	int espacoBranco = 0;
	char z;
for(i = 0; i < strlen(usuario.login); i++){
		z = usuario.login[i];
		if(isdigit(z)){
			numero ++;
		}
		if(isalpha(z)){
			letras++;
		}
		if(ispunct(z)){
			caracterEspecial++;
		}
		if(isspace(z)){
			espacoBranco++;
		}
	}

	if((numero != 0)&&(letras != 0)&&(caracterEspecial == 0)&&(espacoBranco == 0)){
	
	gotoxy(27,16);
	textbackground(50);
	textcolor(0);
		printf("OK");
	textbackground(31);
	textcolor(23);
	gotoxy(29,16);
	printf("                                            ");
		chave34 = 0;
	}else{
	textbackground(31);
	textcolor(23);
	gotoxy(29,16);
	printf("                                            ");
		chave34 = 8;
	gotoxy(27,16);
	textbackground(36);
	textcolor(14);
		printf("DEVE POSSUIR NUMERO E LETRA");
			textbackground(31);  
	textcolor(23);
	}
	
}else{
			chave34 = 8;
	gotoxy(27,16);
	textbackground(36);
	textcolor(14);
		printf("TAMANHO DA SENHA TEM QUE SER 10");
			textbackground(31);
	textcolor(23);
}


//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
FILE * busca = fopen("C:\\Sistema\\Login","rb");
int x = 0 ;
if(busca == NULL){
	
}else{

	int cont = 0;
	int result = 9;
	int limi;
	
	struct acesso e;
	fseek(busca,-sizeof(struct acesso),SEEK_END);
	fread(&e,sizeof(struct acesso),1,busca);
	limi = e.cod;
	//printf("LACO VALOR DE LIMITE %d",limi);
	while(cont <= limi){
	fseek(busca,cont*sizeof(struct acesso),SEEK_SET);
	
	fread(&e,sizeof(struct acesso),1,busca);
	
	//printf("\n %s =  %s",e.login,usuario.login);
	//system("pause");
	result = strcmp(e.login,usuario.login);
	
	if(result == 0){
		
		x =1;
		break;
	}
	
	
	cont++;
	
}
}
fclose(busca);
if(x==1){
	textbackground(31);
	textcolor(23);
	gotoxy(29,16);
	printf("                                            ");
		chave34 = 8;
	gotoxy(27,16);
	textbackground(36);
	textcolor(14);
		printf("LOGIN JA UTILIZADO");
			textbackground(31);  
	textcolor(23);
}
}while(chave34 !=0);

   
// CAMPO SENHA
chave34 = 0;
 do{
	
    textbackground(31);
	gotoxy(3,18);
	textcolor(23);
	printf("SENHA:");
	gotoxy(15,18);
	textbackground(46);
	printf("           ");
	gotoxy(15,18);
	textcolor(16);
	fflush(stdin);
	scanf("%[^\n]s",&usuario.senha);
	if(strlen(usuario.senha) == 8){
	
	int i;
	int numero = 0;
	int letras = 0;
	int caracterEspecial =0 ;
	int espacoBranco = 0;
	char z;
for(i = 0; i < strlen(usuario.senha); i++){
		z = usuario.senha[i];
		if(isdigit(z)){
			numero ++;
		}
		if(isalpha(z)){
			letras++;
		}
		if(ispunct(z)){
			caracterEspecial++;
		}
		if(isspace(z)){
			espacoBranco++;
		}
	}
	if((numero != 0)&&(letras != 0)&&(caracterEspecial != 0)&&(espacoBranco == 0)){
	textbackground(31);
	textcolor(23);
	gotoxy(29,18);
	printf("                                          ");
	gotoxy(27,18);
	textbackground(50);
	textcolor(0);
		printf("OK");
	//GRAVAR DADOS
	FILE * arq = fopen("C:\\Sistema\\Login","a+");
	if(arq == NULL){
		
		
	}else{
		//printf("LOGIN : %S",usuario.login);
		fwrite(&usuario,sizeof(struct acesso),1,arq);
		fclose(arq);
		
	}
	
	
	
	//
	textbackground(31);
	textcolor(23);

		chave34 = 0;
	}else{
	textbackground(31);
	textcolor(23);
	gotoxy(30,18);
	printf("                                          ");
	chave34 = 8;
	gotoxy(27,18);
	textbackground(36);
	textcolor(14);
	if(letras == 0){
		
	printf("NAO POSSUI LETRA");
	}
	if(numero == 0){
		printf("NAO POSSUI NUMERO");
	}
	if(caracterEspecial == 0){
		printf("NAO POSSUI CARACTER ESPECIAL");
	}
		
	}
}else{
	textbackground(31);
	textcolor(23);
	gotoxy(30,18);
	printf("                                          ");
	gotoxy(27,18);
	textbackground(36);
	textcolor(14);
	printf("SENHA DEVE POSSUIR TAMANHO  8");
	chave34 = 8;
}
}while(chave34 !=0);//Dad Dados
FILE * salvar = fopen("C:\\Sistema\\Alunos","a+");
if(salvar == NULL){
	
}else{
	void telaLogin();
	fwrite(&Dados,sizeof(Dad),1,salvar);
	fclose(salvar);
	telaLogin();
	fflush(stdin);

}

    
}
void listarTurma(){
typedef struct cadastroTurma{
int Codigo;
int turma;
char sala[10];
char horario[25];
char disciplina[25]	;	
}turma;
turma vetor;
	int p = 0;
	int cont = 0;
	
	FILE * ver = fopen("C:\\Sistema\\Turmas","rb");
	if(ver == NULL){
		printf("\n ERRO AO ABRIR O ARQUIVO");
	}else{
	
		fseek(ver,-sizeof(turma),SEEK_END);
		fread(&vetor,sizeof(turma),1,ver);
		cont = vetor.Codigo;
		cont = cont +1;
	}fclose(ver);
textbackground(31);
	textcolor(19);
	clrscr();
	// LINHAS HORIZONTAIS
int ajuste = 26;
if(cont >= ajuste){
	ajuste = cont;
}
gotoxy(8,8);
int c;
for( c=2; c<80; c++)
{
gotoxy(c,3);
printf("%c",205);
gotoxy(c,1);
printf("%c",205);
gotoxy(c,ajuste);
printf("%c",205);
gotoxy(c,ajuste-2);
printf("%c",205);

	
}
// LINHAS VERTICAIS
int l;
for(l = 2; l < ajuste; l++)
{
	gotoxy(1,l);
	printf("%c",186);
	gotoxy(80,l);
	printf("%c",86);
	gotoxy(80,l);
	printf("%c",186);
	
}
// CANTOS 
	gotoxy(1,1);
	printf("%c",201);
	gotoxy(1,ajuste-2);
	printf("%c",205);
	gotoxy(80,1);
	printf("%c",187);
	gotoxy(80,ajuste-2);
	printf("%c",185);
	gotoxy(1,ajuste-2);
	printf("%c",204);
	gotoxy(80,1);
	printf("%c",187);
	gotoxy(1,ajuste);
	printf("%c",200);
	gotoxy(1,3);
	printf("%c",204);
	gotoxy(80,3);
	printf("%c",185);
	gotoxy(80,ajuste);
	printf("%c",188);

		gotoxy(28,2);
		textcolor(20);
	printf("LISTRANDO Turmas");
	//textcolor(26);
		FILE * arquivo = fopen("C:\\Sistema\\Turmas","rb");
	if(arquivo == NULL){
		printf("\n ERRO AO ABRIR O ARQUIVO2");
	}else{
		textcolor(23);
		gotoxy(2,4);
		printf("CODIGO");
		gotoxy(9,4);
		textcolor(22);
		printf("|");
		gotoxy(12,4);
		textcolor(26);
		printf("TURMA");
		textcolor(20);
		gotoxy(33,4);
		printf("|");
		textcolor(19);
		gotoxy(35,4);
		printf("HORARIO");
		gotoxy(50,4);
		printf("|");
		textcolor(20);
		gotoxy(52,4);
		printf("SALA");
		textcolor(22);
		gotoxy(60,4);
		printf("|");
		textcolor(23);
		gotoxy(62,4);
		printf("DISCIPLINA");
		for( p = 0; p < cont; p++ ){
		fseek(arquivo,p*sizeof(turma),SEEK_SET);
		fread(&vetor,sizeof(turma),1,arquivo);
		gotoxy(5,5+p);
		textcolor(23);
		printf("%d",vetor.Codigo);
		gotoxy(9,5+p);
		textcolor(22);
		printf("|");
		textcolor(26);
		gotoxy(11,5+p);
		printf(" %d",vetor.turma);
		textcolor(20);
		gotoxy(33,5+p);
		printf("|");
		textcolor(19);
		gotoxy(35,5+p);
		printf("%s",vetor.horario);
		gotoxy(50,5+p);
		printf("|");
		textcolor(20);
		gotoxy(54,5+p);
		printf("%s",vetor.sala);
		textcolor(22);
		gotoxy(60,5+p);
		printf("|");
		textcolor(23);
		gotoxy(62,5+p);
		printf("%s",vetor.disciplina);
}
		fclose(arquivo);
		printf("\n");
		
}
}
void listarDisciplina(){
typedef struct dados{
int Codigo;
int cargaHoraria;
char disciplina[25];

}Diciplina;
Diciplina vetor;
	int p = 0;
	int cont = 0;
	
	FILE * ver = fopen("C:\\Sistema\\Disciplinas","rb");
	if(ver == NULL){
		printf("\n ERRO AO ABRIR O ARQUIVO");
	}else{
		fseek(ver,-sizeof(Diciplina),SEEK_END);
		fread(&vetor,sizeof(Diciplina),1,ver);
	cont = vetor.Codigo;
	cont++;
		
	}
			
	fclose(ver);

	textbackground(31);
	textcolor(19);
	clrscr();
	// LINHAS HORIZONTAIS
int ajuste = 26;
if(cont >= ajuste){
	ajuste = cont;
}
gotoxy(8,8);
int c;
for(c=2; c<80; c++)
{
gotoxy(c,3);
printf("%c",205);
gotoxy(c,1);
printf("%c",205);
gotoxy(c,ajuste);
printf("%c",205);
gotoxy(c,ajuste-2);
printf("%c",205);

	
}
// LINHAS VERTICAIS
int l;
for( l = 2; l < ajuste; l++)
{
	gotoxy(1,l);
	printf("%c",186);
	gotoxy(80,l);
	printf("%c",86);
	gotoxy(80,l);
	printf("%c",186);
	
}
// CANTOS 
	gotoxy(1,1);
	printf("%c",201);
	gotoxy(1,ajuste-2);
	printf("%c",205);
	gotoxy(80,1);
	printf("%c",187);
	gotoxy(80,ajuste-2);
	printf("%c",185);
	gotoxy(1,ajuste-2);
	printf("%c",204);
	gotoxy(80,1);
	printf("%c",187);
	gotoxy(1,ajuste);
	printf("%c",200);
	gotoxy(1,3);
	printf("%c",204);
	gotoxy(80,3);
	printf("%c",185);
	gotoxy(80,ajuste);
	printf("%c",188);

		gotoxy(28,2);
		textcolor(20);
	printf("LISTRANDO DISCIPLINAS");
	//textcolor(26);
		FILE * arquivo = fopen("C:\\Sistema\\Disciplinas","rb");
	if(arquivo == NULL){
		printf("\n ERRO AO ABRIR O ARQUIVO2");
	}else{
		textcolor(23);
		gotoxy(2,4);
		printf("CODIGO");
		gotoxy(9,4);
		textcolor(22);
		printf("|");
		gotoxy(12,4);
		textcolor(26);
		printf("NOME");
		textcolor(20);
		gotoxy(33,4);
		printf("|");
		textcolor(19);
		gotoxy(35,4);
		printf("CARGA HORARIA");
		for( p = 0; p < cont; p++ ){
		fseek(arquivo,p*sizeof(Diciplina),SEEK_SET);
		fread(&vetor,sizeof(Diciplina),1,arquivo);
		gotoxy(5,5+p);
		textcolor(23);
		printf("%d",vetor.Codigo);
		gotoxy(9,5+p);
		textcolor(22);
		printf("|");
		textcolor(26);
		gotoxy(11,5+p);
		printf(" %s",vetor.disciplina);
		textcolor(20);
		gotoxy(33,5+p);
		printf("|");
		textcolor(19);
		gotoxy(35,5+p);
		printf("%d",vetor.cargaHoraria);
}
		fclose(arquivo);
		printf("\n");
		
}
}
void listarProfessorDecrescente(){
typedef struct cadastroProfessor{
int Codigo;
int turma;
char disciplinaLecionar[25];
char nomeProfessor[60];
}professor;
professor vetor;
	int p = 0;
	int cont = 0;
	
	FILE * ver = fopen("C:\\Sistema\\Professores","rb");
	if(ver == NULL){
		printf("\n ERRO AO ABRIR O ARQUIVO");
	}else{
		fseek(ver,-sizeof(professor),SEEK_END);
		fread(&vetor,sizeof(professor),1,ver);
		cont = vetor.Codigo;
		cont++;
		}
		fclose(ver);

	textbackground(31);
	textcolor(19);
	clrscr();
	// LINHAS HORIZONTAIS
int ajuste = 26;
if(cont >= ajuste){
	ajuste = cont;
}
gotoxy(8,8);
int c;
for( c=2; c<80; c++)
{
gotoxy(c,3);
printf("%c",205);
gotoxy(c,1);
printf("%c",205);
gotoxy(c,ajuste);
printf("%c",205);
gotoxy(c,ajuste-2);
printf("%c",205);

	
}
// LINHAS VERTICAIS
int l;
for(l = 2; l < ajuste; l++)
{
	gotoxy(1,l);
	printf("%c",186);
	gotoxy(80,l);
	printf("%c",86);
	gotoxy(80,l);
	printf("%c",186);
	
}
// CANTOS 
	gotoxy(1,1);
	printf("%c",201);
	gotoxy(1,ajuste-2);
	printf("%c",205);
	gotoxy(80,1);
	printf("%c",187);
	gotoxy(80,ajuste-2);
	printf("%c",185);
	gotoxy(1,ajuste-2);
	printf("%c",204);
	gotoxy(80,1);
	printf("%c",187);
	gotoxy(1,ajuste);
	printf("%c",200);
	gotoxy(1,3);
	printf("%c",204);
	gotoxy(80,3);
	printf("%c",185);
	gotoxy(80,ajuste);
	printf("%c",188);

		gotoxy(28,2);
		textcolor(20);
	printf("LISTRANDO ALUNOS");
	//textcolor(26);
		FILE * arquivo = fopen("C:\\Sistema\\Professores","rb");
	if(arquivo == NULL){
		printf("\n ERRO AO ABRIR O ARQUIVO2");
	}else{
		textcolor(23);
		gotoxy(2,4);
		printf("CODIGO");
		gotoxy(9,4);
		textcolor(22);
		printf("|");
		gotoxy(12,4);
		textcolor(26);
		printf("NOME");
		int l = 0;
		for( p = cont-1; p >=0; p-- ){
		fseek(arquivo,p*sizeof(professor),SEEK_SET);
		fread(&vetor,sizeof(professor),1,arquivo);
		gotoxy(5,5+l);
		textcolor(23);
		printf("%d",vetor.Codigo);
		gotoxy(9,5+l);
		textcolor(22);
		printf("|");
		textcolor(26);
		gotoxy(11,5+l);
		printf(" %s",vetor.nomeProfessor);
		l++;
}
		fclose(arquivo);
		printf("\n");
		
}
}
void listarProfessorCrescente(){
typedef struct cadastroProfessor{
int Codigo;
int turma;
char disciplinaLecionar[25];
char nomeProfessor[60];
}professor;
professor vetor;
	int p = 0;
	int cont = 0;
	
	FILE * ver = fopen("C:\\Sistema\\Professores","rb");
	if(ver == NULL){
		printf("\n ERRO AO ABRIR O ARQUIVO");
	}else{
		fseek(ver,-sizeof(professor),SEEK_END);
		fread(&vetor,sizeof(professor),1,ver);
		cont = vetor.Codigo;
		cont++;
	}fclose(ver);
	textbackground(31);
	textcolor(19);
	clrscr();
	// LINHAS HORIZONTAIS
int ajuste = 26;
if(cont >= ajuste){
	ajuste = cont;
}
gotoxy(8,8);
int c;
for( c=2; c<80; c++)
{
gotoxy(c,3);
printf("%c",205);
gotoxy(c,1);
printf("%c",205);
gotoxy(c,ajuste);
printf("%c",205);
gotoxy(c,ajuste-2);
printf("%c",205);

	
}
// LINHAS VERTICAIS
int l;
for( l = 2; l < ajuste; l++)
{
	gotoxy(1,l);
	printf("%c",186);
	gotoxy(80,l);
	printf("%c",86);
	gotoxy(80,l);
	printf("%c",186);
	
}
// CANTOS 
	gotoxy(1,1);
	printf("%c",201);
	gotoxy(1,ajuste-2);
	printf("%c",205);
	gotoxy(80,1);
	printf("%c",187);
	gotoxy(80,ajuste-2);
	printf("%c",185);
	gotoxy(1,ajuste-2);
	printf("%c",204);
	gotoxy(80,1);
	printf("%c",187);
	gotoxy(1,ajuste);
	printf("%c",200);
	gotoxy(1,3);
	printf("%c",204);
	gotoxy(80,3);
	printf("%c",185);
	gotoxy(80,ajuste);
	printf("%c",188);

		gotoxy(28,2);
		textcolor(20);
	printf("LISTRANDO ALUNOS");
	//textcolor(26);
		FILE * arquivo = fopen("C:\\Sistema\\Professores","rb");
	if(arquivo == NULL){
		printf("\n ERRO AO ABRIR O ARQUIVO2");
	}else{
		textcolor(23);
		gotoxy(2,4);
		printf("CODIGO");
		gotoxy(9,4);
		textcolor(22);
		printf("|");
		gotoxy(12,4);
		textcolor(26);
		printf("NOME");
		for( p = 0; p < cont; p++ ){
		fseek(arquivo,p*sizeof(professor),SEEK_SET);
		fread(&vetor,sizeof(professor),1,arquivo);
		gotoxy(5,5+p);
		textcolor(23);
		printf("%d",vetor.Codigo);
		gotoxy(9,5+p);
		textcolor(22);
		printf("|");
		textcolor(26);
		gotoxy(11,5+p);
		printf(" %s",vetor.nomeProfessor);
		
}
		fclose(arquivo);
		printf("\n");
		
}
}
void listarAlunoDecrescente(){
	typedef struct cadastroAluno{
	int Codigo;
	char nome[120];
	char RGA[14];
	char data[12];
	char telefone[18];
	char nomePai[120];
	char nomeMae[120];
	char email[120];
	char endereco[120];
}Aluno;
Aluno vetor;
	int p = 0;
	int cont = 0;
	
	FILE * ver = fopen("C:\\Sistema\\Alunos","rb");
	if(ver == NULL){
		printf("\n ERRO AO ABRIR O ARQUIVO");
	}else{
		fseek(ver,-sizeof(Aluno),SEEK_END);
		fread(&vetor,sizeof(Aluno),1,ver);
		cont = vetor.Codigo;
		
		
	}
	fclose(ver);

	textbackground(31);
	textcolor(19);
	clrscr();
	// LINHAS HORIZONTAIS
int ajuste = 26;
if(cont >= ajuste){
	ajuste = cont;
}
gotoxy(8,8);
int c;
for( c=2; c<80; c++)
{
gotoxy(c,3);
printf("%c",205);
gotoxy(c,1);
printf("%c",205);
gotoxy(c,ajuste);
printf("%c",205);
gotoxy(c,ajuste-2);
printf("%c",205);

	
}
// LINHAS VERTICAIS
int l;
for(l = 2; l < ajuste; l++)
{
	gotoxy(1,l);
	printf("%c",186);
	gotoxy(80,l);
	printf("%c",86);
	gotoxy(80,l);
	printf("%c",186);
	
}
// CANTOS 
	gotoxy(1,1);
	printf("%c",201);
	gotoxy(1,ajuste-2);
	printf("%c",205);
	gotoxy(80,1);
	printf("%c",187);
	gotoxy(80,ajuste-2);
	printf("%c",185);
	gotoxy(1,ajuste-2);
	printf("%c",204);
	gotoxy(80,1);
	printf("%c",187);
	gotoxy(1,ajuste);
	printf("%c",200);
	gotoxy(1,3);
	printf("%c",204);
	gotoxy(80,3);
	printf("%c",185);
	gotoxy(80,ajuste);
	printf("%c",188);

		gotoxy(28,2);
		textcolor(20);
	printf("LISTRANDO ALUNOS");
	//textcolor(26);
		FILE * arquivo = fopen("C:\\Sistema\\Alunos","rb");
	if(arquivo == NULL){
		printf("\n ERRO AO ABRIR O ARQUIVO2");
	}else{
		textcolor(23);
		gotoxy(2,4);
		printf("CODIGO");
		gotoxy(9,4);
		textcolor(22);
		printf("|");
		gotoxy(12,4);
		textcolor(26);
		printf("NOME");
		int l= 0;
		cont -=1;
		for( p = cont; p >= 0; p-- ){
			
		fseek(arquivo,p*sizeof(Aluno),SEEK_SET);
		fread(&vetor,sizeof(Aluno),1,arquivo);
		gotoxy(5,5+l);
		textcolor(23);
		printf("%d",vetor.Codigo);
		gotoxy(9,5+l);
		textcolor(22);
		printf("|");
		textcolor(26);
		gotoxy(11,5+l);
		printf(" %s",vetor.nome);
		l++;
}
		fclose(arquivo);
		printf("\n");
		
}
}
void listarAlunoCrescente(){
	typedef struct cadastroAluno{
	int Codigo;
	char nome[50];
	char RGA[14];
	char data[11];
	char telefone[18];
	char nomePai[120];
	char nomeMae[120];
	char email[120];
	char endereco[120];
}Aluno;
Aluno vetor;
	int p = 0;
	int cont = 0;
	
	FILE * ver = fopen("C:\\Sistema\\Alunos","rb");
	if(ver == NULL){
		printf("\n ERRO AO ABRIR O ARQUIVO");
	}else{
		
		fseek(ver,-sizeof(Aluno),SEEK_END);
		fread(&vetor,sizeof(Aluno),1,ver);
		gotoxy(3,30);
		printf("  NOME : %s",vetor.nome);
		printf("ULTIMO  CODIGO E %d",vetor.Codigo);
		system("pause");
		cont = vetor.Codigo;
		//cont++;
	}
	fclose(ver);
	//printf("\n VALOR DE CONT = %d",cont);
	//system("pause");
	textbackground(31);
	textcolor(19);
	clrscr();
	// LINHAS HORIZONTAIS
int ajuste = 26;
if(cont >= ajuste){
	ajuste = cont;
}
gotoxy(8,8);
int c;
for(c=2; c<80; c++)
{
gotoxy(c,3);
printf("%c",205);
gotoxy(c,1);
printf("%c",205);
gotoxy(c,ajuste);
printf("%c",205);
gotoxy(c,ajuste-2);
printf("%c",205);

	
}
// LINHAS VERTICAIS
int l;
for(l = 2; l < ajuste; l++)
{
	gotoxy(1,l);
	printf("%c",186);
	gotoxy(80,l);
	printf("%c",86);
	gotoxy(80,l);
	printf("%c",186);
	
}
// CANTOS 
	gotoxy(1,1);
	printf("%c",201);
	gotoxy(1,ajuste-2);
	printf("%c",205);
	gotoxy(80,1);
	printf("%c",187);
	gotoxy(80,ajuste-2);
	printf("%c",185);
	gotoxy(1,ajuste-2);
	printf("%c",204);
	gotoxy(80,1);
	printf("%c",187);
	gotoxy(1,ajuste);
	printf("%c",200);
	gotoxy(1,3);
	printf("%c",204);
	gotoxy(80,3);
	printf("%c",185);
	gotoxy(80,ajuste);
	printf("%c",188);

		gotoxy(28,2);
		textcolor(20);
	printf("LISTRANDO ALUNOS");
	//textcolor(26);
		FILE * arquivo = fopen("C:\\Sistema\\Alunos","rb");
	if(arquivo == NULL){
		printf("\n ERRO AO ABRIR O ARQUIVO2");
	}else{
		textcolor(23);
		gotoxy(2,4);
		printf("CODIGO");
		gotoxy(9,4);
		textcolor(22);
		printf("|");
		gotoxy(12,4);
		textcolor(26);
		printf("NOME");
		for( p = 0; p < cont; p++ ){
		fseek(arquivo,p*sizeof(Aluno),SEEK_SET);
		fread(&vetor,sizeof(Aluno),1,arquivo);
		gotoxy(5,5+p);
		textcolor(23);
		printf("%d",vetor.Codigo);
		gotoxy(9,5+p);
		textcolor(22);
		printf("|");
		textcolor(26);
		gotoxy(11,5+p);
		printf(" %s",vetor.nome);
		
}
		fclose(arquivo);
		printf("\n");
		
}
}
void telaLogin()
{
	int S = 0;
	int x = 0 ;
	textbackground(31);
	textcolor(19);
	clrscr();
	// LINHAS HORIZONTAIS
	int c;
for(c=45; c<75; c++)
{
gotoxy(c,7); // Primeira linha Horizontal
printf("%c",205);
gotoxy(c,9); // Segunda linha Horizontal
printf("%c",205);
gotoxy(c,21); // Terceira linha Horizontal
printf("%c",205);
gotoxy(c,23); // Quarta Linha Horizontal
printf("%c",205);

	
}
// LINHAS VERTICAIS
int l;
for(l = 7; l < 23; l++)
{
	gotoxy(45,l); //Primeira Linha Vertical
	printf("%c",186);
	gotoxy(75,l); //Segunda Linha Vertical 
	printf("%c",186);
	
	
}
// CANTOS 
	gotoxy(45,7); // canto superior esquerdo
	printf("%c",201);
	gotoxy(75,7); //canto superior direito
	printf("%c",187);
	gotoxy(75,9); // "T" encaixe superior direito
	printf("%c",185); 
	gotoxy(45,9);// "T" encaixe superior esquerdo
	printf("%c",204);
	gotoxy(45,23);// canto inferior esquerdo
	printf("%c",200);
	gotoxy(75,23); // canto inferior direito
	printf("%c",188);
	gotoxy(45,21); // "T" encaixe inferior esquerdo
	printf("%c",204);
	gotoxy(75,21); // "T" encaixe inferior direito
	printf("%c",185);
	
	
// layout interno Usuario
	gotoxy(50,11); // canto superior esquerdo
	printf("%c",201);
	gotoxy(69,11); //canto superior direito
	printf("%c",187);
	gotoxy(50,13);// canto inferior esquerdo
	printf("%c",200);
	gotoxy(69,13); // canto inferior direito
	printf("%c",188);
// layout interno linhas Verticais Usuario

for(l = 12; l < 13 ;l++)
{
	gotoxy(50,l); //Primeira Linha Vertical
	printf("%c",186);
	gotoxy(69,l); //Segunda Linha Vertical 
	printf("%c",186);
}
// layout interno linhas horizontais Usuario

for(c=51; c<69; c++)
{
gotoxy(c,11); // Primeira linha Horizontal interna
printf("%c",205);
gotoxy(c,13); // Segunda linha Horizontal interna
printf("%c",205);
}
// layout interno senha
	gotoxy(50,15); // canto superior esquerdo
	printf("%c",201);
	gotoxy(69,15); //canto superior direito
	printf("%c",187);
	gotoxy(50,17);// canto inferior esquerdo
	printf("%c",200);
	gotoxy(69,17); // canto inferior direito
	printf("%c",188);
// layout interno linhas Verticais senha

for(l = 16; l < 17 ;l++)
{
	gotoxy(50,l); //Primeira Linha Vertical
	printf("%c",186);
	gotoxy(69,l); //Segunda Linha Vertical 
	printf("%c",186);
}
// layout interno linhas horizontais senha

for(c=51; c<69; c++)
{
gotoxy(c,15); // Primeira linha Horizontal interna
printf("%c",205);
gotoxy(c,17); // Segunda linha Horizontal interna
printf("%c",205);
}
// Botões de entrar e cancelar
// layout interno entrar
	gotoxy(47,18); // canto superior esquerdo
	printf("%c",201);
	gotoxy(56,18); //canto superior direito
	printf("%c",187);
	gotoxy(47,20);// canto inferior esquerdo
	printf("%c",200);
	gotoxy(56,20); // canto inferior direito
	printf("%c",188);
// layout interno linhas Verticais entrar
for(l = 19; l < 20 ;l++)
{
	gotoxy(47,l); //Primeira Linha Vertical
	printf("%c",186);
	gotoxy(56,l); //Segunda Linha Vertical 
	printf("%c",186);
}
// layout interno linhas horizontais entrar
for(c=48; c<56; c++)
{
gotoxy(c,18); // Primeira linha Horizontal interna
printf("%c",205);
gotoxy(c,20); // Segunda linha Horizontal interna
printf("%c",205);
}
// layout interno cancelar
	gotoxy(60,18); // canto superior esquerdo
	printf("%c",201);
	gotoxy(71,18); //canto superior direito
	printf("%c",187);
	gotoxy(60,20);// canto inferior esquerdo
	printf("%c",200);
	gotoxy(71,20); // canto inferior direito
	printf("%c",188);
// layout interno linhas Verticais cancelar
for(l = 19; l < 20 ;l++)
{
	gotoxy(60,l); //Primeira Linha Vertical
	printf("%c",186);
	gotoxy(71,l); //Segunda Linha Vertical 
	printf("%c",186);
}
// layout interno linhas horizontais cancelar
for(c=61; c<71; c++)
{
gotoxy(c,18); // Primeira linha Horizontal interna
printf("%c",205);
gotoxy(c,20); // Segunda linha Horizontal interna
printf("%c",205);
}
// Botão primeiro acesso
gotoxy(47,22); // Simbolo quadrado
printf("%c",254);
gotoxy(59,22); // Simbolo quadrado do botão já cadastrado
printf("%c",254);
gotoxy(49,22);
textcolor(1);
printf("1");
gotoxy(50,22); // Simbolo porcento
printf("%c",248);
gotoxy(51,22);
textcolor(1);
printf("Acesso");
//Botão já cadastrado
gotoxy(61,22);
textcolor(1);
printf("Ja Cadastrado");
// Nome do Quadros
gotoxy(50,10);
textcolor(1);
printf("Usuario:");
gotoxy(50,14);
textcolor(1);
printf("Senha:");
gotoxy(52,8);
textcolor(1);
printf("SISTEMA DOUGLAS");
gotoxy(49,19);
textcolor(1);
printf("Entrar");
gotoxy(62,19);
textcolor(1);
printf("Cancelar");
int entrada = 0;
int p = 1;
int lado = 1;
gotoxy(51,12);
//printf("%C%C%C%C%C%C%C",22,22,22,22,22,22);
do{
	if(entrada != 0){
	//printf("VALOR DE P %d",p);
	entrada =  getch();
	entrada =  getch();
	if((entrada == 80 ) && (p <3)){
		p++;
	}
		if((entrada == 72 ) && (p > 2)){
		p--;
	}
		if((entrada == 77 ) && (lado == 1)&&(p>1)){
			
		lado++;
	}
		if((entrada == 75 ) && (lado == 2)&&(p>1)){
			
		lado--;
	}}
	
	char usuario[21];
	char senha[10];
	if(p==1){
	
	fflush(stdin);
		gotoxy(51,12);
	scanf("%[^\n]",&usuario);	
	fflush(stdin);
	gotoxy(51,16);
	scanf("%[^\n]",&senha);
	entrada = 1;
	//
	strncat(usuario,senha,8);
	//printf("%s",usuario);
	// TESTANDO LOGIN 
struct acesso{
	char login[15];
	char senha[15];
	int cod;
};
//================================================================================================================
//TESTANDO LOGIN

FILE * busca = fopen("C:\\Sistema\\Login","rb");

if(busca == NULL){
	
}else{

	int cont = 0;
	int result = 9;
	int limi;
	
	struct acesso e;
	fseek(busca,-sizeof(struct acesso),SEEK_END);
	fread(&e,sizeof(struct acesso),1,busca);
	limi = e.cod;
	//printf("LACO VALOR DE LIMITE %d",limi);
	while(cont <= limi){
	fseek(busca,cont*sizeof(struct acesso),SEEK_SET);
	
	fread(&e,sizeof(struct acesso),1,busca);
	
	
	//system("pause");
	result = strncmp(e.login,usuario,10);
	
	if(result == 0){
		gotoxy(71,12);
			textbackground(50);
			textcolor(0);
			printf("OK");
			textbackground(31);
			textcolor(23);
			gotoxy(29,16);
		x =1;
		//printf("\n %s =  %s",e.senha,senha);
		int sen = strncmp(e.senha,senha,8);
		if(sen == 0){
			
			gotoxy(71,16);
			textbackground(50);
			textcolor(0);
			printf("OK");
			textbackground(31);
			textcolor(23);
			gotoxy(29,16);
			S = 1;
		}
		break;
	}
	
	
	cont++;
	
}
}
fclose(busca);
if((x!=1)){
	gotoxy(71,12);
			textbackground(36);
			textcolor(14);
			printf("LOGIN INCORRETO");
			textbackground(31);
			textcolor(23);
			gotoxy(29,16);
			
}
if(S != 1){
			gotoxy(71,16);
			textbackground(36);
			textcolor(14);
			printf("SENHA INCORRETA");
			textbackground(31);
			textcolor(23);
			gotoxy(29,16);
}
//================================================================================================================
//TESTANDO SENHA

p = 2;
//================================================================================================================
}
	
	if((p==2)&&(lado == 1)){
		gotoxy(49,19);
		textcolor(20);
		printf("Entrar");
	}else{
		gotoxy(49,19);
		textcolor(1);
		printf("Entrar");
	}
	if((p==3)&&(lado == 1)){
	gotoxy(49,22);
	textcolor(20);
	printf("1");
	gotoxy(50,22); // Simbolo porcento
		printf("%c",248);
	gotoxy(51,22);
	textcolor(20);
	printf("Acesso");
	}else{
	gotoxy(49,22);
	textcolor(1);
	printf("1");
	gotoxy(50,22); // Simbolo porcento
	printf("%c",248);
	gotoxy(51,22);
	textcolor(1);
	printf("Acesso");
	}
	if((p==2)&&(lado == 2)){
	gotoxy(62,19);
	textcolor(20);
	printf("Cancelar");
	}else{
		gotoxy(62,19);
	textcolor(1);
	printf("Cancelar");
	}
	if((p==3)&&(lado == 2)){
		gotoxy(61,22);
	textcolor(20);
	printf("Ja Cadastrado");
	
	
	}else{
		gotoxy(61,22);
	textcolor(1);
	printf("Ja Cadastrado");
	}
	if((entrada == 13)&&(p==3)&&(lado==2)){
		telaLogin();
	}
	if((entrada == 13)&&(p==2)&&(lado == 1)){
		if((S==1)&&(x==1)){
			entrada =150;
			//system("pause");
		}
	}
		if((entrada == 13)&&(p==3)&&(lado == 1)){
		 Cadastro();
		 p =1;
	}
		if((entrada == 13)&&(p==2)&&(lado == 2)){
		telaLogin();
	}
	if((entrada == 13)&&(p==3)&&(lado == 2)){
		telaLogin();
	}
	
}while(entrada != 150);





}

void nomeposicionado(int x,int y,char nome[40],int cor){
	gotoxy(x,y);
	textcolor(cor);
	printf("%s",nome);
}
void retangulo(int x, int y,int c, int l,int txt,int tb){
	textbackground(tb);
textcolor(txt);
int i;
	for(i = x; i < (c+x); i++){//linha horizontais
		gotoxy(i,y);
		printf("%c",205);
		gotoxy(i,y+l);
		printf("%c",205);
		}
		int j;
	for(j = y; j < (y+l); j++){
		gotoxy(x,j);
		printf("%c",186);
		gotoxy(x+c,j);
		printf("%c",186);
	}
		// canto superior direito
		gotoxy(x+c,y);
		printf("%c",187);
    	gotoxy(x,y);// canto superior esquerdo
		printf("%c",201);
		// canto inferior direito
		gotoxy(x+c,y+l);
		printf("%c",188);
		// canto inferior esquerdo
		gotoxy(x,y+l);
		printf("%c",200);
}

void subMenu(int c,int a,int linha,int limite){
void Menu(int a);
int l;
c =c;
textbackground(31);
textcolor(31);

for(l=3; l <=linha; l++)// Linhas Verticais
	{
		gotoxy(c,l);
		printf("%c           %c",186,186);
		
	}
gotoxy(c,3);
printf("%c           %c",201,187);// cantos
gotoxy(c,linha);
printf("%c           %c",200,188);//cantos
	for(l=c+1; l <=c+11; l++) // Linhas Horizontais
	{
		gotoxy(l,3);
		printf("%c",205);
		gotoxy(l,linha);
		printf("%c",205);
	}
	
	int controle = 1;
	int entradaSub = 0;
	do{// sub menu opções 
	if(c == 2){
	
	gotoxy(4,2);
	textcolor(19);
	printf("C");
	textcolor(19);
	printf("adastra");
	gotoxy(13,2);
	textcolor(1);

}
		if(entradaSub !=0){
		do{
			
		entradaSub = getch();
		entradaSub = getch();
	
		if((entradaSub == 80) && (controle <= limite)){
			controle = controle + 1;
		}
		if((entradaSub == 72) && (controle >= 1)){
			controle = controle - 1;
		}
		}while(controle == 5);
	}
	if((entradaSub == 13)&&(controle==1)&&(c==2)){// CHAMADA ALUNO CADASTRO 
		void telaCadastroAluno();
	telaCadastroAluno();
	break;
	}
		if((entradaSub == 13)&&(controle==2)&&(c==2)){// CHAMADA PROFESSOR CADASTRO
		void telaCadastroProfessor();
	telaCadastroProfessor();
	break;
	
	}
		if((entradaSub == 13)&&(controle==3)&&(c==2)){// CHAMADA Diciplina CADASTRO
		void telaCadastroDisciplina();
	telaCadastroDisciplina();
	break;
			
	
	}
		if((entradaSub == 13)&&(controle==4)&&(c==2)){//CHAMADA TURMA CADASTRO
		void telaCadastroTurma();
	telaCadastroTurma();
	break;
	}

	
		if(c==2){//MENU CADASTRO
	if((controle == 1) && (c==2)){
		gotoxy(3,4);
	textcolor(20);
	printf("Aluno");
	}else{
	gotoxy(3,4);
	textcolor(19);
	printf("Aluno");	
	}	
	
	if((controle == 2) && (c==2)){
		gotoxy(3,5);
	textcolor(20);
	printf("Professor");
	}else{
	gotoxy(3,5);
	textcolor(19);
	printf("Professor");	
	}
	if((controle == 3) && (c==2)){
		gotoxy(3,6);
	textcolor(20);
	printf("Disciplina");
	}else{
	gotoxy(3,6);
	textcolor(19);
	printf("Disciplina");	
	}
	if((controle == 4) && (c==2)){
		gotoxy(3,7);
	textcolor(20);
	printf("Turma");
	}else{
	gotoxy(3,7);
	textcolor(19);
	printf("Turma");	
	}
}
if(a==2)
{
	
	if((controle == 1) && (a==2)){
		gotoxy(14,4);
	textcolor(20);
	printf("Aluno");
	}else{
	gotoxy(14,4);
	textcolor(19);
	printf("Aluno");	
	}	
	
	if((controle == 2) && (a==2)){
		gotoxy(14,5);
	textcolor(20);
	printf("Professor");
	}else{
	gotoxy(14,5);
	textcolor(19);
	printf("Professor");	
	}
		if((controle == 3) && (a==2)){
		gotoxy(14,6);
	textcolor(20);
	printf("Disciplinas");
	}else{
	gotoxy(14,6);
	textcolor(19);
	printf("Disciplinas");	
	}
		if((controle == 4) && (a==2)){
		gotoxy(14,7);
	textcolor(20);
	printf("Turmas");
	}else{
	gotoxy(14,7);
	textcolor(19);
	printf("Turmas");	
	}
	
		
if((entradaSub == 13)&&(controle == 4)&&(a==2)){//LISTAR TURMA
	listarTurma();
}
if((entradaSub == 13)&&(controle == 3)&&(a==2)){//LISTAR DISCIPLINA
	listarDisciplina();
}
if((entradaSub == 13 ) && (controle == 1)&&(a == 2)){// sub aluno Listar
	gotoxy(26,4);
	textcolor(20);
	printf("Crescente");
	gotoxy(26,5);
	textcolor(19);
	printf("Decrescente");
	retangulo(25,3,12,3,31,31);
	gotoxy(25,3);
	printf("%c",203);
	gotoxy(25,6);
	printf("%c",204);
	do{
		entradaSub = getch();
		entradaSub = getch();
	
		if((entradaSub == 80) && (controle <= 1)){
			controle = controle + 1;
		}
		if((entradaSub == 72) && (controle >= 2)){
			controle = controle - 1;
	}
		if(entradaSub == 75) {
			entradaSub = 8;
			controle =1;
			gotoxy(26,4);
	textcolor(19);
	printf("Crescente");
	gotoxy(26,5);
	textcolor(19);
	printf("Decrescente");
			
			
	}
	if((controle == 2) && ( entradaSub != 8)){// Decrescente Aluno
	gotoxy(26,4);
	textcolor(19);
	printf("Crescente");
	gotoxy(26,5);
	textcolor(20);
	printf("Decrescente");
	}
		if((controle == 1) && ( entradaSub != 8)){//Crescente Aluno
	gotoxy(26,4);
	textcolor(20);
	printf("Crescente");
	gotoxy(26,5);
	textcolor(19);
	printf("Decrescente");
	}
	if((controle == 1)&&(entradaSub == 13)){// CHAMAR FUNÇÃO LISTAR
		listarAlunoCrescente();
		
	}
	if((controle == 2)&&(entradaSub == 13)){
	
	listarAlunoDecrescente();
	}
}while(entradaSub != 8);	
}
if((entradaSub == 13 ) && (controle == 2)&&(a == 2)){// sub Professor Listar
	gotoxy(26,5);
	textcolor(20);
	printf("Crescente");
	gotoxy(26,6);
	textcolor(19);
	printf("Decrescente");
	retangulo(25,4,12,3,31,31);
	gotoxy(25,4);
	printf("%c",204);
	gotoxy(25,7);
	printf("%c",204);
	controle = 1;
	do{
		if(entradaSub == 75) {
			entradaSub = 8;
			controle =1;
			gotoxy(26,5);
	textcolor(19);
	printf("Crescente");
	gotoxy(26,6);
	textcolor(19);
	printf("Decrescente");
			
			
	}
	if((controle == 2) && ( entradaSub != 8)){// Decrescente Professor

	gotoxy(26,5);
	textcolor(19);
	printf("Crescente");
	gotoxy(26,6);
	textcolor(20);
	printf("Decrescente");
	entradaSub = getch();
		entradaSub = getch();
	
		if((entradaSub == 80) && (controle <= 1)){
			controle = controle + 1;
		}
		if((entradaSub == 72) && (controle >= 2)){
			controle = controle - 1;
			
	}
	if((controle == 2)&&(entradaSub == 13)){
	
	listarProfessorDecrescente();
	}
	}
		if((controle == 1) && ( entradaSub != 8)){//Crescente Aluno
	gotoxy(26,5);
	textcolor(20);
	printf("Crescente");
	gotoxy(26,6);
	textcolor(19);
	printf("Decrescente");
		entradaSub = getch();
		entradaSub = getch();
	
		if((entradaSub == 80) && (controle <= 1)){
			controle = controle + 1;
		}
		if((entradaSub == 72) && (controle >= 2)){
			controle = controle - 1;
			
	}
		if((controle == 1)&&(entradaSub == 13)){// CHAMAR FUNÇÃO LISTAR
		listarProfessorCrescente();
		
	}
	}

	
}while(entradaSub != 8);	
}
}
if(a == 3){//MENU BUSCAR
	if((controle == 1) && (a==3)){
		gotoxy(22,4);
	textcolor(20);
	printf("Aluno");
	}else{
	gotoxy(22,4);
	textcolor(19);
	printf("Aluno");	
	}	
		if((controle == 2) && (a==3)){
		gotoxy(22,5);
	textcolor(20);
	printf("Professor");
	}else{
	gotoxy(22,5);
	textcolor(19);
	printf("Professor");	
	}
			if((controle == 3) && (a==3)){
		gotoxy(22,6);
	textcolor(20);
	printf("Turma");
	}else{
	gotoxy(22,6);
	textcolor(19);
	printf("Turma");	
	}	
	if((entradaSub == 13)&&(controle == 3)&&(a==3))
	{
		BuscarTurma();
		controle = 0;
		fflush(stdin);
	//	printf(" \n SAINDO PRINCIPAL ");
		//a = 1;
	}
	if((entradaSub == 13 ) && (controle == 1)&&(a == 3)){// sub buscar  Aluno
	gotoxy(34,4);
	textcolor(20);
	printf("Disciplina");
	gotoxy(34,5);
	textcolor(19);
	printf("Geral");
	retangulo(33,3,12,3,31,31);
	gotoxy(33,3);
	printf("%c",203);
	gotoxy(33,6);
	printf("%c",204);
	do{
		entradaSub = getch();
		entradaSub = getch();
	
		if((entradaSub == 80) && (controle <= 1)){
			controle = controle + 1;
		}
		if((entradaSub == 72) && (controle >= 2)){
			controle = controle - 1;
	}
		if(entradaSub == 75) {
			entradaSub = 8;
			controle =1;
	gotoxy(34,4);
	textcolor(19);
	printf("Disciplina");
	gotoxy(34,5);
	textcolor(19);
	printf("Geral");
			
			
	}
	if((controle == 2) && ( entradaSub != 8)){// sub buscar  Aluno
	gotoxy(34,4);
	textcolor(19);
	printf("Disciplina");
	gotoxy(34,5);
	textcolor(20);
	printf("Geral");
	}
	if((controle == 2) && ( entradaSub != 8)&&(entradaSub == 13))
	{	void BuscarAluno();
		BuscarAluno();
		entradaSub = 8;
		controle =0;
	}
	
		if((controle == 1) && ( entradaSub != 8)){// sub buscar  Aluno
	gotoxy(34,4);
	textcolor(20);
	printf("Disciplina");
	gotoxy(34,5);
	textcolor(19);
	printf("Geral");
	}
}while(entradaSub != 8);	
}

if((entradaSub == 13 ) && (controle == 2)&&(a == 3)){ //sub Busca Professor
	gotoxy(34,4);
	textcolor(20);
	printf("Disciplina");
	gotoxy(34,5);
	textcolor(19);
	printf("Geral");
	retangulo(33,3,12,3,31,31);
	gotoxy(33,3);
	printf("%c",203);
	gotoxy(33,6);
	printf("%c",204);
	do{
		entradaSub = getch();
		entradaSub = getch();
	
		if((entradaSub == 80) && (controle <= 1)){
			controle = controle + 1;
		}
		if((entradaSub == 72) && (controle >= 2)){
			controle = controle - 1;
	}
		if(entradaSub == 75) {
			entradaSub = 8;
			controle =1;
	gotoxy(34,4);
	textcolor(19);
	printf("Disciplina");
	gotoxy(34,5);
	textcolor(19);
	printf("Geral");
			
			
	}
	if((controle == 2) && ( entradaSub != 8)){// sub Busca Professor
	gotoxy(34,4);
	textcolor(19);
	printf("Disciplina");
	gotoxy(34,5);
	textcolor(20);
	printf("Geral");
	}
		if((controle == 1) && ( entradaSub != 8)){// sub Busca Professor
	gotoxy(34,4);
	textcolor(20);
	printf("Disciplina");
	gotoxy(34,5);
	textcolor(19);
	printf("Geral");
	}
}while(entradaSub != 8);	
}
	
	
}
if(a == 4){//MENU ATUALIZAR
	if((controle == 1) && (a==4)){
		gotoxy(32,4);
	textcolor(20);
	printf("Aluno");
	}else{
	gotoxy(32,4);
	textcolor(19);
	printf("Aluno");	
	}	
		if((controle == 2) && (a==4)){
		gotoxy(32,5);
	textcolor(20);
	printf("Professor");
	}else{
	gotoxy(32,5);
	textcolor(19);
	printf("Professor");	
	}	
}
entradaSub = 1;

}while(controle !=0);
	

}
void Menu(int a)
{
	gotoxy(4,2);
	textcolor(1);
	printf("C");
	textcolor(0);
	printf("adastra");
	gotoxy(13,2);
	textcolor(1);
	printf("|");
	gotoxy(15,2);
	textcolor(1);
	printf("L");
	textcolor(0);
	printf("ista");
		gotoxy(21,2);
	textcolor(1);
	printf("|");
	gotoxy(23,2);
	textcolor(1);
	printf("B");
	textcolor(0);
	printf("uscar");
		gotoxy(30,2);
	textcolor(1);
	printf("|");
	gotoxy(32,2);
	textcolor(1);
	printf("A");
	textcolor(0);
	printf("tualizar");
		gotoxy(42,2);
	textcolor(1);
	printf("|");
	gotoxy(44,2);
	textcolor(1);
	printf("S");
	textcolor(0);
	printf("air");
	// Cadastrar
	if(a == 1){
	
	gotoxy(4,2);
	textcolor(20);
	printf("C");
	textcolor(20);
	printf("adastra");
	gotoxy(13,2);
	textcolor(1);
}else{
	gotoxy(4,2);
	textcolor(1);
	printf("C");
	textcolor(0);
	printf("adastra");
	gotoxy(13,2);
	textcolor(1);
}
	// Lista
	if(a == 2){
	gotoxy(15,2);
	textcolor(20);
	printf("L");
	textcolor(20);
	printf("ista");
	gotoxy(21,2);
	textcolor(1);
}else{
	
	gotoxy(15,2);
	textcolor(1);
	printf("L");
	textcolor(0);
	printf("ista");
	gotoxy(21,2);
	textcolor(1);
}
	// Buscar
	if(a == 3){
	gotoxy(23,2);
	textcolor(20);
	printf("B");
	textcolor(20);
	printf("uscar");
	gotoxy(30,2);
	textcolor(1);
}else{
	gotoxy(23,2);
	textcolor(1);
	printf("B");
	textcolor(0);
	printf("uscar");
		gotoxy(30,2);
	textcolor(1);
}
	//Atualizar
	if(a == 4){
	gotoxy(32,2);
	textcolor(20);
	printf("A");
	textcolor(20);
	printf("tualizar");
	gotoxy(42,2);
	textcolor(1);
}else{
	gotoxy(32,2);
	textcolor(1);
	printf("A");
	textcolor(0);
	printf("tualizar");
	gotoxy(42,2);
	textcolor(1);
}
if(a == 5){
	gotoxy(44,2);
	textcolor(20);
	printf("S");
	textcolor(20);
	printf("air");
}else{
		gotoxy(44,2);
	textcolor(1);
	printf("S");
	textcolor(0);
	printf("air");
}
}
void telaCadastroProfessor(){
	
	
//	retangulo(int x, int y,int c, int l,int txt,int tb);
typedef struct professorDisciplina{
				char nome[60];
				char disciplina[25];
				int codigoProfessor;
				int codigo;
				int CodigoDiciplina;
			}Matricula;

Matricula sv;
int a = 1;
typedef struct cadastroProfessor{
int Codigo;
int turma;
char disciplinaLecionar[25];
char nomeProfessor[60];
}professor;
// ARQUIVOS CONFIGURAÇÕES
	professor Dados;
	professor recebidos;
	int cod = 0;
	FILE * ver = fopen("C:\\Sistema\\Professores","rb");
	if(ver  == NULL){
		recebidos.Codigo = 1;
	}else{
		fseek(ver,-sizeof(professor),SEEK_END);
		fread(&Dados,sizeof(professor),1,ver);
		recebidos.Codigo = Dados.Codigo+1;
		fclose(ver);
	}
	int lado = 1;
	int controle = 0;


do{
tela();
gotoxy(30,2);
textcolor(20);
//CODIGO
	printf("CADASTRO DO PROFESSOR");
	retangulo(11,5,60,2,19,31);
	gotoxy(13,5);
	textcolor(19);
	printf("NOME DO PROFESSOR");
	gotoxy(12,6);
	fflush(stdin);
	scanf("%[^\n]s",&recebidos.nomeProfessor);
	strupr(recebidos.nomeProfessor);
	gotoxy(12,6);
	printf("%s",recebidos.nomeProfessor);
	retangulo(11,9,30,2,19,31);
	gotoxy(13,9);
	textcolor(19);
	printf("DISCIPLINA A LECIONAR");
	gotoxy(13,10);
	fflush(stdin);
	scanf("%[^\n]s",&recebidos.disciplinaLecionar);
	strupr(recebidos.disciplinaLecionar);
	gotoxy(13,10);
	printf("%s",recebidos.disciplinaLecionar);
	retangulo(11,13,11,2,19,31);
	gotoxy(13,13);
	textcolor(19);
	printf("TURMA");
	gotoxy(12,14);
	fflush(stdin);
	scanf("%d",&recebidos.turma);
	//===========================================================================================================================================TESTAR SE TURMA EXISTE
	int turmaExiste = 0;
		typedef struct cadastroTurma{
int Codigo;
int turma;
char sala[10];
char horario[25];
char disciplina[25]	;	
}turma;
int guarda = 500;
int valor = 1;
	turma registro;
	FILE * arq = fopen("C:\\Sistema\\Turmas","rb");
	if(arq == NULL ){
		//achado = 1;
	}else{
		
		
		int r;
		fseek(arq,-sizeof(turma),SEEK_END);
		fread(&registro,sizeof(turma),1,arq);
		valor = registro.Codigo;
		rewind(arq);
		
//int turmaExiste = buscarTurma(recebidos.turma,recebidos.disciplina);

		int x =0;
		int ct = 0 ;
		while(x <= valor ){
			fseek(arq,x*sizeof(turma),SEEK_SET);
			fread(&registro,sizeof(turma),1,arq);
			strupr(registro.disciplina);
			//printf("\n %s = %s",registro.disciplina,recebidos.disciplinaLecionar);
			r = strcmp(registro.disciplina,recebidos.disciplinaLecionar);
			if(r == 0){
				//printf("MATERIA ACHADA ");
				if(registro.turma == recebidos.turma){
					turmaExiste = 2;
					//sv.CodigoDiciplina = registro.Codigo;
					
					//	printf("MATERIA ACHADA");
					x = x+valor;
				}
				}
			x++;
			
		}
	
	fclose(arq);
}
int rdi = 4;
//===============================================================================================================================================================================
typedef struct dados{
int Codigo;
int cargaHoraria;
char disciplina[25];

}Diciplina;
Diciplina d;
int dis;
int tdi;
int guardar;
FILE * di = fopen("C:\\Sistema\\Disciplinas","rb");
if(di == NULL){
	dis = 0;
}else{
	fseek(di,-sizeof(Diciplina),SEEK_END);
	fread(&d,sizeof(Diciplina),1,di);
	tdi = d.Codigo;
	rewind(di);
	int l = 0;
	
	while(l <= tdi){
		fseek(di,l*sizeof(Diciplina),SEEK_SET);
		fread(&d,sizeof(Diciplina),1,di);
		strupr(d.disciplina);
		//printf("\n %s = %s",d.disciplina,recebidos.disciplinaLecionar);
		rdi = strcmp(d.disciplina,recebidos.disciplinaLecionar);
		if(rdi == 0){
			sv.CodigoDiciplina = d.Codigo;
			guardar = d.Codigo;
			l = l + tdi;
			rdi = 500;
		}
		
		
		l++;
	}
}










professor buscarProfessor;
int exiteProf = 9;
int qtProf = 2;
int kkk = 0;


FILE * prof = fopen("C:\\Sistema\\Professores","rb");
if(prof == NULL){
	exiteProf = 0;
}else{
	fseek(prof,-sizeof(professor),SEEK_END);
	fread(&buscarProfessor,sizeof(professor),1,prof);
	qtProf = buscarProfessor.Codigo;
	rewind(prof);
	while(kkk <= qtProf){
		fseek(prof,kkk*sizeof(professor),SEEK_SET);
		fread(&buscarProfessor,sizeof(professor),1,prof);
		exiteProf = strcmp(recebidos.nomeProfessor,buscarProfessor.nomeProfessor);
		if(exiteProf == 0){
			recebidos.Codigo = buscarProfessor.Codigo;
			exiteProf = 1;
			kkk = kkk+qtProf;
			fclose(prof);
		}
		
		
		
		kkk++;
	}
	
	
	
	
	
}
//====================================================================================================================================Cadastrar materiaProfessor
/*				char nome[60];
				char disciplina[25];
				int codigoProfessor;
				int codigo;
				int CodigoDiciplina;
				*/
//=========================================================================================================================================PEGANDO ULTIMO CODIGO 
FILE * salvar = fopen("C:\\Sistema\\Professor_disciplina","rb");
if(salvar == NULL){
	sv.codigo = 1;
}else{
	fseek(salvar,-sizeof(Matricula),SEEK_END);
	fread(&sv,sizeof(Matricula),1,salvar);
	sv.codigo = sv.codigo +1;
	rewind(salvar);
	fclose(salvar);
	}
// GUARDANDO DADOS ESTRUTURA DE ARMAZENAMENTO====================================================================================================================================
sv.CodigoDiciplina = guardar;
strcpy(sv.nome,recebidos.nomeProfessor);
strcpy(sv.disciplina,recebidos.disciplinaLecionar);
sv.codigoProfessor = recebidos.Codigo;

//printf("VALOR DE CODIGO DISCIPLINA E %d",sv.CodigoDiciplina );

// ===============================================================================================================================BUSCAR DUPLICIDADE DE CADASTRO DE MATERIA
Matricula com;
int kk = 0;
int matAloc =  9;// variavel de controle não usar
int retorno = 9;
FILE * Duplicidade = fopen("C:\\Sistema\\Professor_disciplina","rb");
while(kk <= sv.codigo){
	fseek(Duplicidade,kk*sizeof(Matricula),SEEK_SET);
	fread(&com,sizeof(Matricula),1,Duplicidade);
	retorno = strcmp(com.nome,sv.nome);
	if(retorno == 0){
		
		//printf("\n CODIGO %d  = %d",sv.CodigoDiciplina,sv.CodigoDiciplina);
		if(sv.CodigoDiciplina == sv.CodigoDiciplina){
			matAloc = 2;
			turmaExiste = 4;
			kk = kk + sv.codigo;
			//printf("\n CODIGO %d  = %d",sv.CodigoDiciplina,sv.CodigoDiciplina);
		}
		
	}
	
	
	kk++;
}
fclose(Duplicidade);
//==========================================================================================================================================TESTAR SE O PROFESSOR JÀ FOI CADASTRADO




	int lado = 1;
	int controle = 0;
	if(rdi == 500){
	
	if((turmaExiste == 2)){
	
	do{
		if(lado ==1){
			retangulo(25,17,16,2,20,31);
			gotoxy(26,18);
			textcolor(20);
			printf("SALVAR CADASTRO");
		}else{
			retangulo(25,17,16,2,19,31);
			gotoxy(26,18);
			textcolor(19);
			printf("SALVAR CADASTRO");
		}
		if(lado == 2){
			retangulo(42,17,10,2,20,31);
			gotoxy(43,18);
			textcolor(20);
			printf("CANCELAR");
		}else{
			retangulo(42,17,10,2,19,31);
			gotoxy(43,18);
			textcolor(19);
			printf("CANCELAR");
		}
		if((controle == 13)&&(lado == 1)){// Salvando Dados
			controle = 12;
			
			if(exiteProf != 1){
			FILE * salvar = fopen("C:\\Sistema\\Professores","a+");
			if(salvar == NULL){
				
			}else{
				fwrite(&recebidos,sizeof(professor),1,salvar);
				fclose(salvar);
			}}
			FILE * salvar2 = fopen("C:\\Sistema\\Professor_disciplina","a+");
			fwrite(&sv,sizeof(Matricula),1,salvar2);
			fclose(salvar2);
			
			
	}
			
			
			
		
		if((controle == 13)&&(lado==2)){
			controle = 12;
			a = 1;
		}
		if(controle !=12){
		
		controle = getch();
		controle = getch();
		
		if((controle == 77)&&(lado ==1)){
			lado++;
		}
		if((controle == 75)&&(lado == 2)){
			lado--;
		}
	}
	}while(controle != 12);
}
if(matAloc == 2){
	gotoxy(25,14);
			textcolor(30);
			printf("PROFESSOR JA CADASTRADO A ESSA MATERIA E TURMA ");
			textcolor(19);
}else{

if(turmaExiste != 2){
			gotoxy(43,10);
			textcolor(30);
			printf("TURMA OU DISCIPLINA ESTA INCORRETO ");
			textcolor(19);
}
}
}else{
gotoxy(43,10);
			textcolor(30);
			printf("DISCIPLINA NAO CADASTRADA ");
			textcolor(19);	
}



	lado = 1;
	controle = 0;
	
	
	do{
		if(lado ==1){
			retangulo(25,20,16,2,20,31);
			gotoxy(28,21);
			textcolor(20);
			printf("NOVO CADASTRO");
		}else{
			retangulo(25,20,16,2,19,31);
			gotoxy(28,21);
			textcolor(19);
			printf("NOVO CADASTRO");
		}
		if(lado == 2){
			retangulo(42,20,10,2,20,31);
			gotoxy(45,21);
			textcolor(20);
			printf("SAIR");
		}else{
			retangulo(42,20,10,2,19,31);
			gotoxy(45,21);
			textcolor(19);
			printf("SAIR");
		}
		if((controle == 13)&&(lado == 1)){
			controle = 12;
		}
		if((controle == 13)&&(lado==2)){
			controle = 12;
			a = 4;
		}
		if(controle !=12){
		
		controle = getch();
		controle = getch();
		
		if((controle == 77)&&(lado ==1)){
			lado++;
		}
		if((controle == 75)&&(lado == 2)){
			lado--;
		}
	}
	}while(controle != 12);
	
}while(a == 1);
	
}
void telaCadastroAluno(){
//	retangulo(int x, int y,int c, int l,int txt,int tb);
int a = 1;
typedef struct cadastroAluno{
	int Codigo;
	int turma;
	char disciplina[25];
	char nome[60];
}Aluno;
typedef struct TipoDados{
	int Codigo;
	char nome[50];
	char RGA[14];
	char data[11];
	char telefone[18];
	char nomePai[120];
	char nomeMae[120];
	char email[120];
	char endereco[120];
}Modelo;
do{
tela();
// ARQUIVOS CONFIGURAÇÕES
	int c = 0;
	int p = 0;
	int limite = 0;
	int cont = 0;
	
	Modelo d;
//++++===================================================================================================================================DADOS DE ENTRADA USUARIO++++++++++++++++++	
Aluno recebidos;	
gotoxy(30,2);
textcolor(20);

	printf("CADASTRO DO ALUNO EM MATERIAS");
	
	retangulo(11,5,11,2,19,31);
	gotoxy(13,5);
	textcolor(19);
	printf("TURMA");
	gotoxy(12,6);
	fflush(stdin);
	scanf("%d",&recebidos.turma);
	fflush(stdin);
	retangulo(11,9,30,2,19,31);
	gotoxy(13,9);
	textcolor(19);
	printf("DISCIPLINA");
	gotoxy(13,10);
	fflush(stdin);
	scanf("%[^\n]s",&recebidos.disciplina);
	strupr(recebidos.disciplina);
	retangulo(11,13,60,2,19,31);
	gotoxy(13,13);
	textcolor(19);
	printf("NOME DO ALUNO");
	gotoxy(12,14);
	fflush(stdin);
	scanf("%[^\n]s",&recebidos.nome);
	strupr(recebidos.nome);
	
	
	
	
	int lado = 1;
	int controle = 0;
	int achado;
	int turmaExiste = 0;
	// TESTE SE EXISTE MATERIA===================================================================================================================================================
	typedef struct cadastroTurma{
int Codigo;
int turma;
char sala[10];
char horario[25];
char disciplina[25]	;	
}turma;
		turma registro;
	FILE * arq = fopen("C:\\Sistema\\Turmas","rb");
	if(arq == NULL ){
		//achado = 1;
	}else{
		
		int valor = 1;
		int r;
		fseek(arq,-sizeof(turma),SEEK_END);
		fread(&registro,sizeof(turma),1,arq);
		valor = registro.Codigo;
		
		rewind(arq);
		
//int turmaExiste = buscarTurma(recebidos.turma,recebidos.disciplina);

		int x =0;
		int ct = 0 ;
		while(x <= valor ){
			fseek(arq,x*sizeof(turma),SEEK_SET);
			fread(&registro,sizeof(turma),1,arq);
			strupr(registro.disciplina);
			//printf("\n %s = %s",registro.disciplina,teste);
			r = strcmp(registro.disciplina,recebidos.disciplina);
			if(r == 0){
				if(registro.turma == recebidos.turma){
					turmaExiste = 2;
				}
				
				
				
				
				
			}
			x++;
			
		}
	
	fclose(arq);
	
}
	
	
	
	
	do{
		
		if(lado ==1){
			retangulo(25,17,16,2,20,31);
			gotoxy(26,18);
			textcolor(20);
			printf("SALVAR CADASTRO");
		}else{
			retangulo(25,17,16,2,19,31);
			gotoxy(26,18);
			textcolor(19);
			printf("SALVAR CADASTRO");
		}
		if(lado == 2){
			retangulo(42,17,10,2,20,31);
			gotoxy(43,18);
			textcolor(20);
			printf("CANCELAR");
		}else{
			retangulo(42,17,10,2,19,31);
			gotoxy(43,18);
			textcolor(19);
			printf("CANCELAR");
		}
		// TESTE SE EXISTE O ALUNO===================================================================================================================================================
		FILE * ver = fopen("C:\\Sistema\\Alunos","rb");
		if(ver == NULL){
		cont = 0;
		limite = 1;
		
		
	}else{
		fseek(ver,-sizeof(Modelo),SEEK_END);
		fread(&d,sizeof(Modelo),1,ver);
		cont = d.Codigo;
		//printf("VALOR DE CODIGO E %d",cont);
}
 			
	fclose(ver);
		FILE * buscar = fopen("C:\\Sistema\\Alunos","rb");
		if(buscar == NULL){
			
		}else{
			int con7 = 0;
			int existe;
			while(con7 < cont)
			{
				fseek(buscar,con7*sizeof(Modelo),SEEK_SET);
				fread(&d,sizeof(Modelo),1,buscar);
				existe = strcmp(recebidos.nome,d.nome);
				printf("\n %s = %s",recebidos.nome,d.nome);
				if(existe == 0){
					con7 = cont+100;
					achado = d.Codigo;
					recebidos.Codigo = achado;
				}else{
					achado = 0;
				}
				con7++;
			}
		}
		fclose(buscar);
		//========================================================================================================================================================
		
		
		
		
		
		
		//===========================================================================================================================================================MATRICULA==========
		//  QUANTIDA DE ALUNOS CADASTRADOS
		if((controle == 13)&&(lado == 1)){
		//===========================================================================================================================================================Verificando Truma
		if(turmaExiste != 2){
				gotoxy(23,6);
			textcolor(30);
			printf("TURMA OU DISCIPLINA ESTA INCORRETO ");
			textcolor(19);
		}
		if(achado != 0){
			typedef struct AlunoDisciplina{
				char nome[60];
				char disciplina[25];
				int codigoAluno;
				int codigo;
				
			}Matricula;
			Matricula DD;
			/*
			typedef struct cadastroAluno{
		int Codigo;
		int turma;
		char disciplina[25];
		char nome[60];
		}Aluno;
*/
			//======================================================================================================COPIANDO DADO DA ENTRADA PARA SER ARMAZENDA NA NOVA ESTRUTURA
			strcpy(DD.nome,recebidos.nome);
			strcpy(DD.disciplina,recebidos.disciplina);
			DD.codigoAluno = recebidos.Codigo;
			int ts = 0;
			FILE * salvar = fopen("C:\\Sistema\\Aluno_disciplina","rb");
			if(salvar == NULL){
				DD.codigo = 1;
				FILE * gd = fopen("C:\\Sistema\\Aluno_disciplina","wb");
				fwrite(&DD,sizeof(Matricula),1,gd);
				fclose(gd);
				printf("\n ESTOU NO IF");
				achado = 0;
				//a = 3;
			//	system("pause");
			}else{
				
				Matricula xx;
				fseek(salvar,-sizeof(Matricula),SEEK_END);
				fread(&xx,sizeof(Matricula),1,salvar);
			//	printf("\n VALOR DA ULTIMA MATRICULA %d",xx.codigo);
			//	system("pause");
				DD.codigo = xx.codigo+1;
				fclose(salvar);
				FILE * GUARDAR = fopen("C:\\Sistema\\Aluno_disciplina","a+");
				fwrite(&DD,sizeof(Matricula),1,GUARDAR);
				fclose(GUARDAR);
				achado = 0;
				
				
			}
			
			
			
			
	
		}else{
			gotoxy(48,13);
			textcolor(30);
			printf("ALUNO NAO CADASTRADO ");
			textcolor(19);
		}
		
		
		controle = 12;
			}
			
			
			
		
		if((controle == 13)&&(lado==2)){
			controle = 12;
			a = 1;
		}
		if(controle !=12){
		
		controle = getch();
		controle = getch();
		
		if((controle == 77)&&(lado ==1)){
			lado++;
			
		}
		if((controle == 75)&&(lado == 2)){
			lado--;
		}
	}
	}while(controle != 12);
	lado = 1;
	controle = 0;
	
	
	do{
		if(lado ==1){
			retangulo(25,20,16,2,20,31);
			gotoxy(28,21);
			textcolor(20);
			printf("NOVO CADASTRO");
		}else{
			retangulo(25,20,16,2,19,31);
			gotoxy(28,21);
			textcolor(19);
			printf("NOVO CADASTRO");
		}
		if(lado == 2){
			retangulo(42,20,10,2,20,31);
			gotoxy(45,21);
			textcolor(20);
			printf("SAIR");
		}else{
			retangulo(42,20,10,2,19,31);
			gotoxy(45,21);
			textcolor(19);
			printf("SAIR");
		}
		if((controle == 13)&&(lado == 1)){
			controle = 12;
			
		}
		if((controle == 13)&&(lado==2)){
			controle = 12;
			a = 4;
		}
		if(controle !=12){
		
		controle = getch();
		controle = getch();
		
		if((controle == 77)&&(lado ==1)){
			lado++;
		}
		if((controle == 75)&&(lado == 2)){
			lado--;
		}
	}
	}while(controle != 12);
	
}while(a == 1);
	
}
void telaCadastroTurma(){
//	retangulo(int x, int y,int c, int l,int txt,int tb);
int a = 1;
typedef struct cadastroTurma{
int Codigo;
int turma;
char sala[10];
char horario[25];
char disciplina[25]	;
}turma;

do{
tela();
gotoxy(30,2);
textcolor(20);
printf("CADASTRO DE TURMA");
// ARQUIVOS CONFIGURAÇÕES

	int c = 0;
	int p = 0;
	int limite = 0;
	int cont = 0;
	
turma Dados;
	FILE * ver = fopen("C:\\Sistema\\Turmas","rb");
		if(ver == NULL){
		cont = 0;
		limite = 1;
		turma recebidos[limite];
	}else{
		
		for( p = 0; p != 300; p++ ){
		fseek(ver,p*sizeof(turma),SEEK_SET);
		fread(&Dados,sizeof(turma),1,ver);
		//printf("\n TESTE  codigo %d = %d\n",vetor.Codigo,cont);
		
		if(Dados.Codigo != cont){
			p = 299;
		}
		cont++;
		
	}
	cont = cont - 1;//CONTINUAÇÃO DE DADOS EXISTENTE
	limite = cont +1;// LIMTE DO NOVO VETOR
	
	
}
		turma recebidos[limite];
		for(p = 0; p<=cont ; p++){
			fseek(ver,p*sizeof(turma),SEEK_SET);
			fread(&recebidos[p],sizeof(turma),1,ver);
			
		}
		fclose(ver);
		
		
	
	recebidos[cont].Codigo = cont;
	retangulo(11,5,11,2,19,31);
	gotoxy(13,5);
	textcolor(19);
	printf("TURMA");
	gotoxy(12,6);
	fflush(stdin);
	scanf("%d",&recebidos[cont].turma);
	fflush(stdin);
	retangulo(26,5,15,2,19,31);
	gotoxy(27,5);
	textcolor(19);
	printf("SALA");
	gotoxy(27,6);
	fflush(stdin);
	scanf("%[^\n]s",&recebidos[cont].sala);
	retangulo(11,9,15,2,19,31);
	gotoxy(13,9);
	textcolor(19);
	printf("HORARIO");
	gotoxy(12,10);
	fflush(stdin);
	gets(recebidos[cont].horario);
	retangulo(27,9,30,2,19,31);
	gotoxy(28,9);
	textcolor(19);
	printf("DISCIPLINA");
	gotoxy(28,10);
	fflush(stdin);
	scanf("%[^\n]s",&recebidos[cont].disciplina);
	
	gotoxy(20,4);
	printf("%s",recebidos[cont].horario);
	system("pause");
	int lado = 1;
	int controle = 0;
	do{
		if(lado ==1){
			retangulo(25,17,16,2,20,31);
			gotoxy(26,18);
			textcolor(20);
			printf("SALVAR CADASTRO");
		}else{
			retangulo(25,17,16,2,19,31);
			gotoxy(26,18);
			textcolor(19);
			printf("SALVAR CADASTRO");
		}
		if(lado == 2){
			retangulo(42,17,10,2,20,31);
			gotoxy(43,18);
			textcolor(20);
			printf("CANCELAR");
		}else{
			retangulo(42,17,10,2,19,31);
			gotoxy(43,18);
			textcolor(19);
			printf("CANCELAR");
		}
		if((controle == 13)&&(lado == 1)){// Salvando Dados
			controle = 12;
			FILE * arquivo = fopen("C:\\Sistema\\Turmas","wb");
			if(arquivo == NULL){
			printf("\n ERRO AO ABRIR O ARQUIVO");
			}else{
				fwrite(recebidos,sizeof(turma),limite,arquivo);
				fclose(arquivo);
	}
			
			
			
		}
		if((controle == 13)&&(lado==2)){
			controle = 12;
			a = 1;
		}
		if(controle !=12){
		
		controle = getch();
		controle = getch();
		
		if((controle == 77)&&(lado ==1)){
			lado++;
		}
		if((controle == 75)&&(lado == 2)){
			lado--;
		}
	}
	}while(controle != 12);
	lado = 1;
	controle = 0;
	
	
	do{
		if(lado ==1){
			retangulo(25,20,16,2,20,31);
			gotoxy(28,21);
			textcolor(20);
			printf("NOVO CADASTRO");
		}else{
			retangulo(25,20,16,2,19,31);
			gotoxy(28,21);
			textcolor(19);
			printf("NOVO CADASTRO");
		}
		if(lado == 2){
			retangulo(42,20,10,2,20,31);
			gotoxy(45,21);
			textcolor(20);
			printf("SAIR");
		}else{
			retangulo(42,20,10,2,19,31);
			gotoxy(45,21);
			textcolor(19);
			printf("SAIR");
		}
		if((controle == 13)&&(lado == 1)){
			controle = 12;
		}
		if((controle == 13)&&(lado==2)){
			controle = 12;
			a = 4;
		}
		if(controle !=12){
		
		controle = getch();
		controle = getch();
		
		if((controle == 77)&&(lado ==1)){
			lado++;
		}
		if((controle == 75)&&(lado == 2)){
			lado--;
		}
	}
	}while(controle != 12);
	
}while(a == 1);
	
}
void telaCadastroDisciplina(){
//	retangulo(int x, int y,int c, int l,int txt,int tb);
int a = 1;
typedef struct dados{
int Codigo;
int cargaHoraria;
char disciplina[25];

}Diciplina;
do{
	
tela();
gotoxy(30,2);
textcolor(20);
	printf("CADASTRO DO DISCIPLINA");
	// ARQUIVOS CONFIGURAÇÕES

	int c = 0;
	int p = 0;
	int limite = 0;
	int cont = 0;
	
Diciplina Dados;
	FILE * ver = fopen("C:\\Sistema\\Disciplinas","+a");
		if(ver == NULL){
		cont = 0;
		limite = 1;
		Diciplina recebidos[limite];
	}else{
		fseek(ver,-sizeof(Diciplina),SEEK_END);
		fread(&Dados,sizeof(Diciplina),1,ver);
		cont = Dados.Codigo ;
		cont++;
		limite = cont +1;// LIMTE DO NOVO VETOR
		
	
}
		Diciplina recebidos;
		/*for(p = 0; p<=cont ; p++){
			fseek(ver,p*sizeof(Diciplina),SEEK_SET);
			fread(&recebidos[p],sizeof(Diciplina),1,ver);
			
		}*/
		fclose(ver);
		
		
	// ENTRADAS USUARIO
	recebidos.Codigo = cont;
	retangulo(11,5,16,2,19,31);
	gotoxy(13,5);
	textcolor(19);
	printf("CARGA HORARIA");
	gotoxy(12,6);
	fflush(stdin);
	scanf("%d",&recebidos.cargaHoraria);
	fflush(stdin);
	retangulo(11,9,30,2,19,31);
	gotoxy(13,9);
	textcolor(19);
	printf("DISCIPLINA");
	gotoxy(13,10);
	fflush(stdin);
	scanf("%[^\n]s",&recebidos.disciplina);
	int lado = 1;
	int controle = 0;
	do{
		if(lado ==1){
			retangulo(25,17,16,2,20,31);
			gotoxy(26,18);
			textcolor(20);
			printf("SALVAR CADASTRO");
		}else{
			retangulo(25,17,16,2,19,31);
			gotoxy(26,18);
			textcolor(19);
			printf("SALVAR CADASTRO");
		}
		if(lado == 2){
			retangulo(42,17,10,2,20,31);
			gotoxy(43,18);
			textcolor(20);
			printf("CANCELAR");
		}else{
			retangulo(42,17,10,2,19,31);
			gotoxy(43,18);
			textcolor(19);
			printf("CANCELAR");
		}
		if((controle == 13)&&(lado == 1)){// Salvando Dados
			controle = 12;
			FILE * arquivo = fopen("C:\\Sistema\\Disciplinas","+a");
			if(arquivo == NULL){
			printf("\n ERRO AO ABRIR O ARQUIVO");
			}else{
				
				fwrite(&recebidos,sizeof(Diciplina),1,arquivo);
				fclose(arquivo);
	}
			
			
			
		}
		if((controle == 13)&&(lado==2)){
			controle = 12;
			a = 1;
		}
		if(controle !=12){
		
		controle = getch();
		controle = getch();
		
		if((controle == 77)&&(lado ==1)){
			lado++;
		}
		if((controle == 75)&&(lado == 2)){
			lado--;
		}
	}
	}while(controle != 12);
	lado = 1;
	controle = 0;
	
	
	do{
		if(lado ==1){
			retangulo(25,20,16,2,20,31);
			gotoxy(28,21);
			textcolor(20);
			printf("NOVO CADASTRO");
		}else{
			retangulo(25,20,16,2,19,31);
			gotoxy(28,21);
			textcolor(19);
			printf("NOVO CADASTRO");
		}
		if(lado == 2){
			retangulo(42,20,10,2,20,31);
			gotoxy(45,21);
			textcolor(20);
			printf("SAIR");
		}else{
			retangulo(42,20,10,2,19,31);
			gotoxy(45,21);
			textcolor(19);
			printf("SAIR");
		}
		if((controle == 13)&&(lado == 1)){
			controle = 12;
		}
		if((controle == 13)&&(lado==2)){
			controle = 12;
			a = 4;
		}
		if(controle !=12){
		
		controle = getch();
		controle = getch();
		
		if((controle == 77)&&(lado ==1)){
			lado++;
		}
		if((controle == 75)&&(lado == 2)){
			lado--;
		}
	}
	}while(controle != 12);
	
}while(a == 1);
	
}
void BuscarAluno(){
int controle = 1; 
tela();	
typedef struct TipoDados{
	int Codigo;
	char nome[50];
	char RGA[14];
	char data[11];
	char telefone[18];
	char nomePai[120];
	char nomeMae[120];
	char email[120];
	char endereco[120];
}Modelo;
char telefone[20];
	Modelo busca;
strcpy(telefone,busca.telefone);

	
	char nome[120];
	gotoxy(30,2);
	textcolor(23);
	printf("BUSCAR ALUNO");
	gotoxy(3,4);
	textcolor(23);
	printf("NOME:");
	gotoxy(16,4);
	textbackground(46);
	printf("                                      ");
	gotoxy(16,4);
	textbackground(46);
	textcolor(16);
	fflush(stdin);
	scanf("%[^\n]s",&nome);
	strupr(nome);
	gotoxy(16,4);
	printf("%s",nome);	
	//============================================================================================================================================PROCURAR ALUNO
	FILE * buscar = fopen("C:\\Sistema\\Alunos","rb");
	int tam = 0;
	int et = 9;
	int retorno = 4;
	if(buscar == NULL){
		et = 0;
	}else{
		//printf("ENTREI");
		fseek(buscar,-sizeof(Modelo),SEEK_END);
		fread(&busca,sizeof(Modelo),1,buscar);
		tam = busca. Codigo;
		rewind(buscar);
		int cont = 0;
		while(cont <= tam){
		//	printf("\n CONT = %d",cont);
		fseek(buscar,cont*sizeof(Modelo),SEEK_SET);
		fread(&busca,sizeof(Modelo),1,buscar);
		//printf("\n %s = %s",busca.nome,nome);
		retorno	= strcmp(busca.nome,nome);
		if(retorno == 0){
			cont = cont+tam;
		//CADASTRO NOME
	gotoxy(16,4);
	textbackground(31);
	printf("                                      ");
	gotoxy(3,4);
	textcolor(23);
	printf("NOME:");
	gotoxy(8,4);
	textbackground(46);
	printf("                                      ");
	//textbackground(31);
	textcolor(16);
	gotoxy(8,4);
	printf("%s",busca.nome);
	//CADASTRO RGA
	int chaveMestre = 0;
	textbackground(31);
	gotoxy(48,4);
	textcolor(23);
	printf("RGA:");
	gotoxy(52,4);
	textbackground(46);
	printf("             ");
	//textbackground(31);
	textcolor(16);
	gotoxy(52,4);
	printf("%s",busca.RGA);
	//DATA DE NASCIMENTO
	textbackground(31);
	gotoxy(3,6);
	textcolor(23);
	printf("DATA NASC:");
	gotoxy(14,6);
	textbackground(46);
	printf("           ");
	gotoxy(14,6);
	textcolor(16);
	printf("%s",busca.data);
	//CADASTRO TELEFONE
	textbackground(31);
	gotoxy(32,6);
	textcolor(23);
	printf("TELEFONE:");
	gotoxy(41,6);
	textbackground(46);
	printf("               ");
	gotoxy(41,6);
	strcpy(telefone,busca.telefone);
	//textbackground(31);
	textcolor(16);
	printf("%s",telefone);
	//Nome do PAI
	textbackground(31);
	gotoxy(3,8);
	textcolor(23);
	printf("NOME DO PAI:");
	gotoxy(15,8);
	textbackground(46);
	printf("                        ");
	gotoxy(15,8);
	textcolor(16);
	printf("%s",busca.nomePai);
	//Nome da Mae
	textbackground(31);
	gotoxy(3,10);
	textcolor(23);
	printf("NOME DO MAE:");
	gotoxy(15,10);
	textbackground(46);
	printf("                        ");
	gotoxy(15,10);
	textcolor(16);
	printf("%s",busca.nomeMae);
	// EMAIL
	textbackground(31);
	gotoxy(3,12);
	textcolor(23);
	printf("EMAIL(gmail ou hotmail):");
	gotoxy(28,12);
	textbackground(46);
	printf("                        ");	
	gotoxy(28,12);
	//textbackground(31);
	textcolor(16);
	printf("%s",busca.email);
	//ENDEREÇO
	textbackground(31);
	gotoxy(3,14);
	textcolor(23);
	printf("ENDERECO:");
	gotoxy(15,14);
	textbackground(46);
	printf("                                              ");
	gotoxy(15,14);
	//textbackground(31);
	textcolor(16);
	printf("%s",busca.endereco);
		
	
		
		
		}
		cont++;
		}
		fclose(buscar);
	}int lado;
	//int controle;
	controle = 0;
	lado = 1;
	do{
		
		if(lado ==1){
			retangulo(25,17,16,2,20,31);
			gotoxy(27,18);
			textcolor(20);
			printf("NOVA BUSCA");
		}else{
			retangulo(25,17,16,2,19,31);
			gotoxy(27,18);
			textcolor(19);
			printf("NOVA BUSCA");
		}
		if(lado == 2){
			retangulo(42,17,10,2,20,31);
			gotoxy(43,18);
			textcolor(20);
			printf("CANCELAR");
		}else{
			retangulo(42,17,10,2,19,31);
			gotoxy(43,18);
			textcolor(19);
			printf("CANCELAR");
		}if((controle == 13)&&(lado==2)){
			controle =12;
		}
			if((controle == 13)&&(lado==1)){
			BuscarAluno();
		}
		if(controle !=12){
		
		controle = getch();
		controle = getch();
		if((controle == 77)&&(lado ==1)){
			lado++;
			
		}
		if((controle == 75)&&(lado == 2)){
			lado--;
		}
	}
	}while(controle != 12);

}
int main()
{ 
//telaCadastroAluno();
telaLogin();

int a = 3;
  int p = 1; 
  bool  sub = false;
	int entrada = 0;
	do{
	tela();
	Menu(p);
	entrada = getch();
	entrada = getch();
//	gotoxy(20,5);
//	printf("Valor de entrada e %d \n ",p);
	if((entrada == 77) && (p <=6)){
		p = p+1;
		if(p==6){
			p =1;
		}
	}
	if((entrada == 75) && ( p >= 1)){
		p = p-1;
		if(p == 0){
			p = 5;
		}
	}
	if(entrada == 80){
		sub = true;
	}
	if(entrada == 72){
		sub = false;
	}
	// Mudando Posição do SubMenu
	if((p == 1) && (sub == true)){
	subMenu(2,p,8,4);	
	Menu(p);
	}
	if((p==2) && (sub == true)){
	Menu(p);
	subMenu(13,p,8,4);
	
	}
	if((p == 3) && (sub == true)){
	subMenu(21,p,7,2);
	Menu(p);
	}
	if((p ==4) && (sub == true)){
		subMenu(31,p,6,1);
		Menu(p);
	}
	if((p == 5) && (sub == true)){
		subMenu(42,p,6,2);
		Menu(p);
	}
	
	
	gotoxy(20,25);// posição do system pause
//	system("pause");
		sub = false;
	}while(a >0);
	return 0;
}
