#include<iostream>
using namespace std ;
int main ()
{
	int n, m, hasilk,hasilp,pilih;
	
	cout <<"Perkalian & Perpangkatan" <<endl;
	cout <<"========================" <<endl;
	cout <<"1. Perkalian" <<endl;
	cout <<"2. Perpangkatan" <<endl;
	cout <<"Pilih  (1/2): " ;
	cin>>pilih;
	switch (pilih)
	{
		case 1 : //perkalian 
		{
			cout<<"input angka N : " ;
			cin>> n ;
			cout<<"input angka M : " ;
			cin>> m ;
			cout<<"Hasil Perkalian "<<n<<"*"<<m<<endl ;
			hasilk = 1 ;
			for (int loop=1;loop<=n;loop++){
				hasilk =m*n ;
				if(loop!=n){
					cout<<m<<" + ";
				}
				else {
					cout<<m<<" = "<<hasilk<<endl ;
				}
				}
		}
			break ;
		case 2 :  //perpanglatan
		{
		cout<<"Input angka N :" ;
		cin>>n ;
		cout<<"input angka M :" ;
		cin>>m ;
		cout<<"Hasil Perpangkatan "<<n<<"^"<<m<<endl ;
		hasilp = 1 ;
		for
		(int loop =1; loop<=m;loop++){
			hasilp *=n ;
			if(loop!=m){
				cout<<n<<"*" ;
			}
			else {
				cout<<n<<" = "<<hasilp<<endl ;
			}
			}
		}
		case 3 : 
		{
		cout <<"SALAH" <<endl;
		}
		break;
		case 4 :
		{
		cout <<"SALAH" <<endl;
		}
		break;
		case 5:
		{
		cout <<"SALAH" <<endl;
		}
		break;
	}
}


