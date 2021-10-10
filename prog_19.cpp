#include<iostream>
#include<iomanip>
#include<cstring>

using namespace std;

int main(void)
{
    char main_string[] = "I am Arko and I will become very rich one day.";
    int strlen_1 = strlen(main_string);
    char * sub_string = new char(strlen_1);
    cout <<"Enter your string : "<<endl;
    cin >>sub_string;
    int strlen_2 = strlen(sub_string);
    int k;
    for(int i=0;i<strlen_1;i++)    
    {
        k=i;
        for(int j=0;j<strlen_2;j++)
        {
            if(main_string[k]==sub_string[j])
            {
                k+=1;
                if(j=strlen_2-1)
                {
                    cout << sub_string<< " is present in the main string"<<endl;
                    exit(0);
                }
            }
            else{
                break;
            }
        }
    }
    return(0);
}