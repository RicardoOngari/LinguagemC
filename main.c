
// #include <stdio.h>

// int main()
// {
//     int num1 = 10;
//     int num2 = 20;
//     int sum = num1 + num2;
    
//     printf("A soma de %d e %d é %d", num1, num2, sum);

//     return 0;
// }








// #include <stdio.h>

// int main() {
//     int num1 = 10;
//     int num2 = 1000;
    
//     printf("%5d\n", num1);
//     printf("%5d\n", num2);
    
//     return 0;
// }







// #include <stdio.h>

// int main(){
//     printf("Bem-Vindo ao mundo da programação em C!");
    
//     return 0;
    
// }







// #include <stdio.h>

// int main(){
    
//     char nome[50];
//     int idade;
    
//     printf("Digite seu nome: ");
//     scanf("%s", nome);
    
//     printf("Digite sua idade: ");
//     scanf("%d", &idade);
    
//     printf("Seu nome é: %s\n", nome);
//     printf("Sua idade é: %d\n", idade);
//   return 0;
    
// }









// #include <stdio.h>

// int main(){
//     int num1;
//     int num2;
//     int soma;
    
//     printf("Escreva o primero numero: ");
//     scanf("%d", &num1);
    
//     printf("Escreva o segundo numero: ");
//     scanf("%d", &num2);
    
//     soma = num1+num2;
    
    
//     printf("A soma de %d e %d é: %d ", num1, num2, soma);
    
//     return 0;
    
// }







// #include <stdio.h>

// int main(){
    
//     float num = 5.1458;
    
//     printf("%.2f", num);
    
//     return 0;
    
    
    
// }












// #include <stdio.h>

// int main(){
    
//     int idade;
    
//     printf("Digite sua idade: ");
//     scanf("%d", &idade);
    
    
//     if(idade >= 18){
//         printf("Maior de idade");
        
//     }
//     else{
//         printf("Menor de idade");
//     }
//     return 0;
// }



// #include <stdio.h>

// int main(){
    
//     char nome[50];
//     int idade;
    
//     printf("Informe seu nome: ");
//     scanf("%s", &nome);
//     printf("Informe sua idade: ");
//     scanf("%d", &idade);
    
//     if(idade == 16 || idade == 17 || idade >= 70){
//         printf("%s seu voto é opcional.", nome);
//     }
//     else if(idade >= 18 && idade<70){
//         printf("%s seu voto é obrigatorio.", nome);
//     }
//     else{
//         printf("%s voce não precisa votar.", nome);
        
//     }
    
//     return 0;
// }



// #include <stdio.h>

// int main(){
//     float num1, num2, result;
//     char opr;
    
//     printf("Insira um numero: ");
//     scanf("%f", &num1);
//     printf("Insira outro numero numero: ");
//     scanf("%f", &num2);
//     printf("Selecione a operação que deseja + , - , / , * : ");
//     scanf(" %c", &opr);
    
//     switch (opr){
//         case '+': 
//         result = num1 + num2;
//         printf("%.2f %c %.2f = %.2f", num1,opr,num2,result); break;
//         case '-':
//         result = num1 - num2;
//         printf("%.2f %c %.2f = %.2f", num1,opr,num2,result); break;
//         case '/':
//         result = num1 / num2;
//         printf("%.2f %c %.2f = %.2f", num1,opr,num2,result); break;
//         case '*': 
//         result = num1 * num2;
//         printf("%.2f %c %.2f = %.2f", num1,opr,num2,result); break;
//         default: printf("Operação invalida"); break;
        
//     }
    
//     return 0;
// }



// #include <stdio.h>

//     int main(){
        
//         int n;
        
//         printf("Informe um numero: ");
//         scanf("%d", &n);
        
//         if(n % 2 == 0){
//           printf("O numero %d é par ", n); 
//         }
//         else{
//             printf("O numero %d e impar", n);
//         }
        
        
//         return 0;
//     }



// #include <stdio.h>
// #include <string.h>

// int main(){
//     char nome[10];
//     int t;
//     printf("Digite seu nome: ");
//     scanf("%s" ,&nome);
    
//     t = strlen(nome);
    
//     printf("O nome %s tem %d letras.", nome, t);
    
    
//   return 0;
// }




// #include <stdio.h>
// int a, b, c;
// a = 2;
// b = 10;

// int soma(int i, int j){
    
//     return i-j;
// }

// void subtracao(){
    
// }

// void main(){
    
//     c = soma(a,b);
// }



// #include <stdio.h>
// #include <string.h>

// void main(){
//     char palavra[50];
//     int t;
//     printf("Digite uma palavra para vermos seu comprimeto: ");
//     scanf("%s", &palavra);
    
//     t = strlen(palavra);
    
//     printf("A palavra %s tem %d letras ", palavra, t);
// }



// #include <stdio.h>
// #include <string.h>

// void main(){
//     char p1[50];
//     char p2[50];
//     char conc[100];
    
//     printf("Escreva uma palavra para juntar com outra: ");
//     scanf("%s", &p1);
//     printf("Escreva a outra palara para juntar com a primeira: ");
//     scanf("%s", &p2);
    
//     strcpy(conc, p1);  
//     strcat(conc, p2);
    
//     printf("A palavra %s e %s juntas formarão %s",p1,p2,conc);
    
// }




#include <stdio.h>
#include <string.h>

char p1[50];
char p2[50];

int primeira_palavra(){
    printf("Escreva uma palavra: ");
    scanf("%s", &p1);
}

void main(){
    
    
}




    
    


























































