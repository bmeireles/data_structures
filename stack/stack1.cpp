#include "stack1.h"

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
        tempPtr = structure; //o no temporario recebe os dados do no cabeça, que eu vou deletar
        structure = structure->next; //o no cabeça recebe os dados do proximo no
        delete tempPtr; //deletamos o no temporario
    }
}

//O destrutor vai desalocar tudo aquilo que as inserções alocaram, e que 
//nao foram desalocadas pelas remoções.Ele vai assumir que temos uma estrutura
//encadeada, o ponteiro temporario vai apontar para o nó que vai ser removido naquela
//iteração do laço

//Para acessar os campos de um nó:
//do tipo ponteiro: NodeType *a => usamos a seta => a->next
//do tipo normal: NodeType b => usamos o ponto => b.next

bool Stack::isEmpty() const { //verifica se a pilha está vazia
    return (structure == NULL); //se o ponteiro inicial está apontando para nulo
    //sei que a pilha está vazia
}

//Pode haver o caso de a memoria estar lotada e o sistema op. nao deixar a alocação ocorrer

bool Stack::isFull() const { //verifica se a pilha está cheia para que possamos colocar novos elem.
    NodeType *location; //declaro que location é um ponteiro do tipo nodetype, aqui nao ocupa espaço
    //na memoria
    try { //tente fazer isso
        location = new NodeType; //tento alocar um novo nodetype
        delete location; //tento deletar o nó que acabei de criar. Se eu conseguir deletar sem erro,
        //significa que existe espaço na memoria e posso adicionar mais um no na pilha
        return false; //a pilha nao está cheia
    } catch(std::bad_alloc exception) { //se gerar um erro, nao conseguiu alocar
        return true;} //a pilha está cheia
}

void Stack::push(ItemType item) { //função para adicionar um nó na pilha, recebo a info
//item do nó a ser criado
    if (!isFull()) { //se a pilha nao estiver cheia
        NodeType *location; //declaro que location é um ponteiro do tipo no
        location = new NodeType; //aloco na memoria a variavel location
        location->info = item; //o campo info de location recebe o item
        location->next = structure; //o campo next de location recebe o no cabeça, aponta para o no cabeça
        structure = location; //structure recebe location, que agora é o novo nó cabeça
    } else {
        throw "Stack is already full";
    }
}

//Structure é um ponteiro para o nó cabeça da pilha. No push, criamos um novo nó a partir do item
//recebido, fazemos o novo nó apontar para a cabeça da pilha, e depois fazemos o structure apontar
//para o novo nó que se tornou o nó cabeça.

ItemType Stack::pop() { //funçao para extrair informação do nó cabeça da pilha
    if (!isEmpty()) { // se a pilha nao estiver vazia
        NodeType *tempPtr; //declaro que tempPtr é um ponteiro do tipo no
        tempPtr = structure; //inicializo temp na memoria, recebe os dados de structure, que aponta para o nó cabeça
        ItemType item = structure->info; //crio uma variavel item e ela recebe os dados do nó cabeça
        structure = structure->next; //o ponteiro structure aponta para o proximo no, ao inves de temp
        delete tempPtr; //deleto a variavel temporaria
        return item; //retorno a info do no
    } else {
        throw "Stack is empty!";
    }
}

//No pop, obtemos a informação do nó cabeça da pilha para retornar ao usuario no final da função.
//E temos que fazer o ponteiro do nó cabeça apontar para o proximo no.

void Stack::print() const { //função que retorna todos os itens dos nós na pilha
    NodeType *tempPtr = structure; //declaro e inicializo a variavel temporaria apontando para o mesmo no que structure
    while (tempPtr != NULL) { //enquanto tempPtr nao apontar para nulo
        cout << tempptr->info; //imprima a informação do no que tempPtr aponta
        tempPtr = tempPtr->next; //faça tempPtr apontar para o proximo nó
    }
    cout << endl;
}

//No print, nao podemos mover o structure por causa do const.
//Por isso, apontamos o tempPtr para a cabeça da pilha, e a cada iteração ele vai apontar para os outros
//elementos que também estão na pilha, e imprimir a informação. 
//Enquanto tempPtr nao for nulo, imprimimos a informação