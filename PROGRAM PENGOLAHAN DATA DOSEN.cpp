#include<iostream>
#include<fstream>
#include<string>
#include <bits/stdc++.h>
#include<iomanip>
#include<conio.h>

using namespace std;

// MODUL 1

struct dosen{
	int no;
	string nama;
	long long int id;
	int score_3Yr;
	int score;
	int affil_score_3Yr;
	int affil_score;
};

//MODUL 3
   void Rekursif_data_dosen (dosen dosen_if[],int n, int i){
   
   if (n>0){
   	cout<<"=======================["<<i+1<<"]========================"<<endl;
   	cout<<"Nama\t\t:"<<dosen_if[i].nama <<endl;
   	cout<<"ID\t\t:"<<dosen_if[i].id<<endl;
   	cout<<"Score 3Yr\t:"<<dosen_if[i].score_3Yr<<endl;
   	cout<<"Score\t\t:"<<dosen_if[i].score<<endl;
   	cout<<"Affil score 3Yr\t:"<<dosen_if[i].affil_score_3Yr<<endl;
   	cout<<"Affil score\t:"<<dosen_if[i].affil_score<<endl;
   	cout<<endl;
   	
   	n--;
   	i++;
   	Rekursif_data_dosen (dosen_if, n, i);
   }
}

//MODUL 4
void shuffle(dosen dosen_if[], int n_sort) {
   int temp, r;
   for(int i=0; i < n_sort; i++) {
      dosen temp = dosen_if[i];
      r = rand() % n_sort;
      dosen_if[i] = dosen_if[r];
      dosen_if[r] = temp;
   }
}


int is_sorted_id_asc(dosen dosen_if[], int n_sort) {
   while ( --n_sort >= 1 ) {
      if ( dosen_if[n_sort].id < dosen_if[n_sort-1].id ) {
		 return 0;
      }
   }
   return 1;
}
int is_sorted_id_desc(dosen dosen_if[], int n_sort) {
   while ( --n_sort >= 1 ) {
      if ( dosen_if[n_sort].id > dosen_if[n_sort-1].id ) {
		 return 0;
      }
   }
   return 1;
}
void bogosort_id(dosen dosen_if[], int n_sort, int jns_sort) {
	if(jns_sort == 1){
		while ( !is_sorted_id_asc(dosen_if, n_sort) ) {
      		shuffle(dosen_if, n_sort);
   		}
	}
	if (jns_sort == 2){
		while ( !is_sorted_id_desc(dosen_if, n_sort) ) {
      		shuffle(dosen_if, n_sort);
   		}
	}
}


int is_sorted_nama_asc(dosen dosen_if[], int n_sort) {
   while ( --n_sort >= 1 ) {
      if ( dosen_if[n_sort].nama < dosen_if[n_sort-1].nama ) {
		 return 0;
      }
   }
   return 1;
}
int is_sorted_nama_desc(dosen dosen_if[], int n_sort) {
   while ( --n_sort >= 1 ) {
      if ( dosen_if[n_sort].nama > dosen_if[n_sort-1].nama ) {
		 return 0;
      }
   }
   return 1;
}
void bogosort_nama(dosen dosen_if[], int n_sort, int jns_sort) {
   	if(jns_sort == 1){
		while ( !is_sorted_nama_asc(dosen_if, n_sort) ) {
      		shuffle(dosen_if, n_sort);
   		}
	}
	if (jns_sort == 2){
		while ( !is_sorted_nama_desc(dosen_if, n_sort) ) {
      		shuffle(dosen_if, n_sort);
   		}
	}
}


int is_sorted_score_3Yr_asc(dosen dosen_if[], int n_sort) {
   while ( --n_sort >= 1 ) {
      if ( dosen_if[n_sort].score_3Yr < dosen_if[n_sort-1].score_3Yr ) {
		 return 0;
      }
   }
   return 1;
}
int is_sorted_score_3Yr_desc(dosen dosen_if[], int n_sort) {
   while ( --n_sort >= 1 ) {
      if ( dosen_if[n_sort].score_3Yr > dosen_if[n_sort-1].score_3Yr ) {
		 return 0;
      }
   }
   return 1;
}
void bogosort_score_3Yr(dosen dosen_if[], int n_sort, int jns_sort) {
   if(jns_sort == 1){
		while ( !is_sorted_score_3Yr_asc(dosen_if, n_sort) ) {
      		shuffle(dosen_if, n_sort);
   		}
	}
	if (jns_sort == 2){
		while ( !is_sorted_score_3Yr_desc(dosen_if, n_sort) ) {
      		shuffle(dosen_if, n_sort);
   		}
	}
}


