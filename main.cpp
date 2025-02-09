#include <iostream>
#include <cstdlib>
using namespace std;

bool game = true;
int money=500;
int input;
int win;
int lose;
int persentache;

int main(){
    srand(time(0)); // the random number is generated from hier
    
    win =  rand()%100;
    
    lose = 100 - win;


   cout << "-- This is a test to identify if you are a solo or a single Player --" << endl;

    while(game){

         srand(time(0)); // the random number is generated from hier
    
         win =  rand()%100;
    
        lose = 100 - win;




        cout<<win<<"% win: 500$ "<<lose<<"% lose: -200$"<<endl;

        cout << "Type (1) for Option 1 \nType (2) for option2" << endl;

        cin>>input;



        persentache=rand()%100;


        if (input==1){
            if(persentache<=win){
                money+=500;
                cout<<money;
            }
            else{
                money-200;
                cout<<money;
            }
    }   
    return 0;
}