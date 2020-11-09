#include<iostream>
#include<vector>
#include<cmath>
#include<functional>
#include "classes/OnlineStore.hh"

const double EPS = 0.00001;
bool equals(double, double);

bool test1();
bool test2();
bool test3();

int main() {
    int passed = 0;
    std::vector<std::function<bool()>> tests = { test1, test2, test3 };
    for(std::function<bool()> test : tests) {
        if(test())
            passed++;
    }
    std::cout << passed << "/" << tests.size() << " tests passed. " << std::endl;
    return passed == tests.size() ? 0 : 1;
}

bool equals(double x, double y) {
    double delta = std::abs(x-y);
    return delta <= EPS;
}

bool test1() {
    int psize = 5;
    OnlineStore store(psize);
    bool added = true;
    for(int i=1; i<=psize; i++) {
        Product p("P", 1000*i, 1.0);
        added &= store.addProduct(p);
    }
    Product p("px", 500, 0.5);
    if(!added || store.addProduct(p) 
        || store.getNumOfProducts() != psize)
        return false;
    return true;
}

bool test2() {
    int psize = 5;
    OnlineStore store(psize, 2.0, 5.0);
    bool added = true;
    for(int i=1; i<=psize; i++) {
        Product p("P", 1000*i, 1.0+i);
        store.addProduct(p);
    }
    double price;
    bool result = true;
    price = store.purchase(0, 1.0);
    result &= price == 1000;
    result &= store.getNumOfProducts() == 4;
    price = store.purchase(1, 3.0);
    result &= equals(price, (2000 + 3.0*100.0*3.0));
    price = store.purchase(1, 1.0);
    result &= equals(price, -1.0);

    return result;
}

bool test3() {
    DeliveryService ds(2.0, 5.0);
    bool result = true;
    double weight = 1.0;
    double dist = 10.0;
    const double UNIT_PRICE = 100.0;
    result &= !(ds.deliveryPrice(weight, dist));
    weight=3.0;    
    result &= equals(ds.deliveryPrice(weight, dist), (UNIT_PRICE * weight * dist));
    weight=7.0;
    result &= equals(ds.deliveryPrice(weight, dist), (UNIT_PRICE * weight * dist * 1.2));
    return result;
}