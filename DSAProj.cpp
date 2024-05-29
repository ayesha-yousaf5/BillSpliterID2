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
//this funtion is done by TUBA KHAN.
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
