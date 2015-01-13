#ifndef BINARY_SEARCH_TREE_H
#define BINARY_SEARCH_TREE_H
#include <string.h>
#include <stdio.h>

struct binary_search_tree_int
{
    int value;
    bst_int* left;
    bst_int* right;
};

typedef binary_search_tree_int bst_int;

bool bst_int_init(bst_int* tree);

bool bst_int_add(bst_int* tree, int value);

int bst_int_remove(bst_int* tree, int value);

bool bst_int_contains(const bst_int* const tree, int value);

bool bst_int_empty(const bst_int* const tree);

int bst_int_max(const bst_int* const tree);

int bst_int_min(const bst_int* const tree);

void bst_int_print_elements(const bst_int* const tree);

#endif
