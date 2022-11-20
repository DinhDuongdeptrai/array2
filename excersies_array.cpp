#include <iostream>
#include <math.h>
using namespace std;

void intput_array (  int a[],  int &n)
{
    for ( int i = 0 ; i < n ; i++)
    {
        cout << "a[" <<i << "]=";
        cin >> a[i];
    }
}
void output_array ( int a[] ,  int n)
{
    for ( int i= 0 ; i < n ; i++)
    {
        cout << a[i]  << endl;
    }
}

void location_negative ( int  a[],  int n)  //1
{
    intput_array ( a, n);
    for ( int i = 0 ; i < n ; i++)
    {
        if ( a[i] < 0)
        {
            cout <<"Gia tri am tai vi tri: "<< i << "\t" ;
        }

    }
}
void location_evennumber ( int  a[],  int n)   //2
{
    intput_array ( a, n);
    for ( int i = 0 ; i < n ; i++)
    {
        if ( a[i] % 2 == 0)
        {
            cout << a[i] << "\t" ;
        }

    }
}
int Sum_odd( int a[] , int n)       //3
{
    intput_array ( a, n);
    output_array ( a, n);
    int sum;
    for ( int i = 0 ; i < n ; i++)
    {
        if ( a[i] % 2 != 0 )
        {
            sum += a[i] ;
        }
    }
    return sum;
}
int Square_number ( int a[] , int n)     //4
{
    intput_array ( a, n);
    
    for ( int i=0 ; i < n ; i++)
    {
        for ( int j = 2 ; j < a[i] ; j++)
            if ( pow(j, 2) == a[i] )
            {
                cout << a[i] << "la so chinh phuong" << endl;
            }
           

    }
}

int Perfect_number ( int a[] , int n)       //5
{
    intput_array ( a, n);
    int i;
    int j;
    for (  i = 0 ;  i < n ; i++)
    {
        int sum = 0;
        for (  j = 1 ; j <= (a[i] /2 ) ; j++)
        {
            if ( a[i] % j == 0)
            { 
                sum += j;
            }
        }
        if ( sum != 0 && sum == a[i])
        {
            cout << a[i] << " la so hoan thien" << endl ;
        }
        else
        {
            cout << a[i] << " khong phai la so hoan thien" << endl;
        }
    }

}

void Prime_number ( int a[] ,  int n)       //6
{
    intput_array ( a, n);

    for ( int i = 0 ;  i < n ; i++)
    {
        int dem = 0;
        if ( a[i] >= 2)
        {
            for( int j = 1; j <= a[i] ; j++)
                if ( a[i] % j == 0)
                {
                    dem ++;
                }
            if ( dem == 2)
                    cout << a[i] << " la so nguyen to " << endl;

        }
    }
}
void Max_array (int a[], int n)       //7
{
    intput_array ( a, n);
    int max = a[0];
    for (int i = 1 ; i < n ; i++)
    {
        if ( a[i] > max )
            max = a[i];
    }
    cout << "\nMax= " << max << endl;
}
void Min_array (int a[], int n)   //8
{
    intput_array ( a, n);
    int min = a[0];
    for (int i = 1 ; i < n ; i++)
    {
        if ( a[i] < min )
            min = a[i];
    }
    cout <<"\nMin= " << min << endl;
}


int main ()
{
    do
    {
            system ( " cls ");
            int n;
            int a[n] ;
            do
            {
                cout << "Nhap vao n: " ;
                cin >> n;
            } while (n < 0);
            cout << "================================MENU========================================" << endl;
            cout << "1.Nhap vao 1 mang mot chieu cac so nguyen. Viet ham liet ke cac vi tri ma gia tri tai do la gia tri am trong mang 1 chieu cac so am " << endl;
            cout << "2.Nhap vao 1 mang mot chieu cac so nguyen. Viet ham liet ke cac gia tri chan trong mang " << endl;
            cout << "3.Nhap vao 1 mang mot chieu cac so nguyen. Viet ham tinh tong  cac phan tu le  trong mang " << endl;
            cout << "4.Nhap vao 1 mang mot chieu cac so nguyen. Viet ham xuat ra cac so chinh phuong trong mang " << endl;
            cout << "5.Nhap vao 1 mang mot chieu cac so nguyen. Viet ham xuat ra cac so hoan thien trong mang" << endl;
            cout << "6.Nhap vao 1 mang mot chieu cac so nguyen. Viet ham xuat ra cac so nguyen to trong mang" << endl;
            cout << "7.Nhap vao 1 mang mot chieu cac so nguyen. Viet ham xuat gia tri lon nhat trong mang" << endl;
            cout << "8.Nhap vao 1 mang mot chieu cac so nguyen. Viet ham xuat gia tri nho nhat trong mang " << endl;
            int chon;
            cout << "Nhap vao lua chon: ";
            cin >> chon;
            
            switch ( chon )
            {
            case 1: 
                location_negative ( a , n);
                break;
            case 2:
                location_evennumber ( a, n);
                break;
            case 3:
                Sum_odd ( a, n);
                break;
            case 4:
                Square_number ( a, n);
                break;
            case 5:
                Perfect_number ( a, n);
                break;
            case 6:
                Prime_number ( a , n ) ;
                break;
            case 7:
                Max_array ( a, n);
                break;
            case 8:
                Min_array ( a , n);
                break;         
            default:
                cout << "Loi, vui long nhap lai" << endl;
                break;
            }
        system ( "pause");
        
    } while (true);
    
}