#include<iostream>
#include<iomanip>
using namespace std; 

class Pendapatan{
	private:
		int gaji, tunjangan, thr, gaji13, bonus, total_th, besar_pajak=0, pendapatan_th_akhir, pendapatan_bln_akhir;
	public:
		void pendapatanSetahun(int gaji_bln, double tnj, double thr_x, double g13, double bonus_x);
		int pajak();
		int pendapatanThSetelahPajak();
		int pendapatanBlnSetelahPajak();
};

void Pendapatan::pendapatanSetahun(int gaji_bln, double tnj, double thr_x, double g13, double bonus_x){
	gaji = 12*gaji_bln;
	tunjangan = 12*tnj*gaji_bln;
	thr = thr_x*gaji_bln;
	gaji13 = g13*gaji_bln;
	bonus = 2*bonus_x*gaji_bln;
	
	total_th = gaji+tunjangan+thr+gaji13+bonus;
	cout<<"Rp"<<total_th; 
}

int Pendapatan::pajak(){
	if((gaji+bonus)/12>5000000){
		besar_pajak = 0.06*(total_th);
	} 
	return besar_pajak;
}

int Pendapatan::pendapatanThSetelahPajak(){
	pendapatan_th_akhir = total_th-besar_pajak;
	
	return pendapatan_th_akhir;
}

int Pendapatan::pendapatanBlnSetelahPajak(){
	pendapatan_bln_akhir = (total_th-besar_pajak)/12;
	
	return pendapatan_bln_akhir;
}

