#include "DeliveryService.hh"

DeliveryService::DeliveryService(double free, double extra) {
    freeWeight = free;
    extraWeight = extra;
}

double DeliveryService::deliveryPrice(double weight, double distance) {
    /* 무게(weight)가 freeWeight 이하이면 무료.
     * 무게가 extraWeight 이상이면 20% 추가가격.
     * 그 외에는 무게 * 단가(UNIT_PRICE)
     * 위에서 계산한 가격에 거리를 곱하여 가격 계산.
     */
}

double DeliveryService::deliveryPrice(const Product& p, double distance) {
    //p의 무게를 가지고 위와 동일한 규칙적용.
}
