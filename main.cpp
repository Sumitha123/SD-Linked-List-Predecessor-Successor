//
//  main.cpp
//  SUCC/PRED(L,k)
//
//  Created by Sumitha on 6/9/17.
//  Copyright © 2017 Sumitha. All rights reserved.
//

#include <iostream>
#include "SD-LIST-SUCC-PRED(L,k).hpp"

int main() {
    
    head = insertAtFirst(head,5);
    head = insertAtFirst(head,4);
    head = insertAtFirst(head,3);
    head = insertAtFirst(head,2);
    head = insertAtFirst(head,1);
    cout << "Sorted Doubly Linked List : ";
    displayList();
    cout << "SD-LIST-SUCCESSOR(head,3) : ";
    head = sortedListSuccessor(head,3);
    cout << "SD-LIST-PREDECESSOR(head,3) : ";
    head = sortedListPredecessor(head,3);
    
    return 0;
}
