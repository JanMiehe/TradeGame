#include <iostream>
#include <cstdlib>
using namespace std;

int money=500;
int input;
int win;
bool game = true;
int lose;

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





        while(input !== 1 && !==2){

            if (input==1){
                
                money+=500;
                cout<<money<<rand()%100;
                break;

            }
            else{


                cout<<"Your coc sucker you can only write 1,2 or 3!!!";
                continue;

            }
        }

    return 0;
    }   
}