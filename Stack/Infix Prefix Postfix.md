# Infix: operand operator operand
    a + b

# Prefix: operator operand operand
    +ab

# Postfix: operand operand operator
    ab+



 ### Need of prefix and postfix?

 To perform BODMAS operation wuing a computer program, we need to rearrange the equation as it would be quite defficult to make a program which jumps from one operation to other.

 ex:  8 + 3 * (9 - 6 )/ 2^2 + 6 /2 

 Its not possible to solve this equation using Infix condition with one scan.

The postfix form for the same equation will be : 8 3 9 6 - 2^2 / * + 6 2 / +
 Now as we scan through the equation, we will keep performing the operation to previous two values


# Infix to Prefix and Postfix:

|Symbols| Precidence  |
|--|--|
| + -  | 1 |
| * /  | 2 |
| ( )  | 3 |


Ex: a + b * c
  
  = (a+ (b * c))

  prefix: +a*bc
  postfix: abc*+

