#include <iostream>
#include <fstream>
#include <random>
#include <vector>

int main() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(0, 11000);

    std::vector<int> v(1000000);
    for (int& x : v) x = dist(gen);

    std::ofstream fout("data.txt");
    for (int x : v) fout << x << '\n';

    fout.close();
}
