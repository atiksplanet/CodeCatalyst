//
//  Default-Sorting-Custom-Comparator.cpp
//  MAANG
//
//  Created by Atikul Gazi on 18/11/23.
//

#include <iostream>

using namespace std;

struct Pair {
    int key, value;
};

bool CustomComparator(Pair l, Pair r) {
    if (l.key == r.key) {
        return l.value > r.value;
    } else {
        return (l.key > r.key);
    }
}

int main() {
    printf("Hello ~~ Default-Sorting-Custom-Comparator\n");
    
    // MARK: - Work With Default Pair
    vector<pair<string, int>> namesRoll = {
        {"A", 3},
        {"B", 2},
        {"d", 201},
        {"A", 1},
        {"z", 100},
        {"a", 5},
        {"C", 3},
        {"A", 2},
    };
    
    // TODO: - Increasing Order begin
    sort(namesRoll.begin(), namesRoll.end());
    cout << "After Descreasing Sort Values\n";
    for (auto x : namesRoll) {
        printf("[%s, %d]\n", x.first.c_str(), x.second);
    }
    
    // TODO: - Increasing Order begin
    sort(namesRoll.begin(), namesRoll.end(), greater<pair<string, int>>());
    cout << "After Increasing Sort Values\n";
    for (auto x : namesRoll) {
        printf("[%s, %d]\n", x.first.c_str(), x.second);
    }
    
    // MARK: - Work With Custom Struct
    vector<Pair> numbers = {
        {109, 3},
        {7, 2},
        {199, 201},
        {1, 100},
        {123, 5},
        {10, 3},
        {109, 4},
        {109, 2},
    };
    
    cout << "Original Values\n";
    for (auto x : numbers) {
        printf("[%d, %d]\n", x.key, x.value);
    }
    
    // TODO: - Increasing Order begin
    sort(numbers.begin(), numbers.end(), CustomComparator);
    cout << "After Increasing Sort Values\n";
    for (auto x : numbers) {
        printf("[%d, %d]\n", x.key, x.value);
    }
    
    // MARK: - Work With Array
    int arr[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
    // WAY - 1
    sort(arr, arr + 7);
    auto b = begin(arr);
    auto e = end(arr);
    // WAY - 2
    sort(b, e);
    
    vector<int> arrayToVector({ 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 });
    sort(arrayToVector.begin(), arrayToVector.begin() + 6);
    cout << "After NonIncreasing Sort first 7 Values\n";
    for (auto x : arrayToVector) {
        printf("%d\n", x);
    }
}
