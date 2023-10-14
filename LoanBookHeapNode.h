#pragma once
#include "LoanBookData.h"

class LoanBookHeapNode 
{
private:
    LoanBookData* pData;
    LoanBookHeapNode* pLeft;
    LoanBookHeapNode* pRight;
    LoanBookHeapNode* pParent;

public:
    LoanBookHeapNode() {
        this->pData = NULL;
        this->pLeft = NULL;
        this->pRight = NULL;
        this->pParent = NULL;
    }
    ~LoanBookHeapNode() {

    }

    void setBookData(LoanBookData* data) {this->pData = data; }
    void setLeftChild(LoanBookHeapNode* pL) { this->pLeft = pL; }
    void setRightChild(LoanBookHeapNode* pR) { this->pRight = pR; }
    void setParent(LoanBookHeapNode* pP) { this->pParent = pP; }

    LoanBookData* getBookData() { return pData; }
    LoanBookHeapNode* getLeftChild() { return pLeft; }
    LoanBookHeapNode* getRightChild() { return pRight; }
    LoanBookHeapNode* getParent() { return pParent; }
}