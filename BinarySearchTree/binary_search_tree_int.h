#ifndef BINARY_SEARCH_TREE_H
#define BINARY_SEARCH_TREE_H
#include <string.h>
#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

// This struct will hold values between -9223372036854775807 and
// 9223372036854775808 with the value -9223372036854775808 (INT64_MIN)
// representing an empty tree if it is in the root position

struct binary_search_tree_int
{
    int64_t value;
    struct binary_search_tree_int* left;
    struct binary_search_tree_int* right;
};

typedef struct binary_search_tree_int bst_int;

/*
 This function initializes the bst_int with an empty right and left child
 and a root of value -9223372036854775808 to denote an empty tree.
 The function returns true if the function was able to do everything fine.
 False is returned otherwise.
 */
bool bst_int_init(bst_int* const tree);

/*
 Pre: tree is initialized
      value > -9223372036854775808
      value < 9223372036854775808

 This function adds value into the bst_int and returns true if the value was
 added; returns false otherwise.
 */
bool bst_int_add(bst_int* const tree, int64_t value);

/*
 Pre: tree is initialized
      value > -9223372036854775808
      value < 9223372036854775808

 This function removes value from the bst_int and returns the value if the
 value was in the tree; -9223372036854775808 is returned otherwise
 */
int bst_int_remove(bst_int* const tree, int64_t value);

/*
 Pre: tree is initialized
      value > -9223372036854775808
      value < 9223372036854775808

 This function checks to see if the value requested is in the tree. If so,
 true is returned; false is returned otherwise.
 */
bool bst_int_contains(const bst_int* const tree, int64_t value);

/*
 Pre: tree is initialized

 This function checks to see if the tree is empty or not. If so, true is
 returned; false is returned otherwise.
 */
bool bst_int_empty(const bst_int* const tree);

/*
 Pre: tree is initialized

 This function clears the tree
 */
void bst_int_clear(bst_int* const tree);

/*
 Pre: tree is initialized

 This function returns the greatest value in the tree. If no values are
 present, -9223372036854775808 is returned.
 */
int64_t bst_int_max(const bst_int* const tree);

/*
 Pre: tree is initialized

 This function returns the lowest value in the tree. If no values are
 present, -9223372036854775808 is returned.
 */
int64_t bst_int_min(const bst_int* const tree);

/*
 Pre: tree is initialized

 This function prints out the contents of the tree in in order traversal
 to standard output.
 */
void bst_int_print_inorder(const bst_int* const tree);

/*
 Pre: tree is initialized

 This function prints out the contents of the tree in pre order traversal
 to standard output.
 */
void bst_int_print_preorder(const bst_int* const tree);

/*
 Pre: tree is initialized

 This function prints out the contents of the tree in post order traversal
 to standard output.
 */
void bst_int_print_postorder(const bst_int* const tree);

#endif
