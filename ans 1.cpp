#include <iostream>
#include<algorithm>
#include<vector>

using namespace std;
inorder (root)
{
    if(root==NULL)
        return;
    inorder(root->left);
    print<<root;
    inorder(root->right);
}
int main()
{
}

