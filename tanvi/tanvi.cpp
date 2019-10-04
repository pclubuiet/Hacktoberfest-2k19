#include<iostream>

using namespace std;

struct node {
    int data;
    struct node *next;
};

node *head;

node* getnode() {
    node *p;
    p=new node;
    return(p);    
}

void push1(int info) {
    struct node *n;
    n = getnode();
    n->data = info;
    n->next = head;
    head = n;
}
 
void reverse1() {
    struct node *temp = NULL;
    struct node *prev = NULL;
    struct node *current = head;
    while(current != NULL) {
        temp = current->next;
        current->next = prev;
        prev = current;
        current = temp;
    }
    head = prev;
}

void display1() {
    node * ptr;
    ptr=head;   
    while(ptr != NULL) {
           cout << ptr->data<<" ";
           ptr = ptr->next;
    }
}

int main() {
    struct node *head = NULL;
    push1(10);
    push1(11);
    push1(18);
    push1(60);
    push1(94);
    push1(100);
    cout<<"List before reversing" << endl;
    display1();
    reverse1();
    cout<<endl;
    cout << "List after reversing"<<endl;
    display1();
    return 0;
}
