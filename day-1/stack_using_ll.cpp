#include<bits/stdc++.h>

using namespace std;

struct node {
    int  data;
    struct node* next;
};

struct node* top;

void push(int data){
    struct node* temp;
    temp = new node();
    
    if(!temp){
        cout<<"heap overflow";
        exit(1);
    }
    
    temp->data=data;
    temp->next=top;
    top=temp;
}

void pop(){
    struct node* temp;
    
    if(top==NULL){
        cout<<"underflow";
        exit(1);
    }
    temp=top;
    top=top->next;
    temp->next=NULL;
    free(temp);
}

int Isempty(){
        return top == NULL;
}

int peek(){
    cout<<"element at the top \n";
    if(!Isempty()){
        return top->data;
    }
    
    else
     exit(1);
}

void display(){
    cout<<"Current elements in stack\n";
    struct node* temp;
    
    if(top==NULL){
        cout<<"underflow";
        exit(1);
    }
   
    else {
         temp=top;
       while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
       }
    }
}


int main(){
    
    push(11);
    push(12);
    push(13);
    push(14);
    push(15);
    push(16);
    push(17);
    push(18);
    

    display();
    cout<<"\n";
    cout<< peek();
    cout<<"\n";
    pop();
    pop();
    

    display();
    cout<<"\n";
    cout<<peek();
    
    return  0;
}









