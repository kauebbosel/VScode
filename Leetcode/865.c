int profundidade(struct TreeNode *root){
    if(root){       //teste para caso a root seja != NULL
        int esqProf = profundidade(root->left);
        int dirProf = profundidade(root->right);        //calculamos a profundidade, percorrendo a árvore com uma função recursiva

        if (esqProf >= dirProf) {               //determina-se a altura considerando a altura do mais alto + 1, dessa forma caso um dos nodos seja não exista nós podemos continuar a recursão.
            return esqProf + 1;
        } else {
            return dirProf + 1;
        }
    }
    return 0;               //retorno 0 para a altura caso root == NULL
}
bool aux(struct TreeNode *root, int alturaArv, int nivelAtual, struct TreeNode ** ptr){
    if(root){
        bool esq = aux(root->left, alturaArv, nivelAtual + 1, ptr);
        bool dir = aux(root->right, alturaArv, nivelAtual + 1, ptr);

        if( ( nivelAtual == alturaArv) ){      //se isso der verdadeiro, estamos no nível mais profundo da árvore
            *ptr = root;     
            return true;
        }
        if(esq && dir){         //checa se existem dois nodos mais profundos, caso sejam, seta o ponteiro para o pai
            *ptr = root;
        }
        return( esq || dir);        //retorna true se um dos nodos existir
    }
    return false;
}

struct TreeNode *subtreeWithAllDeepest(struct TreeNode* root){
    int prof = profundidade(root);
    struct TreeNode * ptr = NULL;

    aux(root, prof, 1, &ptr);
    return ptr;
}