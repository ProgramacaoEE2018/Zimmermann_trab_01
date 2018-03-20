#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=0, i=0;
    float VC=0, VF=0, MVE=0; //declarando variaveis das notas de VC e VF//
    printf("Quantas VEs voce fez no semestre?\n");
    scanf("%i", &n); //primeiro precisamos saber quantas interações com as notas de VE devemos ter ter//
    float VE[n], PVE[n];
    printf("\nInforme suas notas de VEs: ");
    for (i=0;i<n;i++) //cada iteração pegará a nota de uma VE//
    {
        printf("\nVE %i: ", i+1);
        scanf("%f",&VE[i]);
    }
    printf("\nInforme o peso em porcentagem de cada VE: ");
    for (i=0;i<n;i++) //cada iteração pegará a o peso de uma VE e adicionará ao cálculo da média//
    {
        printf("\nPeso da VE %i: ", i+1);
        scanf("%f",&PVE[i]);
        MVE = MVE + (PVE[i]/100)*VE[i];
    }
    printf("\nSua media de VEs eh: %.2f", MVE);
    printf("\n\nAgora informe sua nota de VC: ");
    scanf("%f", &VC);
    if(MVE+VC>=12) //quando as duas notas somam 12 ou mais, o aluno só precisa tirar a nota minima de uma VF, que é 4//
        printf("\nParabens, voce so precisa tirar 4!!!\n");
    else
        {
        VF = (20-MVE-VC)/2;
        printf("\nCuidado, voce precisa tirar %.2f na VF\n", VF);
        }
    return 0;
}
