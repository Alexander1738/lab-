#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <iterator>

using namespace std;

vector<int> insert_at_position(vector<int>& arr, int index, int value) {
    arr.insert(arr.begin() + index, value); 
    return arr;
}

vector<int> get_words() {
    string line;
    getline(cin, line);
    istringstream ss(line);
    vector<int> v;
    copy(istream_iterator<int>(ss), istream_iterator<int>(), back_inserter(v)); //Он берет числа из строки и записывает их в массив
    return v;
}

void print_vector(vector<int>& v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i];
        if (i != v.size() - 1) cout << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = get_words();

    int index;
    cin >> index;

    int value;
    cin >> value;

    vector<int> res = insert_at_position(arr, index, value);
    print_vector(res);

    return 0;
}
