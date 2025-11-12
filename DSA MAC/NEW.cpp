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






// 3rd OF November 2025
// sum of natural numbers using while loop
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


// check atmm pin using do while loop
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




// #include <iostream>
// using namespace std;
// int main(){
//     int pin;
//         cout<<"Enter Your Pin"<<endl;
//         cin>>pin;
//         while(pin != 6393){
//             cout<<"Inccorect Pin\n Try Again\n";
//             cin>>pin;
//         }
//         cout<<"Correct Pin\n";
//     return 0;
// }



//Fitness Step Counter
// #include <iostream>
// using namespace std;
// int main(){
//    int step = 0;
//    while(step<10000){
//     cout<<"Current Steps Walked: ";
//     cin>>step;
//    }
//     cout<<step<<endl;
//     cout<<"Congratulations! You have reached your daily step goal of 10000 steps."<<endl;
//     return 0;
//    }




//an electricity board wants to calculate the total consumption recorded every hour  using a while loop.
// #include <iostream>
// using namespace std;
// int main(){
//     int hour = 1;
//     int a = 0;
//     while(hour<=24){
//         cout<<"Enter the consumed unit of the hour "<<hour<<endl;
//         int net_consumption;
//         cin>>net_consumption;
//         a = a + net_consumption;
//     }
//         cout<<"Total consumption in 24 hour is"<<a<<endl;
//     return 0;
// }


//A Library imposes Rupees 2 fine for each late day . Using a for loop calculate total fine for N late days.
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of late days : "<<endl;
//     cin>>n;
//     int fine = 0;
//     for(int i = 1 ; i <= n ; i = i + 1){
//         fine = fine + 2;
//     }
//     cout<<"Total fine is "<<fine<<endl;
//     return 0;
// }




//An online voting portal verifies user age before registration. if the user is 18 year or older,they are eligible to vote.Otherwise,they are not allowed to register.
// #include <iostream>
// using namespace std;
// int main(){
//     int age;
//     cout<<"Enter Your Age : "<<endl;
//     cin>>age;
//     if(age>=18){
//         cout<<"Congratulations You are eligible to vote"<<endl;
//     }else{
//         cout<<"Not eligible to vote"<<endl;
//     }
//     return 0;
// }



//A shopkeeper enters the cost price(CP) and selling price(SP) of an item into the biling system. The program should diplay whether the shopkeeper has made a profit,loss or no profir no loss.
// #include <iostream>
// using namespace std;
// int main(){
//     int CP,SP;
//     cout<<"Enter CP AND SP : "<<endl;
//     cin>>CP>>SP;
//     if(CP>SP){
//         cout<<"Loss"<<endl;
//     }else if(SP>CP){
//         cout<<"Profit"<<endl;
//     }else{
//         cout<<"No Profit No Loss"<<endl;
//     }
//     return 0;
// }



//febinochi series        amstrong number          pelendrom
// 0+1=1+1=2---         153=1*1*1+5*5*5+3*3*3.     madam=12121
//                     =153




//AN armstrong number of n digits is a number equal to the sum of its digits raised to the power n. Find if a mumber is an ARmstrong number or not.

// #include <iostream>
// #include <cmath>
// using namespace std;
// int main() {
//     int num, a, remainder, n = 0;
//     double result = 0.0;

//     cout << "Number to check ";
//     cin >> num;

//     a = num;

//     for (a = num; a != 0; ++n) {
//         a /= 10;
//     }

//     a = num;
    
//     for (a = num; a != 0; a /= 10) {
//         remainder = a % 10;
//         result += pow(remainder, n);
//     }

//     if (static_cast<int>(result) == num)
//         cout << num <<" "<< "Yes" << endl;
//     else
//         cout << num <<" "<< "No" << endl;

//     return 0;
// }



//with while loop
// #include <iostream>
// #include <cmath>
// using namespace std;
// int main() {
//     int num, a, remainder, n = 0;
//     double result = 0.0;
//     cout << "Number to check ";
//     cin >> num;
//     a = num;
//     while (a != 0) {
//         a /= 10;
//         ++n;
//     }
//     a = num;
//     while (a != 0) {
//         remainder = a % 10;
//         result += pow(remainder, n);
//         a /= 10;
//     }
//     if (static_cast<int>(result) == num)
//         cout << num <<" "<< "Yes" << endl;
//     else
//         cout << num <<" "<< "No" << endl;
//     return 0;
// }



//Check whether a number is palindrome or not.
// #include <iostream>
// using namespace std;
// int main() {
//     int num, a reversedNum = 0, remainder;
//     cout << "Enter an integer: ";
//     cin >> num;
//     a = num;
//     while (num != 0) {
//         remainder = num % 10;
//         reversedNum = reversedNum * 10 + remainder;
//         num /= 10;
//     }
//     if (a == reversedNum)
//         cout << a <<" "<< "Yes" << endl;
//     else
//         cout << a <<" "<< "No" << endl;
//     return 0;
// }




