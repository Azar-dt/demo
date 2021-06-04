#include <iostream>
#include <string>
#include <queue>
#include <unordered_map>
using namespace std;
 
#define EMPTY_STRING ""
 
// A Tree node
struct Node
{
    char ch;
    int freq;
    Node *left, *right;
};
 
// Function to allocate a new tree node
Node* getNode(char ch, int freq, Node* left, Node* right);

 
// Comparison object to be used to order the heap
struct comp
{
    bool operator()(const Node* l, const Node* r) const
    {
        // the highest priority item has the lowest frequency
        return l->freq > r->freq;
    }
};
 
// Utility function to check if Huffman Tree contains only a single node
bool isLeaf(Node* root);
 
// Traverse the Huffman Tree and store Huffman Codes in a map.
void encode(Node* root, string str, unordered_map<char, string> &huffmanCode);
 
// Traverse the Huffman Tree and decode the encoded string
void decode(Node* root, int &index, string str);
 
// Builds Huffman Tree and decodes the given input text
void buildHuffmanTree(string text);
