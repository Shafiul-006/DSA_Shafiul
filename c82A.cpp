// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int k;
//     k=log2((n+5)/5);
//     // int mid_and=n-5*pow(2,k);
//     int prev_sum=5*pow(2,k)-5;
//     // cout<<n-prev_sum<<endl;
//     int remainder=n-prev_sum;
//     int d=remainder/(pow(2,k));
//     if(n<=5){
//         switch (d)
//         {
//         case 1:
//             cout<<"Sheldon"<<endl;
//             break;
//         case 2:
//             cout<<"Leonard"<<endl;
//             break;
//         case 3:
//             cout<<"Penny"<<endl;
//             break;
//         case 4:
//             cout<<"Rajesh"<<endl;
//             break;
//         default:
//             cout<<"Haward"<<endl;
//             break;
//         }
//         return 0;
//     }
//     switch (d)
//     {
//     case 0:
//         cout<<"Sheldon"<<endl;
//         break;
//     case 1:
//         cout<<"Leonard"<<endl;
//         break;
//     case 2:
//         cout<<"Penny"<<endl;
//         break;
//     case 3:
//         cout<<"Rajesh"<<endl;
//         break;
//     default:
//         cout<<"Haward"<<endl;
//         break;
//     }
//     return 0;
// }


// copy solution from google

//4006861   Jul 3, 2013 5:47:02 PM	fuwutu	 82A - Double Cola	 GNU C++0x	Accepted	15 ms	0 KB
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int r = 1;
    while (r * 5 < n)
    {
        n -= r * 5;
        r *= 2;
    }

    string names[] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
    cout << names[(n - 1) / r] << endl;

    return 0;
}