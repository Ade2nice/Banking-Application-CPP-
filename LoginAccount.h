#include <iostream>
#include <fstream>
#include <string>
using namespace std;

 int checkBalance(string username, string password){
    string  dataUsername, dataPassword;
    string dataAmount;
    ifstream read("Data\\" + username + ".txt");
    getline(read, dataUsername);
    getline(read, dataPassword);
    getline(read, dataAmount);
    cout << "Your current balance is " +  dataAmount <<endl;

   return 0;

   }

 int transferFunds(string username, string password){
     string transferToUsername, dataUsername,dataPassword,dataAmount;
     string senderUsername,senderPassword,senderAmount;
     int transferAmount, sendAmount;
    cout <<"Please enter username to funds to" <<endl;
    cin>>transferToUsername;
    cout <<"Please enter amount to transfer to" <<endl;
    cin>>transferAmount;

    ifstream read("Data\\" + username + ".txt");
    getline(read, senderUsername);
    getline(read, senderPassword);
    getline(read, senderAmount);
    sendAmount = stoi(senderAmount);
    read.close();
    read.clear();

    read.open("Data\\" + transferToUsername + ".txt");
    getline(read, dataUsername);
    getline(read, dataPassword);
    getline(read, dataAmount);


    if(transferToUsername == dataUsername && sendAmount >= transferAmount){

            int newBalance = stoi(dataAmount) + transferAmount;
            int senderBalance = sendAmount - transferAmount;
            ofstream file;
              file.open("Data\\" + transferToUsername + ".txt");
              file << dataUsername << endl;
              file << dataPassword <<endl;
              file << newBalance <<endl;
              file.close();


              file.open("Data\\" + senderUsername + ".txt");
              file << senderUsername << endl;
              file << senderPassword <<endl;
              file << senderBalance <<endl;
              file.close();

              cout<<"Your transfer was successful"<<endl;
    }
    else if (transferToUsername != dataUsername){
        cout<<"Sorry, we could not find username"<<endl;
    }
    else if(transferToUsername == dataUsername && sendAmount < transferAmount){
        cout <<"Sorry, you do not not have sufficient balance"<<endl;
    }
    else {
        cout <<"Sorry, something went wrong"<<endl;
        return 0;
    }

    return 0;
 }




void loginAccount(){
    string username, password, dataUsername, dataPassword;
    int action ;
    cout <<"Please enter your username" <<endl;
    cin >> username;
    cout <<"Please enter your password" <<endl;
    cin >> password;

    ifstream read("Data\\" + username + ".txt");
    getline(read, dataUsername);
    getline(read, dataPassword);

    if ( dataUsername == username && dataPassword == password){
        cout <<"You have successfully logged in"<<endl;
        cout <<"Please Respond with the following"<<endl;
        cout<< " 1: To check balance  \n 2: To transfer" <<endl;
        cin>> action;
        if(action == 1){
            checkBalance(username,password);
        }
        else if(action == 2 ){

            transferFunds(username,password);
        }

    }
    else{
        cout<<"Invalid Login Credentials" <<endl;

    }


}