//Fibonnaci Series
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout << "Enter the number of terms : ";
//     cin >> n;
//     int a = 0, b = 1, nextTerm;
//     cout << "Fibonacci Series: ";
//     for (int i = 1; i <= n; ++i) {
//         cout << a << ", ";
//         nextTerm = a + b;
//         a = b;
//         b = nextTerm;
//     }
//     return 0;
// }




// #include <iostream>
// using namespace std;
// int main(){
//     int arr[10] = {59,95,43,44,420,56,67,24,34,72};
//     for(int i=0;i<=10;i++){
//         cout<<arr[i]<<endl;
//     }
//     return 0;
// }


//using of size of operator
// #include <iostream>
// using namespace std;
// int main(){
//     int arr[10] = {59,95,43,44,420,56,67,24,34,72};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<endl;
//     }
//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main(){
//     int arr[5] = {59,95,43,44,420};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<n;i++){
//         cout<<sizeof n<<endl;
//     }
//     return 0;
// }




//calcukate the sum of elements in an array
// #include <iostream>
// using namespace std;
// int main(){
//     int arr[5] = {59,95,43,44,420};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int sum = 0;
//     for(int i=0;i<n;i++){
//         sum = sum + arr[i];
//     }
// //     cout<<"Sum of elements in array is "<<sum<<endl;
// //     return 0;
// // }


// //digit counter code
// #include <iostream>
// using namespace std;
// int main(){
//     int arr[5] = {59,95,43,44,420};
//     int n = 123;
//     for(int i=0;i<n;i++){
//         int count = 0;
//         int number = n;
//         while(number != 0){
//             number = number / 10;

//             count = count + 1;
//         }
//         cout<<"Number of digits in "<<arr[i]<<" is "<<count<<endl;
//     }
//     return 0;




//leaniear search]
    // #include <iostream>
    // using namespace std;
    // int main(){
    //     int arr[5] = {59,95,43,44,420};
    //     int n = sizeof(arr)/sizeof(arr[0]);
    //     int key;
    //     cout<<"Enter the search key : "<<endl;
    //     cin>>key;
    //     int loc = -1;
    //     for(int i=0;i<n;i++){
    //         if(arr[i] == key){
    //             loc = i;
    //             break;
    //         }
    //     }
    //     if(loc != -1){
    //         cout<<"Element found at index "<<loc<<endl;
    //     }
    //     else{
    //         cout<<"Element not found"<<endl;
    //     }
    //     return 0;
    // }

    // #include <iostream>
    // using namespace std;
    // int main(){
    //     int a,b,c,d;
    //     cout<<"Enter 4 numbers : "<<endl;
    //     cin>>a>>b>>c>>d;
    //     cout<<d<<" "<<c<<" "<<b<<" "<<a<<endl;
    //     return 0;
    // }


    //reverse digits of a number
    // #include <iostream>
    // using namespace std;
    // int main(){
    //     int n;
    //     cout<<"Enter a number : "<<endl;
    //     cin>>n;
    //     int reversedNum = 0;
    //     while(n != 0){
    //         int remainder = n % 10;
    //         reversedNum = reversedNum * 10 + remainder;
    //         n = n / 10;
    //     }   
    //     cout<<"Reversed Number is "<<reversedNum<<endl;
    //     return 0;
    // }




//     #include <iostream>
//     using namespace std;
//     int main(){
//         cout<<"Enter the value of elements: ";
//         cin>>n;
//         int arr[n];
//         cout<<"Enter the elements of array: ";
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//         }
//         for(int i=0;i<n-1;i++){        
//         for(int j=0;j<n;j++){
//             if(arr[j]>arr[j+1]){
//                 int temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//         }
//     }
//     cout<<"Sorted array is: ";
//     for(int i=0;i<n;i++){
//             cout<<arr[i]<<" ";
// }
// return 0;
//     }


// prime number
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number : "<<endl;
//     cin>>n;
//     bool isPrime = true;
//     if(n<=1){
//         isPrime = false;
//     }else{
//         for(int i=2;i<=n/2;i++){
//             if(n%i==0){
//                 isPrime = false;
//                 break;
//             }
//         }
//     }
//     if(isPrime){
//         cout<<n<<" is a prime number"<<endl;
//     }else{
//         cout<<n<<" is not a prime number"<<endl;
//     }
//     return 0;
// }




// //digit sum calculator
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number : "<<endl;
//     cin>>n;
//     int sum = 0;
//     while(n != 0){
//         int remainder = n % 10;
//         sum = sum + remainder;
//         n = n / 10;
//     }
//     cout<<"Sum of digits is "<<sum<<endl;
//     return 0;
// }


//factorial of a number
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number : "<<endl;
//     cin>>n;
//     int factorial = 1;
//     for(int i=1;i<=n;i++){
//         factorial = factorial * i;
//     }
//     cout<<"Factorial of "<<n<<" is "<<factorial<<endl;
//     return 0;
// }



