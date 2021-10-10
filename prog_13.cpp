#include<iostream>
#include<iomanip>
using namespace std;

struct book
{
    int id;
    float price;
    char *name;
};

typedef struct book book_t;

int main(void)
{
   book_t ANSI_C;
   ANSI_C.id=0;
   ANSI_C.price=455.99;
   ANSI_C.name="E.Balaguruswamy";
   cout <<ANSI_C.id<<endl<<ANSI_C.price<<endl<<ANSI_C.name<<endl;
   return(0);
}