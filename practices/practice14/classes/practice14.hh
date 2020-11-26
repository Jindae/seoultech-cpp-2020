#include<functional>
#include<algorithm>
#include<vector>

/*
 * 두 개의 int정수를 입력받아 그 최대공약수(Greatest Common Divisor)를
 * 반환하는 Functor gcd를 구현하세요.
 * Hint: private 멤버함수로 gcd_rec를 구현한 후, 
 * 이를 Functor에서 호출하면됩니다.
 */
class gcd {
    private:
    public:
};

/*
 * 두 개의 int형 벡터를 입력받고, 두 벡터를 오름차순으로 정렬한 뒤,
 * 두 벡터의 원소들 사이에서 gcd를 구해 둘 중 하나의 벡터에 저장하는 함수를
 * 구현하세요.
 * 만약 두 벡터의 크기가 다른 경우, 작은 벡터의 원소에 맞추어 계산하고 값을 저장합니다.
 * 만약 두 벡터의 크기가 같은 경우, 최소값이 더 작은 벡터에 저장하세요.
 * 최소값도 같다면 v2에 저장하세요.
 * 
 * 가능하면 위에서 구현한 gcd Functor와 transform()을 써서 구현하시기 바랍니다.
 * e.g.)
 * v1 = {1, 4, 2, 3}, v2 = {6, 3, 4}
 * get_gcd(v1, v2);
 * v1 = {1, 2, 3, 4}, v2 = {1, 2, 3}
 * 
 * v1 = {1, 2, 3}, v2 = {3, 4, 5}
 * get_gcd(v1, v2);
 * v1 = {1, 2, 1}, v2 = {3, 4, 5}
 */

void get_gcd(std::vector<int>& v1, std::vector<int>& v2) {

}