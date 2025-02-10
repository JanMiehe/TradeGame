#include <iostream>
#include <cstdlib>
using namespace std;

bool game = true;
int money=500;
int input;
int win;
int lose;
int winMoney;
int loseMoney;
double persentache;

int main(){
    
   cout << "-- This is a test to identify if you are a solo or a single Player --" << endl;
   cout<<"bankacount: "<<money<<"$"<<endl<<endl;

    while(money > 0){

         srand(time(0)); // the random number is generated from hier
    
         win =  rand()%100;
    
        lose = 100 - win;
        winMoney = rand()%10 * 100;
        loseMoney = rand()%10 * 100;

        persentache = rand()%100;


        cout<<win<<"% win: "<<winMoney<<"$ "<<lose<<"% lose: -"<<loseMoney<<"$ "<<endl;

        cout << "[1] go trading [2] stay in harbor" << endl;

        cin>>input;
        
        cout<<"--Next Day--"<<endl;

        if (input==1){
            if(persentache<=win){
                money+=winMoney;
                cout<<"Ship returnd"<<endl<<"bankacount: "<<money<<"$"<<" +"<<winMoney<<"$"<<endl<<endl;
            }
            else{
                money-=loseMoney;
                cout<<"Ship losed"<<endl<<"bankacount: "<<money<<"$"<<" -"<<loseMoney<<"$"<<endl<<endl;
            }
        }   
        
    }
    
    cout<<"bankruptcy";
    return 0;