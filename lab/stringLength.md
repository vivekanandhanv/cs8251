
## Write your own `string_len` function

http://en.cppreference.com/w/c/string/byte/strlen

Write your own C function that behaves like the built-in `C` function `strlen`.  

 - Returns the length of the given null-terminated byte string. That is, the number of characters in a character array whose first element is pointed to by `str` up to and not including the first null character (`'\0'`).


**Bonus Points** for 
  - Using a character pointer to traverse the character array as you did in   http://j.mp/pointerWalk . 
  - Not using a integer variable to count. Use pointer arithmetic to come up with the string length.
  - Not using any other variable other than a character pointer variable and the `arr` variable

## Example 

`string_len("ab") == 2 `     
`string_len("abc") == 3 `    


<!--stackedit_data:
eyJoaXN0b3J5IjpbMTk1MTM2ODg5NywtOTIxMDMyODM1XX0=
-->