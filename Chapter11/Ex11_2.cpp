////
//// Created by macbook air on 2020-04-28.
////
//
//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//class Book{
//private:
//    char * title;
//    char * isbn;
//    int price;
//
//public:
//    Book(char * title, char * isbn, int price) : price(price){
//        this->title = new char[strlen(title) + 1];
//        strcpy(this->title, title);
//
//        this->isbn = new char[strlen(isbn) + 1];
//        strcpy(this->isbn,isbn);
//
//    }
//
//    Book(const Book& ref) : price(ref.price){
//        this->title = new char[strlen(ref.title) + 1];
//        strcpy(this->title,ref.title);
//
//        this->isbn = new char[strlen(ref.isbn) + 1];
//        strcpy(this->isbn,ref.isbn);
//
//    }
//
//    Book& operator=(const Book & ref){
//        delete []title;
//        delete []isbn;
//
//        this->title = new char[strlen(ref.title) + 1];
//        strcpy(this->title, ref.title);
//
//        this->isbn = new char[strlen(ref.isbn) + 1];
//        strcpy(this->isbn,ref.isbn);
//
//        this->price = ref.price;
//
//        return *this;
//    }
//
//    void ShowInfo() const{
//        cout<<this->title<<endl;
//        cout<<this->isbn<<endl;
//        cout<<this->price<<endl;
//    }
//
//    ~Book(){
//        delete []title;
//        delete []isbn;
//    }
//
//};
//
//class EBook : public Book{
//private:
//    char * DRMKey;
//
//public:
//    EBook(char * title, char * isbn, int price, char * DRMKey) : Book(title,isbn,price){
//        this->DRMKey = new char[strlen(DRMKey) + 1];
//        strcpy(this->DRMKey,DRMKey);
//    }
//
//    EBook(const EBook& ref) : Book(ref){
//        this->DRMKey = new char[strlen(ref.DRMKey) + 1];
//        strcpy(this->DRMKey,ref.DRMKey);
//    }
//
//    EBook& operator=(const EBook & ref){
//
//        Book::operator=(ref);
//        delete []DRMKey;
//
//        this->DRMKey = new char[strlen(ref.DRMKey) + 1];
//        strcpy(this->DRMKey,DRMKey);
//
//        return *this;
//    }
//
//    void ShowInfo() const{
//        Book::ShowInfo();
//        cout<<this->DRMKey<<endl;
//    }
//
//    ~EBook(){
//        delete []DRMKey;
//    }
//};
//
//int main(void){
//    EBook e1("t","i",3000,"d");
//    EBook e2("tt","ii",30000,"dd");
//
//    e1.ShowInfo();
//    e2.ShowInfo();
//
//    e1 = e2;
//
//    e1.ShowInfo();
//    e2.ShowInfo();
//
//
//}