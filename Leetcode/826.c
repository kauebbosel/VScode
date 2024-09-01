#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int difficulty;
    int profit;
} Pair;

//função usada na comparação da ordenaçao por dificuldade
int comparePairs(const void *a, const void *b) {
    Pair *pairA = (Pair *)a;
    Pair *pairB = (Pair *)b;
    return pairA->difficulty - pairB->difficulty;
}

//função usada na comparação da ordenação dos trabalhadores
int compareInts(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int maxProfitAssignment(int* difficulty, int difficultySize, int* profit, int profitSize, int* worker, int workerSize) {
    // Criar array de pares
    Pair *pairs = (Pair *)malloc(profitSize * sizeof(Pair));
    for (int i = 0; i < profitSize; i++) {
        pairs[i].difficulty = difficulty[i];
        pairs[i].profit = profit[i];
    }

    //ordena os pares com um quicksort implementado2 na stdlib
    qsort(pairs, profitSize, sizeof(Pair), comparePairs);   

    //ordena os trabalhadores por habilidade
    qsort(worker, workerSize, sizeof(int), compareInts);

    int p = 0;
    int bestProfit = 0;
    int totalProfit = 0;

    for (int i = 0; i < workerSize; i++) {
        while (p < profitSize && worker[i] >= pairs[p].difficulty) {
            if (pairs[p].profit > bestProfit) {
                bestProfit = pairs[p].profit;
            }
            p++;
        }
        totalProfit += bestProfit;
    }

    free(pairs); 
    return totalProfit;
}