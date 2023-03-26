#ifndef STACK1_H
#define STACK1_H

//Pilha encadeada

typedef char ItemType;
//Estrutura usada para guardar a informação e o endereço do próximo elemento

struct NodeType
{
    ItemType info; //informação
    NodeType *next; //ponteiro para o proximo elemento
};

//Todas as operações acontecem na cabeça da pilha

class Stack
{
    public:
    Stack(); //construtor
    ~Stack(); //destrutor
    bool isEmpty() const;
    bool isFull() const;
    void print() const;

    void push(ItemType);
    ItemType pop();

    private:
    NodeType *structure; //ponteiro para a cabeça da pilha
}