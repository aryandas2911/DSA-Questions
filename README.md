# 🧠 DSA Questions — LeetCode Solutions in C++

A personal collection of **LeetCode problem solutions** solved to strengthen Data Structures & Algorithms fundamentals. Every solution is written in **C++**, tested locally, and organized by topic and difficulty for easy revision.

---

## 📂 Project Structure

```
Topic/
├── Easy/       ← Beginner-friendly problems
├── Medium/     ← Intermediate problems
└── Hard/       ← Advanced problems
```

Each problem is a standalone `.cpp` file. Some also include a precompiled `.exe`.

> Solutions span **7 topics** — with regular additions from contests and daily practice.

---

## 📊 Progress Overview

| Topic | Easy | Medium | Hard |
|-------|:----:|:------:|:----:|
| [Array](./Array) | ✅ | ✅ | ✅ |
| [Binary Search](./Binary%20Search) | ✅ | ✅ | ✅ |
| [String](./String) | ✅ | ✅ | — |
| [Math](./Math) | ✅ | ✅ | — |
| [Sorting](./Sorting) | ✅ | — | — |
| [Hash Table](./Hash%20Table) | ✅ | ✅ | — |
| [Two Pointers](./Two%20Pointers) | ✅ | — | — |

---

## 🧩 Solution Format

Every `.cpp` file follows this structure:

```cpp
// Ques Link: https://leetcode.com/problems/<problem>/description/

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    <returnType> <method>(<params>)
    {
        // algorithm body
    }
};

int main()
{
    Solution sol;
    // test case setup
    // method call
    // output result
    return 0;
}
```

- **Header comment** links back to the original LeetCode problem
- **`Solution` class** matches LeetCode's expected method signatures exactly
- **`main()` function** includes hardcoded test cases for local verification

---

## ⚙️ Build & Run

All solutions are compiled and tested locally using:

```bash
# Compile
g++ -std=c++17 -g "<file>.cpp" -o "<file>.exe"

# Run
./"<file>.exe"
```

### Environment

| Tool | Spec |
|------|------|
| **Compiler** | GCC (MSYS2 UCRT64) — `g++` |
| **Standard** | C++17 |
| **Debugger** | GDB |
| **Editor** | VS Code with C/C++ extension |
| **Build task** | `g++ -g "${file}" -o "${fileDirname}\\${fileBasenameNoExtension}.exe"` |

---

## 📚 Topics Covered

### 🔷 Array
Fundamental data structure. Covers two-pointer techniques, sliding window, prefix sums, in-place manipulation, matrix traversal, and subarray problems.

### 🔷 Binary Search
Divide-and-conquer searching on sorted data and on answers (predicate-based).

### 🔷 String
Text processing, pattern matching, palindrome checks, parsing, and string transformations.

### 🔷 Math
Number theory, digit manipulation, bitwise operations, and mathematical puzzles.

### 🔷 Sorting
Sorting-based solutions and problems where sorting simplifies the logic.

### 🔷 Hash Table
Problems leveraging hash maps and sets for O(1) lookups.

### 🔷 Two Pointers
Classic two-pointer technique on arrays and strings.

---

## 🏆 Weekly & Biweekly Contests

Solutions from LeetCode contests are also maintained.

---

## 🛠️ Git History

- Tracking the full DSA journey over many commits
- Commit messages follow the pattern: `(Leetcode) <Number>. <Name>` with optional tags like `(solved)`, `(optimized)`, `(updated solution)`
- The repo was restructured early on to group problems by **LeetCode topic tags** (commit `f7d9d40`)

---

## 📌 Notes

- Each file is **self-contained** — no shared headers or utilities
- Build artifacts (`.exe` files) are present in the directories for convenience
- ⚠️ `.vscode/` is gitignored (local editor config not tracked)

---

> *Consistent practice — one commit at a time.*
