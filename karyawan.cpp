#include <iostream>
#include <vector>
#include <algorithm>
#include<array>
using namespace std;

int WinMain()
{
    cout << "**  welcome to the database **" << endl;
    char choice;
    string bookname;
    string removebook;
    int countnum;
    string authorname;
    string fullbook;
    vector<string> bookarray;

    do{
        cout << " a. Add a book" << endl;
        cout << " b. Remove a book" << endl;
        cout << " c. Empty database" << endl;
        cout << " d. show number of books" << endl;
        cout << " e. show all of books" << endl;
        cout << "f . quit" << endl;
        cin >> choice;
        if(choice == 'f' ) {
            printf("Terminating the program...");
        }
        else{
            if(choice == 'a'){
                cout << "please enter name of book: " ;
                cin >> bookname;
                cout << "please enter author name :";
                cin >> authorname;
                fullbook = bookname + " " + authorname;
                bookarray.push_back(fullbook);
                cout << "Book has been added" << endl;
            }else if(choice =='b'){
                cout << "Please enter book number to delete: " ;
                cin >> removebook;
                for(int i = 0; i < bookarray.size() ; i++){
                    if (bookarray[i].find(removebook) != std::string::npos) {
                        bookarray.erase (bookarray.begin()+i);
                        break;
                    }
                }
                cout << " " << endl;
                cout << "book has been removed" << endl;
                cout << " " << endl;
            }else if(choice == 'c'){
                bookarray.clear();
                cout << "Database cleared"  << endl;
                cout << " " << endl;
            }else if(choice == 'd'){
                countnum = bookarray.size();
                cout << "number of books in array:" << countnum << endl;
            }else if(choice == 'e'){
                cout << "name of books in array " << endl;
                for(int i = 0; i < bookarray.size() ; i++){
                    cout << i << " " << bookarray[i] <<  " " << endl; ;

                }
                cout << " " << endl;
            }
        }
    }while(choice != 'f');

    return 0;
}