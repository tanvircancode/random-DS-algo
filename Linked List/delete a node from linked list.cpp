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

void deleteNode(int position)
{
    if(position ==1 )
    {
        struct Node* temp1;
        temp1 = head -> link;
        head = temp1;
    }
    else
    {
        struct Node* temp2;
        temp2 = head;

        for(int i=1; i<= position-2 ; i++)
        {
            temp2 = head -> link;
            head = temp2;
            if(i == (position-2))
            {
                struct Node* temp3 = temp2 -> link;
                temp2 = temp3 -> link;
                head -> link = temp2;
            }
        }

    }

}

void insert(int value)
{
    struct Node* temp;
    temp = (struct Node*) malloc(sizeof(struct Node));
    temp -> data = value;
    temp -> link = NULL;
    if(head == NULL)
    {
        head = temp;
    }
    else
    {
        struct Node* t;
        t = head;
        while(t -> link != NULL)
        {
            t = t -> link;
        }
        t -> link = temp;
    }
}
int main()
{
    head = NULL;
    insert(10);
    insert(4);
    insert(3);
    insert(1);
    print();
    deleteNode(3);
    print();
    return 0;
}
