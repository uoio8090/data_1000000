#include <iostream>
#include <fstream>
#include <vector>

int main() {
    std::ifstream fin("data_1000000.txt");

    const size_t N = 1'000'000;

    std::vector<int> v;
    v.reserve(N);

    int x;
    for (int i = 0; i < N; i++) {
        fin >> x;
        v.push_back(x);
    }

    fin.close();

    std::cout << v[0] << '\n';
    std::cout << "read = " << v.size() << '\n';
}

