#include<iostream>
using namespace std;

template<class EType>
class BinarySearchTree;

template<class EType>
class BinaryNode{

    Etype element;
    BinaryNode* left;
    BinaryNode* right;

    BinaryNode(const EType &theElement, BinaryNode *lt, BinaryNode *rt )
    : element(theElement), left(lt), right(rt){}

    friend class BinarySearchTree<EType>;

};

template <class EType>
class BinarySearchTree{
    public:
    BinarySearchTree(const EType &notFound) : ITEM_NOT_FOUND(notFound), root(NULL) {}

    ~BinarySearchTree(){makeEmpty(root); }

    
}