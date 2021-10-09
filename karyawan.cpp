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
    cout << "============MANAJEMEN KARYAWAN==========="<< endl;
    cout << "========================================="<< endl;
    char pilihan;
    string divisi;
    string hapus_data;
    string update_data;
    int countnum;
    string nama_karyawan;
    string nohp;
    char jenkel;
    string semua_data;
    vector<string> arraykaryawan;
    

    do{
        cout << " a. Tambah Data karyawan " << endl;
        cout << " b. Hapus Data Karyawan" << endl;
        cout << " c. Destroy Database" << endl;
        cout << " d. Tampilkan jumlah Karyawan" << endl;
        cout << " e. Tampilkan semua Data Karyawan" << endl;
        cout << " f. update Data Karyawan" << endl;
        cout << "g . Exit" << endl;
        cin >> pilihan;
        if(pilihan == 'g' ) {
            printf("Terminating the program...");
        }
        else{
            if(pilihan == 'a'){
                cout << "masukkan divisi penempatan karyawan : " ;
                cin >> divisi;
                cout << "masukkan nama karyawan :";
                cin >> nama_karyawan;
                cout << "masukkan nomor hp karyawan :";
                cin >> nohp;
                cout << "jenis kelamin L/P  :" ;
                cin >> jenkel;
                
                
                
               
                semua_data = divisi + " " + nama_karyawan + " " + nohp + " " + jenkel;
                arraykaryawan.push_back(semua_data);
                cout << "data karyawan berhasil ditambahkan" << endl;
            }else if(pilihan =='b'){
                cout << "pilih nomor karyawan yang akan dihapus: " ;
                cin >> hapus_data;
                for(int i = 0; i < arraykaryawan.size() ; i++){
                    if (arraykaryawan[i].find(hapus_data) != std::string::npos) {
                        arraykaryawan.erase (arraykaryawan.begin()+i);
                        break;
                    }
                }
                cout << " " << endl;
                cout << "data karyawan telah dihapus" << endl;
                cout << " " << endl;
            }else if(pilihan == 'c'){
                arraykaryawan.clear();
                cout << "Database cleared"  << endl;
                cout << " " << endl;
            }else if(pilihan == 'd'){
                countnum = arraykaryawan.size();
                cout << "jumlah karyawan yang terdata disistem:" << countnum << endl;
            }else if(pilihan == 'e'){
                cout << "data karyawan " << endl;
                for(int i = 0; i < arraykaryawan.size() ; i++){
                    cout << i << " " << arraykaryawan[i] <<  " " << endl; ;

                }
                cout << " " << endl;
            }else if (pilihan == 'f')
            {
                cout << "pilih nama karyawan yang akan diupdate: " ;
                cin >> update_data;
                for(int i = 0; i < arraykaryawan.size() ; i++){
                    if (arraykaryawan[i].find(update_data) != std::string::npos) {
                        cout<<"divisi karyawan\t: ";
                        cin>>arraykaryawan[i];
                        cout<<"nama karyawan\t: ";
                        cin>>arraykaryawan[i];
                        break;
                    }
                }

            }
            

        }
    }while(pilihan != 'g');

    return 0;
}