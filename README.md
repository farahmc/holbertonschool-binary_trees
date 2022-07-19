# Binary Trees

## Tasks

### 0. New node
Write a function that creates a binary tree node
- Prototype: `binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);`
- Where `parent` is a pointer to the parent node of the node to create
- And `value` is the value to put in the new node
- Your function must return a pointer to the new node, or `NULL` on failure

### 1. Insert left
Write a function that inserts a node as the left-child of another node
- Prototype: `binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);`
- Your function must return a pointer to the created node, or `NULL` on failure or if parent is `NULL`
- If `parent` already has a left-child, the new node must take its place, and the old left-child must be set as the left-child of the new node.

### 2. Insert right
Write a function that inserts a node as the right-child of another node
- Prototype: `binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);`
- Where `parent` is a pointer to the node to insert the right-child in
- If `parent` already has a right-child, the new node must take its place, and the old right-child must be set as the right-child of the new node.

### 3. Delete
Write a function that deletes an entire binary tree
- Prototype: `void binary_tree_delete(binary_tree_t *tree);`
- Where `tree` is a pointer to the root node of the tree to delete
- If tree is `NULL`, do nothing

### 4. Is leaf
Write a function that checks if a node is a leaf
- Prototype: `int binary_tree_is_leaf(const binary_tree_t *node);`
- Where `node` is a pointer to the node to check
- Your function must return `1` if `node` is a leaf, otherwise `0`
- If node is `NULL`, return `0`

### 5. Is root
Write a function that checks if a given node is a root
- Prototype: `int binary_tree_is_root(const binary_tree_t *node);`
