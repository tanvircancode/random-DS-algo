#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* link;
};

struct Node* head;


void print()
{
    struct Node* temp;
    temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp -> link;
    }
    cout<<endl;
}

void insert(int value)
{
    struct Node* temp;
    temp = (struct Node*) malloc(sizeof(struct Node));
    temp -> data = value;
    temp -> link = head;
    head = temp;
}
int main()
{
    head = NULL;
    insert(1);
    insert(3);
    insert(4);
    print();
    return 0;
}

