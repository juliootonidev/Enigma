//NOME:JULIO GABRIEL P. OTONI
//RA:1430482021011
//NOME:SAMUEL SILVA PERUMALSWAMY
//RA:1430482011010

#include <stdio.h>//importa as bibliotecas que serão utilizadas no projeto
#include <string.h>//Biblioteca string para a leitura das variaveis
#include <stdbool.h>//Biblioteca bool para implementar na função
#include <ctype.h>//Biblioteca ctype para caso seja inserida alguma string minúscula
    
bool eh_possivel(int index, char *mensagem, char *crib);//inicialza o protótipo da função eh_possivel

int main(){//inicializa o método main
	
	char mensagem[10001];//cria a variavel mensagem com capacidade de até 10^4(10.000)caracteres + 1('\0')
	char crib[10001];//cria a variavel crib com capacidade de até 10^4(10.000)caracteres + 1('\0')
	int qtd = 0;//cria a várial qtd, que será o contador e o inicializa com 0
	
	printf("Informe a mensagem: ");//solicita a mensagem codificada
	scanf("%10000[^\n]", mensagem);//realiza a leitura
	
	printf("\nInforme o crib: ");//solicita a mensagem codificada
	scanf(" %10000[^\n]", crib);//realiza a leitura


	for (int i = 0; i < strlen(mensagem); i++) {// Percorre a string mensagem
		mensagem[i] = toupper(mensagem[i]);//Converte caracter da string mensagem minúsculo em maiúsculo
	}
	for (int i = 0; i < strlen(crib); i++) {// Percorre a string scrib
		crib[i] = toupper(crib[i]);// Converte caracter da string crib minúsculo em maiúsculo
	}

	for(int i = 0; i <= strlen(mensagem) - strlen(crib); i++){//Percorre a string realizando as comparações
		if(eh_possivel(i, mensagem, crib)){// Chama função para comparar  astring e contar a quantidadeSSSSSS
			qtd++;//Soma mais um na variveis de quantidade  
		}
	}	
	
	printf("%d\n", qtd);//Imprime na tela a quantidade
	
	return 0;
}
    bool eh_possivel(int index, char *mensagem, char *crib){//Inicializa a função eh_possivel
	int i, j;//Cria duas variaveis inteiras

	for(j = 0, i = index; j < strlen(crib); j++, i++){//Percorre o crib para realizar as comparações
		if(mensagem[i] == crib[j]){//Compara as strings
			return false;// Retorna falso se houver strings compativeis
		}
	}
	return true;// Retorna verdadeiro se nao houver strings compativeis
	
    }