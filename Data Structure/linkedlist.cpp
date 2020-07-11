#include<bits/stdc++.h>
using namespace std;

struct node{
  int roll;
  node *next;
};
node *root = NULL;

void append(int roll)
{
    if(root == NULL)
    {
        root = new node();
        root->roll = roll;
        root->next = NULL;
    }
    else
    {
        node *current_node = root;
        while(current_node->next != NULL)
        {
            current_node = current_node->next;
        }
        node *newnode = new node();
        newnode->roll = roll;
        newnode->next = NULL;

        current_node->next = newnode;
    }
}

void print()
{
    node *current_node = root;
    while(current_node->next != NULL)
    {
        printf("%d\n",current_node->roll);
        current_node = current_node->next;
        if(current_node->next == NULL)
        {
             printf("%d\n",current_node->roll);
             break;
        }
    }
}
int main()
{
    append(1);
    append(2);
    append(4);
    append(6);
    append(7);
    append(10);
    append(12);
    print();
    return 0;
}
