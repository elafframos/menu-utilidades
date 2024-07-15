#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

void ParImpar();
void RealDolar();
void Simples();
void QuilometrosMetros();
void CelsiusFahrenheit();
void JurosSimples();
void ValidarCpf();
void Imc();
void Media();
void DiasDatas();

int main() {

    setlocale(LC_ALL, "PORTUGUESE");

    int escolha;

    do{
    	
    printf("\n***MENU DO SISTEMA***\n");
    printf("\n1. Identificar se o número é PAR ou ÍMPAR.\n\n");
    printf("2. Converter Real para Dólar.\n\n");
    printf("3. Calculadora Simples com dois números.\n\n");
    printf("4. Conversor de Quilômetros para Metros.\n\n");
    printf("5. Conversor de Celsius para Fahrenheit.\n\n");
    printf("6. Calculadora de Juros Simples.\n\n");
    printf("7. Validador de CPF (identifica se é real.)\n\n");
    printf("8. Calculadora de IMC.\n\n");
    printf("9. Calculadora de Média de 4 notas.\n\n");
    printf("10.Calculadora de Dias e entre Datas.\n\n");
    printf("11. Fechar o Programa.\n\n");

    printf("Escolha a opção desejada: ");
    scanf("%d", &escolha);

    switch(escolha) {
    case 1:
        ParImpar();
    break;
    case 2:
        RealDolar();
    break;

    case 3:
        Simples();
    break;
    case 4:
        QuilometrosMetros();
    break;
    case 5:
        CelsiusFahrenheit();
    break;
    case 6:
        JurosSimples();
    break;
    case 7:
        ValidarCpf();
    break;
    case 8:
        Imc();
    break;
    case 9:
        Media();
    break;
    case 10:
        DiasDatas();
    break;
    case 11:
    	printf("\nPrograma fechado com sucesso!");
    break;
    default:
        printf("\n\nEscolha uma opção correta!");
    }
    }while(escolha != 11);
    
    return 0;
}

	void ParImpar() {

	int impar;

	printf("\nDigite um número, para saber se é Ímpar ou Par: ");
	scanf("%d", &impar);
	
	do{
		
	if(impar %2 == 0){
	    printf("\nO número %d é par!", impar);
	} else {
	printf("\nO número %d é ímpar!", impar);
	}
	
	printf("\n\nDigite outro número(ou 0 para sair.): ");
	scanf("%d", &impar);
	
	}while(impar != 0);
	
	printf("\n---------------------------------------------------------------------------------------------------------------------\n");
	}
	
	void RealDolar() {
	
	float numero, divisao;
	
	printf("\nDigite quantos Reais(R$) deseja converter: ");
	scanf("%f", &numero);

	divisao = 0.19 * numero;	
						
	printf("\n$%.2f Dolares Americano.\n", divisao);
		
	printf("\n---------------------------------------------------------------------------------------------------------------------\n");
						
}

void Simples() {

    float numero2, num, resultado;
    int escolha1;


    printf("\n***MENU DA CALCULADORA***\n");
    printf("\n1. SOMA.\n\n");
    printf("2. SUBTRAÇÃO.\n\n");
    printf("3. MULTIPLICAÇÃO.\n\n");
    printf("4. DIVISÃO.\n\n");
    printf("5. Fechar menu.\n\n");

    printf("Escolha a opção desejada: ");
    scanf("%d", &escolha1);

    switch(escolha1) {
    case 1:

        printf("\nDigite o primeiro número para fazer a soma: ");
        scanf("%f", &num);

        printf("\nDigite o segundo número para fazer a soma: ");
        scanf("%f", &numero2);

        resultado = num + numero2;

        printf("\nO resultado é %.2f!\n", resultado);

        printf("\n---------------------------------------------------------------------------------------------------------------------\n");
    break;
    case 2:

        printf("\nDigite o primeiro número para fazer a subtração: ");
        scanf("%f", &num);

        printf("\nDigite i segundo número para fazer a subtração: ");
        scanf("%f", &numero2);

        resultado = num - numero2;

        printf("\nO resultado da subtração é %.2f!\n", resultado);

        printf("\n---------------------------------------------------------------------------------------------------------------------\n");
    break;

    case 3:
        printf("\nDigite o primeiro número para fazer multiplicação: ");
        scanf("%f", &num);

        printf("\nDigite o segundo número para fazer multiplicaçaõ: ");
        scanf("%f", &numero2);

        resultado = num * numero2;

        printf("\nO resultado da multiplicação é %.2f!\n", resultado);

        printf("\n---------------------------------------------------------------------------------------------------------------------\n");
    break;
    case 4:

        printf("\nDigite o primeiro número para fazer a divisão: ");
        scanf("%f", &num);

        printf("\nDigite o segundo número para fazer a divisão: ");
        scanf("%f", &numero2);

        resultado = num / numero2;

        printf("\nO resultado da divisão é %.2f!\n", resultado);

        printf("\n---------------------------------------------------------------------------------------------------------------------\n");

    break;
    case 5:
    break;
    default:
        printf("\nEscolha uma alternativa correta!");
        printf("\n\n---------------------------------------------------------------------------------------------------------------------\n");

}
}

