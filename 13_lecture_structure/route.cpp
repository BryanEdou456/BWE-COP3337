#include <iostream>
#include <cstd


typedef struct {
// Access specifiers 

private:
    std::string source;
    std::string destination;
    int length;

public:
    // Define a method
    void print(){
        std::cout << source << " -> " << destination << std::endl;
    }
    // Getters (get functions, accessor functions)
    std::string getSource() { 
        return source;
    }

    std::string getDestination() {
        return destination;
    }

    std::string getLength() {
        return length;
    }

    // Set methods (seettters, mutator functions)
    void setSource(std::string& new_source) {
        source = new_source;
        updateLength();
    }

    void setDestination(const std::string& new_dest) { 
        destination = new_dest;
        updateLength();
    }

    // Access specificers (public, private)
    private

} Route; 



public:
    // Constructors are called when the object is created 
    // Constructors should be public
    // Constructors have no return type (not even void)
    // Constructors have the same name as the class
    // Create a no argument constructor
    // Route () {
    //    length = 0;
    //}

    // No argument constructor (different syntax)
    Route() : source("-"), destination("-"), length(0){


    }


int main(void){
    Route spring_break_trip;
    spring_break_trip.setSource = "Lakeland";
    spring_break_trip.setDestination = "Miami";
    

    // Call the method of an object
    spring_break_trip.print(); 

    //  change the direction
    spring_break_trip.setDestination = "New York";

    // Create second Route object 
    Route summer_trip("Lakeland", "Tokyo");
    summer_trip.print(); 

    return 0; 
}