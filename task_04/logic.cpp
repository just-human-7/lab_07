#include "logic.h"
#include <string>
#include <vector>
#include <algorithm>

int toMinutes(const std::string& time) {
    int hours = (time[0] - '0') * 10 + (time[1] - '0');
    int minutes = (time[3] - '0') * 10 + (time[4] - '0');
    return hours * 60 + minutes;
}

int minTimeDifference(const std::vector<std::string>& times) {
    if (times.size() < 2) {
        return 0;
    }

    std::vector<int> mins;
    for (const auto& t : times) {
        mins.push_back(toMinutes(t));
    }

    std::sort(mins.begin(), mins.end());

    int min_diff = 1440;

    for (size_t i = 1; i < mins.size(); ++i) {
        int diff = mins[i] - mins[i-1];
        if (diff < min_diff) {
            min_diff = diff;
        }
    }

    int wrap_diff = 1440 - (mins.back() - mins[0]);
    if (wrap_diff < min_diff) {
        min_diff = wrap_diff;
    }

    return min_diff;
}