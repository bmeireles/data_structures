//main da stack
#include "stack1.cpp"


ItemType character;
Stack stack;
ItemTypestackItem;

cout <<"Adicione uma string: " << endl;
cin.get(character);
while(character != '\n') {
    stack.push(character);
    cin.get(character);
}

while (!stack.isEmpty()) {
    stackItem = stack.pop();
    cout << stackItem;
}