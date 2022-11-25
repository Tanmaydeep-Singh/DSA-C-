# Tree Traversals:

  

|Preorder | Node | Left Subtree | Right Subtree |
| -- | -- | -- | --|
|Inorder | Left Subtree | Node | Right Subtree|
|Postorder | Right Subtree | Node | Left Subtree|
|Levelorder | Level by level|||

TRICK:
Preorder ; Point towards right.
Inorder: Point upwards.
Postorder Point towards left.
And trace the given tree, from root node in anti-clockwise direction. When you find yourself pointing exactly toward the node, write that node down.


