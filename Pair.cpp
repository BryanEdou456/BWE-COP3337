#include <iostream>

// Template Class
template <typename T1, typename T2>
class Pair {
public: 
    Pair(const T1& f, const T2& s) : first(f), second(s) {

    }

    // Getters
    T1 getFirst(){
        return first;
    }

    T2 getSecond(){
        return second;
    }

    // Setters
    void setFirst(const T1& first) {
        this->first = first;
    }
    void setSecond(const T2& second) {
        this->second = second;
    }

private:
    T1 first;
    T2 second;
};


template <typename T1, typenameT2>
Pair<T1, T2> createPair(const T1& f, const T2& s) {
    return Pair<T1, T2>(f, s);
}


int main(void) {
    // Create the pair object 
    Pair<int, double> p(1, 4.5);

    std::cout<< "(" << p.getFirst() << ", " << p.getSecond() << ")\n"

    // Test createPair
    Pair<std::string, char> p2 = createPair(std::string("hello"), '!');
    std::cout << "(" << p2.getFirst() << ", " << p.getSecond() << ")\n";

    auto p3 = createPair(std::string("hello"), std::string("car"));
    std::cout << "(" << p3.getFirst() << ", " << p3.getSecond() << ")\n"

    Pair p4(5, 5.4);

    return 0; 
}