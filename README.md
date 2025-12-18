# ✂️ Rock Paper Scissors - C++ Console Game

## 📢 Author's Note
> **Topic:** C++ Basic Game Logic & Functions
>
> - 🌏 **I'm not good at English!**
> - 🤖 Gemini only helped me complete the comments and translation.
> - 👨‍💻 **All code is mine, no copy.**
> - ⏱️ This topic took me **15 minutes**.

## 📝 About The Project
This is a classic **Rock, Paper, Scissors** game played against the Computer (NPC).
The project demonstrates the use of **Functions**, **Randomization**, and **Input Validation** in C++.

## 🚀 Features
1.  **Endless Mode:** The game runs in a loop, allowing you to play round after round until you close the console.
2.  **Smart Input Validation:**
    - Accepts both uppercase (`R`, `P`, `S`) and lowercase (`r`, `p`, `s`).
    - Forces the user to re-enter if the input is invalid.
3.  **Randomized NPC:** The computer makes unpredictable moves using `rand()`.

## 🛠️ How it works
The code is structured into 4 main functions for clean logic:
- `plrChoice()`: Handles user input and validation.
- `npcChoice()`: Generates a random move for the computer.
- `showChoices()`: Displays what both sides picked.
- `winner()`: Determines the result (Win/Lose/Tie).

## 📸 Example Usage
```text
Welcome to round : 1
Enter your choice (R, P, S): r
NPC chose Scissors
Player chose Rock
Player wins!
------------------------
Welcome to round : 2
Enter your choice (R, P, S): ...
