#include<iostream>

using namespace std;

//     int number1;
//     int number2;
//     cout<<"enter number 1\n"<<"enter number 2"<<endl;
//     cin>>number1>>number2;
//     int hn=(number1>number2)? number1:number2;
//      if (number1 == 0 && number2 == 0) {
//         cout << "LCM is undefined for (0, 0)." << endl;
//         return 0;
//     }

//     if (number1 == 0 || number2 == 0) {
//         cout << "LCM is 0" << endl;
//         return 0;
//     }
//     for(int i=hn; ;i=i+hn)
//     if(i% number1==0 && i% number2==0)
//     {
//         cout<<"lcm is\n"<<i;
//         break;
//     }
//     return 0;

// }
// #include <iostream>
// using namespace std;
// int main(){
// int number;
// cout<<"enter the number"<<endl;
// cin>>number;
// int count=0;
// for(int i=1; i<=number; i++){
// if(number%i==0 ){
// count++;
// }
// }
// if(count==2){
// cout<<"its a prime number"<<endl;
// }
// else{
// cout<<"its not a prime number"<<endl;
// }
// return 0;
// }
// #include <iostream>
// using namespace std;
// int main(){
// int number;
// int factorial=1;
// cout<<"enter a number"<<endl;
// cin>>number;
// for(int i= 1; i<=number; i++){
// factorial=factorial*i; 
// }
// cout<<factorial;
// return 0;
// }
// #include <iostream>
// using namespace std;
// int main(){
// int number;
// cout<<"enter a number to reverse"<<endl;
// cin>>number;
// int rev=0;
// int i=number;
// for(; i!=0;){

// int digits= i%10;
// rev=rev*10+digits;
// i= i/10;

// }
// cout<<rev;
// return 0 ;
// }

// int number;
// cout << "Guess a number between 1 and 100: ";
// cin >> number;

// while(number != 17) {
//     if(number < 17) {
//         cout << "Too low, try again: "<<endl;
//     } else if(number > 17) {
//         cout << "Too high, try again: "<<endl;
//     }
//     cin >> number;
// }

// cout << "Yay! You guessed it right!" << endl;
// return 0;
// }

bool checkWin(char c1, char c2, char c3,
              char c4, char c5, char c6,
              char c7, char c8, char c9) {
    // rows
    if (c1 == c2 && c2 == c3) return true;
    if (c4 == c5 && c5 == c6) return true;
    if (c7 == c8 && c8 == c9) return true;
    // cols
    if (c1 == c4 && c4 == c7) return true;
    if (c2 == c5 && c5 == c8) return true;
    if (c3 == c6 && c6 == c9) return true;
    // diagonals
    if (c1 == c5 && c5 == c9) return true;
    if (c3 == c5 && c5 == c7) return true;

    return false;
}

void drawBoard(char c1, char c2, char c3,
               char c4, char c5, char c6,
               char c7, char c8, char c9) {
    // clear screen (Windows -> cls, Linux/Mac -> clear)
    system("cls");  // try this if you’re on Windows
    // system("clear"); // use this if Linux/Mac

    cout << "Tic Tac Toe Game\n";
    cout << "\n";
    cout << c1 << " | " << c2 << " | " << c3 << endl;
    cout << "--+---+--" << endl;
    cout << c4 << " | " << c5 << " | " << c6 << endl;
    cout << "--+---+--" << endl;
    cout << c7 << " | " << c8 << " | " << c9 << endl;
}

int main() {
    char c1='1', c2='2', c3='3',
         c4='4', c5='5', c6='6',
         c7='7', c8='8', c9='9';

    int move;
    char turn = 'X'; // Player X starts

    for (int round = 0; round < 9; round++) {
        drawBoard(c1,c2,c3,c4,c5,c6,c7,c8,c9);

        cout << "\nPlayer " << turn << ", enter a number (1-9): ";
        cin >> move;

        char* cell = nullptr;
        if (move == 1) cell = &c1;
        else if (move == 2) cell = &c2;
        else if (move == 3) cell = &c3;
        else if (move == 4) cell = &c4;
        else if (move == 5) cell = &c5;
        else if (move == 6) cell = &c6;
        else if (move == 7) cell = &c7;
        else if (move == 8) cell = &c8;
        else if (move == 9) cell = &c9;

        if (cell == nullptr || *cell == 'X' || *cell == 'O') {
            cout << "Invalid move! Press Enter to try again.";
            cin.ignore(); cin.get();
            round--;
            continue;
        }

        *cell = turn;

        if (checkWin(c1,c2,c3,c4,c5,c6,c7,c8,c9)) {
            drawBoard(c1,c2,c3,c4,c5,c6,c7,c8,c9);
            cout << "\nPlayer " << turn << " wins!\n";
            return 0;
        }

        turn = (turn == 'X') ? 'O' : 'X';
    }

    drawBoard(c1,c2,c3,c4,c5,c6,c7,c8,c9);
    cout << "\nIt's a draw!\n";
    return 0;
}

