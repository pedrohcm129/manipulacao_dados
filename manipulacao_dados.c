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
