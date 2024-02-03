# CPP00

## Namespace

A way to scope a variable, method or anything else in the code. Allows us to have multiple functions with the same name, specifying the namespace to call the correct function.\
A namespace is a declarative region that provides a scope to the identifiers (the names of types, functions, variables, etc) inside it. Namespaces are used to organize code into logical groups and to prevent name collisions that can occur especially when your code base includes multiple libraries.\

Eg:
```CPP
// Two classes with the same function name
ClassOne {
	void print(std::string name);
}
ClassTwo {
	void print(void);
}
ClassOne::print("name");
ClassTwo::print(void);

//OR

#include <iostream>
using namespace ClassOne; //using namespace

print("name"); //no need to write ClassOne::;
```
`::` - scope resolution operator.

## cin vs getline

It is possible to use the extraction operator `>>` on `cin` to store a string entered by a user: `cin >> name`.\
However, `cin` considers a space (whitespace, tabs, etc) as a terminating character, which means that it can only store a single word (even if many words are typed);\
That's why, when working with strings, we often use the `getline()` function to read a line of text. It takes `cin` as the first parameter, and the string variable as second: `getline(cin, name)`.

## OOP vs Procedural programming

- OOP is faster and easier to execute.
- OOP provides a clear structure for the programs.
- OOP helps to keep the C++ code DRY (Don't Repeat Yourself), and makes the code easier to maintain, modify and debug.
- OOP makes it possible to create full reusable applications with less code and shorter development time.

## Class vs Object

A class is a template for objects, and an object is an instance of a class. When the individual objects are created, they inherit all the variables and functions from the class.

Classes have attributes and member functions, basically variables and functions that belong to the class. They are often referred as "class members".

A class is a user-defined data type that we can use in our program, and it works as an object constructor, or a "blueprint" for creating objects.

Instances created inside a function are destroyed when the function returns.

A class is a user-defined data type, similar to C++ structures. It works as a blueprint for creating objects. A class is **static** while an instance is a **dynamic** instantiation of a class.

## Constructor function

Special member functions inside a class that is automatically called whenever a new class object is created. Always has the same name as the class itself and doesn't return anything.

We can have multiple constructors (**Default constructor**, **named constructor** and **full constructor**) using **initialization lists**:

```CPP
Class Car {
public:
	Car(); // Default constructor, everything is set by the callee.
	Car(std::string brand); // Named constructor, other values are set by the callee.
	Car(std::string brand, std::string model, int year); // Full constructor, everything is set by the callee.
private:
	std::string _brand;
	std::string _model;
	int _year;
}

Car::Car(void) {
	std::cout << "Car is born\n";
	_brand = "";
	_model = "";
	_year = 0;
	return;
}

Car::Car(std::string brand) : _brand(brand), _model("Mustang"), _year(1969) {
	std::cout << "Car is born\n";
	return;
}

Car(std::string brand, std::string model, int year) : _brand(brand), _model(model), _year(year) {
	std::cout << "Car is born\n";
	return;
}

int main() {
	Car car1;
	Car car2("Ford");
	Car car3("Ford", "Mustang", 1969);
}
```

## Encapsulation

The meaning of **Encapsulation** is to make sure that "sensitive" data is hidden from users. To achieve this, you must declare cass variables/attributes as **private** (cannot be accessed from outside the class). If you want others to read or modify the value of a private member, you can provide public **get** and **set** methods.

It is considered good practice to declare your class attributes as private (as often as possible). Encapsulation ensures better control of your data, because you (or others) can change one part of the code without affecting other parts. It also increases security of data.

## Member vs non-member attributes and functions

In order to use **member** attributes/functions, the class needs to be instantiated. Each attribute will be different in each instance.

**Non-member** variables and functions exist at the class level, and not at the instance level.

Use `static` keyword.\
No `this->` pointer.

Non-members are initially defined in the .cpp file. Eg: `ClassName::_variable = 0;`.

## [**std::str**](https://web.stanford.edu/class/archive/cs/cs106b/cs106b.1132/handouts/08-C++-Strings.pdf)

**Important**: When using (std::string str) as parameter, it takes a copy from the calling function to the destination function. It is not fast to dynamically allocate a string to create a copy. If you are not going to modify the string, send it as a const &, in this way, it will not create a copy.