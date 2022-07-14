# sudoku-gameC-program

Sudoku is a game on a 9*9 board. With the existing numbers on the board, the player has to fill the grid with numbers from 1-9 to ensure that there are not repetitive numbers in each row, column, and subgrid. 
This program uses backtracking to generate a 99 grid filled with legal numbers, and remove several numbers randomly for the players to figure out. 
Players can enter the numbers (1-9) and the row and column letter (A-I) to fill the grid. If the move is illegal, an error message will display.
The colors of the pre-filled numbers and the player-filled numbers appear differently to make it convenient to later change the filled numbers.
After the grid is completely filled with legal numbers, a win message will be delivered.

Jul.14, 2022 Updated:
  The game creates text file to save all game records in the file gameRecords.txt. Even after shutting down the program and reopening it, the past games can be kept track of in the txt file, and the game number is saved (not refreshed to be 1 after restarting the program).
