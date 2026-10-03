
# 🔗 Linked List in C

A **Linked List** is a linear data structure where elements (nodes) are connected using pointers. Unlike arrays, linked lists do not require contiguous memory locations.

This repository contains my implementation and practice of different types of Linked Lists using **C programming**.

## 📌 Linked Lists Covered

* ✅ Singly Linked List
* ✅ Circular Linked List
* ⏳ Doubly Linked List — *Coming Soon*

---

## 1️⃣ Singly Linked List

In a **Singly Linked List**, each node contains:

* `data` → stores the value
* `next` → stores the address of the next node

### Structure

```text
[Data | Next] → [Data | Next] → [Data | Next] → NULL
```

### Operations Implemented

* Create a node
* Display / Traverse the list
* Insert at beginning
* Insert at end
* Insert at a specific position
* Delete from beginning
* Delete from end
* Delete from a specific position

---

## 2️⃣ Circular Linked List

In a **Circular Linked List**, the last node does not point to `NULL`. Instead, it points back to the first node.

### Structure

```text
        ┌─────────────────────────────┐
        ↓                             │
[Data | Next] → [Data | Next] → [Data | Next]
        ↑                             │
        └─────────────────────────────┘
```

### Operations Implemented

* Display / Traversal
* Insert at beginning
* Insert at end
* Insert at a specific position
* Delete from beginning
* Delete from end
* Delete from a specific position

The program uses a **menu-driven approach**, so the user can select the required operation at runtime.

---

## 3️⃣ Doubly Linked List

🚧 **Currently in Progress**

The Doubly Linked List implementation will include:

* Node creation
* Forward traversal
* Backward traversal
* Insert at beginning
* Insert at end
* Insert at a specific position
* Delete from beginning
* Delete from end
* Delete from a specific position

### Expected Structure

```text
NULL ← [Prev | Data | Next] ⇄ [Prev | Data | Next] ⇄ [Prev | Data | Next] → NULL
```

---

## 📂 Repository Structure

```text
Linked-List/
│
├── singly_linked_list.c
├── circular_linked_list.c
├── doubly_linked_list.c    # Coming Soon
└── README.md
```

> Currently, the Singly and Circular Linked List implementations are available. The Doubly Linked List will be added soon.

---

## 🛠️ Technologies Used

* **Language:** C
* **Concepts:** Data Structures, Pointers, Dynamic Memory Allocation
* **Compiler:** GCC / Any standard C compiler

---

## 🎯 Learning Goals

Through this repository, I am practicing:

* Understanding linked-list concepts
* Working with structures in C
* Understanding pointers
* Dynamic memory allocation using `malloc()` and `free()`
* Insertion and deletion operations
* Traversal techniques
* Menu-driven programs
* Comparing different types of linked lists

---

## 📈 Progress

| Linked List          | Status        |
| -------------------- | ------------- |
| Singly Linked List   | ✅ Completed   |
| Circular Linked List | ✅ Completed   |
| Doubly Linked List   | ⏳ In Progress |

---

## 👨‍💻 About

This repository is part of my **Data Structures and Algorithms (DSA) practice in C**.

I am building this step-by-step to strengthen my understanding of linked lists, pointers, memory management, and core data-structure concepts.

⭐ If you find this repository useful, feel free to explore the code and follow my learning journey.