void QuilometrosMetros() {

	float metro, quilometros;

	printf("\nDigite quantos quilômetros a serem convertidos: ");
	scanf("%f", &metro);
	
	quilometros = metro * 1000;
	
	printf("\nO resultado é %.2f metros!", quilometros);
	
	printf("\n\n---------------------------------------------------------------------------------------------------------------------\n");

}

void CelsiusFahrenheit() {

    float celsius, farehnheit;

    printf("\nDigite o número de celsius para serem convertidos: ");
    scanf("%f", &celsius);

    farehnheit = (celsius * 1.8) + 32;

    printf("\nO resultado de Farehnheit é de %f F!", farehnheit);

    printf("\n\n---------------------------------------------------------------------------------------------------------------------\n");

}

void JurosSimples() {

	float capital, tempo, taxaM, juro;
	
	printf("\nDigite quanto meses deseja saber: ");
	scanf("%f", &tempo);
	
	printf("\nDigite o valor da taxa ao mês: ");
	scanf("%f", &taxaM);
	
	printf("\nDigite o valor do capital: ");
	scanf("%f", &capital);
	
	juro = capital * tempo * taxaM;
	
	printf("\nO valor dos juros é de %.2f!\n", juro);
	
	printf("\n\n---------------------------------------------------------------------------------------------------------------------\n");

}


void ValidarCpf () {
	
    char cpf[12];
    int soma1 = 0;
    int soma2 = 0;
    int digito1, digito2;
    
    printf("\nValidador de CPF.\n\n");
    
    do {
    printf("Informe o número do seu CPF: ");
    scanf("%s", cpf);
    
    // verificando se o cpf tem 11 dígitos
   		 if (strlen(cpf) != 11){
    		printf("\nCPF inválido: deve conter 11 dígitos.\n");
    		return;
		}
		
    	// calculando o primeiro dígito verificador
    	for (int i = 0; i < 9; i++) {
    		soma1 += (cpf[i] - '0') * (10 - i);
		}
		digito1 = (soma1 * 10) % 11;
		
		// calcula o segundo dígito verificador
		for (int j = 0; j < 10; j++) {
			soma2 += (cpf[j] - '0' * (11 - j));
		}
    	digito2 = (soma2 * 10) % 11;
    	
    	// Verifica se os dígitos verificadores são iguais aos do cpf
    	if ((digito1 == (cpf[9] - '0')) && (digito2 == (cpf[10] - '0'))){
    		printf("CPF válido.\n");
		} else {
			printf("CPF inválido.\n");
		}
		 
	} while (strcmp(cpf, "0") != 0);
}
void Imc() {

	float altura, peso, imc;
	
	printf("\nDigite quanto é a sua altura: ");
	scanf("%f", &altura);
	
	printf("\nDigite quanto o seu peso: ");
	scanf("%f", &peso);
	
	imc = peso / (altura * altura);
	
	printf("\nO seu IMC é %.2f", imc);
	
	printf("\n\n---------------------------------------------------------------------------------------------------------------------\n");

}

void Media() {

	float media, nota1, nota2, nota3, nota4;
	
	printf("\nDigite a sua nota 1: ");
	scanf("%f", &nota1);
	
	printf("\nDigite a sua nota 2: ");
	scanf("%f", &nota2);
	
	printf("\nDigite a sua nota 3: ");
	scanf("%f", &nota3);
	
	printf("\nDigite sua nota 4: ");
	scanf("%f", &nota4);
	
	media = (nota1 + nota2 + nota3 + nota4) / 4;
	
	printf("\nA média de nota é de %.2f", media);
	
	printf("\n\n---------------------------------------------------------------------------------------------------------------------\n");

}

void DiasDatas () {
	
	struct tm dataInicial = {0};
    struct tm dataFinal = {0};

    char strDataInicial[11], strDataFinal[11];

    printf("Digite a data inicial (DD/MM/AAAA): ");
    scanf("%s", strDataInicial);

    printf("Digite a data final (DD/MM/AAAA): ");
    scanf("%s", strDataFinal);

    sscanf(strDataInicial, "%d/%d/%d", &dataInicial.tm_mday, &dataInicial.tm_mon, &dataInicial.tm_year);
    sscanf(strDataFinal, "%d/%d/%d", &dataFinal.tm_mday, &dataFinal.tm_mon, &dataFinal.tm_year);

    // Ajustando os valores para o formato esperado pela struct tm
    dataInicial.tm_mon -= 1; // Mês começa em 0 (janeiro)
    dataInicial.tm_year -= 1900; // Ano baseado em 1900
    dataFinal.tm_mon -= 1;
    dataFinal.tm_year -= 1900;

    // Convertendo para time_t
    time_t t1 = mktime(&dataInicial);
    time_t t2 = mktime(&dataFinal);

    // Verificando se a conversão foi bem-sucedida
    if (t1 == -1 || t2 == -1) {
        printf("Erro ao converter datas para o formato time_t.\n");
        //return 1;
    }

    // Calculando a diferença em segundos
    double diferencaSegundos = difftime(t2, t1);

    // Convertendo para dias
    int diferencaDias = (int)(diferencaSegundos / (60 * 60 * 24));

    printf("A diferença entre as datas é de %d dias.\n", diferencaDias);
}
