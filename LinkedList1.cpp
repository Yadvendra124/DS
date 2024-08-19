#include<bits/stdc++.h>
using namespace std;
struct node{
    char v[50];
    node*next;
};
class LinkedList1{
    node*start;
    public:
    LinkedList1(){start=NULL;}
    //Add Char array
    void addatbegin(char x[50]){
        node*t;
        t = new node;
        strcpy(t->v , x);
        t -> next=NULL;
        if(start==NULL){start =t;}
        else{
            t -> next =start;
            start = t;
        }
    }
    //Display
    void display(){
        node*temp;
        temp = start;
        while(temp!=NULL){

            cout<<temp->v<<" ";
            temp=temp->next;
        }
    }
    //Display length
    int getLength(){
        if(start==NULL){return 0;}
        node*temp = start;
        int length =0;
        while(temp!=NULL){
            length++;
            temp = temp->next;

        }
        return length;
    }
    //append 
    void append(char x[50]){
        node*t;
        t=new node;
        strcpy(t->v,x);
        t->next=NULL;
        if(start == NULL){
            start = t;
            return;

        }
        node*temp;
        temp = start;
        while(temp->next!=NULL){temp = temp->next;}
        temp->next=t;
    }
    //add at position
    void addatPOS(char x[50],int POS){
        node*t=new node;
        strcpy(t->v ,x);
        t->next=NULL;
        if(POS<1){addatbegin(x);return;}
        if(POS+1>getLength()){append(x);return; }
        node*temp=start;
        for(int i=1;i<POS;i++) temp = temp->next;
            t->next=temp->next;
            temp->next=t;
    }
    //display more
    void displayMORE(){
        node*t=start;
        while(t!=NULL){
            cout<<"Address : "<<t<<" ,Value : "<<t->v<<" ,Next : "<<t->next<<endl;
            t=t->next;
        }
    }
    //remove first position
    void removeFirst(){
        if(start==NULL){
            cout<<"Empty";
            return;
        }
        node*t;
        t=start;
        start=start->next;
        delete t;

    }
    //remove last position
    void removeLast(){
        if(start == NULL){
            cout<<"Empty";
            return;
        }else if(start->next==NULL){
            removeFirst();
        }else{
            node*temp=start;
            while(temp->next->next!=0) temp=temp->next;
            node*t=temp->next;
            temp->next=NULL;
            delete t;
        }
    }
    //remove at position
    void removeNTH(int POS){
        if(POS==1){return removeFirst();}
        int n = getLength();
        if(POS==n){ return removeLast();}
        node*temp=start;
        for(int i=1;i<POS-1;i++){
            temp=temp->next;
        }
        node*t=temp->next;
        temp->next=temp->next->next;
        delete t;


    }




};
int main(){
    LinkedList1 nameoffriend;
    char name1[] ="Yadvendra";
    char name2[] ="Singh";
    char name3[] ="Chouhan";
    char name4[] ="Dayaram";
    nameoffriend.addatbegin(name2);
    nameoffriend.addatbegin(name1);
    // nameoffriend.display();
    nameoffriend.append(name3);
    // nameoffriend.display();
    nameoffriend.addatPOS(name4,2);
    nameoffriend.display();
    nameoffriend.displayMORE();
    nameoffriend.removeFirst();
    nameoffriend.removeLast();
    nameoffriend.display();
    nameoffriend.removeNTH(2);
    nameoffriend.display();
    cout<<nameoffriend.getLength()<<endl;



}