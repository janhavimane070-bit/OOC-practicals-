#include <iostream>
using namespace std;

class LibraryItem
{
protected:
    int id;
    string title;

public:
    void getItem()
    {
        cout << "Enter Item ID: ";
        cin >> id;
        cout << "Enter Title: ";
        cin >> title;
    }

    void displayItem()
    {
        cout << "\nItem ID: " << id;
        cout << "\nTitle: " << title;
    }
};

class Book : public LibraryItem
{
private:
    string author;

public:
    void getBook()
    {
        getItem();
        cout << "Enter Author Name: ";
        cin >> author;
    }

    void displayBook()
    {
        displayItem();
        cout << "\nAuthor: " << author;
    }
};

class Magazine : public LibraryItem
{
private:
    int issueNo;

public:
    void getMagazine()
    {
        getItem();
        cout << "Enter Issue Number: ";
        cin >> issueNo;
    }

    void displayMagazine()
    {
        displayItem();
        cout << "\nIssue Number: " << issueNo;
    }
};

int main()
{
    Book b;
    Magazine m;

    cout << "Enter Book Details\n";
    b.getBook();

    cout << "\nEnter Magazine Details\n";
    m.getMagazine();

    cout << "\n\n--- Book Details ---";
    b.displayBook();

    cout << "\n\n--- Magazine Details ---";
    m.displayMagazine();

    return 0;
}
