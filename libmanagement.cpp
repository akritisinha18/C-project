#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;

class library{
    public:
    int id;
    char name[100];
    char author[100];
    char student[100];
    int price;
    int pages;
};

int main()
{
    library lib[20];
    int input=0;
    int count=0;

    start:
     while (input!=5)
     {
       cout<<"Enter 1 to input details like id, name, author, price, student, pages"<<endl;
       cout<<"Enter 2 to display details"<<endl;
       cout<<"Enter 3 to quit"<<endl;
       cin>>input;

       switch (input)
       {
       case 1:
            cout<<"enter Book id"<<endl;
            cin>>lib[count].id;
            cout<<"enter Book Name"<<endl;
            cin>>lib[count].name;
            cout<<"enter Author Name"<<endl;
            cin>>lib[count].author;
            cout<<"enter Student Name"<<endl;
            cin>>lib[count].student;
            cout<<"Enter book price"<<endl;
            cin>>lib[count].price;
            cout<<"Enter book pages"<<endl;
            cin>>lib[count].pages;
            count++;
        break;
        case 2:
            for (int i = 0; i < count; i++)
            {
                cout<<"Book id:"<<lib[i].id<<endl;
                cout<<"Book Name:"<<lib[i].name<<endl;
                cout<<"Book author:"<<lib[i].author<<endl;
                cout<<"Book Student:"<<lib[i].student<<endl;
                cout<<"Book Price:"<<lib[i].price<<endl;
                cout<<"Book Pages:"<<lib[i].pages<<endl;
            }
            break;
        case 3:
            exit(0);
            break;

            default:
            cout<<"Invalid value! Plzz try again!!"<<endl;
            goto start;

       }



     }
     
     return 0;

}
