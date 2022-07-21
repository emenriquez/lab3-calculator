# Lab 3 - Simple Calculator
## PART 1
Define your Calculator class here, the class should have *at least* the following attribute
value, a private member that holds the current result of the calculator
add two methods in public
* clear() - will zero the value of the calculator
* display() - will *return* the current result stored in the calculator


## PART 2
the following methods must also be included, all in public
* add()
* subtract()
* multiply()
* divide()
  * make sure that the divide() function can handle errors. Specifically, if a user tries to divide by zero, print an error message and set the result value to zero.


## PART 3
create a constructor to give newly declared calculator objects a value
* add a default value of 0 to the constructor.


### Setup command
N/A

### Run command
`make test`

In order to test functions individually, you can use the following:
`make test try={functionName}`

For example, to try the `subtract()` function, you can run:
`make test try=subtract`

*Note that you will need your `display()` function working before being able to test other functions!

### Notes
- `g++` can be used to compile and link C++ applications for use with existing test harnesses or other C++ testing frameworks.
- If students push `a.out` files, the autograder may attempt to run that version instead of a newly compiled binary. If this happens, and your student isn't on Linux, the script will crash. To fix this issue, it's recommended to clean before building.