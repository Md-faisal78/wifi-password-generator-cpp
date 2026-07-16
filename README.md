# Wi-Fi Password Generator (C++)

A simple command-line application written in **C++** that generates strong, random Wi-Fi passwords. The program allows users to specify the desired password length and creates a secure password using a combination of uppercase letters, lowercase letters, numbers, and special characters.

## Features

- Generate secure random Wi-Fi passwords
- Custom password length (8–32 characters)
- Includes:
  - Uppercase letters (A–Z)
  - Lowercase letters (a–z)
  - Numbers (0–9)
  - Special characters
- Ensures at least one character from each character category
- Randomly shuffles characters for improved randomness
- Simple command-line interface

## Technologies Used

- C++
- Standard Template Library (STL)
- `<random>` for random number generation
- `<algorithm>` for shuffling

## Project Structure

```
wifi-password-generator/
│
├── main.cpp
└── README.md
```

## Getting Started

### Prerequisites

- A C++ compiler that supports C++11 or later
  - g++
  - MinGW
  - MSVC
  - Clang

### Compile

```bash
g++ .\wifipswdgen.cpp
```

### Run

```bash
./a.exe
```


## Example

```
Wifi Password Generator
Enter password length: 16

Generated Wi-Fi Password:
A$8k!2Zm#Q7vLp@9
```

## How It Works

1. The user enters the desired password length.
2. The program validates the input (8–32 characters).
3. It guarantees at least one:
   - Uppercase letter
   - Lowercase letter
   - Digit
   - Special character
4. The remaining characters are selected randomly.
5. The final password is shuffled before being displayed.

## Future Improvements

- [ ] Password strength indicator
- [ ] Option to include/exclude symbols
- [ ] Option to include/exclude numbers
- [ ] Copy password to clipboard
- [ ] Save generated passwords to a file
- [ ] Generate multiple passwords at once
- [ ] Graphical User Interface (GUI)

## Learning Objectives

This project demonstrates:

- Random number generation in C++
- String manipulation
- Input validation
- STL algorithms
- Basic software design
- Command-line application development

## License

This project is open source and available under the MIT License.