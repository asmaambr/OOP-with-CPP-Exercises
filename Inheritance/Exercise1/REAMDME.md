
# Exercise1:

A supermarket chain has asked you to develop an automatic checkout system.
All products are represented by a barcode and a product name. The groceries can either be sold as:
1. Prepacked food, such that food packages have fixed prices.
2. Fresh food, such that the price is calculated by multiplying the weight by the current price/kg.
Develop the classes to represent the products and organize them hierarchically as follows:
 Define the Product class, which contains two data members for storing barcodes (long) and
the product name (string). Define a constructor with parameters for both data members. Add
default values for the parameters to provide a default constructor for the class.
 In addition to the access methods setCode() and getCode(), provide the methods scanner() and
printer() to read data from the keyboard or output product data on the screen.
 Define two classes PrepackedFood and FreshFood that are derived from Product. In addition
to the product data members, the PrepackedFood class should contain the unit price, and the
FreshFood class should contain the weight and the price/kg.
 In both classes, define a constructor with parameters providing default values for all data
members. Define also access methods for the new data members. Finally, redefine the
methods scanner() and printer() to take the new data members into consideration.
In the main program, test the various classes as follows:
x Create two objects for each of Product, PrepackedFood, and FreshFood. The first object is
initialized in the object definition, and the second is initialized using the default constructor.
x Test the get and set methods, the scanner method, and display the products.
