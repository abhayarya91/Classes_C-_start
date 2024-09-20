//#iclude<iostream>
//
//using namespace std;
//int main()
//{
//	TREE searching(TREE tree,int key)
//	{
//		while(tree)
//		{
//			if(key==tree->data)
//			{
//				return tree;
//			}
//			if(key<tree->data)
//			{
//				tree=tree->leftchild;
//			}
//			else
//			{
//				tree=tree->rightchild;
//			}
//		}
//		return NULL
//	}
//}

#include<iostream>

using namespace std;

struct TreeNode {
    int data;
    TreeNode* leftchild;
    TreeNode* rightchild;
};

TreeNode* searching(TreeNode* tree, int key) {
    while (tree) {
        if (key == tree->data) {
            return tree;
        }
        if (key < tree->data) {
            tree = tree->leftchild;
        } else {
            tree = tree->rightchild;
        }
    }
    return NULL;
}

int main() {
    TreeNode* root = new TreeNode{13, NULL, NULL};

    int key = 5;
    TreeNode* result = searching(root, key);
    if (result) {
        cout << "Found: " << result->data << endl;
    } else {
        cout << "Not found" << endl;
    }

    return 0;
}

