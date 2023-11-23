#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <conio.h>

int senha;
int x;
void CriarSenha();
void senha1();
void menu1();
void AlterarSenha();
void Codificar();
void Decodificar();
void Test();
void Decotest();
int main() 
{
CriarSenha();
senha1();
}

void CriarSenha(){
	
	FILE *fp;
	fp = fopen("D:\\Downloads\\trabalho de programa�ao\\Senha.txt","w");

}

void senha1(){


for (int i=0; i <=2;i++) // repetidor verifica se est� errado.
{
printf("Entre com a senha:");
scanf("%d",&senha);
printf("\nVerificando...\n");
system ("cls");


if(senha==123) //se a senha estiver correta, segue o programa.
{
 
 printf("Senha correta! Bem vindo.\n\n");
 menu1();
 system ("cls");
 break;

}

else //se ele nao estiver correto ele pode tentar mais 2 vezes.
{
printf("Senha incorreta! Tente novamente. \n");
}

}
}
void menu1()
{
	
	int menu;
	int i = 0;

	
	    while(menu !=5 ) //enquanto a op�ao nao for 5, ele faz outras coisas, quando for 5 ele sai
		{
		printf("1-Codificar");
		printf("\n2-Decodificar");
		printf("\n3-Teste");
		printf("\n4-Alterar senha");
		printf("\n5-Sair");
		printf("\n\nDigite sua opcao: ");
		scanf("%d",&menu);
		system("cls");
		
		switch (menu) //jeito pratico para utilizar as fun�oes do menu
		{
			case 1: Codificar(); //ele vai para o void codificar apertando 1
			break;
			case 2: Decodificar(); //ele vai para o void decodificar apertando 2
			break;
			case 3: Test(); //ele vai para o void test apertando 3
			break;
			case 4: AlterarSenha(); //ele vai para o void alterarsenha apertando 4
		    break;
			
		}
	
			
	}
	
	}
void AlterarSenha()
{		



    int y;
    int v;
    
    FILE *fp;
	fp = fopen("D:\\Downloads\\trabalho de programa�ao\\Senha.txt","w");
	
		printf("Coloque a nova senha: ");
		scanf("%d",&v);
		
	    printf("Confirme a nova senha: ");
	    scanf("%d",&y);
	
	if(v == y) //se a senha for igual a primeira digitada, segue o programa
	{
		
			fprintf(fp,"%d",v);
			fclose(fp);
		
		printf("Senha alterada com sucesso\n");
	}
	
	else
	{
		printf("As duas senhas nao se combinam\n"); //se nao for igual, ele sai do programa
	
	}


	
}

