// *****PART 1*****
// Define your Calculator class here, the class should have *at least* the following attribute
// value, a private member that holds the current result of the calculator
// add the two methods below, which must be public methods
//      clear() - will zero the value of the calculator
//      display() - will *return* the current result stored in the calculator

// *****PART 2*****
// add the following methods, all in public
//      add()
//      subtract()
//      multiply()
//      divide()

// *****PART 3*****
// create a constructor to give newly declared calculator objects a value
// add a default value of 0 to the constructor.

class Calculator {
    private:
        float value;
    public:
        void add(float num) {value+=num;}
        void subtract(float num) {value-=num;}
        void multiply(float num) {value *=num;}
        void divide(float num) {
            if (num != 0){value/= num;}
            else {value = 0;}
        }
        void clear() {value = 0;}
        float display() {return value;}
        Calculator(float inVal = 0) {value=inVal;}
};
