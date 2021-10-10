#include <iostream>
#include <vector>
#include <algorithm>
#include<array>
#include <conio.h>
#include <variant>

#include<stdlib.h>


using namespace std;



int WinMain()
{
    cout << "=========================================" << endl;
    cout << "============MANAJEMEN WARUNG MAKAN==========="<< endl;
    cout << "========================================="<< endl;
    char pilihan;
    string nama_makanan;
    string hapus_data;
    string update_data;
    int countnum;
    string nama_minuman;
    string jumlah;
    char ukuran;
    string semua_data;
    vector<string> arraywarung;
   
    

    do{
        
        cout << " a. Tambah Data makanan " << endl;
        cout << " b. Hapus Data makanan" << endl;
        cout << " c. Destroy Database" << endl;
        cout << " d. Tampilkan jumlah makanan" << endl;
        cout << " e. Tampilkan semua Data makanan" << endl;
        cout << " f. update Data makanan" << endl;
        cout << "g . Exit" << endl;
        cin >> pilihan;
        if(pilihan == 'g' ) {
            printf("Terminating the program...");
        }
        else{
            if(pilihan == 'a'){
                cout << "masukkan nama makanan : " ;
                cin >> nama_makanan;
                cout << "masukkan nama minuman :";
                cin >> nama_minuman;
                cout << "masukkan jumlah pesanan :";
                cin >> jumlah;
                cout << "paket B/K  :" ;
                cin >> ukuran;
                
                
                
               
                semua_data = nama_makanan + " " + nama_minuman + " " + jumlah + " " + ukuran;
                arraywarung.push_back(semua_data);
                cout << "data karyawan berhasil ditambahkan" << endl;
            }else if(pilihan =='b'){
                cout << "pilih nama karyawan yang akan dihapus: " ;
                cin >> hapus_data;
                for(int i = 0; i < arraywarung.size() ; i++){
                    if (arraywarung[i].find(hapus_data) != std::string::npos) {
                        arraywarung.erase (arraywarung.begin()+i);
                        break;
                    }
                }
                cout << " " << endl;
                cout << "data karyawan telah dihapus" << endl;
                cout << " " << endl;
            }else if(pilihan == 'c'){
                arraywarung.clear();
                cout << "Database cleared"  << endl;
                cout << " " << endl;
            }else if(pilihan == 'd'){
                countnum = arraywarung.size();
                cout << "jumlah karyawan yang terdata disistem:" << countnum << endl;
            }else if(pilihan == 'e'){
                cout << "data karyawan " << endl;
                for(int i = 0; i < arraywarung.size() ; i++){
                    cout << i << " " << arraywarung[i] <<  " " << endl; ;

                }
                cout << " " << endl;
            }else if (pilihan == 'f')
            {
                cout << "pilih nama karyawan yang akan diupdate: " ;
                cin >> update_data;
                for(int i = 0; i < arraywarung.size() ; i++){
                    if (arraywarung[i].find(update_data) != std::string::npos) {
                        cout<<"nama_makanan karyawan\t: ";
                        cin>>arraywarung[i];
                         
                        
                        break;
                        
                    }

                }
               
            }
            

        }
    }while(pilihan != 'g');

    return 0;
}