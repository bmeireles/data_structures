//pilha encadeada

Stack::Stack(){ //inicialização do construtor da classe stack
    structure = NULL; //inicializo o ponteiro da cabeça como nulo
    //para utilizar o nulo como criterio de parada
}

//no inicio, temos um ponteiro apontando para o topo da pilha
//como nao foi inicializado, ele está com undefined


Stack::~Stack() {
    NodeType *tempPtr; //ponteiro temporario
    while (structure != NULL) { //enquanto o no cabeça for diferente de null
        tempPtr = structure; //o no temporario recebe os dados do no cabeça
        structure = structure->next; //o no cabeça recebe os dados do proximo no
        delete tempPtr; //deletamos o no temporario
    }
}

//O destrutor vai desalocar tudo aquilo que as inserções alocaram, e que 
//nao foram desalocadas pelas remoções.Ele vai assumir que temos uma estrutura
//encadeada, o ponteiro temporario vai apontar para o nó que vai ser removido naquela
//iteração do laço