#include "OnlineStore.hh"

OnlineStore::OnlineStore (int stockSize, double freeDist, double extraDist) {
    //미완성 생성자에 코드 추가하여 완성.
    this->products = new Product[stockSize];
    this->stockSize = stockSize;
    this->service = new DeliveryService(freeDist, extraDist);
}

bool OnlineStore::addProduct(const Product& p) {
    //p와 동일한 상품정보를 products 내에 빈 공간(정보가 없는 공간)을 찾아 추가.
    //성공적으로 추가되면 상품개수를 1증가시키고 true 반환.
    //만약 현재 products에 여유가 없다면 false 반환.    
}

void OnlineStore::displayProduct() {
    for(int i=0; i<this->stockSize; i++) {
        Product p = this->products[i];
        std::cout << "Product " << p.getName() << ": price - " << p.getPrice() 
            << ", weight - " << p.getWeight() << std::endl;
    }
}

double OnlineStore::purchase(int pNum, double distance){
    /* pNum에 상품이 있는 경우 (상품 이름이 ""가 아닌 경우) 구매에 필요한 가격을 반환.
     * 구매가격 = 상품가격 + 배송비용.
     * 배송비용은 배송거리(distance)를 이용해 주어진 상품에 대해 DeliveryService::deliveryPrice()로 계산.
     * pNum에 상품이 없는 경우 -1.0을 반환.
     * 
     * 구매한 상품은 products에서 제거 - removeProduct()호출.
     * 상품개수 감소.
     * 구매가격만큼 deposit 증가.
     */
}

void OnlineStore::removeProduct(int pNum) {
    /* products에서 pNum 상품을 제거.
     * 상품제거는 이름, price, weight를 "", 0, 0으로 초기화하는 방식으로.
     * 상품제거에 따라 바꿔야 할 데이터 업데이트 수행.
     */
}

long OnlineStore::getDeposit(){
    return this->deposit;
}

int OnlineStore::getSize() {
    return this->stockSize;
}

int OnlineStore::getNumOfProducts() {
    return this->numOfProducts;
}

OnlineStore::~OnlineStore() {
    //적절한 작업을 수행.
}