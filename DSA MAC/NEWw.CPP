// #include <iostream>
// using namespace std;
// int main(){
//     for(int a=1 ; a<=5 ; a=a+1){
//         for(int b=1 ; b<=a ; b=b+1){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//   int a ;
//   cin<<a;
//   for(int i=0;i<=a;i=i+1){
//         for(int j=1;j>=i-1;j=j+1){
//             cout<<" ";
//         }
//         for(int k=1;k<=2*i-1;k=k+1){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     for(int a=5 ; a>=1 ; a=a-1){
//         for(int b=1 ; b<=a ; b=b+1){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }



// #include <iostream>
// using namespace std;
// int main(){
//     int c = 0;
//     for(int a=1 ; a<=5 ; a=a+1){
//         for(int b=1 ; b<=a ; b=b+1){
//             cout<<b;
//         }
//         cout<<endl;
//     }
//     return 0;
// }






//3rd OF November 2025
//sum of natural numbers using while loop
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int sum = 0;
//     int i = 1;
//     while(i<=n){
//         sum = sum + i;
//         i = i + 1;
//     }
//     cout<<sum;
//     return 0;
// }


//check atmm pin using do while loop
// #include <iostream>
// using namespace std;
// int main(){
//     int pin;
//     do{
//         cout<<"Enter Your Pin"<<endl;
//         cin>>pin;
//     }while(pin != 6393);
//     cout<<"Correct Pin"<<endl;
//     return 0;
// }'




#include <iostream>
using namespace std;
int main(){
    int pin;
        cout<<"Enter Your Pin"<<endl;
        cin>>pin;
        while(pin != 6393){
            cout<<"Inccorect Pin\n Try Again\n";
            cin>>pin;
        }
        cout<<"Correct Pin\n";
    return 0;
}
