#include "logic.h"
#include <string>
#include <sstream>

void parseSide(const std::string& side, int& coeff_x, int& constant) {
    coeff_x = 0;
    constant = 0;
    
    std::string s = side + "+";
    std::string token;
    char sign = '+';

    for (char c : s) {
        if (c == '+' || c == '-') {
            if (!token.empty()) {
                int value = 0;
                bool is_x = false;
                bool has_digit = false;

                for (char ch : token) {
                    if (ch == 'x') {
                        is_x = true;
                    } else if (ch >= '0' && ch <= '9') {
                        value = value * 10 + (ch - '0');
                        has_digit = true;
                    }
                }

                // Если число не было указано (просто "x" или "-x") — value = 1
                if (!has_digit && is_x) {
                    value = 1;
                }

                if (is_x) {
                    if (sign == '+') coeff_x += value;
                    else coeff_x -= value;
                } else {
                    if (sign == '+') constant += value;
                    else constant -= value;
                }

                token.clear();
            }
            sign = c;
        } else {
            token += c;
        }
    }
}

std::string solveEquation(const std::string& equation) {
    size_t eq_pos = equation.find('=');
    if (eq_pos == std::string::npos) {
        return "NO";
    }

    std::string left = equation.substr(0, eq_pos);
    std::string right = equation.substr(eq_pos + 1);

    int left_x = 0, left_const = 0;
    int right_x = 0, right_const = 0;

    parseSide(left, left_x, left_const);
    parseSide(right, right_x, right_const);

    int total_x = left_x - right_x;
    int total_const = left_const - right_const;

    if (total_x == 0) {
        if (total_const == 0) {
            return "Infinite";
        } else {
            return "NO";
        }
    }

    int result = -total_const / total_x;
    return "x=" + std::to_string(result);
}