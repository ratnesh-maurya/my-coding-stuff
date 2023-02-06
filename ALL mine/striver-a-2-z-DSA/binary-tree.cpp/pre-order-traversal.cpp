//recursive

void solve(Node* root,vector<int> &ans){

    // Base Case

    if(root==NULL) return ;
    ans.push_back(root->data);
    solve(root->left,ans);
    solve(root->right,ans);
}
vector <int> preorder(Node* root)
{
vector<int> ans;
  solve(root,ans);
  return ans;
};




//iterative

vector <int> preorder(Node* root)
{
vector<int> preorder;
        if(root==NULL) return preorder;
        stack<Node*> st;
        st.push(root);
        while(!st.empty())
        {

           root=st.top();
           st.pop();
           preorder.push_back(root->data);
           if(root->right!=NULL){
               st.push(root->right);
           }
           if(root->left!=NULL)
           {
               st.push(root->left);
           }
        }
        return preorder;
        
    
};