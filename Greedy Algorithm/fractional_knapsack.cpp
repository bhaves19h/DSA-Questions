#include <bits/stdc++.h>
using namespace std;

struct Item {
    int value, weight;
};

bool cmp(Item a, Item b) {
    double r1 = (double)a.value / a.weight;
    double r2 = (double)b.value / b.weight;
    return r1 > r2; // descending order
}

double fractionalKnapsack(int W, Item arr[], int n) {
    sort(arr, arr + n, cmp); // sort by value/weight ratio
    double res = 0.0;
    int capacity = W;

    for (int i = 0; i < n; i++) {
        if (arr[i].weight <= capacity) {
            res += arr[i].value;
            capacity -= arr[i].weight;
        } else {
            res += arr[i].value * ((double)capacity / arr[i].weight);
            break; // bag full
        }
    }
    return res;
}

int main() {
    Item arr[] = {{60, 10}, {100, 20}, {120, 30}};
    int W = 50;
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << fractionalKnapsack(W, arr, n) << endl;
    return 0;
}
