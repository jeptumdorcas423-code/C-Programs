#include<iostream>
using namespace std;

class Book {

public:
    string bookTitle;
    string author;
    int availableCopies;

	void inputDetails()
    {
        cout << "Enter Book Title: ";
        getline(cin, bookTitle);

        cout << "Enter Author Name: ";
        getline(cin, author);

        cout << "Enter Number of Available Copies: ";
        cin >> availableCopies;
    }
    
    void borrowBook()
    {
        if (availableCopies > 0)
        {
            availableCopies--;

            cout << "\nBook borrowed successfully!" << endl;
        }
        else
        {
            cout << "\nSorry, no copies available!" << endl;
        }
    }


    void displayDetails()
    {
        cout << "\n--- Book Details ---" << endl;

        cout << "Book Title: " << bookTitle << endl;
        cout << "Author: " << author << endl;
        cout << "Available Copies: " << availableCopies << endl;
    }
};

int main()
{
    
    Book book1;

    
    book1.inputDetails();

 
    book1.borrowBook();


    book1.displayDetails();

    return 0;
}