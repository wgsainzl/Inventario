//
// Created by willy on 25/11/2024.
//

#ifndef INVENTORY_H
#define INVENTORY_H

#include <string>
#include <unordered_map>

using namespace std;



class Inventory {
private:
    unordered_map<string, int> products;
public:
    void addProduct(string& name, int quantity);
    int getProduct(string& name);
    bool removeProduct(string& name);

};



#endif //INVENTORY_H
