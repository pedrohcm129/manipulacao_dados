# Manipulando strings com ponteiros na linguagem C
## Introdução
Toda linguagem de programação contém funcionalidade de manipulação de dados, ou seja, a capacidade de criar, acessar, modificar e organizar informações em uma variável, banco de dados e estrutura de dados. Ademais, existem outras formas de acesso aos dados além das instruções de manipulação de dados. Assim, as principais linguagens de programação disponibiliza outras construções sintáticas para o domínio dos dados, como, por exemplo, os ponteiros na linguagem C.

Ponteiro consiste em uma variável que é especializada em guardar endereços de memória. O valor de um ponteiro, ou seja, um endereço de memória, geralmente corresponde a posição de uma outra variável na memória. Essa estrutura é considerada um dos aspectos mais forte e perigoso da linguagem C, pois exite um potencial de quebra do sistema quando mal utilizados, entretanto, quando utilizados de maneira correta, pode aumentar a eficiência de certas rotinas.

À luz do contexto apresentado, o objetivo desse trabalho é a construção de um programa em C capaz de manipular strings através de ponteiros. Para exemplificar o algorítmo deve realizar duas mudanças na string, a saber: i) cada um de seus caracteres em "caixa baixa", seja substituído por seu equivalente em "caixa alta"; ii) todos os caracteres numéricos sejam substituídos pela parte inteira da raiz quadrada do mesmo.
## Algortimo
~~~c
#include <stdio.h>
#include <math.h>

int main() {
        char string[20] = "-1as4r33ary65fgd3";
        char *pont = string;

        printf("%s\n", string);
        while(*pont) {
                if (*pont >= 97 && *pont <= 122) {
                        *pont = *pont - 32;
                }

                if (*pont >= 48 && *pont <= 57) {
                        *pont = sqrt(*pont - '0') + '0';
                }
                pont++;
        }

        printf("%s", string);
        return 0;
}
~~~
Para mais informações acerca da construção do algorimo, segue o link: [Relatório](https://drive.google.com/file/d/1IFxQWe_ibJwLWgB1gzmOlgYAwREGx0EQ/view?usp=sharing)
