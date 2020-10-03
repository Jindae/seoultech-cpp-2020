#include<iostream>
#include<random>
using namespace std;

int main() {

    //상품정보 읽어오기
    string products[100] = {};
    int prices[100][12] = {};

    //실제로는 난수(Random number)를 생성하여 집어넣음.
    random_device rd;
    mt19937 gen(rd());    //초기화.
    uniform_int_distribution<> dist(1000, 10000); //1000~10000원 가격.
    for(int i=0; i<100; i++) {
        products[i] = "product-" + to_string(i);
        for(int j=0; j<12; j++)
            prices[i][j] = dist(gen);
    }

    //1년 평균가격 계산
    double avg_prices[100] = {};
    for(int i=0; i<100; i++) {
        for(int j=0; j<12; j++)
            avg_prices[i] += prices[i][j];
        avg_prices[i] /= 12.0;
    }

    //낮은 가격순 정렬
    int minIdx; double tmp; string tmpStr;//for selection sort.
    for(int i=0; i<100; i++) {
        minIdx = i;
        for(int j=i+1; j<100; j++) {
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

    //정렬된 상품을 출력
    for(int i=0; i<10; i++) {
        cout << products[i] << " - avg. price " << avg_prices[i] << endl;
    }

    return 0;
}