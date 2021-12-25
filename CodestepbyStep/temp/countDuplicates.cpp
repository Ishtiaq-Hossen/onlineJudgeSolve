//--------Bismillahir Rahmanir Rahim----------/
#include<iostream>
using namespace std;
struct node
{
    int data;
    node* next;
}*root=new node,*tail=new node;
int k=0;
void push(int value)
{
    node* temp=new node;
    temp->data=value;
    temp->next=NULL;
    if(root==NULL)
    {
        root=temp;
        return;
    }
    else
    {
        node* traverse=root;
        while(traverse->next!=NULL)
        {
            traverse=traverse->next;
        }
        traverse->next=temp;
        tail=traverse->next;
        return;
    }
}
void pop()
{
    node* del=new node;
    del=tail;
    node* traverse=root;
    while(traverse->next->next!=NULL)
    {
        traverse=traverse->next;
    }
    traverse->next=NULL;
    tail=traverse;
    delete del;

    return;
}
int countDuplicates(node *root)
{
    if(root!=NULL){
        int pop_element=tail->data;
        pop();
        if(root==NULL){
            return 0;
        }
        else{
            if(pop_element==tail->data){
                k++;
                
            }
            countDuplicates(root);
            return 
             
        }
    }
    else{
        return 0;
    }
    return 0;
}
void print()
{
    node *temp=root;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    root=NULL;
    int arr[20]={1, 3, 4, 7, 7, 7, 7, 9, 9, 11, 13, 14, 14, 14, 16, 16, 18, 19, 19, 19};
    for(int i=0;i<20;i++)
    {
        push(arr[i]);
    }
    cout<<countDuplicates(root)<<endl;
    return 0;
}