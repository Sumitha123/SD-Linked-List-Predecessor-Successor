//
//  SD-LIST-SUCC-PRED(L,k).hpp
//  PRED(L,k)
//
//  Created by Sumitha on 6/9/17.
//  Copyright © 2017 Sumitha. All rights reserved.
//

#ifndef SD_LIST_SUCC_PRED_L_k__hpp
#define SD_LIST_SUCC_PRED_L_k__hpp

#include <stdio.h>
using namespace std;
struct node{
    int key;
    struct node* prev;
    struct node* next;
};

struct node* head = NULL;

node* insertAtFirst(node* head,int key){
    struct node* temp = new node;
    temp->key = key;
    temp->prev = NULL;
    temp->next = NULL;
    if(head==NULL){
        head = temp;
    }
    else{
        
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
    return head;
}


node* sortedListSuccessor(node* head,int key){
    struct node* newNode = new node;
    newNode->key = key;
    newNode->next = NULL;
    newNode->prev = NULL;
    if(head == NULL){
        cout << "List is empty!" << endl;
    }
    else{
        struct node* current = head;
        while(current!=NULL){
            if(current->key == newNode->key){
                struct node* temp = new node;
                temp = current->next;
                cout << temp->key <<endl;
                return head;
                
            }
            else{
                
                current=current->next;
            }
        }
    }
    return head;
}

node* sortedListPredecessor(node* head,int key){
    struct node* newNode = new node;
    newNode->key = key;
    newNode->next = NULL;
    newNode->prev = NULL;
    if(head == NULL){
        cout << "List is empty!" << endl;
    }
    else{
        struct node* current = head;
        while(current!=NULL){
            if(current->key == newNode->key){
                struct node* temp = new node;
                temp = current->prev;
                cout << temp->key <<endl;
                return head;
                
            }
            else{
                
                current=current->next;
            }
        }
    }
    return head;
}

//Display items in the linked list
void displayList()
{
    
    struct node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->key<<" ";
        temp=temp->next;
    }
    cout<<"\n";
}

#endif /* SD_LIST_SUCC_PRED_L_k__hpp */
