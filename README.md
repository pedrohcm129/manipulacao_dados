# Manipulando strings com ponteiros na linguagem C
## Introdução
Toda linguagem de programação contém funcionalidade de manipulação de dados, ou seja, a capacidade de criar, acessar, modificar e organizar informações em uma variável, banco de dados e estrutura de dados. Ademais, existem outras formas de acesso aos dados além das instruções de manipulação de dados. Assim, as principais linguagens de programação disponibiliza outras construções sintáticas para o domínio dos dados, como, por exemplo, os ponteiros na linguagem C.

Ponteiro consiste em uma variável que é especializada em guardar endereços de memória. O valor de um ponteiro, ou seja, um endereço de memória, geralmente corresponde a posição de uma outra variável na memória. Essa estrutura é considerada um dos aspectos mais forte e perigoso da linguagem C, pois exite um potencial de quebra do sistema quando mal utilizados, entretanto, quando utilizados de maneira correta, pode aumentar a eficiência de certas rotinas.

À luz do contexto apresentado, o objetivo desse trabalho é a construção de um programa em C capaz de manipular strings através de ponteiros. Para exemplificar o algorítmo deve realizar duas mudanças na string, a saber: i) cada um de seus caracteres em ''caixa baixa'', seja substituído por seu equivalente em ''caixa alta''; ii) todos os caracteres numéricos sejam substituídos pela parte inteira da raiz quadrada do mesmo.
## Algortimo
```
#include <stdio.h>
#include <ctype.h>
#include <math.h>

int main() {
        // Criando a string de teste
        char string[20] = "1Pedroasfdsd34eEr45";

        // Criando o Ponteiro
        // Atribuindo o endereç  da string de teste para o ponteiro criado
        // Como string guarda o endereço do primeiro caractere da string não é necessário o operado re�o de memória
        char *pont = string;

        // Inciando a manipulação dos dados
        // Enquanto tiver um valor em *pont
        printf("%s\n", string);
        while(*pont) {
                // Verifica se o valor de *pont é um alphanumérice se é minúsculo
                if (isalpha(*pont) == 2) {
                        *pont = toupper(*pont);

                } else if (isdigit(*pont)) {
			// Usando os valores da tabela ascii para determinar o valor em inteiro de *pont
                        int valor = *pont - '0';
			int raiz_quadrada_inteira = sqrt(valor);
			*pont = raiz_quadrada_inteira + '0';
                }

                pont++;
        }

        printf("%s", string);
        return 0;
}
```
