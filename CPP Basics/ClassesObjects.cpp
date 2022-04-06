#include <iostream>

using namespace std;

class Book{
    public :
    string title;
    string author;
    int pages;
    
    Book(){
        cout << "Creating Book Object :" << endl;
        title = "Default Title";
        author = "Default Author";
        pages = 0;
    }
    
    Book(string pTitle, string pAuthor, int pPages){
        cout << "Creating Book Object :" << endl;
        title = pTitle;
        author = pAuthor;
        pages = pPages;
    }
    
    void display(){
        cout << title << endl;
        cout << author << endl;
        cout << pages << endl;
    };
    
};

int main() {
//    string name = "Mike";
//    double pi = 3.14;
//    char favouriteCharacter = 'G';
    Book book1("Sapiens: A Brief History of Humankind", "Yuval Noah Harari", 443);
    
//    book1.title = "Sapiens: A Brief History of Humankind";
//    book1.author = "Yuval Noah Harari";
//    book1.pages = 443;
    
//    cout << book1.title << endl;
//    cout << book1.author << endl;
//    cout << book1.pages << endl;
    book1.display();
    Book book2("A Brief History of Time", "Stephen Hawking", 256);
    
//    book2.title = "A Brief History of Time";
//    book2.author = "Stephen Hawking";
//    book2.pages = 256;
    
//    cout << book2.title << endl;
//    cout << book2.author << endl;
//    cout << book2.pages << endl;
    book2.display();
    
    Book book3;
    book3.display();
    return 0;
}
