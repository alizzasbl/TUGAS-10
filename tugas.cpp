#include < stdio.h > 
#include < iostream > 
using namespace std; 

main () 
{ 
string nama; 
int usia; int a = 16; int b = 18; 

    cout << "Apakah kamu jodohku?"<<endl; 
    cout << "Hai, siapa nama kamu?" << endl; 
    cin >> nama; 
    cout << "Umur berapa kamu sekarang?" << endl; 
    cin >> usia; 
    
if ( usia >= a && usia <= b ) { 

        cout << "Ternyata selama ini kamu yang aku cari"<<endl; 
        cin >> nama; 
} else { 
           
        cout << "Maaf" << nama << "sepertinya kita bukan jodoh"<<endl; 
        cin >> nama; 
} 
} 
