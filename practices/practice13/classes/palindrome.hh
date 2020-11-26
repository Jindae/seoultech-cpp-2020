#include<string>
#include<iterator>
#include<vector>

/*
 * Palindrome은 앞으로 읽어도, 거꾸로 읽어도 똑같은 것을 말합니다.
 * e.g.) 
 * "abba" == "abba" palindrome.
 * "abc" != "cba" not palindrome.
 * "ab<>ba" == "ab><ba" not palindrome.
 * 
 * vector에 대해서도 똑같이 생각해 볼 수 있습니다.
 * {1, 2, 1} == {1, 2, 1} palindrome.
 * {3, 1, 2} == {2, 1, 3} not palindrome.
 */

/*
 * 주어진 문자열 str이 palindrome이면 true, 아니면 false.
 * Hint: string도 char의 컨테이너로 볼 수 있고, iterator가 제공됩니다.
 * 우리가 vector등에 대해 배운 것처럼 똑같이
 * begin(), end(), rbegin(), rend()를 사용할 수 있습니다.
 * iterator의 데이터형에 주의하세요.
 * 
 */
bool is_palindrome(const std::string& str) {
    std::string::const_iterator it = str.begin();
    std::string::const_reverse_iterator rit = str.rbegin();

    return true;
}

/* 
 * 주어진 문자열 str로 시작하는 palindrome을 만들어 반환.
 * e.g.)
 * str = "abcd";
 * make_palindrome("abcd") -> "abcdcba"
 * str = "123";
 * make_palindrome("abcd") -> "12321"
 * 
 * 마지막을 제외하고 반대로 뒤집어서 뒤에 붙이면 됩니다.
 * vector처럼 push_back()을 사용할 수 있습니다.
 */
std::string make_palindrome(const std::string& str) {

}

/* vector<int>에 대해서도 똑같은 함수들을 구현.
 * string에 대한 is_palindrome과 template을 
 * 사용하여 합칠 수 있는지 생각해보세요.
 */
bool is_palindrome(const std::vector<int>& v) {
    auto it = v.begin();
    auto rit = v.rbegin();
}

std::vector<int> make_palindrome(const std::vector<int>& v) {

}