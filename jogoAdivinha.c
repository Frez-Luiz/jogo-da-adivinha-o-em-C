
# include <stdio.h>
int main(){
    

    // Imprime o  cabeçalho do jogo.

    printf ("___________________________________________\n");
    printf ("/////////  Jogo de adivinhação   ////////// \n");
    printf ("/////         Luiz Felipe             ///// \n");
    printf ("/////////                        ////////// \n");
    printf ("___________________________________________\n");

    int numerosecreto = 42;
    
    int chute;

    printf("Qual é o seu chute? ");
    scanf("%d", &chute);
    printf("Seu chute foi %d\n", chute);

    int acertou = (chute == numerosecreto);


    if(acertou) {
        printf("Parabéns! Você acertou!\n");
        printf("Jogue de novo, você é um bom jogador!\n");
    } 
    else {

        int maior = chute > numerosecreto; 
        if(maior) {
            printf("Seu chute foi maior que o número secreto\n");
        } else {
            printf("Seu chute foi menor que o número secreto\n");
        }
    }

}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            