void Codificar()
{
	int len,i;
	FILE *fp; //o FILE guarda as informa��es espec�ficas sobre o arquivo, e o *fp serve para referenciar o arquivo a ser tratado pelo aplicativo
	fp=fopen("projeto.txt","w"); //fopen recebe dois argumentos a localiza��o do arquivo f�sico e o modo de opera��o
	//preenche a estrutura FILE com as informa��es necess�rias para a comunica��o entre o sistema operacional e o programa, cria em bloco de notas
	//abre o arquivo projeto para gravacao. Se o arquivo n�o existir, ele ser� criado. Se j� existir, o conte�do anterior ser� destru�do.
	
char letra[1000]; //declaramos letra para armazenar 1000 letras
fflush(stdin); //limpa o buffer de entrada
printf("Digite um texto para ser criptografado: ");
gets(letra); //esta fun��o l� uma string do teclado
len = strlen(letra); //strlen vai retornar o comprimento da string, para ler ate onde ele terminou de digitar, e armazenamos na variavel len

for(i=0; i < len; i++) //ele vai repetir ate eu parar de digitar letras
{
switch(letra[i]) //estrutura mais pratica para trocar os caracteres

{
case 'a':
	{
	letra[i]= '1';
	}
	break;
	
	
case 'b':
	{
	letra[i]= '2';
	}
	break;
	
	
case 'c':
	{
	letra[i]= '3';
	}
	break;
	
	
case 'd':
	{
	letra[i]= '4';
	}
	break;
case 'e':
	{
	letra[i]= '5';
	}
	break;
case 'f':
	{
	letra[i]= '6';
	}
   break;
   case 'g':
   	{
   		letra[i]= '7';
	}
	break;
	case 'h':
	{
	letra[i]= '8';
	}
	break;
case 'i':
	{
	letra[i]= '9';
	}
	break;
case 'j':
	{
	letra[i]= '0';
	}
	break;
case 'k':
	{
	letra[i]= 'a';
	}
	break;
case 'l':
	{
	letra[i]= 'b';
	}
	break;
case 'm':
	{
	letra[i]= 'c';
	}
	break;
case 'n':
	{
	letra[i]= 'd';
	}
	break;
case 'o':
	{
	letra[i]= 'e';
	}
	break;
case 'p':
	{
	letra[i]= 'f';
	}
	break;
case 'q':
	{
	letra[i]= 'g';
	}
	break;
case 'r':
	{
	letra[i]= 'h';
	}
	break;
case 's':
	{
	letra[i]= 'i';
	}
	break;
case 't':
	{
	letra[i]= 'j';
	}
	break;
case 'u':
	{
	letra[i]= 'k';
	
	}
	break;
case 'v':
	{
	letra[i]= 'l';
	}
	break;
case 'x':
	{
	letra[i]= 'm';
	}
	break;
case 'y':
	{
	letra[i]= 'n';
	}
	break;
case 'z':
	{
	letra[i]= 'o';
	}
	break;
case ',':
	{
	letra[i]= 'p';
	}
	break;
case '.':
	{
	letra[i]= 'q';
	}
	break;
case ';':
	{
	letra[i]= 'r';
	}
	break;
case '?':
	{
	letra[i]= 's';
	}
	break;
case '!':
	{
	letra[i]= 't';
	}
	break;
case ' ':
	{
	letra[i]= 'u';
	}
	break;
case '0':
	{
	letra[i]= 'w';
	}
	break;
case '1':
	{
	letra[i]= 'x';
	}
	break;
case '2':
	{
	letra[i]= 'y';
	}
	break;
case '3':
	{
	letra[i]= 'z';
	}
	break;
case '4':
	{
	letra[i]= '@';
	}
	break;
case '5':
	{
	letra[i]= '#';
	}
	break;
case '6':
	{
	letra[i]= '$';
	}
	break;
case '7':
	{
	letra[i]= '_';
	}
	break;
case '8':
	{
	letra[i]= '�';
	}
	break;
case '9':
	{
	letra[i]= '�';
	}
	break;
}
}
printf("A mensagem criptografada: %s\n",letra);

if (fp != 0) //se tiver mensagem para codificar ele vai codificar e mostrar
	{
		fprintf(fp, "%s", letra); //vai mostrar a mensagem codificada
		fclose (fp); //fclose fecha o arquivo e transfere os dados que est�o armazenados temporariamente em uma �rea de mem�ria para o disco
	}
	else // se n�o, aparece mensagem de erro
	{
		printf("A mensagem nao foi criptografada, ocorreu um erro");
	}
	
	
}

void Decodificar()
{
	

	int i = 0;
	int len1;
	char caractere;
	char letra[1000];
	FILE *fp;
	fp = fopen("projeto.txt","r");
    rewind(fp); //realocar� o localizador de posi��o do arquivo no in�cio do arquivo especificado
  
  while(!feof(fp)) //enquanto nao se chegar no final do arquivo
  {
  		fscanf (fp,"%c", &caractere); //encontra a sinaliza��o de final de arquivo n�o armazena nada na vari�vel caractere
  		fflush(stdin); 
  	if(!feof(fp)) //se nao for o final do arquivo ele mostra o proximo caractere
  	{
  		letra[i]=caractere;
	}
	  i++;
	  
  }
  
    len1 = strlen(letra);  
    
	printf ("Mensagem descriptografada: ");
for(i=0; i < len1; i++)
{
switch(letra[i])

{
case '1':
    {
	printf("a");
	}
	break;
case '2':
	{
	printf("b");
	}
	break;
case '3':
	{
	printf("c");
	}
	break;
case '4':
	{
	printf("d");
	}
	break;
case '5':
	{
	printf("e");
	}
	break;
case '6':
	{
	printf("f");
	}
   break;
case '7':
   	{
   	printf("g");
	}
	break;
case '8':
	{
	printf("h");
	}
	break;
case '9':
	{
	printf("i");
	}
	break;
case '0':
	{
	printf("j");
	}
	break;
case 'a':
	{
	printf("k");
	}
	break;
case 'b':
	{
	printf("l");
	}
	break;
case 'c':
	{
	printf("m");
	}
	break;
case 'd':
	{
	printf("n");
	}
	break;
case 'e':
	{
	printf("o");
	}
	break;
case 'f':
	{
	printf("p");
	}
	break;
case 'g':
	{
	printf("q");
	}
	break;
case 'h':
	{
	printf("r");
	}
	break;
case 'i':
	{
	printf("s");
	}
	break;
case 'j':
	{
	printf("t");
	}
	break;
case 'k':
	{
	printf("u");
	}
	break;
case 'l':
	{
	printf("v");
	}
	break;
case 'm':
	{
	printf("x");
	}
	break;
case 'n':
	{
	printf("y");
	}
	break;
case 'o':
	{
	printf("z");
	}
	break;
case 'p':
	{
	printf(",");
	}
	break;
case 'q':
	{
	printf(".");
	}
	break;
case 'r':
	{
	printf(";");
	}
	break;
case 's':
	{
	printf("?");
	}
	break;
case 't':
	{
	printf("!");
	}
	break;
case 'u':
	{
	printf(" ");
	}
	break;
case 'w':
	{
	printf("0");
	}
	break;
case 'x':
	{
	printf("1");
	}
	break;
case 'y':
	{
	printf("2");
	}
	break;
case 'z':
	{
	printf("3");
	}
	break;
case '@':
	{
	printf("4");
	}
	break;
case '#':
	{
	printf("5");
	}
	break;
case '$':
	{
	printf("6");
	}
	break;
case '_':
	{
	printf("7");
	}
	break;
case '�':
	{
	printf("8");
	}
	break;
case '�':
	{
	printf("9");
	}
	break;	
}	
}

    printf("\n\n");

}

