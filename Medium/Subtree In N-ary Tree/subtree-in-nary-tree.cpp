//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    vector<Node*> children;
    Node(int val){
        data=val;
    }
};

class N_ary_Tree{
public:
    Node *root;
    int size;
    N_ary_Tree(){
        root=NULL;
        size=0;
    }
    Node *add(int new_key,Node *parent_key=NULL){
        Node *new_node = new Node(new_key);
        if(parent_key == NULL){
            root = new_node;
            size = 1;
        }
        else{
            parent_key->children.push_back(new_node);
            size += 1;
        }
        return new_node;
    }
};


// } Driver Code Ends
//User function Template for C++

//User function Template for C++

class Solution{
public:
    int duplicateSubtreeNaryTree(Node *root){
        unordered_map<string, int> hashTable;
        int count = 0;
        computeHash(root, hashTable, count);
        return count;
    }

private:
    string computeHash(Node* node, unordered_map<string, int>& hashTable, int& count) {
        if (!node) return "";
        string hash = to_string(node->data);
        vector<string> childrenHashes;
        for (Node* child : node->children) {
            childrenHashes.push_back(computeHash(child, hashTable, count));
        }
        sort(childrenHashes.begin(), childrenHashes.end());
        for (string childHash : childrenHashes) {
            hash += "#" + childHash;
        }
        if (hashTable[hash] == 1) {
            count++;
        }
        hashTable[hash]++;
        return hash;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        if(i==0){
            string p;
            getline(cin,p);
        }
        string str;
        getline(cin,str);
        stringstream st(str);
        vector<string> s;
        string y;
        while(st>>y){
            s.push_back(y);
        }
        N_ary_Tree *tree = new N_ary_Tree();
        Node *curr;
        queue<Node*> q;
        for(int i=0;i<s.size();i++){
            if (i == 0){
                curr=tree->add(stoi(s[0]));
            }
            else if(s[i] == " "){
                continue;
            }
            else if(q.size() and s[i] == "N"){
                curr = q.front();
                q.pop();
            }
            else if(s[i] != "N"){
                q.push(tree->add(stoi(s[i]), curr));
            }
        }
        Solution ob;
        int res = ob.duplicateSubtreeNaryTree(tree->root);
        cout<<res<<endl;
    }
}
// } Driver Code Ends