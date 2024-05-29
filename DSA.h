#ifndef DSA_H
#define DSA_H

#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>

using namespace std;

class Bill {
public:
    unordered_map<string, double> p1;
    vector<string> names; 

    void add(const string &name);
    void calculate(const string &payer, double amount, vector<string> &Payeee);
    void display() const;
};

#endif 
