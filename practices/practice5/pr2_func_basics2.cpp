#include<iostream>
#include<random>
using namespace std;

void read_data(string* products, int prices[][12], int size);
void compute_avg_price(int prices[][12], double* avg_prices, int size);

void sort(string*, double*, int);

void print_products(string* products, double* avg_prices);

int main() {

    //상품정보 읽어오기
    string products[100] = {};
    int prices[100][12] = {};
    read_data(products, prices, 100);

    //1년 평균가격 계산
    double avg_prices[100] = {};
    compute_avg_price(prices, avg_prices, 100);

    //낮은 가격순 정렬
    sort(products, avg_prices, 100);

    //정렬된 상품을 출력
    print_products(products, avg_prices); 

    return 0;
}

void read_data(string* products, int prices[][12], int size) {
    //실제로는 난수(Random number)를 생성하여 집어넣음.
    random_device rd;
    mt19937 gen(rd());    //초기화.
    uniform_int_distribution<> dist(1000, 10000); //1000~10000원 가격.
    for(int i=0; i<size; i++) {
        products[i] = "product-" + to_string(i);
        for(int j=0; j<12; j++)
            prices[i][j] = dist(gen);
    }
}

void compute_avg_price(int prices[][12], double* avg_prices, int size) {
    for(int i=0; i<size; i++) {
        for(int j=0; j<12; j++)
            avg_prices[i] += prices[i][j];
        avg_prices[i] /= 12.0;
    }
}

void sort(string* products, double* avg_prices, int size) {
    int minIdx; double tmp; string tmpStr;//for selection sort.
    for(int i=0; i<size; i++) {
        minIdx = i;
        for(int j=i+1; j<size; j++) {
            if(avg_prices[j] < avg_prices[minIdx])
                minIdx = j;
        }
        if(minIdx != i) {
            tmp = avg_prices[i];
            avg_prices[i] = avg_prices[minIdx];
            avg_prices[minIdx] = tmp;
            tmpStr = products[i];
            products[i] = products[minIdx];
            products[minIdx] = tmpStr;
        }
    }
}

void print_products(string* products, double* avg_prices) {
    for(int i=0; i<10; i++) {
        cout << products[i] << " - avg. price " << avg_prices[i] << endl;
    }
}