int is_sorted_score_asc(dosen dosen_if[], int n_sort) {
   while ( --n_sort >= 1 ) {
      if ( dosen_if[n_sort].score < dosen_if[n_sort-1].score ) {
		 return 0;
      }
   }
   return 1;
}
int is_sorted_score_desc(dosen dosen_if[], int n_sort) {
   while ( --n_sort >= 1 ) {
      if ( dosen_if[n_sort].score > dosen_if[n_sort-1].score ) {
		 return 0;
      }
   }
   return 1;
}
void bogosort_score(dosen dosen_if[], int n_sort, int jns_sort) {
   if(jns_sort == 1){
		while ( !is_sorted_score_asc(dosen_if, n_sort) ) {
      		shuffle(dosen_if, n_sort);
   		}
	}
	if (jns_sort == 2){
		while ( !is_sorted_score_desc(dosen_if, n_sort) ) {
      		shuffle(dosen_if, n_sort);
   		}
	}
}


int is_sorted_af_score_3Yr_asc(dosen dosen_if[], int n_sort) {
   while ( --n_sort >= 1 ) {
      if ( dosen_if[n_sort].affil_score_3Yr < dosen_if[n_sort-1].affil_score_3Yr ) {
		 return 0;
      }
   }
   return 1;
}
int is_sorted_af_score_3Yr_desc(dosen dosen_if[], int n_sort) {
   while ( --n_sort >= 1 ) {
      if ( dosen_if[n_sort].affil_score_3Yr > dosen_if[n_sort-1].affil_score_3Yr ) {
		 return 0;
      }
   }
   return 1;
}
void bogosort_af_score_3Yr(dosen dosen_if[], int n_sort, int jns_sort) {
   if(jns_sort == 1){
		while ( !is_sorted_af_score_3Yr_asc(dosen_if, n_sort) ) {
      		shuffle(dosen_if, n_sort);
   		}
	}
	if (jns_sort == 2){
		while ( !is_sorted_af_score_3Yr_desc(dosen_if, n_sort) ) {
      		shuffle(dosen_if, n_sort);
   		}
	}
}


int is_sorted_af_score_asc(dosen dosen_if[], int n_sort) {
   while ( --n_sort >= 1 ) {
      if ( dosen_if[n_sort].affil_score < dosen_if[n_sort-1].affil_score ) {
		 return 0;
      }
   }
   return 1;
}
int is_sorted_af_score_desc(dosen dosen_if[], int n_sort) {
   while ( --n_sort >= 1 ) {
      if ( dosen_if[n_sort].affil_score > dosen_if[n_sort-1].affil_score ) {
		 return 0;
      }
   }
   return 1;
}
void bogosort_af_score(dosen dosen_if[], int n_sort, int jns_sort) {
   if(jns_sort == 1){
		while ( !is_sorted_af_score_asc(dosen_if, n_sort) ) {
      		shuffle(dosen_if, n_sort);
   		}
	}
	if (jns_sort == 2){
		while ( !is_sorted_af_score_desc(dosen_if, n_sort) ) {
      		shuffle(dosen_if, n_sort);
   		}
	}
}


int interpolationSearch_id(dosen dosen_if[], int start, int end, int key) {
	
   int dist, valRange, indexRange, estimate;
   float fraction;
   while(start <= end && key >= dosen_if[start].id && key <= dosen_if[end].id) {
      dist = key - dosen_if[start].id;
      valRange = dosen_if[end].id - dosen_if[start].id;     //range of value
      fraction = dist / valRange;
      indexRange = end - start;
      estimate = start + (fraction * indexRange);      //estimated position of the key
      if(dosen_if[estimate].id == key)
         return estimate;
      if(dosen_if[estimate].id < key)
         start = estimate +1;
      else
         end = estimate - 1;
	}
}


