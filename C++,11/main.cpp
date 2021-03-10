#include <iostream>

using namespace std;

// class

class Book{
    public:
        // attributes
        string title;
        string author;
        int pages;

        Book(){
            title = "no title.";
            author = "no author.";
            pages = 0;
        }

        Book(string aTitle, string aAuthor, int aPages){
            title = aTitle;
            author = aAuthor;
            pages = aPages;
        }

        bool isLong(){
        if(pages >= 200.0){
            return true;
        }
        return false;
        }
};

// Getters and Setters

class xBook{
    private:
        string author;
    public:
        // attributes
        string title;

        xBook(){
            title = "no title.";
            author = "no author.";
        }

        xBook(string aTitle, string aAuthor){
            title = aTitle;
            setAuthor(aAuthor);
        }

        void setAuthor(string aAuthor){
            if(aAuthor == "George Orwell" || aAuthor == "Stefan Zweig" || aAuthor == "Tolstoy"){
                author = aAuthor;
            } else {
                author = "Unknown";
            }
        }

        string getAuthor(){
            return author;
        }
};

// Inheritance

class Chef{
    public:
        void makeChicken(){
            cout << "The chef makes chicken." << endl;
        }
        makeSomething(){
            cout << "The chef makes San Sebastian." << endl;
        }
};

class ItalianChef : public Chef{
    public:
        void makeSomething(){
            cout << "The chef makes Spaghetti Bolognese." << endl;
        }
        void makeA(){
            cout << "The chef makes A." << endl;
        }
};

int main()
{
    Book book1("Nineteen Eighty-Four","George Orwell",328);
    /*
    book1.title = "Nineteen Eighty-Four";
    book1.author = "George Orwell";
    book1.pages = 328;
    */

    cout << book1.title << endl;
    cout << book1.author << endl;
    cout << book1.pages << endl;

    Book book2("Animal Farm","George Orwell",112);
    /*
    book2.title = "Animal Farm";
    book2.author = "George Orwell";
    book2.pages = 112;
    */

    cout << book2.title << endl;
    cout << book2.author << endl;
    cout << book2.pages << endl;

    book2.pages = 118;
    cout << book2.pages << endl;

    Book book3;
    cout << book3.title << endl;
    cout << book3.author << endl;
    cout << book3.pages << endl;

    cout << book1.isLong() << endl;
    cout << book2.isLong() << endl;

    // Getters and Setters

    xBook xBook1("Animal Farm","George Orwell");
    cout << xBook1.getAuthor() << endl;

    xBook1.setAuthor("Dostoyevski"); // Unknown
    cout << xBook1.getAuthor() << endl;

    // Inheritance

    Chef chef;
    chef.makeChicken();

    ItalianChef italianChef;
    italianChef.makeChicken();

    chef.makeSomething();
    italianChef.makeSomething();

    return 0;
}
