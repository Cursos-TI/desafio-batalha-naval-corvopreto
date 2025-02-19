#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.
const int MATRIZ_NOVATO = 5;
const int MATRIZ_AVENTUREIRO = 10;

void habilidadeEmCone();
void habilidadeEmOctaedro();
void habilidadeEmCruz();

int main()
{
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Declaração da matriz
    char mNovato[MATRIZ_NOVATO][MATRIZ_NOVATO];

    // Estrutura de repetição usando o FOR.
    // Analisa se as posições de linha e coluna da matriz são onde posicionarei os navios.
    for (int i = 0; i < MATRIZ_NOVATO; i++)
    {
        for (int j = 0; j < MATRIZ_NOVATO; j++)
        {
            if (i == 0 && (j == 1 || j == 2 || j == 3))
            {
                mNovato[i][j] = '1';
            }
            else if (j == 2 && (i == 2 || i == 3 || i == 4))
            {
                mNovato[i][j] = '1';
            }
            else
            {
                mNovato[i][j] = '0';
            }
        }
    }

    // Imprime todo o vetor que foi preechido anteriormente.
    printf("Nivel Novato\n");
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            printf("%c", mNovato[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.
    // Declaração da matriz
    char mAventureiro[MATRIZ_AVENTUREIRO][MATRIZ_AVENTUREIRO];

    // Estrutura de repetição usando o FOR.
    // Analisa se as posições de linha e coluna da matriz são onde posicionarei os navios.
    for (int i = 0; i < MATRIZ_AVENTUREIRO; i++)
    {
        for (int j = 0; j < MATRIZ_AVENTUREIRO; j++)
        {
            if (i == 0 && (j == 1 || j == 2 || j == 3))
            { // horizontal
                mAventureiro[i][j] = '3';
            }
            else if (j == 2 && (i == 2 || i == 3 || i == 4))
            { // vertical
                mAventureiro[i][j] = '3';
            }
            else if ((i == 5 && j == 9) || (i == 6 && j == 8) || (i == 7 && j == 7))
            { // diagonal
                mAventureiro[i][j] = '3';
            }
            else if ((i == 7 && j == 0) || (i == 8 && j == 1) || (i == 9 && j == 2))
            { // diagonal
                mAventureiro[i][j] = '3';
            }
            else
            {
                mAventureiro[i][j] = '0';
            }
        }
    }

    // Imprime todo o vetor que foi preechido anteriormente.
    printf("Nivel Aventureiro\n");
    for(int i=0; i<MATRIZ_AVENTUREIRO; i++){
        for(int j=0; j<MATRIZ_AVENTUREIRO; j++){
            printf("%c", mAventureiro[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    printf("Habilidade em Cone\n");
    habilidadeEmCone();
    printf("\n\n");

    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0
    printf("Habilidade em octaedro\n");
    habilidadeEmOctaedro();
    printf("\n\n");


    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0
    printf("Habilidade em cruz\n");
    habilidadeEmCruz();
    printf("\n\n");

    return 0;
}

void habilidadeEmCone()
{
    char mCone[3][5];

    // Estrutura de repetição usando o FOR.
    // Analisa se as posições de linha e coluna da matriz são onde posicionarei os navios.
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == 0 && (j == 2))
            {
                mCone[i][j] = '1';
            }
            else if (i == 1 && (j == 1 || j == 2 || j == 3))
            {
                mCone[i][j] = '1';
            }
            else if (i == 2 && (j == 0 || j == 1 || j == 2 || j == 3 || j == 4))
            {
                mCone[i][j] = '1';
            }
            else
            {
                mCone[i][j] = '0';
            }
        }
    }

    // Imprime todo o vetor que foi preechido anteriormente.
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%c", mCone[i][j]);
        }
        printf("\n");
    }
}



void habilidadeEmOctaedro()
{
    char mOctaedro[3][5];

    // Estrutura de repetição usando o FOR.
    // Analisa se as posições de linha e coluna da matriz são onde posicionarei os navios.
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == 0 && (j == 2))
            {
                mOctaedro[i][j] = '1';
            }
            else if (i == 1 && (j == 1 || j == 2 || j == 3))
            {
                mOctaedro[i][j] = '1';
            }
            else if (i == 2 && (j == 2))
            {
                mOctaedro[i][j] = '1';
            }
            else
            {
                mOctaedro[i][j] = '0';
            }
        }
    }

    // Imprime todo o vetor que foi preechido anteriormente.
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%c", mOctaedro[i][j]);
        }
        printf("\n");
    }
}


void habilidadeEmCruz()
{
    char mCruz[3][5];

    // Estrutura de repetição usando o FOR.
    // Analisa se as posições de linha e coluna da matriz são onde posicionarei os navios.
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == 0 && (j == 2))
            {
                mCruz[i][j] = '1';
            }
            else if (i == 1 && (j == 0 || j == 1 || j == 2 || j == 3 || j == 4))
            {
                mCruz[i][j] = '1';
            }
            else if (i == 2 && (j == 2))
            {
                mCruz[i][j] = '1';
            }
            else
            {
                mCruz[i][j] = '0';
            }
        }
    }

    // Imprime todo o vetor que foi preechido anteriormente.
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%c", mCruz[i][j]);
        }
        printf("\n");
    }
}