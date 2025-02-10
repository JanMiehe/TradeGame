#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <ctime>


using namespace std;

bool game = true;
int money=500;
int input;
int win;
int lose;
int winMoney;
int loseMoney;
double persentache;

int col(int a){
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    return SetConsoleTextAttribute(h, a);
    
}

int main(){

    srand(time(0)); // the random number is generated from hier
    
   cout << "-- This is a test to identify if you are a solo or a single Player --" << endl;
   cout<<"bankacount: "<<money<<"$"<<endl<<endl;

    while(money > 0){

        win =  rand()%100;
    
        lose = 100 - win;
        winMoney = rand()%10 * 100;
        loseMoney = rand()%10 * 100;

        persentache = rand()%100;

        col(2);
        cout<<win<<"% win: "<<winMoney<<"$ ";
        col(4);
        cout<<lose<<"% lose: -"<<loseMoney<<"$ "<<endl;
        col(7);

        cout << "[1] go trading [2] stay in harbor" << endl;

        cin>>input;
        
        cout<<"--Next Day--"<<endl;

        if (input==1){
            if(persentache<=win){
                money+=winMoney;
                cout<<"Ship returnd"<<endl<<"bankacount: "<<money<<"$ ";
                col(2);
                cout<<"+"<<winMoney<<"$"<<endl<<endl;
                col(7);
            }
            else{
                money-=loseMoney;
                
                cout<<"Ship losed"<<endl<<"bankacount: "<<money<<"$ ";
                col(4);
                cout<<"-"<<loseMoney<<"$"<<endl<<endl;
                col(7);
            }
        }   
        
    }
    
    cout<<"bankruptcy";
    return 0;
}