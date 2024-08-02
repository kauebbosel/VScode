struct TreeNodede {
     int val;
     struct TreeNode *left;
     struct TreeNode *right;
 };
 
int rangeSumBST(struct TreeNode* root, int low, int high) {
    int sum = 0;
    struct Treenode *temp = root;
    struct Treenode *aux;

    /*while(temp->left != NULL || temp->right != NULL){       //tentativa de fazer de cima p/ baixo, creio que seja uma maneira ruim de fazer isso, vou ignorar isso e tentar outra alternativa
        if(temp->left != NULL){
            temp->
            
            if(temp->val <= low || temp->val >= high){
                sum += temp->val;
            }
        }
    }


    for(int i = 0; i < 10; i++){
        if(root->left != NULL && root->val <= low && root->val >= high){

        }
    }*/

    while(temp->left != NULL; temp = temp->left){
        
    }
}
