# menu-console
A tiny utility for printing lists of items in a console app.

## Commands
```c++
    // Getters
    std::string getTitle();
    std::vector<std::string> getItems();

    // Setters
    void reset();
    void setTitle(std::string title);

    // Item Manipulation
    void pushItem(std::string item);
    void popItem();

    // Printers
    void printItems(std::string type, std::string prefix);
    void printItemsInline(std::string prefix); // inline
    void printItemsBox(std::string prefix); // box
    void printItemsList(std::string prefix); // default
    void printItemsListUO(std::string prefix); // list_uo
    void printItemsListO(std::string prefix); // list_o
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
