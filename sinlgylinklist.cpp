#include <iostream>

using namespace std;

struct node
{
    int data;
    node *next;
};

class linked_list
{
private:
    node *head,*tail;
public:
    linked_list()
    {
        head = NULL;
        tail = NULL;
    }

    void add_node(int n)
    {
        node *newnode = new node;
        newnode->data = n;
        newnode->next = NULL;

        if(head == NULL)
        {
            head = newnode;
            //tail = tmp;
        }
        else
        {
            node *current = new node;
            current = head;
            while(current->next != NULL)
            {
                current = current->next;
            }
            current->next = newnode;
        }
    }
    void show()
    {
        if(head == NULL)
        {
            cout<<"List is EMpty!"<<endl;
        }
        else
        {
            node *current = new node;
            current = head;
            while(current != NULL)
            {
                cout<<current->data<<"-->";
                current = current->next; 
            }
            cout<<endl;
        }
    }
};

int main()
{
    linked_list a;
    int ch,data;
    while(true)
    {
        cout<<"1.ADD node"<<endl;
        cout<<"2.show data"<<endl;
        cout<<"3.break"<<endl;
        cout<<"Enter your choice:";
        cin>>ch;
        if(ch==1)
        {
            cout<<"Enter data:";
            cin>>data;
            a.add_node(data);
            cout<<"data added successfulljy"<<endl;
            cout<<"-------------------"<<endl;
        }
        else if(ch==2)
        {
            cout<<"-----------------"<<endl;
            a.show();
            cout<<"------------------"<<endl;
        }
    }
    return 0;
}