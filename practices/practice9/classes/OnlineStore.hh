#ifndef ONLINESTORE_H_
#define ONLINESTORE_H_
#include <iostream>
#include "Product.hh"
#include "DeliveryService.hh"

class OnlineStore{
    private:
        Product* products;
        DeliveryService* service;
        long deposit;   //상품 판매로 번 돈.
        int stockSize;  //상품 저장공간 크기.
        int numOfProducts;  //현재 들어있는 상품 수.
        void removeProduct(int pNum); //상품을 제거.
    public:        
        OnlineStore(int stockSize, double freeWeight=0.0, double extraWeight=0.0);
        bool addProduct(const Product& p);  //상품을 추가.
        void displayProduct();  //상품 정보 표시.
        double purchase(int pNum, double distance); //상품 구매 처리.        
        long getDeposit();
        int getSize();
        int getNumOfProducts();
        ~OnlineStore();
};
#endif