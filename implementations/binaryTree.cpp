
#include <iostream>

using namespace std;

template <typename T> using pointer = T *;

template <typename T> struct TreeNode {
  T value;
  pointer<TreeNode> left;
  pointer<TreeNode> right;

  TreeNode(T value) : value{value}, left{nullptr}, right(nullptr){};
};

template <typename T> class BinaryTree {

public:
  auto insert(pointer<TreeNode<T>> root, T value) -> pointer<TreeNode<T>> {
    if (root == nullptr)
      return new TreeNode<T>(value);
    if (value < root->value) {
      root->left = insert(root->left, value);
    } else if (value > root->value) {
      root->right = insert(root->right, value);
    }
    return root;
  }
  auto search(pointer<TreeNode<T>> root, T value) -> bool {
    if (root == nullptr)
      return false;
    if (root->value == value)
      return true;
    if (value < root->value)
      return search(root->left, value);
    else if (value < root->value)
      return search(root->right, value);
    return false;
  }
};

auto main() -> int {
  BinaryTree<int> bt;
  TreeNode<int> *root;
  cout << 1 << endl;
}
