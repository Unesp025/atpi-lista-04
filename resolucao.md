**Lista 04 \- Algoritmos e Técnicas de Programação**  
**Bruno Silva Concli \- BCC Noturno 025**  
**251151409**

**1\) Escreva uma única instrução C para executar cada uma das seguintes alternativas:**

a) int c, estaVariavel, q76354, numero;  
b) printf("Digite um inteiro: ");  
c) int a; scanf("%d", \&a);  
d) if (numero \!= 7\) printf("A variavel numero nao e igual a 7");  
e) printf("Este é um programa em C");  
f) printf("Este é um programa em \\nC.");  
g) printf("Este\\ne\\num\\nprograma\\nem\\nC");  
h) printf("Este\\té\\tum\\tprograma\\tem\\tC");

**2\) Identifique e corrija os erros cometidos em cada uma das instruções:**

1) **Erros**: Falta o símbolo “%” antes do “d”; Falta o símbolo “&” antes de “valor”, para indicação alocação no endereço de memória.  
   **Correção**: scanf(“%d”, \&valor);  

2) **Erros**: O operador de quebra de linha (“\\n”) está depois da conclusão das aspas; São indicadas três variáveis dentro da string (%d), mas apenas duas são passadas (x e y).  
   **Correção**: printf(“O produto de %d e %d é %d\\n”, x, y, z);  

3) **Erros**: A alocação do valor primeiroNumero \+ segundoNumero na variável somaDosNumeros está ao contrário; Falta um ponto e vírgula ao fim da linha; Possibilidade: Não é possível saber se a variável foi declarada antes da atribuição;  
   **Correção**: int somaDosNumeros \= primeiroNumero \+ segundoNumero;  

4) **Erro**: O sinal da operação “maior ou igual” está invertido; O operador “igual a” está sendo utilizado para atribuição de valor;  
   **Correção**: if (numero \>= maior) maior \= numero;  

5) **Erros**: A função “scanf” deve ter um “s” minúsculo; Falta o sinal “&” para indicar o endereço de memória;  
   **Correção**: scanf(“%d”, \&umInteiro);  

6) **Erros**: São passadas 3 variáveis (x, y e (x%y)), porém apenas 2 espaços reservados dentro da string;  
   **Correção**: printf(“Módulo de %d dividido por %d é \\n%d”, x, y, x%y);  

7) **Erros**: O sinal de atribuição (=) está sendo usado como operador de comparação “igual a” (==); Há um ponto e vírgula na primeira linha que impediria o resultado do if;  
   **Correção**: if (x \== y) printf(“%d e igual a %d\\n”, x, y);  

8) **Erro**: Falta a letra “f” na função “print”;  
   **Correção**: printf(“A soma é %d\\n”, x+y);  

9) **Erros**: Função “printf” deve ser escrita em minúsculo; Falta o fechamento de aspas; O valor indicado é o endereço de memória, ao invés do valor da variável;  
   **Correção**: printf(“O valor que você digitou é %d\\n”, valor);

**Conclusão**: É importante avaliar que o uso de acentuação em todas as strings pode acarretar em caracteres estranhos no momento da exibição, embora não traga prejuízo lógico ao código.

**3)Escreva um programa que peça ao usuário que digite dois inteiros, obtenha os números e**  
**depois imprima o maior número seguido das palavras 'é maior'. Se os números forem iguais,**  
**imprima a mensagem "Esses números são iguais". Use apenas a forma de seleção única da**  
**instrução if que você aprendeu neste capítulo.**

```c
#include<stdio.h>
#include<stdlib.h>

int main() {

	int num1, num2;
	printf("Digite o primeiro numero: ");
	scanf("%d", &num1);

	printf("Digite o segundo numero: ");
	scanf("%d", &num2);

	if (num1 > num2) printf("%d é maior", num1);
	else if (num1 < num2) printf("%d é maior", num2); }
	else printf("Esses numeros sao iguais");  

	getchar();
	return(0);
}
```

**4)Escreva uma instrução ou um conjunto de instruções para realizar cada uma das seguintes tarefas:**

```c
// a)
int contador, soma = 0;
for (contador = 1; i <= 99; i+=2) {
	soma += contador;
}

// b)
float numero = 333.546372;
printf("%.1f\n", numero);
printf("%.2f\n", numero);
printf("%.3f\n", numero);
printf("%.4f\n", numero);
printf("%.5f\n", numero);
// Valores impressos: 333.5, 333.54, 333.546, 333.5463 e 333.54637

// c)
#include<math.h>
printf("%.1f elevado a %d é %.10f", 2.5, 3, pow(2.5, 3));
// Valor impresso: 2.5 elevado a 3 é 15.625

// d) 
x = 1;
while (x <= 20) {
	printf("%d", x);
	if (x % 5 == 0) printf("\n");
	else printf("\t");
	x++;
}

//e)
for (x = 1; x <= 20; x++) {
	printf("%d", x);
	if (x % 5 == 0) printf("\n");
	else printf("\t");
}  
```

Bruno Silva Concli \- 215151409  
Bacharelado em Ciências da Computação Noturno 025