void Test()
{
   
	

	int i = 0;
	int len1;
	char caractere;
	char letra[1000];
	FILE *fp;
	fp = fopen("teste.txt","r");
    rewind(fp);
  
  while(!feof(fp))
  {
  		fscanf (fp,"%c", &caractere);
  		fflush(stdin);
  	if(!feof(fp))
  	{
  		letra[i]=caractere;
	}
	  i++;
	  
  }
  
    len1 = strlen(letra);  
    
	printf ("Mensagem criptografada: ");
for(i=0; i < len1; i++)
{
switch(letra[i])

{
case 'a':
	{
	printf("1");
	}
	break;
	
	
case 'b':
	{
	printf("2");
	}
	break;
	
	
case 'c':
	{
	printf("3");
	}
	break;
	
	
case 'd':
	{
	printf("4");
	}
	break;
case 'e':
	{
	printf("5");
	}
	break;
case 'f':
	{
	printf("6");
	}
   break;
   case 'g':
   	{
   		printf("7");
	}
	break;
	case 'h':
	{
	printf("8");
	}
	break;
case 'i':
	{
	printf("9");
	}
	break;
case 'j':
	{
	printf("0");
	}
	break;
case 'k':
	{
	printf("a");
	}
	break;
case 'l':
	{
	printf("b");
	}
	break;
case 'm':
	{
	printf("c");
	}
	break;
case 'n':
	{
	printf("d");
	}
	break;
case 'o':
	{
	printf("e");
	}
	break;
case 'p':
	{
	printf("f");
	}
	break;
case 'q':
	{
	printf("g");
	}
	break;
case 'r':
	{
	printf("h");
	}
	break;
case 's':
	{
	printf("i");
	}
	break;
case 't':
	{
	printf("j");
	}
	break;
case 'u':
	{
	printf("k");
	
	}
	break;
case 'v':
	{
	printf("l");
	}
	break;
case 'x':
	{
	printf("m");
	}
	break;
case 'y':
	{
	printf("n");
	}
	break;
case 'z':
	{
	printf("o");
	}
	break;
case ',':
	{
	printf("p");
	}
	break;
case '.':
	{
	printf("q");
	}
	break;
case ';':
	{
	printf("r");
	}
	break;
case '?':
	{
	printf("s");
	}
	break;
case '!':
	{
	printf("t");
	}
	break;
case ' ':
	{
	printf("u");
	}
	break;
case '0':
	{
	printf("w");
	}
	break;
case '1':
	{
	printf("x");
	}
	break;
case '2':
	{
	printf("y");
	}
	break;
case '3':
	{
	printf("z");
	}
	break;
case '4':
	{
	printf("@");
	}
	break;
case '5':
	{
	printf("#");
	}
	break;
case '6':
	{
	printf("$");
	}
	break;
case '7':
	{
	printf("_");
	}
	break;
case '8':
	{
	printf("�");
	}
	break;
case '9':
	{
	printf("�");
	}
	break;
    
    
    
    
	}
   
}
    printf("\n\n");
    printf("Aperte qualquer tecla para decodificar");
    printf("\n");
    system("pause"); //Interrompe a execu��o do programa
    
    printf("\n\n");
    Decotest();
}

void Decotest()
{
	int i = 0;
	int len1;
	char caractere;
	char letra[1000];
	FILE *fp;
	fp = fopen("teste.txt","r");
    rewind(fp); //realocar� o localizador de posi��o do arquivo no in�cio do arquivo especificado.
  
  while(!feof(fp))
  {
  	fscanf (fp,"%c", &caractere);
  	fflush(stdin);
  	if(!feof(fp))
  	{
  		printf("%c",caractere);
  	}
	  i++;
	  
  }
  
    len1 = strlen(letra);  
    


    printf("\n\n");
	
}
    
