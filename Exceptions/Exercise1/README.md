
# Exercise1:
Different exceptions can arise when doing mathematical calculations. We want you to define various
classes to capture and handle such exceptions.
1. Define the class MathException, derived from the class exception, and which has a protected
string data member message, a constructor, and a function what() which returns the value
of message.

2. Define three classes (1) DivideByZeroException, (2) OverflowException, and (3) RootOf-
NegativeException. Each of these classes is derived from the class MathException and has

a constructor which passes the appropriate message to the MathException constructor.
• An object of the first class is thrown when a division by zero is about to occur on two
integer values entered by the user;
• An object of the second class is thrown when (just for the purposes of this exercise) a
very big number (say > 5000000) is read;
• An object of the third class is thrown when the calculation of the root of a negative
number entered by the user is about to be calculated.
• Otherwise, the operations are performed normally. If no OverflowException, simply
output the number that has been read.
3. Create a diagram illustrating the hierarchical relationship of the various exception classes in
terms of inheritance.
4. Write a main program to try the three above exceptions: Division, Overflow, and Square root.
The main includes a try block, within the try block, handle the necessary actions to throw
the appropriate exception each time. Following the try block, include catch blocks that match
the exceptions and handle them by displaying the appropriate messages.
5. Modify the main program to handle all the math exceptions using only the MathException
class for exception handling.
