#include <stdio.h>
 int main(){
 int n;
 char string[100]
 string.length[0]
if{n > 0
printf("Digite o Comprimento da sua String S : ");
}
 scanf("%d", &n);
printf(" O Comprimento da sua String S é :")
)
scanf("%d", &n);
return 0;
}
3 - #include <stdio.h>
#include <stdio.h>
int maiorElemento(int array[], int n) {
 if (n == 1) {
 return array[0];
 }
 int maiorRestante = maiorElemento(array, n - 1);
 return (array[n - 1] > maiorRestante) ? array[n - 1] : maiorRestante;
}
int main() {
 int array[] = {3, 5, 7, 2, 8, 1};
 int n = sizeof(array) / sizeof(array[0]);
 int maior = maiorElemento(array, n);
 printf("O maior elemento do array é: %d\n", maior);
 return 0;
}
