#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

class itemDatabase
{
protected:
    int stock;
    int price;
    char *company;

public:
    itemDatabase(int _stock, int _price, char *_company)
    {
        stock = _stock;
        price = _price;
        company = new char[strlen(_company) + 1];
        strcpy(company, _company);
    }
    void display_item_details(void);
};
void itemDatabase::display_item_details(void)
{
    cout << "ITEM STOCK : " << stock << endl
         << "ITEM PRICE : " << price << endl
         << "ITEM COMPANY : " << company << endl;
}

class electronics : public itemDatabase
{
    char *warranty;

public:
    electronics(int _stock, int _price, char *_company, char *_warranty) : itemDatabase(_stock, _price, _company)
    {
        warranty = new char[strlen(_warranty) + 1];
        strcpy(warranty, _warranty);
    }
    void display_electronics_details(void);
};
void electronics ::display_electronics_details(void)
{
    display_item_details();
    cout << "WARRANTY : " << warranty << endl;
}

class food : public itemDatabase
{
protected:
    char *MFD;
    char *EXD;

public:
    food(int _stock, int _price, char *_company, char *_MFD, char *_EXD) : itemDatabase(_stock, _price, _company)
    {
        MFD = new char[strlen(_MFD) + 1];
        strcpy(MFD, _MFD);
        EXD = new char[strlen(_EXD)];
        strcpy(EXD, _EXD);
    }
    void display_food_details(void)
    {
        display_item_details();
        cout << "MFD : " << MFD << endl;
        cout << "EXD : " << EXD << endl;
    }
};

class milkPdt : public food
{
protected:
    float weight;

public:
    milkPdt(int _stock, int _price, char *_company, char *_MFD, char *_EXD, float _weight) : food(_stock, _price, _company, _MFD, _EXD)
    {
        weight = _weight;
    }
    void display_milkPdt_details(void)
    {
        display_food_details();
        cout << "WEIGHT : " << weight << "g" << endl;
    }
};

class cloth : public itemDatabase
{
    char *size;
    char *type;

public:
    cloth(int _stock, int _price, char *_company, char *_size, char *_type) : itemDatabase(_stock, _price, _company)
    {
        size = new char[strlen(_size) + 1];
        strcpy(size, _size);
        type = new char[strlen(_type) + 1];
        strcpy(type, _type);
    }
    void display_cloth_details(void)
    {
        display_item_details();
        cout << "SIZE : " << size << endl
             << "TYPE : " << type << endl;
    }
};

int main(void)
{
    milkPdt Paneer(12, 54, "Sudha", "12/02/21", "14/02/21",(float)100.00);
    Paneer.display_milkPdt_details();
    return (0);
}