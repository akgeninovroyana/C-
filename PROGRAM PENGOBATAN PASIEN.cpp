
#include <iostream>
#include <conio.h> //MENGGUNAKAN GETCH()
#include <stdlib.h> //MENGGUNAKAN SYSTEM("CLS")

using namespace std;

struct node {
    char nama_pasien[20];
    int umur;
    int n_jns_obat;
    int bnyk_per_jns_obat[10];
    int obat[10];
    string nama_obat[10];
 int harga[10]; 
 int jml_harga[10];
 int total_harga;
    struct node *next;
} pasien, *baru, *head1=nullptr, *tail1=nullptr, *bantu, *hapus;

#define MAX 1000 //MAKSIMAL NOMOR ANTRIAN

int nomer[MAX];
int head=-1;
int tail=-1;

void input_data(int antri) {
    baru = (struct node*)malloc(sizeof(struct node));
    //system("cls");
    cout<<"Pasien urutan ke-"<<antri<<endl;
    cout<<"Masukkan Nama : "; cin>>baru->nama_pasien; fflush(stdin);
    cout<<"Masukkan Umur : "; cin>>baru->umur; fflush(stdin);
    cout<<"Daftar Jenis Obat yang Tersedia : \n";
    cout<<"======================================\n";
    cout<<"1. Paracetamol | Rp2000\n2. Alpara | Rp5000\n3. Bodrexin | Rp3500\n4. Mixagrip | Rp4000\n5. Redoxon | Rp6000\n6. Betadine | Rp5000\n7. OBH | Rp10000\n8. Salep gatal | Rp15000\n9. Amoxilin | Rp8000\n10. GPU | 17000\n"<<endl;
    cout<<"Masukkan Jumlah Jenis Obat yang Ingin Dibeli: "; cin>>baru->n_jns_obat; fflush(stdin);
 cout<<"Pilih obat (1-10): "<<endl; 
 for ( int i=0; i<baru->n_jns_obat; i++){
  cout<<"Obat "<<i+1<<" : ";
     cin>>baru->obat[i];
     cout<<"\tJumlah : ";
     cin>>baru->bnyk_per_jns_obat[i];
 }
    baru->next = nullptr;
}

void tambah_data(int p) {
    input_data(p);
    if (tail1 == nullptr) {
        tail1 = baru;
        tail1->next = nullptr;
        head1 = tail1;
    } else {
     bantu = baru;
        tail1->next = bantu;
        bantu->next = nullptr;
        tail1 = bantu;
    }
}

bool IsEmpty(){ // FUNGSI UNTUK MENUNJUKAN JIKA TAIL = -1
   if(tail == -1){
       return true;
   }else{
       return false;
   }
}
bool IsFull(){ // FUNGSI UNTUK MENUNJUKAN JIKA TAIL = MAX-1
   if(tail == MAX-1){
       return true;
   }else{
       return false;
   }
}

void AntrianMasuk(int no){
 tambah_data(no);
    if (IsEmpty()){
        head=tail=0;
    }else {
        tail++;
    }
    nomer[tail]=no;
}