int interpolationSearch_no(dosen dosen_if[], int start, int end, int key) {
	
   int dist, valRange, indexRange, estimate;
   float fraction;
   while(start <= end && key >= dosen_if[start].no && key <= dosen_if[end].no) {
      dist = key - dosen_if[start].no;
      valRange = dosen_if[end].no - dosen_if[start].no;     //range of value
      fraction = dist / valRange;
      indexRange = end - start;
      estimate = start + (fraction * indexRange);      //estimated position of the key
      if(dosen_if[estimate].no == key)
         return estimate;
      if(dosen_if[estimate].no < key)
         start = estimate +1;
      else
         end = estimate - 1;
	}
}


int main(){
	
	cout<<"              Praktikum PROLAN C081- Kelompok 9             "<<endl;
	cout<<"          Data Sinta Dosen Prodi Informatika UPNVJT         "<<endl;
	cout<<"============================================================="<<endl;
	
	
	dosen dosen_if[22];
	dosen_if[0]={1,"Basuki Rahmat",5972549,1039,1368,40,80};
	dosen_if[1]={2,"Fetty Tri Anggraeny",5991401,316,548,0,0};
	dosen_if[2]={3,"Made Hanindia Prami Swari",6695901,302,395,0,0};
	dosen_if[3]={4,"Henni Endah Wahanani",6122048,263,521,0,40};
	dosen_if[4]={5,"Eka Prakarsa Mandyartha",6690608,238,274,0,0};
	dosen_if[5]={6,"Eva Yulia Puspaningrum",6449576,212,349,0,40};
	dosen_if[6]={7,"Pratama Wirya Atmaja",6698421,207,225,0,0};
	dosen_if[7]={8,"Rizky Parlika",5994341,192,240,0,0};
	dosen_if[8]={9,"Faisal Muttaqin",6023373,180,208,0,0};
	dosen_if[9]={10,"Intan Yuniar Purbasari",5981498,180,269,0,0};
	dosen_if[10]={11,"Budi Nugroho",6201131,151,271,0,40};
	dosen_if[11]={12,"Yisti Vita Via",6675217,108,172,0,40};
	dosen_if[12]={13,"Hendra Maulana",6759089,82,97,0,0};
	dosen_if[13]={14,"RR Ani Dijah Rahajoe",6647318,75,113,40,40};
	dosen_if[14]={15,"Agung Mustika Rizki",6777224,72,123,0,0};
	dosen_if[15]={16,"Kartini",5991431,44,106,0,0};
	dosen_if[16]={17,"Fawwaz Ali Akbar",6690612,37,68,0,0};
	dosen_if[17]={18,"Afina Lina Nurlaili",6774104,34,122,0,0};
	dosen_if[18]={19,"Retno Mumpuni",6686642,18,25,0,0};
	dosen_if[19]={20,"Chrystia Aji Putra",6686104,7,24,0,0};
	dosen_if[20]={21,"Firza Prima Aditiawan", 6690708,6,10,0,0};
	dosen_if[21]={22,"Achmad Junaidi", 6687486,1,1,0,0};
	
	
	int pilih_modul;

do{
	system("cls");
	cout << "MODUL-MODUL";
	cout << "\n1. OPERASI FILE";
	cout << "\n2. DATA STATISTIK";
	cout << "\n3. REKURSIF";
	cout << "\n4. BOGOSORT";
	cout << "\n5. INTERPOLATION SEARCH";
	cout << "\n6. EXIT"<<endl;
	cout << "PILIH MODUL!!!(1/2/3/4/5) ... ";
	int pilih_modul;
	cin >> pilih_modul;
	if (pilih_modul==1) {
			ofstream file;
			file.open("data_dosen_if.txt");
			file<<"Data Dosen"<<endl;
				//write to file
				for(int i=0;i<=21;i++){
				file<<"("<<i+1<<")"<<endl;
				file<<"Nama : "<<dosen_if[i].nama<<endl;
				file<<"ID : "<<dosen_if[i].id<<endl;
				file<<"Score_3Yr : "<<dosen_if[i].score_3Yr<<endl;
				file<<"Score : "<<dosen_if[i].score<<endl;
				file<<"Affil_Score_3Yr : "<<dosen_if[i].affil_score_3Yr<<endl;
				file<<"Affil_Score : "<<dosen_if[i].affil_score<<endl<<endl;
			}
			cout << "\nSilahkan Cek File txt!!!"<< endl;
			file.close();
			char pil;
			do {
				
			cout << "\nApakah Ingin Membaca File (Y/T) ? ";
			cin >> pil;
			
			if (pil=='Y') { 
				// Print from file
				ifstream file1;
				file1.open("data_dosen_if.txt");
				cout<<"Isi file"<<endl;
				string nama;
				if(file1.is_open()){
					while(getline(file1,nama)){
						cout<<nama<<"\n";
					}
					file1.close();
				}else{
					cout<<"file not found";
			
			}
			
			}
			else if(pil=='T') {
				cout << "KLIK ENTER 2x" << endl << endl;
				getch();
				
			}
				
				
			else{
				cout << "PILIHAN TIDAK TERSEDIA. MASUKKAN Y/T"<<endl<<endl;
				getch();
				
				}}while(pil!='Y'&& pil!='T');
	//	system("cls");
			
				
			
				
		//	} else if (pilih_op==2) {
						
					
			getch();
	
	
}
		 else if (pilih_modul==2) {
			// MODUL 2

			float total, mean_shinta3yr, mean_shinta, mean_affill3yr, mean_affil, max_shinta3yr;
			int j;
				
			cout<<"\nInformasi statistik Sinta Dosen :"<<endl;
			
			//Rata-rata Shinta Score 3 Yr
			for(j=0; j<=21; j++){
				total=total+dosen_if[j].score_3Yr;
			}
			
			mean_shinta3yr=total/22;
			cout<<"\n=> Rata - rata jumlah Sinta Score 3 Yr dosen adalah "<<mean_shinta3yr;
		
			//Rata-rata Shinta Score	
			total=0;
			for(j=0; j<=21; j++){
				total=total+dosen_if[j].score;
			}
		
			mean_shinta=total/22;
			cout<<"\n=> Rata - rata jumlah Sinta Score dosen adalah "<<mean_shinta;
		
			//Rata-rata Affil Score 3 Yr
			total=0;
			for(j=0; j<=21; j++){
				total=total+dosen_if[j].affil_score_3Yr;
			}
		
			mean_affill3yr=total/22;
			cout<<"\n=> Rata - rata jumlah Affil Score 3 Yr dosen adalah "<<mean_affill3yr;
			
			//Rata-rata Affil Score 
			total=0;
			for(j=0; j<=21; j++){
				total=total+dosen_if[j].affil_score;
			}
		
			mean_affil=total/22;
			cout<<"\n=> Rata - rata jumlah Affil Score dosen adalah "<<mean_affil<<endl;
			cout<<"\n-------------------------------------------------------------"<<endl;
			getch();

	}
		
			
					
			
		else if (pilih_modul==3) {
			
						//MODUL 3
			int i=0;
			int n=22;
			cout<<"\nData : "<<endl;
			Rekursif_data_dosen(dosen_if, n, i);
			cout<<"\n-------------------------------------------------------------"<<endl;
			
			getch();

			
		}
			
		else if(pilih_modul==4) {
			
						//MODUL 4
			int pilih_sort, jns_sort;
			int n_sort = 10;
			
			cout<<endl;
			cout<<"===== SORTING DATA DOSEN =====";
			
			cout<<"\n1. Nama"<<endl;
			cout<<"2. ID"<<endl;
			cout<<"3. Score 3 Yr"<<endl;
			cout<<"4. Score"<<endl;
			cout<<"5. Affil Score 3Yr"<<endl;
			cout<<"6. Affil Score"<<endl;
			cout<<"Pilih sorting berdasarkan (1/2/3/4/5/6) : ";
			cin>>pilih_sort;
			
			cout<<"\n1. Ascending\n2. Descending"<<endl;
			cout<<"Pilih jenis sorting (1/2) : ";
			cin>>jns_sort;
			
				switch (pilih_sort){
				case 1:
					if (jns_sort == 1){
						cout<<"\n*	Sorting ascending berdasarkan nama	*"<<endl;
						bogosort_nama(dosen_if, n_sort, jns_sort);
						break;
					} else if (jns_sort == 2){
						cout<<"\n*	Sorting descending berdasarkan nama	*"<<endl;
						bogosort_nama(dosen_if, n_sort, jns_sort);
						break;
					} else {
						cout<<"\n\t===Pilihan tidak tersedia==="<<endl;
						exit(0);
					}
					break;
				case 2:
					if (jns_sort == 1){
						cout<<"\n*	Sorting ascending berdasarkan id	*"<<endl;
						bogosort_id(dosen_if, n_sort, jns_sort);
						break;
					} else if (jns_sort == 2){
						cout<<"\n*	Sorting descending berdasarkan id	*"<<endl;
						bogosort_id(dosen_if, n_sort, jns_sort);
						break;
					} else {
						cout<<"\n\t===Pilihan tidak tersedia==="<<endl;
						exit(0);
					}
					break;
				case 3:
					if (jns_sort == 1){
						cout<<"\n*	Sorting ascending berdasarkan score 3Yr	*"<<endl;
						bogosort_score_3Yr(dosen_if, n_sort, jns_sort);
						break;
					} else if (jns_sort == 2){
						cout<<"\n*	Sorting descending berdasarkan score 3Yr	*"<<endl;
						bogosort_score_3Yr(dosen_if, n_sort, jns_sort);
						break;
					} else {
						cout<<"\n\t===Pilihan tidak tersedia=="<<endl;
						exit(0);	
					}
					break;
				case 4:
					if (jns_sort == 1){
						cout<<"\n*	Sorting ascending berdasarkan score	*"<<endl;
						bogosort_score(dosen_if, n_sort, jns_sort);
						break;
					} else if (jns_sort == 2){
						cout<<"\n*	Sorting descending berdasarkan score	*"<<endl;
						bogosort_score(dosen_if, n_sort, jns_sort);
						break;
					} else {
						cout<<"\n\t===Pilihan tidak tersedia==="<<endl;
						exit(0);
					}
					break;
				case 5:
					if (jns_sort == 1){
						cout<<"\n*	Sorting ascending berdasarkan affil score 3Yr	*"<<endl;
						bogosort_af_score_3Yr(dosen_if, n_sort, jns_sort);
						break;
					} else if (jns_sort == 2){
						cout<<"\n*	Sorting descending berdasarkan affil score 3Yr	*"<<endl;
						bogosort_af_score_3Yr(dosen_if, n_sort, jns_sort);
						break;
					} else {
						cout<<"\n\t===Pilihan tidak tersedia==="<<endl;
						exit(0);
					}
					break;
				case 6:
					if (jns_sort == 1){
						cout<<"\n*	Sorting ascending berdasarkan affil score	*"<<endl;
						bogosort_af_score(dosen_if, n_sort, jns_sort);
						break;
					} else if (jns_sort == 2){
						cout<<"\n*	Sorting descending berdasarkan affil score	*"<<endl;
						bogosort_af_score(dosen_if, n_sort, jns_sort);
						break;
					} else {
						cout<<"\n\t===Pilihan tidak tersedia==="<<endl;
						exit(0);
					}
					break;
				default:
					cout<<"\n\t===Pilihan tidak tersedia==="<<endl;
					exit(0);
			}
			cout<<"---------------------------------------------------------------------------------------------"<<endl;
			cout<<"| Nama			 	| ID	  | Score 3Yr | Score | Affil Score 3Yr| Affil Score|"<<endl;
			cout<<"---------------------------------------------------------------------------------------------"<<endl;
			for (int i=0; i < n_sort; i++) {
				cout<<"| "<<setiosflags(ios::left)<<setfill(' ')<<setw(30)<<dosen_if[i].nama;
				cout<<"| "<<setiosflags(ios::left)<<setfill(' ')<<setw(8)<<dosen_if[i].id;
				cout<<"| "<<setiosflags(ios::left)<<setfill(' ')<<setw(10)<<dosen_if[i].score_3Yr;
				cout<<"| "<<setiosflags(ios::left)<<setfill(' ')<<setw(6)<<dosen_if[i].score;
				cout<<"| "<<setiosflags(ios::left)<<setfill(' ')<<setw(15)<<dosen_if[i].affil_score_3Yr;
				cout<<"| "<<setiosflags(ios::left)<<setfill(' ')<<setw(11)<<dosen_if[i].affil_score<<"|"<<endl;
			}
			cout<<"---------------------------------------------------------------------------------------------"<<endl;
			
			getch();	
			
		} 
			
		else if (pilih_modul==5) {
			
			
			
						// MODUL 5
			int searchid, searchno, pil_search, loc,n=10;
			dosen_if[n];
			cout<<"\n=====Searching Data Dosen dengan ID=====";
		
					bogosort_id(dosen_if, 10, 1);
					cout << "\n		                    SEARCHING DENGAN ID" << endl;
					cout<<"---------------------------------------------------------------------------------------------"<<endl;
					cout<<"| Nama			 	| ID	  | Score 3Yr | Score | Affil Score 3Yr| Affil Score|"<<endl;
					cout<<"---------------------------------------------------------------------------------------------"<<endl;
					for (int i=0; i < n; i++) {
				
						cout<<"| "<<setiosflags(ios::left)<<setfill(' ')<<setw(30)<<dosen_if[i].nama;
						cout<<"| "<<setiosflags(ios::left)<<setfill(' ')<<setw(8)<<dosen_if[i].id;
						cout<<"| "<<setiosflags(ios::left)<<setfill(' ')<<setw(10)<<dosen_if[i].score_3Yr;
						cout<<"| "<<setiosflags(ios::left)<<setfill(' ')<<setw(6)<<dosen_if[i].score;
						cout<<"| "<<setiosflags(ios::left)<<setfill(' ')<<setw(15)<<dosen_if[i].affil_score_3Yr;
						cout<<"| "<<setiosflags(ios::left)<<setfill(' ')<<setw(11)<<dosen_if[i].affil_score<<"|"<<endl;
					}
					cout<<"---------------------------------------------------------------------------------------------"<<endl;
					
					cout << "Masukkan ID yang ingin dicari datanya: ";
				   	cin >> searchid;
				
				   
				   	//system("cls");
				   	if((loc = interpolationSearch_id(dosen_if, 0, n-1, searchid)) >= 0 )
					 {
					 	if (loc<10){
					 	cout<<"Ditemukan pada Indeks ke- "<<loc<<endl;
					   	cout<<"Ditemukan pada Posisi ke-" << loc+1<<endl<<endl;
				
					  	
						cout<<"----------------------------------------------------------------------------------------------"<<endl;
						cout<<"|NO |Nama			 | ID	   | Score 3Yr | Score | Affil Score 3Yr| Affil Score|"<<endl;
						cout<<"----------------------------------------------------------------------------------------------"<<endl;
						 	cout<<"| "<<setiosflags(ios::left)<<setfill(' ')<<setw(2)<<loc+1;
							cout<<"| "<<setiosflags(ios::left)<<setfill(' ')<<setw(27)<<dosen_if[loc].nama;
							cout<<"| "<<setiosflags(ios::left)<<setfill(' ')<<setw(8)<<dosen_if[loc].id;
							cout<<"| "<<setiosflags(ios::left)<<setfill(' ')<<setw(10)<<dosen_if[loc].score_3Yr;
							cout<<"| "<<setiosflags(ios::left)<<setfill(' ')<<setw(6)<<dosen_if[loc].score;
							cout<<"| "<<setiosflags(ios::left)<<setfill(' ')<<setw(15)<<dosen_if[loc].affil_score_3Yr;
							cout<<"| "<<setiosflags(ios::left)<<setfill(' ')<<setw(11)<<dosen_if[loc].affil_score<<"|"<<endl;
						
						cout<<"----------------------------------------------------------------------------------------------"<<endl;
					 			
						}
					   	else {
					   		cout<<"Data tidak ditemukan"<<endl;
					      	
								}
				}
				getch();
		}
		else if (pilih_modul==6) {
			cout<<"Terima Kasih";
			exit(0);
		}				
		else {
			cout<<"\n\t===PILIHAN TIDAK TERSEDIA==="<<endl;
			
			getch();
		}
		
	}while (pilih_modul!=7)	;	
}