
#include <iostream>

class Node{
    public:
        int data;
        Node *next;
}

int main() {
    Node *p = new Node; // Create First Node
    cout << "addr of first node =>" << p << endl;
    p -> data = 10;
    cout << "data of first node =>" << p -> data << endl;
    p -> next = new Node;
    cout << "addr of sec node =>" << p -> next << endl;
    
}