#include<iostream>
#include<math.h>

using namespace std;

int Elemen[5][5], M[5][5], i, j, k, a, b, c, p, q, r;

int main () {
	cout<<"Kolom ke berapa yang ingin Anda ekspansikan? ";
	cin>>k;
	if (0<k and k<4){
		cout<<"--------------------------------"<<endl<<"DETERMINAN MATRIKS A DENGAN EKSPANSI KOLOM "<<k<<endl<<"\n"; 
	
		cout<<"Masukkan elemen matriks A"<<endl;
			for (i=1; i<4; i++){
			for (j=1; j<4; j++){
				cout<<"\tElemen ["<<i<<"]["<<j<<"]= ";
				cin>>Elemen[i][j];
					}
			}
		cout<<"\nMatriks A = "<<endl;
			for(i=1; i<4; i++){
				for(j=1; j<4; j++){
					cout<<"\t"<<Elemen[i][j]<<"\t";
					}
					cout<<endl;
				}		
		cout<<"\nMinor dari matriks A dengan ekspansi kolom ke "<<k<<endl;
		switch (k){
		case 1 :
			for (i=1; i<4; i++){
				if (i=1) 
					cout<<"\tM ("<<i<<","<<k<<") = "<<endl;
					a=k+1;
					while (a<4) {
						b=2;
						while (b<4) {
							cout<<"\t         "<<Elemen[a][b];
							b+=1;
						} 
						cout<<"\t"<<endl;
						a+=1;
					} 
				if (i=2) 
					cout<<"\n\tM ("<<i<<","<<k<<") = "<<endl;
					a=k;
					while (a<4) {
						b=2;
						while (b<4) {
							cout<<"\t         "<<Elemen[a][b];
							b+=1;
						} 
						cout<<"\t"<<endl;
						a+=2;
					}
				if (i=3) 
					cout<<"\n\tM ("<<i<<","<<k<<") = "<<endl;
					a=k;
					while (a<3) {
						b=2;
						while (b<4) {
							cout<<"\t         "<<Elemen[a][b];
							b+=1;
						} 
						cout<<"\t"<<endl;
						a+=1;
					}
			}
			break;	
		case 2 :
			for (i=1; i<4; i++){
				if (i=1) 
				cout<<"\n\tM ("<<i<<","<<k<<") = "<<endl;
				a=k;
					while (a<4) {
					b=1;
						while (b<4) {
							cout<<"\t         "<<Elemen[a][b];
							b+=2;
						} 
						cout<<"\t"<<endl;
						a+=1;
					} 
				if (i=2) 
				cout<<"\n\tM ("<<i<<","<<k<<") = "<<endl;
				a=k-1;
					while (a<4) {
					b=1;
						while (b<4) {
							cout<<"\t         "<<Elemen[a][b];
							b+=2;
						} 
						cout<<"\t"<<endl;
						a+=2;
					}
				if (i=3) 
					cout<<"\n\tM ("<<i<<","<<k<<") = "<<endl;
					a=k-1;
					while (a<3) {
						b=1;
						while (b<4) {
							cout<<"\t         "<<Elemen[a][b];
							b+=2;
						} 
						cout<<"\t"<<endl;
						a+=1;
					}
			}
			break;
		case 3 :
			for (i=1; i<4; i++){
				if (i=1) 
					cout<<"\n\tM ("<<i<<","<<k<<") = "<<endl;
					a=k-1;
					while (a<4) {
						b=1;
						while (b<3) {
							cout<<"\t         "<<Elemen[a][b];
							b+=1;
						} 
						cout<<"\t"<<endl;
						a+=1;
					} 
				if (i=2) 
					cout<<"\n\tM ("<<i<<","<<k<<") = "<<endl;
					a=k-2;
					while (a<4) {
						b=1;
						while (b<3) {
							cout<<"\t         "<<Elemen[a][b];
							b+=1;
						} 
						cout<<"\t"<<endl;
						a+=2;
					}
				if (i=3) 
					cout<<"\n\tM ("<<i<<","<<k<<") = "<<endl;
					a=k-2;
					while (a<3) {
						b=1;
						while (b<3) {
							cout<<"\t         "<<Elemen[a][b];
							b+=1;
						} 
						cout<<"\t"<<endl;
						a+=1;
					}
			}
			break;	
		}
		cout<<"\nDeterminan minor matriks A dengan ekspansi kolom ke "<<k<<endl;
		switch (k){
		case 1 :
			j=k;
			for (i=1; i<4; i++){
				a= k;
				b= 2;
				if (i=1) 
					M[i][j]= Elemen[a+1][b]*Elemen[a+2][b+1]-Elemen[a+1][b+1]*Elemen[a+2][b];
					cout<<"\tM ("<<i<<","<<k<<") = "<<Elemen[a+1][b]<<"*"<<Elemen[a+2][b+1]<<" - "<<Elemen[a+1][b+1]<<"*"<<Elemen[a+2][b]<<" = "<<M[i][j]<<endl;
				if (i=2) 
					M[i][j]= Elemen[a][b]*Elemen[a+2][b+1]-Elemen[a][b+1]*Elemen[a+2][b];
					cout<<"\tM ("<<i<<","<<k<<") = "<<Elemen[a][b]<<"*"<<Elemen[a+2][b+1]<<" - "<<Elemen[a][b+1]<<"*"<<Elemen[a+2][b]<<" = "<<M[i][j]<<endl;
				if (i=3) 
					M[i][j]= Elemen[a][b]*Elemen[a+1][b+1]-Elemen[a][b+1]*Elemen[a+1][b];
					cout<<"\tM ("<<i<<","<<k<<") = "<<Elemen[a][b]<<"*"<<Elemen[a+1][b+1]<<" - "<<Elemen[a][b+1]<<"*"<<Elemen[a+1][b]<<" = "<<M[i][j]<<endl;
			}
			break;	
		case 2 :
			j=k;
			for (i=1; i<4; i++){
				if (i=1) 
					a= k;
					b= 1;
					M[i][j]= Elemen[a][b]*Elemen[a+1][b+2]-Elemen[a][b+2]*Elemen[a+1][b];
					cout<<"\tM ("<<i<<","<<k<<") = "<<Elemen[a][b]<<"*"<<Elemen[a+1][b+2]<<" - "<<Elemen[a][b+2]<<"*"<<Elemen[a+1][b]<<" = "<<M[i][j]<<endl;
				if (i=2) 
					a= k;
					b= 1;
					M[i][j]= Elemen[a-1][b]*Elemen[a+1][b+2]-Elemen[a-1][b+2]*Elemen[a+1][b];
					cout<<"\tM ("<<i<<","<<k<<") = "<<Elemen[a-1][b]<<"*"<<Elemen[a+1][b+2]<<" - "<<Elemen[a-1][b+2]<<"*"<<Elemen[a+1][b]<<" = "<<M[i][j]<<endl;
				if (i=3) 
					a= k;
					b= 1;
					M[i][j]= Elemen[a-1][b]*Elemen[a][b+2]-Elemen[a-1][b+2]*Elemen[a][b];
					cout<<"\tM ("<<i<<","<<k<<") = "<<Elemen[a-1][b]<<"*"<<Elemen[a][b+2]<<" - "<<Elemen[a-1][b+2]<<"*"<<Elemen[a][b]<<" = "<<M[i][j]<<endl;
			}
			break;
		case 3 :
			i=1;
			j=k;
			for (i=1; i<4; i++){
				if (i=1) 
					a= k;
					b= 1;
					M[i][j]= Elemen[a-1][b]*Elemen[a][b+1]-Elemen[a-1][b+1]*Elemen[a][b];
					cout<<"\tM ("<<i<<","<<k<<") = "<<Elemen[a-1][b]<<"*"<<Elemen[a][b+1]<<" - "<<Elemen[a-1][b+1]<<"*"<<Elemen[a][b]<<" = "<<M[i][j]<<endl;
				if (i=2) 
					a= k;
					b= 1;
					M[i][j]= Elemen[a-2][b]*Elemen[a][b+1]-Elemen[a-2][b+1]*Elemen[a][b];
					cout<<"\tM ("<<i<<","<<k<<") = "<<Elemen[a-2][b]<<"*"<<Elemen[a][b+1]<<" - "<<Elemen[a-2][b+1]<<"*"<<Elemen[a][b]<<" = "<<M[i][j]<<endl;
				if (i=3) 
					a= k;
					b= 1;
					M[i][j]= Elemen[a-2][b]*Elemen[a-1][b+1]-Elemen[a-2][b+1]*Elemen[a-1][b];
					cout<<"\tM ("<<i<<","<<k<<") = "<<Elemen[a-2][b]<<"*"<<Elemen[a-1][b+1]<<" - "<<Elemen[a-2][b+1]<<"*"<<Elemen[a-1][b]<<" = "<<M[i][j] <<endl;
			}
			break;
		} 
		cout<<"\nDeterminan matriks A = ";
		switch (k){
		j= k;
		case 1 :
			for (i=1; i<4; i++){
				if (i=1)
					p=Elemen[i][j]*pow(-1, i+j)*M[i][j];
				if (i=2) 
					q=Elemen[i][j]*pow(-1, i+j)*M[i][j];
				if (i=3) 
					r=Elemen[i][j]*pow(-1, i+j)*M[i][j];
			}
			cout<<p+q+r<<endl;
			break;	
		case 2 :
			for (i=1; i<4; i++){
				if (i=1)
					p=Elemen[i][j]*pow(-1, i+j)*M[i][j];
				if (i=2) 
					q=Elemen[i][j]*pow(-1, i+j)*M[i][j];
				if (i=3) 
					r=Elemen[i][j]*pow(-1, i+j)*M[i][j];
			}
			cout<<p+q+r<<endl;
			break;
		case 3 :
			for (i=1; i<4; i++){
				if (i=1)
					p=Elemen[i][j]*pow(-1, i+j)*M[i][j];
				if (i=2) 
					q=Elemen[i][j]*pow(-1, i+j)*M[i][j];
				if (i=3) 
					r=Elemen[i][j]*pow(-1, i+j)*M[i][j];
			}
			cout<<p+q+r<<endl;
			break;
		}				
	} else {
		cout<<"\nTidak bisa menghitung determinan matriks dengan ekspansi kolom ke "<<k;
}	
 }			
