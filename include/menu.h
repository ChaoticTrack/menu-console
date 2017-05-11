#ifndef MENU_H
#define MENU_H

#include <iostream>
#include <string>
#include <vector>
#include <map>

class menu
{
public:
    menu();
    ~menu();

    void printError(std::string error); // error message due to illegal operation
    bool doesIndexExist(int index);

    // Getters
    std::string getTitle();
    std::vector<std::string> getItems();

    // Setters
    void reset();
    void setTitle(std::string title);

    // Item Manipulation
    void insItem(int index, std::string item);
    void delItem(int index);

    void pushItem(std::string item);
    void popItem();

    // Printers
    void printItems(std::string type, std::string prefix);
    void printItemsInline(std::string prefix); // inline
    void printItemsBox(std::string prefix); // box
    void printItemsList(std::string prefix); // default
    void printItemsListUO(std::string prefix); // list_uo
    void printItemsListO(std::string prefix); // list_o

private:
    std::string title;
    std::vector<std::string> items;
};

#endif // MENU_H