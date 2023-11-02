#include <iostream>
#include <string>
using namespace std;

int main()
{
    string book;
    char option;
    int days, fine;
    cout << "Press 1 to Borrow a Book or 2 to Return a Book. " << endl;
    cin >> option;

    if (option == '1')
    {
        cout << "NOTE: Borrowing limit is 8 days. After that there will \nbe a Fine of $1.\nWhich book do you want to borrow? ";
        cout << "\nEnter the book name : ";
        
        cin>> book;


        cout <<"We have issued you the book named  " <<book << endl;
    }
    else if (option == '2')
    {
        cout << "Write the name of the book you want to return? ";
        cout <<"\nEnter the book name : ";
        cin >> book;
            cout << endl;
        cout << "For how long did you have the book ? " << endl;
        cin >> days;
        
      
        if (days > 8)
        {
            fine = (days - 8) * 1;
            cout << " You have to the fine of $" << fine << endl;

        }
        else
        {
            cout << "Okay, thank you.";
        }
       
    }
    return(0);
}