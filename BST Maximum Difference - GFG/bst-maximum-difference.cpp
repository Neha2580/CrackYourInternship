//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;
#define MAX_HEIGHT 100000

// Tree Node
struct Node {
    int data;
    Node *right;
    Node *left;

    Node(int x) {
        data = x;
        right = NULL;
        left = NULL;
    }
};

Node *insert(Node *tree, int val) {
    Node *temp = NULL;
    if (tree == NULL) return new Node(val);

    if (val < tree->data) {
        tree->left = insert(tree->left, val);
    } else if (val > tree->data) {
        tree->right = insert(tree->right, val);
    }

    return tree;
}


// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    Node* res;
    int res2;
    int ans;
    void search(Node *root,int target,int cur)
    {
        if(!root)return;
        if(target==root->data)
        {
            res=root;
            res2=cur;
            return ;
        }
        else if(target<root->data)
            search(root->left,target,cur+root->data);
        else  
            search(root->right,target,cur+root->data);
    }
    void preorder(Node *root,int sum)
    {
        if(!root)return;
        if(root->left==NULL && root->right==NULL)
        {
            sum+=root->data;
            ans=max(ans,(res2-(sum-res->data)));
        }
        sum+=root->data;
        preorder(root->left,sum);
        preorder(root->right,sum);
    }
    int maxDifferenceBST(Node *root,int target)
    {
        res=NULL;
        res2=0;
        ans=-1000000000;
        int cur=0;
        search(root,target,cur);
        if(res==NULL)
        {
            return -1;
        }
        root=res;
        int sum=0;
        preorder(root,sum);
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        Node *root = NULL;

        int N;
        cin >> N;
        for (int i = 0; i < N; i++) {
            int k;
            cin >> k;
            root = insert(root, k);
        }

        int target;
        cin >> target;
        Solution ob;
        cout << ob.maxDifferenceBST(root, target);
        cout << endl;
    }
}
// } Driver Code Ends