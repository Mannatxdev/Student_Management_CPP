# 🎓 Student Record Management System (C++)

A simple console-based Student Record Management System built using C++.  
This project demonstrates basic Object-Oriented Programming (OOP) concepts and fundamental Data Structures & Algorithms.

---

## 📌 Project Overview

The system allows users to manage student records efficiently through a menu-driven interface.  
It supports adding, displaying, searching, sorting, and saving student data using file handling.

This project was developed as part of summer training to apply core programming and DSA concepts in a practical way.

---

## 🚀 Features

- ➕ Add new student records  
- 📋 Display all student records  
- 🔍 Search student by roll number (Linear Search)  
- 📊 Sort students by marks (Descending Order)  
- 💾 Save student records to a text file  
- ❌ Exit program safely  

---

## 🛠️ Technologies & Concepts Used

- C++  
- Object-Oriented Programming (Class & Objects)  
- STL `vector`  
- Linear Search  
- `std::sort()`  
- Lambda Functions  
- File Handling (`ofstream`)  

---

## 🧠 How It Works

1. User selects an option from the menu.
2. Student data is stored dynamically using `vector`.
3. Search is performed using Linear Search.
4. Sorting is done using STL `sort()` function.
5. Data is saved into a file named `students.txt`.

----

## 🖥️ How to Run the Project

### Step 1: Compile
```bash
g++ student.cpp -o student
