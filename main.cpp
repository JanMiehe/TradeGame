#include <iostream>
#include <cstdlib>
using namespace std;

int money=500;
int input;
int win;
int lose;

int main(){
    srant(time(0));
    win=rand()%100;
    lose=rand()%100;
    cout<<win<<"% win:500$ "<<lose<<"% lose:-200$"<<endl;
    cin>>input;
    if (input==1){
        money+=500;
        cout<<money<<rand()%100;
    }
    else{
        cout<<"Your coc sucker you can only write 1,2 or 3!!!";
    }

    return 0;
}