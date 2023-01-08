#include <iostream>
#include <ctime>
#include <fstream>
#include <string>
using namespace std;



void createAccount(){
     string username, password;
     int amount;
     cout  <<"Welcome to our banking system" <<endl;
     cout <<"Please enter your name" <<endl;
     cin >> username;
     cout <<"create a password" <<endl;
     cin >> password;
     cout <<"Please fund your account, enter an amount" <<endl;
     cin >> amount;

     ofstream file;
     file.open("Data\\" + username + ".txt");
     file << username  << endl;
     file <<password <<endl;
     file << amount <<endl;
     file.close();

     cout << " Hello " + username + " Thank you for registering" <<endl;









}
