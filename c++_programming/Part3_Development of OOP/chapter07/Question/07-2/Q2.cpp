#include<iostream>
#include<cstring>
using namespace std;
class Book{
private:
    char *title;
    char *isbn;
    int price;
public:
    Book(char *_title,char *_isbn,int _price):price(_price){
        this->title=new char[strlen(_title)+1];
        this->isbn=new char[strlen(_isbn)+1];
        strcpy(title,_title);
        strcpy(isbn,_isbn);
    }
    void ShowBookInfo() const{
        cout<<"����: "<<title<<endl;
        cout<<"ISBN: "<<isbn<<endl;
        cout<<"����: "<<price<<endl;
    }
};
class EBook:public Book{
private:
    char *DRMKey;
public:
    EBook(char *_name,char *_isbn,int _price,char *_key):Book(_name,_isbn,_price){
        DRMKey=new char[strlen(_key)+1];
        strcpy(DRMKey,_key);
    }
    void ShowEBookInfo() const{
        ShowBookInfo();
        cout<<"����Ű: "<<DRMKey<<endl;
    }
};
int main(void){
    Book book("���� C++","555-12345-890-0",20000);
    book.ShowBookInfo();
    cout<<endl;
    EBook ebook("���� C++ ebook","555-12345-890-1",10000,"fdx9w0i8kiw");
    ebook.ShowEBookInfo();
}