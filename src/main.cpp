// Main to test menu funcionality

#include <iostream>
#include <vector>
#include <cstdlib>

#include "../include/menu.h"

using namespace std;

int main(int argc, char const *argv[]) {
    // create instance of object for each menu you want
    menu homeMenu;

    // pushing new items to the list
    homeMenu.pushItem("Hello, World!");
    homeMenu.pushItem("Another example item.");
    homeMenu.pushItem("This is the third pushed item.");
    homeMenu.pushItem("This item will be removed soon!");

    // popping items from the end of the list
    homeMenu.popItem();

    // storing items in a local vector
    std::vector<std::string> homeItems = homeMenu.getItems();
    cout << "The first element of our main() vector is: " << homeItems[0] << endl;

    cout << '\n'; // br

    // setting and printing titles
    homeMenu.setTitle("THIS IS THE LIST TITLE!");
    cout << homeMenu.getTitle() << endl;

    // various printing methods with args "message", "prefix"
    cout << "\"list\":" << endl;
    homeMenu.printItems("list", " ");
    cout << '\n'; // br

    cout << "\"list_uo\":" << endl;
    homeMenu.printItems("list_uo", " ");
    cout << '\n'; // br

    cout << "\"list_o\":" << endl;
    homeMenu.printItems("list_o", " ");
    cout << '\n'; // br

    cout << "\"inline\":" << endl;
    homeMenu.printItems("inline", "~ ");
    cout << '\n'; // br

    cout << '\n' << "\"box\":" << endl;
    homeMenu.printItems("box", ""); // todo
    cout << "Work in progress." << endl;
    cout << '\n'; // br

    return 0;
}
