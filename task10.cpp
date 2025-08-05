/*
Task: Simple Inventory Management SystemDescription: Create a simple inventory management systemthat allows users to add items, display the list ofitems, and search for items by name or ID.Implement the necessary methods to handlethese operations.
 Skills: Structs or classes, arrays or linked lists,user input.

*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Item
{

public:
    int id;
    string name;
    int quantity;
    float price;
    void inputItem();
    void displayItem() const;
};

void Item ::inputItem()
{

    cout << "Enter Item ID: ";
    cin >> id;
    cin.ignore();
    cout << "Enter Item Name: ";
    getline(cin, name);
    cout << "Enter Quantity: ";
    cin >> quantity;
    cout << "Enter Price: ";
    cin >> price;
};

void Item ::displayItem() const
{

    cout << "ID: " << id
         << ", Name: " << name
         << ", Quantity: " << quantity
         << ", Price: $" << price << "\n";
};

class Inventory
{
private:
    vector<Item> items;

public:
    void addItem()
    {
        Item newItem;
        newItem.inputItem();
        items.push_back(newItem);
        cout << "Item added successfully!\n";
    }

    void displayItems() const
    {
        if (items.empty())
        {
            cout << "Inventory is empty.\n";
            return;
        }

        cout << "\n--- Inventory List ---\n";
        for (const auto &item : items)
        {
            item.displayItem();
        }
    }

    void searchByID() const
    {
        int id;
        cout << "Enter Item ID to search: ";
        cin >> id;

        for (const auto &item : items)
        {
            if (item.id == id)
            {
                item.displayItem();
                return;
            }
        }
        cout << "Item with ID " << id << " not found.\n";
    }

    void searchByName() const
    {
        string name;
        cout << "Enter Item Name to search: ";
        cin.ignore();
        getline(cin, name);

        for (const auto &item : items)
        {
            if (item.name == name)
            {
                item.displayItem();
                return;
            }
        }
        cout << "Item named '" << name << "' not found.\n";
    }

    void updateItem()
    {
        int id;
        cout << "Enter the ID of the item to update: ";
        cin >> id;

        for (auto &item : items)
        {
            if (item.id == id)
            {
                cout << "Enter new details:\n";
                item.inputItem();
                cout << "Item updated successfully!\n";
                return;
            }
        }
        cout << "Item not found.\n";
    }

    void deleteItem()
    {
        int id;
        cout << "Enter the ID of the item to delete: ";
        cin >> id;

        for (auto it = items.begin(); it != items.end(); ++it)
        {
            if (it->id == id)
            {
                items.erase(it);
                cout << "Item deleted successfully!\n";
                return;
            }
        }
        cout << "Item not found.\n";
    }
};

int main()
{
    Inventory inventory;
    int choice;

    do
    {
        cout << "\n--- Inventory Management Menu ---\n";
        cout << "1. Add Item\n";
        cout << "2. Display All Items\n";
        cout << "3. Search by ID\n";
        cout << "4. Search by Name\n";
        cout << "5. Update Item\n";
        cout << "6. Delete Item\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            inventory.addItem();
            break;
        case 2:
            inventory.displayItems();
            break;
        case 3:
            inventory.searchByID();
            break;
        case 4:
            inventory.searchByName();
            break;
        case 5:
            inventory.updateItem();
            break;
        case 6:
            inventory.deleteItem();
            break;
        case 7:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 7);

    return 0;
}

/*
output:

mangesh@mangesh-HP-245-G8-Notebook-PC:~/Cognifyz_C++ Tasks$ g++ task10.cpp && ./a.out

--- Inventory Management Menu ---
1. Add Item
2. Display All Items
3. Search by ID
4. Search by Name
5. Update Item
6. Delete Item
7. Exit
Enter your choice: 1
Enter Item ID: 101
Enter Item Name: bottle
Enter Quantity: 3
Enter Price: 20
Item added successfully!

--- Inventory Management Menu ---
1. Add Item
2. Display All Items
3. Search by ID
4. Search by Name
5. Update Item
6. Delete Item
7. Exit
Enter your choice: 1
Enter Item ID: 102
Enter Item Name: PenBox
Enter Quantity: 5
Enter Price: 60
Item added successfully!

--- Inventory Management Menu ---
1. Add Item
2. Display All Items
3. Search by ID
4. Search by Name
5. Update Item
6. Delete Item
7. Exit
Enter your choice: 1
Enter Item ID: 103
Enter Item Name: Books
Enter Quantity: 6
Enter Price: 50
Item added successfully!

--- Inventory Management Menu ---
1. Add Item
2. Display All Items
3. Search by ID
4. Search by Name
5. Update Item
6. Delete Item
7. Exit
Enter your choice: 1
Enter Item ID: 104
Enter Item Name: Bag
Enter Quantity: 6
Enter Price: 499
Item added successfully!

--- Inventory Management Menu ---
1. Add Item
2. Display All Items
3. Search by ID
4. Search by Name
5. Update Item
6. Delete Item
7. Exit
Enter your choice: 2

--- Inventory List ---
ID: 101, Name: bottle, Quantity: 3, Price: $20
ID: 102, Name: PenBox, Quantity: 5, Price: $60
ID: 103, Name: Books, Quantity: 6, Price: $50
ID: 104, Name: Bag, Quantity: 6, Price: $499

--- Inventory Management Menu ---
1. Add Item
2. Display All Items
3. Search by ID
4. Search by Name
5. Update Item
6. Delete Item
7. Exit
Enter your choice: 3
Enter Item ID to search: 103
ID: 103, Name: Books, Quantity: 6, Price: $50

--- Inventory Management Menu ---
1. Add Item
2. Display All Items
3. Search by ID
4. Search by Name
5. Update Item
6. Delete Item
7. Exit
Enter your choice: 4
Enter Item Name to search: Bag
ID: 104, Name: Bag, Quantity: 6, Price: $499

--- Inventory Management Menu ---
1. Add Item
2. Display All Items
3. Search by ID
4. Search by Name
5. Update Item
6. Delete Item
7. Exit
Enter your choice: 5
Enter the ID of the item to update: 104
Enter new details:
Enter Item ID: 104
Enter Item Name: Eraser
Enter Quantity: 10
Enter Price: 5
Item updated successfully!

--- Inventory Management Menu ---
1. Add Item
2. Display All Items
3. Search by ID
4. Search by Name
5. Update Item
6. Delete Item
7. Exit
Enter your choice: 6
Enter the ID of the item to delete: 101
Item deleted successfully!

--- Inventory Management Menu ---
1. Add Item
2. Display All Items
3. Search by ID
4. Search by Name
5. Update Item
6. Delete Item
7. Exit
Enter your choice: 7
Exiting...

*/