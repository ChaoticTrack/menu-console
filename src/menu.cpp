#include "../include/menu.h"

menu::menu() { reset(); }
menu::~menu() {}

void menu::printError(std::string error)
{
    std::cerr << "Menu error: " << error << std::endl;
    return;
}

bool menu::doesIndexExist(int index)
{
    return (index + 1 <= items.size());
}


// ====================== Getters ======================
std::string menu::getTitle() { return title; }

std::vector<std::string> menu::getItems()
{
    return items;
}


// ====================== Setters ======================
void menu::reset()
{
    title = "";
    items.clear();
    return;
}

void menu::setTitle(std::string title)
{
    this->title = title;
    return;
}


// ====================== Item Manipulation ======================
void menu::insItem(int index, std::string item)
{
    if (doesIndexExist(index)) {
        // not working.. items.insert(index, 1, item);
    } else {
        printError("INDEX " + std::to_string(index) + " DOES NOT EXIST");
    }
    return;
}

void menu::delItem(int index)
{
    // TODO delItem function if possible
    return;
}

void menu::pushItem(std::string item)
{
    items.push_back(item);
    return;
}

void menu::popItem()
{
    items.pop_back();
    return;
}


// ====================== Printers ======================
void menu::printItems(std::string type, std::string prefix)
{
    std::map<std::string, int> typeMap = {
        {"list", 1},
        {"list_uo", 2},
        {"list_o", 3},
        {"inline", 4},
        {"box", 5}
    };

    int typeSelection = 0; // stays as 0 if no valid choice
    typeSelection = typeMap[type];

    if (typeSelection > 0) {
        switch (typeSelection) {
            case 1:
                printItemsList(prefix); break;
            case 2:
                printItemsListUO(prefix); break;
            case 3:
                printItemsListO(prefix); break;
            case 4:
                printItemsInline(prefix); break;
            case 5:
                printItemsBox(prefix); break;
        }
    } else {
        printError("INVALID PRINT TYPE \"" + type + "\"");
    }

    return;
}

void menu::printItemsInline(std::string prefix)
{
    for (int i = 0; i < items.size(); i++) {
        std::cout << prefix;
        std::cout << items[i] << ' ';
    }
}

void menu::printItemsBox(std::string prefix)
{

}

void menu::printItemsList(std::string prefix)
{
    for (int i = 0; i < items.size(); i++) {
        std::cout << prefix;
        std::cout << items[i] << std::endl;
    }
}

void menu::printItemsListUO(std::string prefix)
{
    for (int i = 0; i < items.size(); i++) {
        std::cout << prefix << "- ";
        std::cout << items[i] << std::endl;
    }
}

void menu::printItemsListO(std::string prefix)
{
    for (int i = 0; i < items.size(); i++) {
        std::cout << prefix << (i + 1) << ". ";
        std::cout << items[i] << std::endl;
    }
}
