#include <stdio.h>

int ocorrenciaString(const char *str1, const char *str2) {
    const char *p1 = str1;
    const char *p2 = str2;
    
    while (*p1 != '\0') {
        const char *temp = p1; // Salva o ponto de início da busca
        
        while (*p1 != '\0' && *p2 != '\0' && *p1 == *p2) {
            p1++;
            p2++;
        }
        
        if (*p2 == '\0') // Se chegou ao final da segunda string, significa que encontrou a ocorrência
            return 1;
        
        p1 = temp + 1; // Retorna para o próximo caractere após o ponto de início
        p2 = str2; // Reinicia a busca na segunda string
    }
    
    return 0; // Se não encontrou a ocorrência
}

int main() {
    char str1[100]; // Define uma string de tamanho máximo
    char str2[100];
    
    printf("Digite a primeira string: ");
    scanf("%99s", str1); // Lê a primeira string do usuário
    
    printf("Digite a segunda string: ");
    scanf("%99s", str2); // Lê a segunda string do usuário
    
    if (ocorrenciaString(str1, str2))
        printf("A segunda string ocorre dentro da primeira.\n");
    else
        printf("A segunda string NÃO ocorre dentro da primeira.\n");
    
    return 0;
}