int main(){
	int golongan;
	Pendapatan gol[8];
	
	cout<<"1. IIIA\n2. IIIB\n3. IIIC\n4. IIID\n5. IVA\n6. IVB\n7. IVC\n8. IVD"<<endl;
	cout<<"Pilih golongan (1/2/3/4/5/6/7/8): ";
	cin>>golongan;
	switch(golongan){
		case 1: 
			cout<<"\t------------------------------------------------------------------------------------"<<endl;
			cout<<"\t| Golongan : "<<golongan<<setw(70)<<"|"<<endl;
			cout<<"\t------------------------------------------------------------------------------------"<<endl;
			cout<<"\t| Pendapatan 1 tahun | Besar Pajak "<<setw(35)<<"| Pendapatan setelah Pajak "<<setw(14)<<"|"<<endl;
			cout<<"\t| "<<setw(20)<<"|"<<setw(22)<<"|"<<"---------------------------------------|"<<endl;
			cout<<"\t|"<<setw(21)<<"|"<<setw(33)<<" | per Tahun "<<setw(20)<<"| per Bulan "<<setw(9)<<"|"<<endl;
			cout<<"\t|--------------------|---------------------|---------------------------------------|"<<endl;
			cout<<"\t| ";gol[1].pendapatanSetahun(2700000, 0.6, 1, 1, 0); cout<<setw(10)<<"|";
			cout<<" Rp"<<gol[1].pajak()<<setw(18)<<"|";
			cout<<" Rp"<<gol[1].pendapatanThSetelahPajak()<<setw(9)<<"|";
			cout<<" Rp"<<gol[1].pendapatanBlnSetelahPajak()<<setw(10)<<"|"<<endl;
			cout<<"\t------------------------------------------------------------------------------------"<<endl;
			break;
		case 2:
			cout<<"\t------------------------------------------------------------------------------------"<<endl;
			cout<<"\t| Golongan : "<<golongan<<setw(70)<<"|"<<endl;
			cout<<"\t------------------------------------------------------------------------------------"<<endl;
			cout<<"\t| Pendapatan 1 tahun | Besar Pajak "<<setw(35)<<"| Pendapatan setelah Pajak "<<setw(14)<<"|"<<endl;
			cout<<"\t| "<<setw(20)<<"|"<<setw(22)<<"|"<<"---------------------------------------|"<<endl;
			cout<<"\t|"<<setw(21)<<"|"<<setw(33)<<" | per Tahun "<<setw(20)<<"| per Bulan "<<setw(9)<<"|"<<endl;
			cout<<"\t|--------------------|---------------------|---------------------------------------|"<<endl;
			cout<<"\t| ";gol[2].pendapatanSetahun(2800000, 0.6, 1, 1, 0); cout<<setw(10)<<"|";
			cout<<" Rp"<<gol[2].pajak()<<setw(18)<<"|";
			cout<<" Rp"<<gol[2].pendapatanThSetelahPajak()<<setw(9)<<"|";
			cout<<" Rp"<<gol[2].pendapatanBlnSetelahPajak()<<setw(10)<<"|"<<endl;
			cout<<"\t------------------------------------------------------------------------------------"<<endl;
			break;
		case 3:
			cout<<"\t------------------------------------------------------------------------------------"<<endl;
			cout<<"\t| Golongan : "<<golongan<<setw(70)<<"|"<<endl;
			cout<<"\t------------------------------------------------------------------------------------"<<endl;
			cout<<"\t| Pendapatan 1 tahun | Besar Pajak "<<setw(35)<<"| Pendapatan setelah Pajak "<<setw(14)<<"|"<<endl;
			cout<<"\t| "<<setw(20)<<"|"<<setw(22)<<"|"<<"---------------------------------------|"<<endl;
			cout<<"\t|"<<setw(21)<<"|"<<setw(33)<<" | per Tahun "<<setw(20)<<"| per Bulan "<<setw(9)<<"|"<<endl;
			cout<<"\t|--------------------|---------------------|---------------------------------------|"<<endl;
			cout<<"\t| ";gol[3].pendapatanSetahun(2950000, 0.6, 1, 1, 0); cout<<setw(10)<<"|";
			cout<<" Rp"<<gol[3].pajak()<<setw(18)<<"|";
			cout<<" Rp"<<gol[3].pendapatanThSetelahPajak()<<setw(9)<<"|";
			cout<<" Rp"<<gol[3].pendapatanBlnSetelahPajak()<<setw(10)<<"|"<<endl;
			cout<<"\t------------------------------------------------------------------------------------"<<endl;
			break;
		case 4:
			cout<<"\t| Golongan : "<<golongan<<setw(70)<<"|"<<endl;
			cout<<"\t------------------------------------------------------------------------------------"<<endl;
			cout<<"\t| Pendapatan 1 tahun | Besar Pajak "<<setw(35)<<"| Pendapatan setelah Pajak "<<setw(14)<<"|"<<endl;
			cout<<"\t| "<<setw(20)<<"|"<<setw(22)<<"|"<<"---------------------------------------|"<<endl;
			cout<<"\t|"<<setw(21)<<"|"<<setw(33)<<" | per Tahun "<<setw(20)<<"| per Bulan "<<setw(9)<<"|"<<endl;
			cout<<"\t|--------------------|---------------------|---------------------------------------|"<<endl;
			cout<<"\t| ";gol[4].pendapatanSetahun(3200000, 1, 1, 1, 0); cout<<setw(10)<<"|";
			cout<<" Rp"<<gol[4].pajak()<<setw(18)<<"|";
			cout<<" Rp"<<gol[4].pendapatanThSetelahPajak()<<setw(9)<<"|";
			cout<<" Rp"<<gol[4].pendapatanBlnSetelahPajak()<<setw(10)<<"|"<<endl;
			cout<<"\t------------------------------------------------------------------------------------"<<endl;
			break;
		case 5:
			cout<<"\t------------------------------------------------------------------------------------"<<endl;
			cout<<"\t| Golongan : "<<golongan<<setw(70)<<"|"<<endl;
			cout<<"\t------------------------------------------------------------------------------------"<<endl;
			cout<<"\t| Pendapatan 1 tahun | Besar Pajak "<<setw(35)<<"| Pendapatan setelah Pajak "<<setw(14)<<"|"<<endl;
			cout<<"\t| "<<setw(20)<<"|"<<setw(22)<<"|"<<"---------------------------------------|"<<endl;
			cout<<"\t|"<<setw(21)<<"|"<<setw(33)<<" | per Tahun "<<setw(20)<<"| per Bulan "<<setw(9)<<"|"<<endl;
			cout<<"\t|--------------------|---------------------|---------------------------------------|"<<endl;
			cout<<"\t| ";gol[5].pendapatanSetahun(3500000, 1.1, 1, 1, 0); cout<<setw(10)<<"|";
			cout<<" Rp"<<gol[5].pajak()<<setw(18)<<"|";
			cout<<" Rp"<<gol[5].pendapatanThSetelahPajak()<<setw(9)<<"|";
			cout<<" Rp"<<gol[5].pendapatanBlnSetelahPajak()<<setw(10)<<"|"<<endl;
			cout<<"\t------------------------------------------------------------------------------------"<<endl;
			break;
		case 6:
			cout<<"\t------------------------------------------------------------------------------------"<<endl;
			cout<<"\t| Golongan : "<<golongan<<setw(70)<<"|"<<endl;
			cout<<"\t------------------------------------------------------------------------------------"<<endl;
			cout<<"\t| Pendapatan 1 tahun | Besar Pajak "<<setw(35)<<"| Pendapatan setelah Pajak "<<setw(14)<<"|"<<endl;
			cout<<"\t| "<<setw(20)<<"|"<<setw(22)<<"|"<<"---------------------------------------|"<<endl;
			cout<<"\t|"<<setw(21)<<"|"<<setw(33)<<" | per Tahun "<<setw(20)<<"| per Bulan "<<setw(9)<<"|"<<endl;
			cout<<"\t|--------------------|---------------------|---------------------------------------|"<<endl;
			cout<<"\t| ";gol[6].pendapatanSetahun(4000000, 1.2, 1, 1, 0); cout<<setw(9)<<"|";
			cout<<" Rp"<<gol[6].pajak()<<setw(18)<<"|";
			cout<<" Rp"<<gol[6].pendapatanThSetelahPajak()<<setw(9)<<"|";
			cout<<" Rp"<<gol[6].pendapatanBlnSetelahPajak()<<setw(9)<<"|"<<endl;
			cout<<"\t------------------------------------------------------------------------------------"<<endl;
			break;
		case 7:
			cout<<"\t------------------------------------------------------------------------------------"<<endl;
			cout<<"\t| Golongan : "<<golongan<<setw(70)<<"|"<<endl;
			cout<<"\t------------------------------------------------------------------------------------"<<endl;
			cout<<"\t| Pendapatan 1 tahun | Besar Pajak "<<setw(35)<<"| Pendapatan setelah Pajak "<<setw(14)<<"|"<<endl;
			cout<<"\t| "<<setw(20)<<"|"<<setw(22)<<"|"<<"---------------------------------------|"<<endl;
			cout<<"\t|"<<setw(21)<<"|"<<setw(33)<<" | per Tahun "<<setw(20)<<"| per Bulan "<<setw(9)<<"|"<<endl;
			cout<<"\t|--------------------|---------------------|---------------------------------------|"<<endl;
			cout<<"\t| ";gol[7].pendapatanSetahun(5000000, 1.5, 1, 1, 8); cout<<setw(9)<<"|";
			cout<<" Rp"<<gol[7].pajak()<<setw(11)<<"|";
			cout<<" Rp"<<gol[7].pendapatanThSetelahPajak()<<setw(8)<<"|";
			cout<<" Rp"<<gol[7].pendapatanBlnSetelahPajak()<<setw(9)<<"|"<<endl;
			cout<<"\t------------------------------------------------------------------------------------"<<endl;
			break;
		case 8:
			cout<<"\t------------------------------------------------------------------------------------"<<endl;
			cout<<"\t| Golongan : "<<golongan<<setw(70)<<"|"<<endl;
			cout<<"\t------------------------------------------------------------------------------------"<<endl;
			cout<<"\t| Pendapatan 1 tahun | Besar Pajak "<<setw(35)<<"| Pendapatan setelah Pajak "<<setw(14)<<"|"<<endl;
			cout<<"\t| "<<setw(20)<<"|"<<setw(22)<<"|"<<"---------------------------------------|"<<endl;
			cout<<"\t|"<<setw(21)<<"|"<<setw(33)<<" | per Tahun "<<setw(20)<<"| per Bulan "<<setw(9)<<"|"<<endl;
			cout<<"\t|--------------------|---------------------|---------------------------------------|"<<endl;
			cout<<"\t| ";gol[8].pendapatanSetahun(6000000, 1.5, 1, 1, 10); cout<<setw(9)<<"|";
			cout<<" Rp"<<gol[8].pajak()<<setw(11)<<"|";
			cout<<" Rp"<<gol[8].pendapatanThSetelahPajak()<<setw(8)<<"|";
			cout<<" Rp"<<gol[8].pendapatanBlnSetelahPajak()<<setw(9)<<"|"<<endl;
			cout<<"\t------------------------------------------------------------------------------------"<<endl;
			break;
		default:
			cout<<"\n===Pilihan tidak tersedia. Masukkan pilihan hanya dari 1-8!==="<<endl;
	}
}