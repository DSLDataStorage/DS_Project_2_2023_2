#pragma once
#include "LoanBookData.h"
#include "LoanBookHeapNode.h"

class LoanBookHeap
{
private:
    LoanBookHeapNode* root;

public:
    LoanBookHeap() {
        this->root = NULL;
    };
    ~LoanBookHeap() {

    }
    
    void setRoot(LoanBookHeapNode* pN) { this->root = pN; }
    LoanBookHeap* getRoot() { return root; }

    void heapifyUp(LoanBookHeapNode* pN);
    void heapifyDown(LoanBookHeapNode* pN);
    
    bool Insert(LoanBookData* data);
}