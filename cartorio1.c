		#include <stdio.h>//biblioteca de comunicação com usuario
		#include <stdlib.h>//biblioteca de alocação de memoria
		#include <locale.h>//biblioteca de texto por região
		#include <string.h>//biblioteca responsavel por cuidar dos string
		
		
		int registro()
		{
			char arquivo[40];//função responsavel para criar uma variavel ex:"arquivo
			char cpf[40];//função responsavel para criar uma variavel ex:cpf
			char nome[40];//cria variavel
			char sobrenome[40];	//cria variavel
			char cargo [40];//cria variavel
			
			printf("digite o cpf a ser cadastrado:\n");
			scanf("%s", cpf);
			
			strcpy(arquivo, cpf);//responsalvel por copiar os valores das string
			
			FILE *file;//criar o arquivo
			file = fopen(arquivo, "w");//cria arquivo na pasta
			fprintf(file,cpf);//salva o valor da variavel
			fclose(file);//fecha o arquivo
			
			file = fopen(arquivo, "a");
			fprintf(file,",");
			fclose(file);
			
			printf("Digite o nome a ser cadastrado: ");
			scanf("%s",nome);
			
			file = fopen(arquivo,"a");
			fprintf(file,nome);
			fclose(file);
			
			file = fopen(arquivo, "a");
			fprintf(file,",");
			fclose(file);
			
			printf("digite o sobrenome a ser cadastrado: ");
			scanf("%s",sobrenome);
			
			file = fopen(arquivo,"a");
			fprintf(file,sobrenome);
			fclose(file);
			
			file = fopen(arquivo, "a");
			fprintf(file, ",");
			fclose(file);
			
			printf("digite o cargo a ser cadastrado: ");
			scanf("%s" ,cargo);
			
			file = fopen(arquivo,"a");
			fprintf(file ,cargo);
			fclose(file);

			system("pause");
			
			
		}
		
		int consulta()
		{
			setlocale(LC_ALL,"Portuguese");//Define a linguagem "não"
			char cpf[40];//cria variavel
			char conteudo[200];//cria variavel
			
		    	printf("digite o CPF a ser consultado: ");
			    scanf("%s",cpf);
		    
				FILE *file;
				file = fopen(cpf,"r");
				
				if(file == NULL)
				{
					printf("não foi possivel abrir o arquivo, não localizado!.\n");
				}
				
				while(fgets(conteudo, 200, file) != NULL) //while enquanto,laço de repetição
				{
				printf("\nEssas são as informações do usuario: ");
				printf("%s", conteudo);
				printf("\n\n");
			   }
				
				system("pause");	//função responsavel para limpar a tela de informações desnecessarias
			
		}
		int deletar()//deletar usuarios
		{
			setlocale(LC_ALL,"Portuguese");//Define a linguagem "não"
			char cpf[40];//função responsalvel para criar a variavel "cpf"

			printf("Digitar o cpf a ser Deletado: ");//local onde o usuario ira digitar o cpf para ser deletado
			scanf("%s",cpf);//função responsavel por armazenar na variavel"cpf"os dados digitados pelo usuario para ser deletado

		    remove(cpf);
			
			FILE *file;//procurando na biblioteca o arquivo file
			file = fopen(cpf, "r");//abrindo o arquivo para a leitura "r"

			  if(file == NULL)//se os dados digitados forem iguais a zero ou seja nao existir
              {

				printf("o usuario nao se encontra no sistema!\n\n\n");
				system("pause");
			  }
			  
            

            


		}
		
		
		int main()	//função menu principal
		{
			int opcao=0;//define variaveis
			int laco=1;
			char senhadigitada[]="a";
			int comparacao;
			
			printf("##Cartorio da EBAC##\n\n");
			printf("Login de administrador!\n\nDigite a sua senha:  ");
			scanf("%s",senhadigitada);//devemos colocar 0 & para atribuir o valor para a variavel*/

			comparacao=strcmp(senhadigitada,"admin");
			
			if(comparacao == 0 )
  	        {

			system("cls");
			    for(laco=1;laco=1;)
			   {
			
			    setlocale(LC_ALL,"Portuguese");//Define a linguagem
			    system("cls");
		
		    	printf("###Cartorio da ebac### \n\n");//inicio do menu
		    	printf("escolhaa opção desejada do menu\n\n\n");
		    	printf("\t1 - registrar nomes\n");
		    	printf("\t2 - consultar nomes\n");
			    printf("\t3 - deletar nomes \n");
		    	printf("\t4 - Sair do sistema\n");
	    		printf("\nOpção:  ");
			
		    	scanf("%d", &opcao);//armazena a escolha do usuario
			
		    	system("cls");  
			
			
			
			    switch(opcao) //inicio da seleção
			 {
				case 1:
				registro();
				break;
				
				case 2:
				consulta();
				break;
				
				case 3:
				deletar();
				break;
				
				case 4:
                printf("Obrigado por utilizar o sistema!\n\n");
				return(0);//quando termina sai do sistema 
				break;
				
				default:
				printf("essa opção nao esta disponivel!\n\n\n");
				system("pause")	;
				break;
				// fim da seleção
			}
		
		   	}
		 
		}
		      else
	          printf("senha incorreta!");
			 
			 
	}
	
	    
