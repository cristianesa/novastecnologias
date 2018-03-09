#include<stdio.h>  
 
 int main(){  
   printf("Programa que gera todos os numeros pares e multiplos de 03. ");  
   
   int cont,valor1,valor2;  
   printf("Digite o valor 1: ");  
   scanf("%d",&valor1);  
   printf("Digite o valor 2: ");  
   scanf("%d",&valor2);  
   
   if(valor2<valor1){
   	 cont=valor1;  
     valor1=valor2;  
     valor2=cont;  
   }  
   for(cont=valor1;cont<=valor2;cont++){  
     if(cont%2==0){  
       printf("%d \n",cont);  
     }   
	}
	
   system("pause");
   
   int n,i;  
   printf("Digite o total de numeros multiplos de 3: ");  
   scanf("%i", &n);
   i = 1;
   while(i<=n){
	if(i%3==0){
   		printf("%i \n", i);
   	}
	   i++;
	}
	
	system("pause");
	
	return 0;
}  
