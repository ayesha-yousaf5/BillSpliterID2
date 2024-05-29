#include "DSA.h"
#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>

using namespace std;


    void Bill::add( const string& name) {
        if(p1.find(name) == p1.end()) {
            p1[name] = 0;
            names.push_back(name);
        }
    }

    void Bill::calculate( const string& payer, double amount,  vector<string>& Payeee) {
        if (p1.find(payer) == p1.end()) {
            cout<<"Warning!!! The Payer is not included in friends. But now , it is added."<<endl;
            add(payer); 
            
        }

        for ( string & payee : Payeee) {
            if (p1.find(payee) == p1.end()) {
                add(payee);
                 
            }
        }

        double splitAmount = amount / Payeee.size();

        p1[payer] -= amount;

        for ( auto &payee : Payeee) {
            if (payee != payer) {
                p1[payee]-= splitAmount;
            }
        }
    }
void Bill::display()const{
            cout<<" \n Everyone needs to pay the amount as following:\n "<<endl;
            for(auto f= p1.begin(); f!=p1.end() ; f++){
                string friends= f->first;
                double balance= f->second;

            
            if(balance>0){
                cout<<friends<<" =  needs to collect rupees:\n "<<balance<<endl;
            }
            else if(balance<0){
                cout<<friends<<"  =  needs to pay rupees:\n "<<-balance<<endl;
            }
            else{
                cout<<friends<<" = need to pay or collect no balance.\n"<<endl;
            }

        }
        }



// int main() {
//     Bill b1;

//     int numFriends;
//     cout << "Enter the number of friends: "<<endl;
//     cin >> numFriends;
//     cin.ignore();

//     for (int i = 0; i < numFriends; ++i) {
//         string name;
//         cout << "Enter the name of friend " << i + 1 << ": "<<endl;
//         getline(cin, name);
  
//         b1.add(name);
//               cout<<"   .  "<<endl;
//     }

//     int outings;
//     cout << "Enter the number of outings or other bills\n : "<<endl;
//     cin >> outings;
//     cin.ignore();
//     cout<<"<----START ENTERING DATA OF PAYERS AND PAYEES--->"<<endl;
//     for (int i = 0; i < outings; ++i) {
//         string payer;
//         cout << "Enter the name of the payer: "<<endl;
//         getline(cin, payer);

//         int npayee;
//         cout << "Enter the number of payee: "<<endl;
//         cin >> npayee;
//         cin.ignore();

//         double amount;
//         cout << "Enter the total amount: "<<endl;
//         cin >> amount;
//         cin.ignore();

//         vector<string> Payeee; 
//         for (int j = 0; j < npayee; ++j) {
//             string payee;
//             cout << "Enter the name of payee " << j + 1 << ": ";
//             getline(cin, payee);
//             if (b1.p1.find(payee) == b1.p1.end()) {
//                 cout << "The " << payee << " is not among the friends, but now added as a friend." << endl;
//                 b1.add(payee);
//             }
//             Payeee.push_back(payee); 
//         }

//         b1.calculate(payer, amount, Payeee);
//     }

//     cout << "THE FINAL REPORT OF ALL FRIENDS:" << endl;
//     b1.display();

//     return 0;
// }