
# Exercise 1
An automatic checkout system for a supermarket chain needs to be completed 
1- In the base class Product, define a virtual destructor and the virtual methods scanner () and
printer ().
2- In the main, write the function record(), which registers and lists in a loop the products purchased
in the store. The function creates an array of 100 pointers to the base class Product.
The checkout assistant should state if a prepacked or fresh product is going to be scanned:
x First, for each scanned product, the memory is dynamically allocated and referenced by the
next pointer in the array.
x Then, after scanning all the purchased items, a list of the latter products is displayed.
x Finally, the prices of all the items are added, and the total amount is displayed.
3- In the main, write a program to simulate a supermarket checkout. The
