// BMI.h

#include <iostream>
#include <string>

using namespace std;

#ifndef BMI_H
#define BMI_H

class BMI {
  public:
    // Default Constructor
    BMI();
    
    // Overload Constructor
    BMI(string, int, double);

    // Destructor
    ~BMI();

    // Accessor Functions
    string getName() const;  // returns name of patient
    int getHeight() const;   // returns height of patient
    double getWeight() const; // returns weight of patient
 
    // Mutator Functions
    void setName(string);  // Set name of patient
    void setHeight(int);   // Set height of patient
    void setWeight(double);  // Set weight of patient
    
    double calculateBMI();  // Calculate BMI
       
    
 private:
    // Member variables
    string newName;
    int newHeight;
    double newWeight;
    
};


#endif
