# Constructors and Destructors in C++ (OOPS)

## 📌 Overview

In **Object-Oriented Programming (OOPS)** using C++, **constructors** and **destructors** are special member functions of a class. They are automatically invoked to **initialize objects** and **release resources** respectively, ensuring proper object lifecycle management.

---

## 🧠 Constructor

A **constructor** is a special member function of a class that is automatically called when an object is created.

### 🔑 Key Characteristics

* Has the **same name as the class**
* **No return type** (not even `void`)
* Automatically invoked at the time of object creation
* Used to **initialize data members** of a class

---

## 📘 Types of Constructors

### 1️⃣ Default Constructor

A constructor that takes **no arguments** is called a default constructor.

**Features:**

* Initializes objects with default values
* Provided by the compiler if no constructor is defined

---

### 2️⃣ Parameterized Constructor

A **parameterized constructor** accepts parameters and initializes objects with **user-defined values**.

**Features:**

* Allows passing arguments during object creation
* Helps in assigning different values to different objects
* Increases flexibility and control

---

### 3️⃣ Copy Constructor

A copy constructor initializes a new object using an **existing object of the same class**.

**Features:**

* Used when an object is passed by value
* Prevents shallow copy issues

---

## 🧠 Destructor

A **destructor** is a special member function that is automatically called when an object goes **out of scope or is destroyed**.

### 🔑 Key Characteristics

* Name is same as the class name, preceded by a **tilde (~)**
* Takes **no arguments** and has **no return type**
* Used to **free memory and resources**

---

## 🔄 Constructor vs Destructor

| Constructor               | Destructor                   |
| ------------------------- | ---------------------------- |
| Initializes objects       | Destroys objects             |
| Called at object creation | Called at object destruction |
| Same name as class        | Same name with `~` prefix    |
| Can be overloaded         | Cannot be overloaded         |

---

## ✅ Advantages

* Ensures proper initialization of objects
* Helps in memory and resource management
* Improves program safety and reliability
* Supports object-oriented design principles

---

## 📚 Exam-Oriented Definitions

**Constructor:**

> A constructor is a special member function of a class that is automatically invoked when an object is created to initialize data members.

**Parameterized Constructor:**

> A parameterized constructor is a constructor that accepts parameters to initialize objects with specific values.

**Destructor:**

> A destructor is a special member function that is automatically called when an object is destroyed to release resources.

---

## 🏁 Conclusion

Constructors and destructors play a vital role in C++ OOPS by managing the **creation, initialization, and cleanup** of objects. Proper use of constructors (including parameterized constructors) and destructors leads to efficient, safe, and well-structured programs.

---

✨ *An essential topic for C++ exams, practicals, and object-oriented programming fundamentals.*
