#include <iostream>
#include <vector>
#include <algorithm>
#include<array>
using namespace std;

int WinMain()
{
    cout << "=========================================" << endl;
    cout << "============MANAJEMEN KARYAWAN==========="<< endl;
    cout << "========================================="<< endl;
    char pilihan;
    string divisi;
    string hapus_data;
    int countnum;
    string nama_karyawan;
    string fullbook;
    vector<string> bookarray;

    do{
        cout << " a. Add a book" << endl;
        cout << " b. Remove a book" << endl;
        cout << " c. Empty database" << endl;
        cout << " d. show number of books" << endl;
        cout << " e. show all of books" << endl;
        cout << "f . quit" << endl;
        cin >> pilihan;
        if(pilihan == 'f' ) {
            printf("Terminating the program...");
        }
        else{
            if(pilihan == 'a'){
                cout << "please enter name of book: " ;
                cin >> divisi;
                cout << "please enter author name :";
                cin >> nama_karyawan;
                fullbook = divisi + " " + nama_karyawan;
                bookarray.push_back(fullbook);
                cout << "Book has been added" << endl;
            }else if(pilihan =='b'){
                cout << "Please enter book number to delete: " ;
                cin >> hapus_data;
                for(int i = 0; i < bookarray.size() ; i++){
                    if (bookarray[i].find(hapus_data) != std::string::npos) {
                        bookarray.erase (bookarray.begin()+i);
                        break;
                    }
                }
                cout << " " << endl;
                cout << "book has been removed" << endl;
                cout << " " << endl;
            }else if(pilihan == 'c'){
                bookarray.clear();
                cout << "Database cleared"  << endl;
                cout << " " << endl;
            }else if(pilihan == 'd'){
                countnum = bookarray.size();
                cout << "number of books in array:" << countnum << endl;
            }else if(pilihan == 'e'){
                cout << "name of books in array " << endl;
                for(int i = 0; i < bookarray.size() ; i++){
                    cout << i << " " << bookarray[i] <<  " " << endl; ;

                }
                cout << " " << endl;
            }
        }
    }while(pilihan != 'f');

    return 0;
}