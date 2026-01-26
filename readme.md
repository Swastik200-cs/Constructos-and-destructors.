# Constructor of Derived Class in C++ (OOPS)

## 📌 Overview

In **C++ Object-Oriented Programming (OOPS)**, when a class is derived from another class, the **constructor of the derived class** is responsible for initializing its own data members, while the **base class constructor** initializes the inherited members.

Understanding the constructor behavior in inheritance is important for proper object initialization and exam preparation.

---

## 🧠 What is a Derived Class Constructor?

A **derived class constructor** is a special member function of the derived class that is automatically invoked when an object of the derived class is created. It ensures that:

* The base class part of the object is initialized first
* Then the derived class data members are initialized

---

## 🔁 Order of Constructor Execution

When an object of a derived class is created:

1. **Base class constructor** is called first
2. **Derived class constructor** is called next

This order is fixed and independent of the order written in the program.

---

## 🔧 General Syntax

### 🔹 Single Inheritance

```
class BaseClass {
    // base class members
};

class DerivedClass : access_specifier BaseClass {
    // derived class members
};
```

### 🔹 Constructor Initialization (Conceptual)

```
DerivedClass(parameters) : BaseClass(parameters) {
    // initialization of derived class members
}
```

---

## 📂 Key Points to Remember

* Base class constructor is called **automatically**
* Derived class constructor cannot directly initialize base class members
* Parameters can be passed to the base class constructor
* Constructor execution follows a **top-down inheritance order**

---

## 📚 Exam-Oriented Definition

> A **constructor of a derived class** is a special member function that initializes the derived class object and ensures that the base class constructor is executed first.

---

## ⚠️ Important Notes

* If no base class constructor is specified, the **default base class constructor** is called
* In multiple inheritance, base class constructors are called in the **order of inheritance**
* Destructors are called in the **reverse order** of constructors

---

## 🏁 Conclusion

The constructor of a derived class plays a crucial role in object initialization in inheritance. By ensuring proper execution of base and derived class constructors, C++ maintains data consistency and supports robust object-oriented design.

---

✨ *A key inheritance concept in C++ OOPS for exams, practicals, and understanding object initialization.*