void AntrianKeluar(){
 bantu = head1;
    if(IsEmpty()){
        cout<<"Antrian sudah kosong ! ";
        getch();
    }else if (bantu->next != nullptr){
     
     bantu = bantu->next;
       
          cout<<"     NOTA PEMBELIAN OBAT  "<<endl;
          cout<<" ===APOTEK SEHAT SENTOSA===  "<<endl;
          cout<<" Jl. Raya Srikandi No. 12, Surabaya"<<endl<<endl;  
             cout<<"Anda Antrian Ke-"<<nomer[head]<<endl;
    cout<<"Nama : "<<head1->nama_pasien<<endl;
             cout<<"Umur : "<<head1->umur<<endl;
             cout<<"Jumlah jenis obat : "<<head1->n_jns_obat<<endl;
             cout<<"|-------------------------------------------------------------------------------|"<<endl;
             cout<<"| No. | Nama Obat   | Banyaknya | Harga satuan | Jumlah harga |"<<endl;
             cout<<"|-------------------------------------------------------------------------------|"<<endl;
              head1->nama_obat[1] = "Paracetamol";
     head1->nama_obat[2] = "Alpara     ";
     head1->nama_obat[3] = "Bodrexin   ";
     head1->nama_obat[4] = "Mixagrip   ";
     head1->nama_obat[5] = "Redoxon    ";
     head1->nama_obat[6] = "Batadine   ";
     head1->nama_obat[7] = "OBH        ";
     head1->nama_obat[8] = "Salep gatal";
     head1->nama_obat[9] = "Amoxilin   ";
     head1->nama_obat[10] = "GPU       ";
     head1->harga[1] = 2000;
     head1->harga[2] = 5000;
     head1->harga[3] = 3500;
     head1->harga[4] = 4000;
     head1->harga[5] = 6000;
     head1->harga[6] = 5000;
     head1->harga[7] = 10000;
     head1->harga[8] = 15000;
head1->harga[9] = 8000;
     head1->harga[10] = 17000;
    for (int i=0; i<bantu->n_jns_obat; i++){
     head1->jml_harga[i] = head1->bnyk_per_jns_obat[i] * head1->harga[bantu->obat[i]];
    }
    for (int i=0; i<bantu->n_jns_obat; i++){
     head1->total_harga += head1->jml_harga[i];
    }
             for (int i=0; i<bantu->n_jns_obat; i++){
              cout<<"| "<<i+1<<".  |"<<head1->nama_obat[head1->obat[i]]<<"\t\t|"<<head1->bnyk_per_jns_obat[i]<<"\t\t|"<<head1->harga[head1->obat[i]]<<"\t\t|"<<head1->jml_harga[i]<<"\t\t|"<<endl;
    }
    cout<<"|-------------------------------------------------------------------------------|"<<endl;
    cout<<"|\t\t\t\t\t\t|Total harga : "<<head1->total_harga<<"\t\t|"<<endl;
    cout<<"|-------------------------------------------------------------------------------|"<<endl;
          head1--;
          head1 = bantu;
          for(int a=head;a<tail;a++){
             nomer[a]=nomer[a+1];
             }
             tail--;
    if(tail == -1){
              head = -1;
       }
      
         
    } else {
     
          cout<<"        NOTA PEMBELIAN OBAT  "<<endl;
          cout<<"           ===APOTEK SEHAT SENTOSA===  "<<endl;
          cout<<"   Jl. Raya Srikandi No. 12, Surabaya"<<endl<<endl;  
             cout<<"Anda Antrian Ke-"<<nomer[head]<<endl;
    cout<<"Nama : "<<head1->nama_pasien<<endl;
             cout<<"Umur : "<<head1->umur<<endl;
             cout<<"Jumlah jenis obat : "<<head1->n_jns_obat<<endl;
             cout<<"|-------------------------------------------------------------------------------|"<<endl;
             cout<<"| No. | Nama Obat   | Banyaknya | Harga satuan | Jumlah harga |"<<endl;
             cout<<"|-------------------------------------------------------------------------------|"<<endl;
              head1->nama_obat[1] = "Paracetamol";
     head1->nama_obat[2] = "Alpara     ";
     head1->nama_obat[3] = "Bodrexin   ";
     head1->nama_obat[4] = "Mixagrip   ";
     head1->nama_obat[5] = "Redoxon    ";
     head1->nama_obat[6] = "Batadine   ";
     head1->nama_obat[7] = "OBH        ";
     head1->nama_obat[8] = "Salep gatal";
     head1->nama_obat[9] = "Amoxilin   ";
     head1->nama_obat[10] = "GPU       ";
     head1->harga[1] = 2000;
     head1->harga[2] = 5000;
     head1->harga[3] = 3500;
     head1->harga[4] = 4000;
     head1->harga[5] = 6000;
     head1->harga[6] = 5000;
     head1->harga[7] = 10000;
     head1->harga[8] = 15000;
     head1->harga[9] = 8000;
     head1->harga[10] = 17000;
    for (int i=0; i<bantu->n_jns_obat; i++){
     head1->jml_harga[i] = head1->bnyk_per_jns_obat[i] * head1->harga[bantu->obat[i]];
    }
    for (int i=0; i<bantu->n_jns_obat; i++){
     head1->total_harga += head1->jml_harga[i];
    }
             for (int i=0; i<bantu->n_jns_obat; i++){
              cout<<"| "<<i+1<<".  |"<<head1->nama_obat[head1->obat[i]]<<"\t\t|"<<head1->bnyk_per_jns_obat[i]<<"\t\t|"<<head1->harga[head1->obat[i]]<<"\t\t|"<<head1->jml_harga[i]<<"\t\t|"<<endl;
    }
    cout<<"|-------------------------------------------------------------------------------|"<<endl;
    cout<<"|\t\t\t\t\t\t|Total harga : "<<head1->total_harga<<"\t\t|"<<endl;
    cout<<"|-------------------------------------------------------------------------------|"<<endl;
         for(int a=head;a<tail;a++){
            nomer[a]=nomer[a+1];
         }
            tail--;
         if(tail == -1){
             head = -1;
      }
 
 }
}

void Clear(){
     head=tail=-1;
}

void View(){
     if(IsEmpty()){
         cout<<"Antrian kosong ! ";

     }else {
         system("cls");
         for(int a=head;a<=tail;a++){
              cout << "==============================="
                   << "\n >> No. Antri : [" << nomer[a] << "]"
                   << "\n==============================="<< endl;
         }
     }
}

int main(){
    system("color 79");
    int choose, p=1, urut; //deklarasi untuk pilihan user dan nomer urut antrian
    do{
        system("cls");
        cout << "\n\n===== ANTRIAN PEMBELIAN OBAT ====="
             << "\n==================================="
             << "\n|1. Tambah Antrian                |"
             << "\n|2. Panggil Antrian & cetak nota  |"
             << "\n|3. Lihat daftar antrian          |"
             << "\n|4. Format                        |"
             << "\n|5. Exit                      |"
             << "\n===================================";
        cout << "\nChoose ! "; cin >> choose;
        cout << "\n\n";
        if(choose == 1){
            if(IsFull()) {
                cout<<"Antrian sudah penuh, mohon tunggu beberapa saat lagi ";
            }
            else{
                urut=p;
                system ("cls");
                cout << "---------------------------------" << endl;
                cout << "|          NO. ANTRIAN          |" << endl;
                cout << "|               " << urut << "               |" << endl;
                cout << "---------------------------------" << endl;
                AntrianMasuk(urut);
                cout << "|       Silahkan Mengantri      |" << endl;
                cout << "|      Menunggu " << tail << " Antrian      ||" << endl;
                cout << "---------------------------------" << endl;
                p++;
            }
            cout<<head;
            getch();
        }
        else if(choose == 2){
            cout << "=========================================" << endl;
            cout << "Panggilan untuk No. Antri : [" << nomer[head] << "]"<<endl;
            cout << "\n================================================================================" << endl;
            AntrianKeluar();
            getch();
        }
        else if(choose == 3){
            View();
            getch();
        }
        else if(choose == 4){
            Clear();
            cout<<"Antrian dikosongkan ! ";
            getch();
        }
        else if(choose == 5){
         return 0;
         getch();
        }
        else{
            cout << "Masukan anda salah ! \n"<< endl;
    getch();       
  }
    }while(choose!=6);
}