<div align="center">

# 💻 C++ Lab Programs — ASETK

### 🎓 A curated collection of C++ laboratory programs

[![Language](https://img.shields.io/badge/Language-C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)](https://isocpp.org/)
[![Standard](https://img.shields.io/badge/C%2B%2B_Standard-C%2B%2B11-00599C?style=for-the-badge)](https://en.wikipedia.org/wiki/C%2B%2B11)
[![License](https://img.shields.io/badge/License-MIT-green?style=for-the-badge)](LICENSE)
[![Build](https://img.shields.io/badge/Build-Passing-brightgreen?style=for-the-badge)](#-programs)
[![Last Updated](https://img.shields.io/badge/Updated-2026-blue?style=for-the-badge)](#)

</div>

---

## 📌 About

This repository contains the **C++ programs** completed during the laboratory
sessions of the course. Each program is written in clean, well-structured
standard C++ and verified to compile without errors or warnings using
`g++` with `-Wall -Wextra`.

The goal of this repository is to maintain a neat, professional, and easily
navigable record of all lab work — organized by topic for quick reference.

---

## 📂 Repository Structure

```text
C-Plus-Plus-Lab-ASETK/
├── 📄 README.md
├── 📄 LICENSE
├── 📄 .gitignore
└── 📁 Programs/
    ├── 📁 01_Functions/
    │   ├── call_by_value.cpp
    │   ├── call_by_reference.cpp
    │   └── call_by_value_and_reference.cpp
    └── 📁 02_Palindrome/
        ├── palindrome_number.cpp
        └── palindrome_string.cpp
```

---

## 🧪 Programs

| 🔢 No. | 🗂️ Category        | 📝 Program                       | 🎯 Concept Demonstrated                          |
| :---: | :----------------- | :------------------------------- | :----------------------------------------------- |
| 01    | Functions          | `call_by_value.cpp`              | Passing arguments by value                       |
| 02    | Functions          | `call_by_reference.cpp`          | Passing arguments by reference                   |
| 03    | Functions          | `call_by_value_and_reference.cpp`| Comparison of value vs. reference passing        |
| 04    | Palindrome         | `palindrome_number.cpp`          | Checking if a number is a palindrome             |
| 05    | Palindrome         | `palindrome_string.cpp`          | Checking if a string is a palindrome             |

> 💡 *New experiments are added under their relevant category folder as the
> lab progresses. If a suitable category does not exist, a new numbered folder
> is created.*

---

## 🚀 How to Compile & Run

All programs are plain C++ console applications. You only need a C++ compiler
such as **g++**, **clang++**, or **MSVC**.

### 🔧 Using g++ (Linux / macOS / Windows MinGW)

```bash
# Navigate to the program directory
cd Programs/01_Functions

# Compile
g++ -std=c++11 -Wall -Wextra call_by_value.cpp -o call_by_value

# Run
./call_by_value
```

### 💻 Using Visual Studio / Code::Blocks

1. Open the `.cpp` file in your IDE.
2. Build / Compile the project.
3. Run the generated executable.

---

## ✅ Verification

Every program in this repository has been compiled and executed successfully:

```text
$ g++ -Wall -Wextra -std=c++11 <program>.cpp -o out
# ✅ Compiles with zero errors and zero warnings
```

---

## 🛠️ Tech & Tools

- **Language:** C++ (ISO C++11)
- **Compiler:** GCC / MinGW (`g++`)
- **Editor:** Visual Studio Code
- **Platform:** Cross-platform (Windows, Linux, macOS)

---

## 📜 License

This project is licensed under the **MIT License** — see the
[`LICENSE`](LICENSE) file for details.

---

<div align="center">

### ⭐ If this repository helped you, consider giving it a star! ⭐

Made with 💙 for the C++ Laboratory — **ASETK**

</div>
