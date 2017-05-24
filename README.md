# menu-console
A tiny utility for printing lists of items in a console app.

## Commands
```c++
    // Initialize object
    menu myMenu;
    
    // Getters
    myMenu.getTitle(); // returns string
    myMenu.getItems(); // returns vector of strings

    // Setters
    myMenu.reset();
    myMenu.setTitle("string");

    // Item Manipulation
    myMenu.pushItem("string");
    myMenu.popItem();

    // Printers
    myMenu.printItems("print type", "prefix"); // Types: inline, box, default, list_uo, list_o
```

## Example
Example in the main program (at the time of this commit):
```
$ ./main.exe
The first element of our main() vector is: Hello, World!

THIS IS THE LIST TITLE!
"list":
 Hello, World!
 Another example item.
 This is the third pushed item.

"list_uo":
 - Hello, World!
 - Another example item.
 - This is the third pushed item.

"list_o":
 1. Hello, World!
 2. Another example item.
 3. This is the third pushed item.

"inline":
~ Hello, World! ~ Another example item. ~ This is the third pushed item.

"box":
Work in progress.

```
