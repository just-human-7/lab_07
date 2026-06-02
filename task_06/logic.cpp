#include "logic.h"
#include <stack>
#include <string>
#include <cctype>

int calculate(std::string str) {

    std::stack<int> st;

    int result = 0;
    int number = 0;
    int sign = 1;

    for (int i = 0; i < str.size(); i++) {

        if (isdigit(str[i])) {

            number = 0;

            while (i < str.size() && isdigit(str[i])) {
                number = number * 10 + (str[i] - '0');
                i++;
            }

            result += sign * number;

            i--;
        }

        else if (str[i] == '+') {
            sign = 1;
        }

        else if (str[i] == '-') {
            sign = -1;
        }

        else if (str[i] == '(') {

            // сохраняем прошлый результат
            st.push(result);

            // сохраняем знак перед скобкой
            st.push(sign);

            // начинаем новое выражение
            result = 0;
            sign = 1;
        }

        else if (str[i] == ')') {

            int prevSign = st.top();
            st.pop();

            int prevResult = st.top();
            st.pop();

            result = prevResult + prevSign * result;
        }
    }

    return result;
}