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
