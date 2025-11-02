# 📘 File Size Analyzer – A Simple File Inspection Tool in C

The **File Size Analyzer** is a lightweight and efficient C program that reads any file, calculates its size in bytes and kilobytes, and displays its content when applicable. It automatically determines whether the file is a **text**, **CSV**, or **binary** file based on its extension, ensuring accuracy and ease of use without requiring manual input.

---

## 🔹 Features

- **Automatic File Type Detection** – Determines file type based on extension (`.txt`, `.csv`, or others).  
- **Accurate File Size Calculation** – Uses `fseek()` and `ftell()` to measure exact size in bytes and kilobytes.  
- **Displays Readable File Content** – Prints text or CSV file content directly in the console.  
- **Handles Binary Files Safely** – Prevents unreadable or corrupted output for binary data.  
- **Error Detection** – Handles missing, inaccessible, or invalid files gracefully.

---

## 🧠 Technical Overview

This project demonstrates:
- File handling in C using standard library functions:  
  `fopen`, `fseek`, `ftell`, `rewind`, `fgetc`, and `fclose`
- String manipulation and extension detection using:  
  `strrchr` and `strcmp`
- Conditional file mode handling: `"r"` for text files, `"rb"` for binary files
- Efficient use of pointers and iteration for size and content retrieval

---

## 🚀 Usage

```bash```
gcc file_size_analyzer.c -o file_size_analyzer
./file_size_analyzer
```bash```