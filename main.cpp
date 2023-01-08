#include <iostream>
#include "Addition.h"
#include "CreateAccount.h"
#include "LoginAccount.h"

using namespace std;

int main()
{
     cout << "***************************************" <<endl;
    cout << "***************************************" <<endl;
    cout << "Welcome to the banking application"<< endl;
    cout << "***************************************" <<endl;
    cout << "***************************************" <<endl;
    cout << "                                       " <<endl;
    cout << "********"                               <<endl;
    cout << "**     **"                              <<endl;
    cout << "**       **"                            <<endl;
    cout << "**        **"                         <<endl;
    cout << "**       ***"                         <<endl;
    cout << "**     **"                        <<endl;
    cout << "**   ****"                      <<endl;
    cout << "**      **"                    <<endl;
    cout << "**        **"                   <<endl;
    cout << "**         **"                 <<endl;
    cout << "**         **"                <<endl;
    cout << "**       **"                    <<endl;
    cout << "**     **"                     <<endl;
    cout << "********"                     <<endl;

    int action ;
    cout <<"Please Respond with the following"<<endl;
    cout<< " 1: Create Account \n 2: Login To Account" <<endl;
    cin>> action;
    if(action == 1){

        createAccount();
        main();
    }
    else if(action == 2){
        loginAccount();
        main ();

    }


    return 0;
}
