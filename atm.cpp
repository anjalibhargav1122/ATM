
#include <iostream>

using namespace std;

class deposit{

public:
int amount ;

void myfun(){
    cout<<"Enter deposit amount : ";
    cin>>amount;
    cout<<"your amount is "<<amount<<endl;
}

};

class withdrow : public deposit {

public :
int balance = 0;

void myfunt(){
  cout<<"Enter withdrow balance : ";
cin>>balance;


if(balance <= amount){

cout<<"withdrow successfully";
}

else{


cout<<"you can not withdrow because Your total amount is "<<amount;

}
}



};

int main(){


withdrow withd;


withd.myfun();
withd.myfunt();
}




