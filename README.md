# Tic-Tac-Toe Game 🎮

Welcome to **Tic-Tac-Toe**, a two-player turn-based strategy game implemented in C. This project was developed as part of my first-year coursework to demonstrate foundational programming skills in C.

## Features 🚀
- **Two-player mode:** Players alternate turns as X and O.
- **Interactive gameplay:** Players select positions by entering numbers corresponding to grid cells.
- **Win or draw detection:** The game announces the winner or a draw when conditions are met.
- **Simple UI:** Clear and minimal console-based interface.

## How to Play 🕹️
1. Run the program in a C-compatible environment (e.g., GCC, Code::Blocks).
2. Player 1 is assigned `X`, and Player 2 is assigned `O`.
3. Players take turns to input their move by selecting a number (1-9) corresponding to a grid cell:
   ```
     1 | 2 | 3
    ---|---|---
     4 | 5 | 6
    ---|---|---
     7 | 8 | 9
   ```
4. The first player to align three symbols (horizontally, vertically, or diagonally) wins.
5. If all nine cells are filled without a winner, the game ends in a draw.

## Code Overview 📜
### Files
- **`ttt.c`**: Contains the main game logic, including:
  - `displayBoard()`: Displays the current state of the board.
  - `checkWin()`: Checks for winning conditions.
  - `makeMove()`: Handles player inputs and updates the board.

### Dependencies
- Standard C libraries (`stdio.h`).

### Key Concepts
- Modular functions for reusability.
- Input validation to prevent invalid or duplicate moves.
- Logic for detecting winning conditions and game completion.

## How to Compile and Run 🛠️
1. Open a terminal or command prompt in the directory containing `ttt.c`.
2. Compile the program using a C compiler. For example:
   ```bash
   gcc ttt.c -o tic_tac_toe
   ```
3. Run the executable:
   ```bash
   ./tic_tac_toe
   ```

## Sample Gameplay 🎲
```
Welcome to Tic-Tac-Toe!
Player 1: X
Player 2: O

 1 | 2 | 3
---|---|---
 4 | 5 | 6
---|---|---
 7 | 8 | 9

Player 1, enter your move (1-9): 5

   |   |   
---|---|---
   X   |   
---|---|---
   |   |   
...
```

## Future Enhancements 🛠️
- Add a single-player mode with AI.
- Enhance the UI for better visuals.
- Allow players to restart the game without exiting.

## License 📄
This project is open-source and available under the MIT License. Feel free to modify and share!

