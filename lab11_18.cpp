#include <iostream>
#include <string>
using namespace std;

struct Coats {
    string brand;
    double price;
    string color;
    string size;
};

int main() {
    int n;
    int max = -99999999;
    cout << "Enter the number of coats: ";
    cin >> n;

    Coats coat[n];

    for(int i = 0; i < n; i++) {
        cout << "Coat " << i + 1 << ": " << endl;
        cout << "Coat's brand: ";
        cin >> coat[i].brand;

        cout << "Price: ";
        cin >> coat[i].price;

        cout << "Color: ";
        cin >> coat[i].color;

        cout << "Size: ";
        cin >> coat[i].size;
    }
    int max_index = 0;
    for(int i = 0; i < n; i++) {
        if(coat[i].price > max) {
            max = coat[i].price;
            max_index = i;
        }
    }

    cout << "      " << endl;
    cout << "Coat's name: " << coat[max_index].brand << endl;
    cout << "Price: " << coat[max_index].price << endl;
    cout << "Color: " << coat[max_index].color << endl;
    cout << "Size: " << coat[max_index].size << endl;
    cout << "      " << endl;
}