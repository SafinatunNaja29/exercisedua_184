#include <iostream>
#include <vector>
#include <string>

using namespace std;

class pengarang {
public:
    pengarang(string nama) {
        this->nama = nama;
    }

    string getNama() {
        return nama;
    }
    void tambahBuku(string judul) {
        buku.push_back(judul);
    }
    string nama;
    vector<string> buku;
};

class Penerbit {
public:
    Penerbit(string nama) {
        this->nama = nama;
    }

    string getNama() {
        return nama;
    }

    void tambahPengarang(pengarang pengarang) {
        daftarPengarang.push_back(pengarang);
    }
    string nama;
    vector<pengarang> daftarPengarang;
};
int main()
{
    pengarang joko("joko");
    pengarang lia("Lia");
    pengarang giga("Giga");


    pengarang asroni("Asroni");
    pengarang gigaIntan("Giga");


    Penerbit gamaPress("Gama Press");
    gamaPress.tambahPengarang(joko);
    gamaPress.tambahPengarang(lia);
    gamaPress.tambahPengarang(giga);

    Penerbit intanPariwara("Intan Pariwara");
    intanPariwara.tambahPengarang(asroni);
    intanPariwara.tambahPengarang(gigaIntan);


    joko.tambahBuku("Fisika");
    joko.tambahBuku("Algoritma");


    lia.tambahBuku("Basisdata");


    asroni.tambahBuku("Dasar Pemrograman");


    giga.tambahBuku("Matematika");
    giga.tambahBuku("Multimedia 1");

    cout << "Daftar pengarang pada penerbit \"Gama Press\":" << endl;
    cout << joko.getNama() << endl;
    cout << lia.getNama() << endl;
    cout << giga.getNama() << endl;

    cout << "Daftar pengarang pada penerbit \"Intan Pariwara\":" << endl;
    cout << asroni.getNama() << endl;
    cout << gigaIntan.getNama() << endl;

    cout << "Daftar penerbit yang diikuti \"Giga\":" << endl;
    cout << gamaPress.getNama() << endl;
    cout << intanPariwara.getNama() << endl;
    return 0;
}
