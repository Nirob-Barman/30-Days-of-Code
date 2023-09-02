#include <bits/stdc++.h>

using namespace std;

class Book
{
public:
    string title;
    string author;
    int price;

    Book(string t, string a, int p)
    {
        title = t;
        author = a;
        price = p;
    }

    virtual void display() = 0;
};

class MyBook : public Book
{
public:
    int price;

    MyBook(string title, string author, int price) : Book(title, author, price)
    {
        this->price = price;
    }

    void display() override
    {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
    }
};

int main()
{
    string title, author;
    int price;

    getline(cin, title);
    getline(cin, author);
    cin >> price;

    MyBook novel(title, author, price);
    novel.display();

    return 0;
}
