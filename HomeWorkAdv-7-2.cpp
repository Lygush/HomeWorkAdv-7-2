#include <iostream>
#include <vector>
#include <set>
#include <list>

template<class T>
void print_container(T cont) {
    for (const auto& i: cont) {
        std::cout << i << " ";
    }
}

int main() {
    std::set<std::string> test_set = { "one", "two", "three", "four" };
    print_container(test_set);
    std::cout << "\n";

    std::list<std::string> test_list = { "one", "two", "three", "four" };
    print_container(test_list);
    std::cout << "\n";

    std::vector<std::string> test_vector = {"one", "two", "three", "four"};
    print_container(test_vector);
}