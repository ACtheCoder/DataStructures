all: bstinttest

bstinttest: test_bst_int.o binary_search_tree_int.o
	gcc -o bstinttest -O2 -m64 test_bst_int.o binary_search_tree_int.o

test_bst_int.o: test_bst_int.c binary_search_tree_int.h
	gcc -c test_bst_int.c

binary_search_tree_int.o: binary_search_tree_int.c binary_search_tree_int.h
	gcc -c binary_search_tree_int.c

clean:
	rm -f *.o

