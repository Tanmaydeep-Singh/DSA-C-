
# Associativity

  

  

|Symbols| Precidence | Associativity |
|--|--|--|
| + - | 1 | L-R |
| * / | 2 | L-R |
| ^ | 3 | R-L |
| - ! | 4 | R-L |
| ( ) | 5 | L-R |

  
  

#### Ex 1: a + b + c -d
Here, the precidence is same, so we will look for associativity.

	Left-Right: (((a+b)+c)-d)	
	PostFix Form: ab+c+d-

  
  

#### Ex 2: a = b = c =5
Here, the precidence is same, so we will look for associativity.

	Right-Left: (a = (b= (c= 5)))
	Postfix Form: abc5===

  
  

#### Ex 3: a ^ b ^ c
Here, the precidence is same, so we will look for associativity.

	Right-Left: (a ^ (b ^ c ))
	Postfix Form: abc^^

  
 

# Unary Operator:

  

### 1. -a
	prefix: -a
	postfix: a-

  

### 2. *p
	prefix: *p
	postfix: p*

  

### 3. n!
	prefix: !n
	postfix: n!

### 4. log(n)
	prefix: log(n)
	postfix: nlog

  
#### Ex4: -a + b * logn!

Uniary operator then normal operatoes

  

Right-Left

##### Convarsion 
	-a + b * log[n!]
	-a + b * [n!log]
	[a-] + b * [n!log]
	[a-] + [bn!log]
	a-bn!log+

*Postfix : 	a-bn!log+*
