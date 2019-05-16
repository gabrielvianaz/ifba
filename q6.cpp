#include <stdio.h>

int main (){
    
    int n1, n2, x = 1, contador = 1, aprov = 0, reprov = 0, exame = 0;
    float medias;
    
    while (contador <= 6){

        
        printf  ("\nDigite a nota 1 do aluno %i\n", x);
        scanf ("%i", &n1);
        printf ("Digite a nota 2 do aluno %i\n", x);
        scanf ("%i", &n2);
        
        int media = (n1+n2)/2;
        
        printf ("nO resultado do aluno %i foi:\n", x);
        x = x+1;
        
        if (media <=3){
            printf("Reprovado!\n");
            reprov ++;
        }else if (media > 7){
            printf("Aprovado!\n");
            aprov++;
        }else {
            printf("Exame!\n");
            exame++;
        }
            contador ++;
            
        medias = medias + media;
    }
       
            medias = medias/6;
        
    printf ("O total de alunos aprovados foi: %i\n", aprov);
    printf ("O total de alunos reprovados foi: %i\n", reprov);
    printf ("O total de alunos em exame foi: %i\n", exame);
    printf ("A media da sala foi: %.2f\n", medias);
        
    return 0;
    
}
