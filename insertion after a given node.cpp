#include<iostream>
#include<cstdlib>
using namespace std;

struct node {
    int data;
    struct node* next;
};

struct node *start=NULL, *ptr;
int val;

void display() {
    ptr=start;
    while(ptr!=NULL) {
        cout<<ptr->data<<"->";
        ptr=ptr->next;
    }
    cout<<"NULL";
}

void createnode() {
    cout<<"Input value to insert ";
    cin>>val;

    struct node* newnode=(struct node*)malloc(sizeof(struct node));

    newnode->data=val;
    newnode->next=NULL;

    if(start==NULL)
        start=newnode;
    else {
        ptr=start;
        while(ptr->next!=NULL)
            ptr=ptr->next;

        ptr->next=newnode;
    }
}

void insertAfter() {
    int key;

    cout<<"Enter node value after which to insert ";
    cin>>key;

    ptr=start;

    while(ptr!=NULL && ptr->data!=key) {
        ptr=ptr->next;
    }

    if(ptr==NULL) {
        cout<<"Given node not found\n";
        return;
    }

    cout<<"Input new value to insert ";
    cin>>val;

    struct node* newnode=(struct node*)malloc(sizeof(struct node));

    newnode->data=val;
    newnode->next=ptr->next;
    ptr->next=newnode;
}

int main() {
    int n;

    cout<<"Number of nodes ";
    cin>>n;

    for(int i=0;i<n;i++) {
        createnode();
    }

    cout<<"Existing linked list is ";
    display();

    cout<<"\nNow inserting after a given node\n";
    insertAfter();

    cout<<"After insertion ";
    display();

    cout<<"\nFreeing memory.....";
    ptr=start;

    while(ptr!=NULL) {
        struct node* nextnode=ptr->next;
        free(ptr);
        ptr=nextnode;
    }

    start=NULL;
    return 0;
}
