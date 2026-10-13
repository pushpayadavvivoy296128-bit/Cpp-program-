#include<iostream>
using namespace std;
struct node
{
int data;
struct node *next;
};
int main()
{
  struct node n1={30,NULL};
struct node n2={20,&n3};
struct node n3={10,&n2};
start node *start=&n1;
cout<<""Linked list is;
struct node *ptr=start;
while(ptr!NULL)
{
cout<<ptr->data<<"->";
ptr=ptr->next;
}
cout<<"NULL"<<"/n;
  return 0
  }
