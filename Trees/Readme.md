# Terminology

Root:

Parent:

Chield:

Siblings:

Descendents:

Ancestors:

Degree of node:

Internal node:

Externam node:

Levels:

Height:

Forst:

  
  

# Binary Tree: A tree of degree 2

 
A binary tree can have atmost 2 child.
	
	 Left Skewed Tree: No rigth sub-tree.
	 Right Skewed Tree: No left sub-tree.

  

### Catalon Number:

The number of trees from given number of empty nodes:

T(n) = <sup>2*n</sup>C<sub>n</sub>  n + 1

  

The number of trees from given number of nodes:

T(n) = <sup>2*n</sup>C<sub>n</sub> * n! / n + 1
Maximum Height from 'n' node will be 2<sup>n-1</sup>

  
  

# Height & Nodes.

If height is given:

	Minimum number of nodes: h +1
	Maximum number of nodes: (2<sup>h+1</sup> -1)

  

If nodes is given:

	Minimum number of height: log<sub>2</sub>(n+1) -1
	Maximum number of height: n - 1

  

# Relation between internal & external nodes.

  

Number of nodes with degree '0' and Number of nodes with degree '1'.

	Deg(0) = Deg(2) + 1

  
  
  

# Strict Binary Tree:

	In a strict binary tree, a node can have either '0' or '2' nodes only.

  
  

### Height & Node;

If height is given:

	Minimum number of nodes: 2*h +1
	Maximum number of nodes: (2<sup>h+1</sup> -1)

  

If nodes is given:

	Minimum number of height: log<sub>2</sub>( n+1) -1
	Maximum number of height: (n - 1) / 2

  

### Relation between internal & external nodes.

  

	In a strict binary tree, number of internal nodes are 1 less than external nodes.

	i = e + 1

  

# Strict n-ary Trees:

*n here represents degree of a tree.*

	n-ary trees represents that a node can have degree upto n

  
  

# Full v/s Complete Binary tree

  

	Full Binary Tree: A tree of height 'h' which have maximum umber of nodes.

 
	Complete Binary Tree: A binary tree of height 'h', in which every level, except possibly the last, is completely filled, and all nodes in the last level are as far left as possible

*A complete binary tree need not be a full binary tree*