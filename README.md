# Aim: To study and implement Inheritance
# Software Required:
Visual Studio
# Theory:
Inheritance is a fundamental concept in OOP (Object Oriented Programming). It is the mechanism by which one class is allowed to inherit the features (fields and methods) of another class. Inheritance means creating new classes based on existing ones. A class that inherits from another class can reuse the methods and fields of that class.

Types of Inheritance in C++

<img width="986" height="654" alt="image" src="https://github.com/user-attachments/assets/4020271e-f6bf-47c1-a554-6810f070c1bb" />

1. Single Inheritance
In single inheritance, a sub-class is derived from only one super class. It inherits the properties and behavior of a single-parent class. Sometimes, it is also known as simple inheritance.

2. Multiple Inheritance
In Multiple inheritance, one class can have more than one superclass and inherit features from all parent classes.

3. Multilevel Inheritance
Multilevel inheritance in C++ means a class is derived from another derived class, forming a chain of inheritance.

4. Hierarchical Inheritance
In hierarchical inheritance, more than one subclass is inherited from a single base class. i.e. more than one derived class is created from a single base class. For example, cars and buses both are vehicle.

<ins>Advantages of Inheritance in C++</ins>:
+ Code Reusability : Derived class can directly reuse data members and methods of its base class, avoiding code duplication.
+ Abstraction : Supports abstract classes (classes with pure virtual functions) that define a common interface, enforcing abstraction.
+ Class Hierarchy : You can build hierarchies (base → derived → further derived) to model real-world relationships.
+ Polymorphism : Fully supports runtime polymorphism through virtual functions, and also compile-time polymorphism via function overloading and templates.
# Implementation:
To demonstrate Inheritance in C++ the following codes have been implemented,
+ Single Inheritance
+ Multiple Inheritance
+ Multilevel Inheritance
+ Hierarchy Inheritance
+ Access Specifier in Inheritance (Protected)
# Algorithms:

Algorithm: Single Inheritance (Animal and Dog)

1. Start
2. Define a base class `Animal`:

   * Public member function `eat()` to display `"This animal eats food."`
3. Define a derived class `Dog` that publicly inherits `Animal`:

   Public member function `bark()` to display `"The dog barks."`
4. In `main()`:
   1. Create an object `myDog` of class `Dog`.
   2. Call `myDog.eat()` to invoke the inherited function from `Animal`.
   3. Call `myDog.bark()` to invoke the function defined in `Dog`.
5. End

Algorithm: Multiple Inheritance (Car inherits Vehicle and Specs)

1. Start
2. Define base class `Vehicle`:

   * Public string `company` initialized as `"Toyota"`.
   * Public member function `type()` to display `"Fortuner"`.
3. Define base class `Specs`:
   * Public string `mileage` initialized as `"15 kmpl"`.
   * Public member function `colour()` to display `"White"`.
4. Define derived class `Car` that publicly inherits `Vehicle` and `Specs`:
   * Public string `seater` initialized as `"4 seater"`.
5. In `main()`:
   1. Create an object `f2` of class `Car`.
   2. Call `f2.colour()` from `Specs`.
   3. Print `f2.company` from `Vehicle`.
   4. Call `f2.type()` from `Vehicle`.
   5. Print `f2.seater` and `f2.mileage` from `Car` and `Specs`.
6. End

Algorithm: Multilevel Inheritance (Library inherits Title, Title inherits Book)

1. Start
2. Define base class `Book`:
   * Public string `genre` initialized as `"Adventure"`.
   * Public member function `type()` to display `"Novel"`.
3. Define derived class `Title` that publicly inherits `Book`:
   * Public string `title` initialized as `"The Three Musketeers"`.
4. Define derived class `Library` that publicly inherits `Title`:
   Public string `name` initialized as `"Central Library"`.
5. In `main()`:
   1. Create an object `b3` of class `Library`.
   2. Call `b3.type()` from `Book`.
   3. Print `b3.genre` and `b3.title` from `Book` and `Title`.
   4. Print `b3.name` from `Library`.
6. End

Algorithm: Hierarchical Inheritance (Fruit → Apple/Banana/Cherry)

1. Start
2. Define base class `Fruit`:

    Public string array `type[3]` containing `"Apple"`, `"Blueberry"`, `"Cherry"`.
   Public member function `supplier()` to display `"Great Farms Ltd."`.
3. Define derived classes `Apple`, `Blueberry`, `Cherry` that each publicly inherit `Fruit`:
   `Apple` has public string `color = "Red"`.
    `Blueberry` has public string `color = "Dark Blue"`.
     `Cherry` has public string `color = "Dark Red"`.
4. In `main()`:
   1. Create object `f1` of class `Apple`.
      Call `f1.supplier()`.
        Print `f1.type[0]` and `f1.color`.
   2. Create object `f2` of class `Blueberry`.

      Call `f2.supplier()`.
        Print `f2.type[1]` and `f2.color`.
   3. Create object `f3` of class `Cherry`.

      Call `f3.supplier()`.
        Print `f3.type[2]` and `f3.color`.
5. End

Algorithm: Accessing Protected Members in Inheritance

1. Start
2. Define a base class `Parent`:
   `protected` integer `protectedValue`.
     Constructor initializes `protectedValue = 42`.
3. Define a derived class `Child` that publicly inherits `Parent`:

   Public member function `showProtected()` displays `protectedValue`.
4. In `main()`:
   1. Create object `obj` of class `Child`.
   2. Call `obj.showProtected()` to print the inherited `protectedValue`.
5. End


# Conclusion:
The above codes Demonstrates Inheritance an important OOP Concept of C++.
