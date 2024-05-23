
#include<iostream>
#include<unordered_map>
#include<string>
#include<stdlib.h>
using namespace std;
class Bill{
    unordered_map<string, double>payment;
    public:
 void calculate(){ 
   string payer;
    string payee;
    double amount;
    string friends;
    int n;
     cout<<"Please enter the number of friends"<<endl;
     cin>>n;
     cout <<"enter the name of payer"<<endl;
     cin>>payer;
     cout<<" enter the name of payee"<<endl;
     cin>>payee;
      cout<<"enter the amount of total bill"<<endl;
     cin>>amount;
    double splitAmount;

    splitAmount= amount/(n-1);
    payment[payer]-=amount; 
    payment[payee]+=splitAmount;

    for(int i =0 ; i<n ; i++){
        cout<<"Enter your friends name: "<<endl;
        cin>>friends;
        if(friends!= payer && friends!= payee){
            payment[friends]-=splitAmount;
        }
        }
        }

        void display(){
            cout<<" Everyone needs to pay the amount as following:"<<endl;
            for(auto f= payment.begin(); f!=payment.end() ; f++){
                string friends= f->first;
                double balance= f->second;

            
            if(balance>0){
                cout<<friends<<" =  need to collect rupees: "<<balance<<endl;
            }
            else if(balance<0){
                cout<<friends<<"  =  need to pay rupees: "<<-balance<<endl;
            }
            else{
                cout<<friends<<" = no balance"<<endl;
            }

        }
        }
};
