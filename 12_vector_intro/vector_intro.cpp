#include <iostream>
#include <vector>

int main(void) { 
    // Create a vector

    std::vector<int> v; // Empty vector of integers

    // Create and initialize
    std::vector<int> v2 {7, 8, 9, 10, 11, 12};
    print(v2)

    std::vector<int> v3(5, 15);
    print(v3)

    std::vector<int> v4(v3)
    print(v4);

    std::cout << "Size: " << v2.size() << std::endl;

    // first and last elements
    std::cout << "First: " << v2.front() << std::endl;
    std::cout << "Last: " << v2.back() << std::endl;

    v.push_back(100);
    v.push_back(200);

    print(v);

    v2.pop_back();
    print(v2);

    // begin() - points to the first element in the vector 
    // end() - points to the one past the last element in the vector

    std::cout << *v2.begin() << std::endl;
    std::cout << *v2.begin() + 2 << std::endl;

    v2.insert(v2.begin() + 1, 900);
    print(v2); 


    return 0;
}

void print(const std::vector<int>& v) {
    for (int i = 0; i < v.size(); i++) {
            
        }
    }