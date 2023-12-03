//
//  Default-Sorting.cpp
//  MAANG
//
//  Created by Atikul Gazi on 18/11/23.
//

#include <iostream>

using namespace std;

int main() {
    printf("Hello Default-Sorting\n");
    
    vector<int> numbers = { 109, 3, 7, 2, 199, 201, 1, 100, 123, 5, 10, 3 };
    
    // MARK: - Increasing Order begin
    sort(numbers.begin(), numbers.end());
    for (auto x : numbers) {
        printf("%d < ", x);
    }
    cout << endl;
    
    // MARK: - Descreasing Order greater<int>()
    numbers = { 109, 3, 7, 2, 199, 201, 1, 100, 123, 5, 10, 3 };
    sort(numbers.begin(), numbers.end(), greater<int>());
    for (auto x : numbers) {
        printf("%d < ", x);
    }
    cout << endl;
    
    // MARK: - Descreasing Order using rbegin
    numbers = { 109, 3, 7, 2, 199, 201, 1, 100, 123, 5, 10, 3 };
    sort(numbers.rbegin(), numbers.rend());
    for (auto x : numbers) {
        printf("%d < ", x);
    }
    cout << endl;
}
