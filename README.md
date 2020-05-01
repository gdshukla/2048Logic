# 2048Logic
simple 2048 game in console

Game grid can be created by calling constructor of C2048 and passing it size of grid ie to create a grid of 8x8
  C2048 grid(8);

To add new value (2 or 4, generated at random) into grid at random place
  grid.addNewValue();

Movement is done by keus w,a,s,d for up, left, down and right respectively.
Grid can be printed on console by using
  grid.print();

And score can be retrieved by using
  grid.getScore();

# File structure:
## C2048.cpp, C2048.h: 
  Contains base logic of of 2048 grid

## 2048Logic.cpp: 
  main file that calls different member functions of C2048 class from main()

## Utility.cpp, Utility.h: 
  Contains platform dependent utiity functions namely - 
    # gotoxy(): to move cursor to desired x,y position
    # getTickCount(): gets tick count
