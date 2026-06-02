#include "logic.h"

#include <vector>
#include <set>

int cross(
    const std::vector<int>& a,
    const std::vector<int>& b,
    const std::vector<int>& c
) {

    return (b[0] - a[0]) * (c[1] - a[1]) -
           (b[1] - a[1]) * (c[0] - a[0]);
}

std::vector<std::vector<int>> outerTrees(
    std::vector<std::vector<int>>& trees
) {

    if (trees.size() <= 3) {
        return trees;
    }

    size_t left = 0;

    for (size_t i = 1; i < trees.size(); i++) {

        if (trees[i][0] < trees[left][0]) {
            left = i;
        }
    }

    std::set<std::vector<int>> hull;

    size_t p = left;

    do {

        size_t q = (p + 1) % trees.size();

        for (size_t i = 0; i < trees.size(); i++) {

            if (cross(trees[p], trees[q], trees[i]) < 0) {
                q = i;
            }
        }

        for (size_t i = 0; i < trees.size(); i++) {

            if (
                i != p &&
                i != q &&
                cross(trees[p], trees[q], trees[i]) == 0
            ) {

                hull.insert(trees[i]);
            }
        }

        hull.insert(trees[q]);

        p = q;

    } while (p != left);

    return std::vector<std::vector<int>>(
        hull.begin(),
        hull.end()
    );
}