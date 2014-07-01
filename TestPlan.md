##Introduction

The program which I am about to test is a game called 2048. In this game there is a 4x4 grid which randomly spawns numbered tiles, to complete the game the user has to create a 2048 block, to do this the user tilts the playing board in a certain direction, in which the game joins the tiles of the same value to create a larger numbered tile, the game ends when the player either runs out of room on the playing board, or they create a 2048 tile.
The Intention of this test plan is to test the functionality of the program, to ensure the game runs and plays correctly.
The methods used by the game are:
* Tilt Left.
* Rotate the Board 90 Degrees.

These methods are used to achieve the function of shifting the tiles in the appropriate directions.

##Attributes

The Features that are to be tested will be done to establish that the tasks that are needed to be performed are done so with no observable time lag.
In this game the tiles that are to be moved should appear to do so without any delay, in which any lag is too long.

##Components

This list contains all the major components of the code.
*	rotate_90
*	tilt_left
*	Board[][] array.

##Capabilities
The files that require testing are as stated below
* tilt.c
* main.c
* keybaord.c
* board.c

the components that require extensive testing are as stated below.
*	Tilt Up
*	Tilt Down
*	Tilt Left 
*	Tilt Right 
*	The Merging of Game Pieces
*	True response from keyboard input

The main focus for our test plan will be based on the "tilt.c" file, in which contains the methods used to utilise board movement and the merging of pieces, we will also implement the "main.c" and "board.c" files to support the further testing of the "tilt.c" file.
In conjuction with utilising the  "main.c" and "board.c" files with the furter testing of the "tilt.c" file, this test plan will also indepentently test the  "main.c" and "board.c" methods using further methods incorporating dummy data.
This test plan will also incorporate testing on the "keyboard.c" file although this will be mainly done at a unit level.

##Testing Process


##Conclusion

Currently Incomplete.
