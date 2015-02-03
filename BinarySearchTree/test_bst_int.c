#include "binary_search_tree_int.h"
#include "stdlib.h"

void test_init(bst_int* const tree)
{
    bst_int_init(tree);
    if(tree->left != NULL || tree->right != NULL || tree->value != INT64_MIN)
    {
        abort();
    }
    printf("You have passed the init test\n");
}

void test_add(bst_int* const tree)
{
    bool ok = true;
    //adding to an empty tree
    bst_add(tree, 500);
    if(tree->value != 500 || tree->right != NULL || tree->left != NULL)
    {
        abort();
    }
    //test left
    bst_add(tree, 200);
    if(tree->value != 500 || tree->right->value != NULL || tree->left->value != 200)
    {
        abort();
    }
    //test left left
    bst_add(tree, 100);
    if(tree->left->left->value != 100)
    {
        abort();
    }
    //test left right
    bst_add(tree, 300);
    if(tree->left->right->value != 300)
    {
        abort();
    }
    //test right
    bst_add(tree, 700);
    if(tree->value != 500 || tree->left->value != 200 || tree->right->value != 700)
    {
        abort();
    }
    //test right left
    bst_add(tree, 600);
    if(tree->right->left->value != 600)
    {
        abort();
    }
    //test right right
    bst_add(tree, 800);
    if(tree->right->right->value != 800)
    {
        abort();
    }

    //test equal
    bst_add(tree, 300);
    if()
    {
        abort();
    }
    printf("You have passed the add test\n");
}

void test_remove(bst_int* const tree)
{
    printf("You have passed the remove test\n");
}

void test_contains(const bst_int* const tree)
{
    printf("You have passed the contains test\n");
}

void test_empty(const bst_int* const tree)
{
    printf("You have passed the empty test\n");
}

void test_clear(bst_int* const tree)
{
    printf("You have passed the clear test\n");
}

void test_max(const bst_int* const tree)
{
    printf("You have passed the max test\n");
}

void test_min(const bst_int* const tree)
{
    printf("You have passed the min test\n");
}

void test_inorder(const bst_int* const tree)
{
    printf("You have passed the in order test\n");
}

void test_preorder(const bst_int* const tree)
{
    printf("You have passed the pre order test\n");
}

void test_postorder(const bst_int* const tree)
{
    printf("You have passed the post order test\n");
}

int main(int agrv, char** args)
{
    bst_int tree;
    test_init(&tree);
    bst_int_init(&tree);
    test_add(&tree);
    test_remove(&tree);
    test_empty(&tree);
    test_contains(&tree);
    test_clear(&tree);
    test_max(&tree);
    test_min(&tree);
    test_inorder(&tree);
    test_preorder(&tree);
    test_postorder(&tree);
    printf("You have passes all the tests!\n");
}
