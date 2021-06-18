#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

	struct logon{
		char login[10], senha[6];
	};
	struct fichaMedico{
		char id[1], nome[30], crm[9], especialidade[20];
	};
	struct fichaPaciente{
		char id[1], nome[30], cpf[13], dataNasc[12], endereco[40], contato[12];
	};

int main(void){
	setlocale(LC_ALL, "");

	struct logon logonUser;
	struct fichaMedico fichaMed;
	struct fichaPaciente fichaPac;
	int escolha, tipoCad, tipoAgend, tipoServ;

	printf("\t\tInteliGes - Sistema Integrado\n");
	printf("\nLogin: ");
	fgets(logonUser.login, 10, stdin);
	printf("Senha: ");
	fgets(logonUser.senha, 11, stdin);

	printf("\n[1] Cadastros\n[2] Agendamentos\n[3] Pagamentos\n[4] Relatórios\n[5] Elogios/Reclamações\n=> ");
	scanf("%d", &escolha);

	switch (escolha){
		case 1:
			printf("\nCadastros:\n[1] Pacientes\n[2] Profissionais\n[3] Cancelar cadastro\n=> ");
			scanf("%d", &tipoCad);
			if(tipoCad==1){
				printf("\n\t\tCadastro de pacientes\n");
				printf("ID: ");
				fgets(fichaPac.id, 1, stdin);
				printf("Nome: ");
				fgets(fichaPac.nome, 30, stdin);
				printf("CPF: ");
				fgets(fichaPac.cpf, 13, stdin);
				printf("Data de nascimento: ");
				fgets(fichaPac.dataNasc, 12, stdin);
				printf("Endereço: ");
				fgets(fichaPac.endereco, 40, stdin);
				printf("Contato: ");
				fgets(fichaPac.contato, 12, stdin);
			}else if(tipoCad==2){
				printf("\n\t\tCadastro de profissionais\n");
				printf("ID: ");
				fgets(fichaMed.id, 1, stdin);
				printf("Nome: ");
				fgets(fichaMed.nome, 30, stdin);
				printf("CRM: ");
				fgets(fichaMed.crm, 9, stdin);
				printf("Especialidade: ");
				fgets(fichaMed.especialidade, 20, stdin);
			}else if(tipoCad==3){
				printf("\n\t\tCancelar cadastro\n");
				
			}
			break;
		case 2:
			printf("\nAgendamentos:\n[1] Agendar serviço\n[2] Cancelar serviço\n=> ");
			scanf("%d", &tipoAgend);
			if(tipoAgend==1){
				printf("\t\tAgendamento de serviços\n");
				printf("[1] Consulta\n[2] Exame\n=> ");
				scanf("%d", &tipoServ);
				if(tipoServ==1){
					printf("\t\tAgendamento de consulta\n");
				}else if(tipoServ==2){
					printf("\t\tAgendamento de exame\n");
				}
			}else if(tipoAgend==2){
				printf("\t\tCancelamento de serviços\n");
				printf("Selecione o serviço que deseja cancelar:\n");
			}
	}
	return 0;
}
