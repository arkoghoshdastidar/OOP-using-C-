#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdio>
using namespace std;

class book
{
    static int successfulTransaction;
    char *author;
    char *title;
    float price;
    char *publisher;
    int stock;
    void updatePrice(void){
        if(stock<10)
            price+=40;
    return;
    }

public:
    book() {}
    book(char *a, char *t, float p, char *pb, int s);
    friend void searchBook(book *books);
    ~book(){}
};

int book :: successfulTransaction = 0;

book ::book(char *a, char *t, float p, char *pb, int s)
{
    author = new char[strlen(a) + 1];
    strcpy(author, a);
    title = new char[strlen(t) + 1];
    strcpy(title, t);
    price = p;
    stock = s;
    publisher = new char[strlen(pb) + 1];
    strcpy(publisher, pb);
}

void searchBook(book *books)
{
    char *title = new char[50];
    char *firstName = new char[50];
    char *lastName = new char[50];
    char *authorName = new char[100];
    char condition;
    int requiredNumber;
    do
    {
        cout << "Enter the title of the required book : " << endl;
        cin >> title;
        cout << "Enter the first name of the author : " << endl;
        cin >> firstName;
        cout << "Enter the last name of the author : " << endl;
        cin >> lastName;
        int flag = 0;
        strcpy(authorName, firstName);
        strcat(authorName, " ");
        strcat(authorName, lastName);
        for (int i = 0; i < 10; i++)
        {
            if ((strcmp(books[i].title,title) == 0) && (strcmp(books[i].author,authorName) == 0))
            {
                cout << "Enter the number of copies requires : " << endl;
                cin >> requiredNumber;
                if (requiredNumber <= books[i].stock)
                {
                    int book :: *stockPtr = &book::stock;
                    cout << "Title : " << books[i].title << endl
                         << "Author : " << books[i].author << endl
                         << "Price : " << (books[i].price * requiredNumber) << endl;   
                    books[i].*stockPtr -= requiredNumber;
                    flag = 1;
                    books[i].successfulTransaction +=1;
                }
                else
                {
                    cout << "Sorry only " << books[i].stock << " copies of " << books[i].title << " " << books[i].author << " is present!" << endl;
                    flag = -1;
                }
            }
        }
        switch (flag)
        {
        case -1:
            cout << "Sorry for the inconvinience :(" << endl;
            break;
        case 0:
            cout << "Sorry the book you are searching for is not present currently" << endl;
            break;
        case 1:
            cout << "Thank you for shopping :)" << endl;
            break;
        }
        cout << "Do you wish to buy some more books (y/n) " << endl;
        cin >> condition;
    } while (condition == 'y' || condition == 'Y');
    cout << "Thank You !!" << endl;
    cout << "Number of successful transaction = "<<books[1].successfulTransaction<<endl;
    return;
}

int main(void)
{
    book books[10];
    books[0] = book("DC Pandey", "Physics", 250, "Arihant", 85);
    books[1] = book("HC Verma", "Physics", 150, "HCV", 41);
    books[2] = book("IE Irodov", "Physics", 1150, "IEI", 100);
    books[3] = book("RD Sharma", "Mathematics", 450, "Arihant", 45);
    books[4] = book("OP Tandon", "Organic", 1250, "GDB", 15);
    books[5] = book("OP Tandon", "Inorganic", 1250, "GDB", 15);
    books[6] = book("RC Mukerjee", "Physical", 250, "RMC", 55);
    books[7] = book("E Balaguruswamy", "C", 250, "Mc Graw Hills", 5);
    books[8] = book("E Balaguruswamy", "CPP", 550, "Mc Graw Hills", 14);
    books[9] = book("Horowitz", "DataStructure", 450, "Mc Graw Hills", 1);
    searchBook(books);
    return (0);
}