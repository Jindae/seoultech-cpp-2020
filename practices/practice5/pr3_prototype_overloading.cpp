#include<iostream>
#include<random>
using namespace std;

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
    for(int i=0; i<size; i++)
        avg_prices[i] = 0.0;
        
    for(int i=0; i<size; i++) {
        for(int j=0; j<12; j++)
            avg_prices[i] += prices[i][j];
        avg_prices[i] /= 12.0;
    }
}

void print_products(string* products, double* avg_prices) {
    for(int i=0; i<5; i++) {
        cout << products[i] << " - avg. price " << avg_prices[i] << endl;
    }
}

void sort(string* products, double* avg_prices, int size);
void sort(string* products, double* avg_prices);
void sort(double* avg_prices, int size);
void sort(double* avg, int n);
void sort(double* avg);
void sort(double* avg_prices, int size, bool descending);

int main() {

    //상품정보 읽어오기
    string products[100] = {};
    int prices[100][12] = {};
    read_data(products, prices, 100);
    //1년 평균가격 계산
    double avg_prices[100] = {};
    compute_avg_price(prices, avg_prices, 100);
    //낮은 가격순 정렬 - 상품 가격만
    sort(avg_prices, 100);
    //정렬된 상품을 출력
    print_products(products, avg_prices); 

    //평균 다시 계산.
    compute_avg_price(prices, avg_prices, 100);
    //낮은 가격순 정렬
    sort(products, avg_prices, 100);
    //정렬된 상품을 출력
    print_products(products, avg_prices);

    return 0;
}

void sort(string* products, double* avg_prices, int size) {
    cout << "상품 이름 - 가격 동시 정렬." << endl;
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

void sort(double* avg_prices, int size) {
    cout << "상품 가격만 정렬." << endl;
    int minIdx; double tmp;//for selection sort.
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
        }
    }
}

void sort(double* avg_prices, int size, bool descending) {
    cout << "내림차순 가격 정렬" << endl;
    int index; double tmp;//for selection sort.
    for(int i=0; i<size; i++) {
        index = i;
        for(int j=i+1; j<size; j++) {
            if(descending && avg_prices[j] > avg_prices[index])
                index = j;
            else if(!descending && avg_prices[j] < avg_prices[index])
                index = j;
        }
        if(index != i) {
            tmp = avg_prices[i];
            avg_prices[i] = avg_prices[index];
            avg_prices[index] = tmp;
        }
    }
}