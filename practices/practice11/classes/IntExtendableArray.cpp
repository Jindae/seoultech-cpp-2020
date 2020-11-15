#include "IntExtendableArray.hh"

//제대로 정의되지 않은 부분이 있다면 추가하세요.

bool IntExtendableArray::extend(int capacity) {
    /* 
     * capacity만큼 elements의 크기를 늘림.
     * 
     * 만약 capacity만큼 늘어난 배열의 크기가 MAX_SIZE를
     * 넘으면 false를 반환하고 확장하지 않음.
     * 
     * 다음의 동작을 구현하여 크기를 늘릴 수 있습니다.
     * capacity만큼 늘어난 새로운 배열을 동적 할당.
     * 기존 배열에 있던 원소들을 모두 새 배열로 복사.
     * elements가 새 배열을 가리키도록 변경.
     * 기존 배열은 적절하게 처분함.
     * 확장이 완료되면 true 반환.
     */
}

bool IntExtendableArray::set(int index, int n) {
    /*
     * index에 대한 검사를 추가합니다.
     * 만약 index가 현재 배열의 정상 인덱스 범위를 넘어서면,
     * 이 인덱스를 포함하도록 배열을 확장하고 주어진 index에
     * 정수 n을 원소로 집어넣습니다.
     * 
     * 확장에 실패하는 경우는 원소를 넣지 않고 false를 반환.
     */
}

bool IntExtendableArray::add(int n) {
    /*
     * 현재 배열의 가장 뒤에 정수 n을 추가합니다.
     * e.g.) 현재 배열 크기가 10이라면 index 10에 n을 추가.
     * n을 추가하기 위해 배열의 크기는 INIT_SIZE만큼 증가시킵니다.
     * 여전히 배열 크기는 MAX_SIZE를 넘지 않아야 합니다.
     * 
     * 정수 n을 추가하는데 성공하면 true, 아니면 false를 반환.
     */
}