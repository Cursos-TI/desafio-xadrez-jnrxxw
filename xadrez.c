#include <stdio.h>



int main() {
    

// variaveis


int torre = 1;
int rainha;
int bispo = 1;


// movimentos da torre

printf ("***Movimentos da torre***\n");

while (torre <= 5) {

  printf (" Moveu-se para direita\n") ;

torre++;

}



// movimentos do bispo
 

 printf ("\n***Movimentos do bispo***\n");

do { 
    
    

    printf (" Moveu-se para cima, direita\n") ;
    bispo++;


} while (bispo<= 5) ;

  

// movimentos da rainha




printf ("\n***Movimentos da rainha***\n");

for (rainha = 1 ; rainha <= 8 ; rainha++) {


 printf ("Moveu-se para esquerda\n");


}





    
    return 0;
}
