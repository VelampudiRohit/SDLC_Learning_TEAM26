# Requirements
## Introduction
   A game is a structured form of play, usually undertaken for entertainment or fun, and sometimes used as an educational tool.Games are usually played purely for enjoyment, sometimes for achievement or reward as well.Every game  has its goals, rules, challenge, and interaction. Games generally involve mental or physical stimulation, and often both. Many games help develop practical skills, serve as a form of exercise, or otherwise perform an educational, simulational, or psychological role.
 In this project we are developing a "All in one gaming platform " where the person can just select the game which he wants to play from among the options and have fun.The user can play the following games
 - Snake game
 - Tic Tac Toe
 - Hangman game
 - Rock paper scissors
 

## Research
   An **All-in-one gaming portal** is a platform for various games where u can access different types of games in single application.

Portal consists primarily of a series of puzzles that must be solved by teleporting the player's character and simple objects.

This gameplay element is based on a similar concept from the game.

Games who have recently switched to open source integrated systems have discovered that providers are now more likely to offer reliable support in order to maintain better platform for various games.

### Snake game

This is a clone of the classic game snake that was implemented in old mobile phones.
The aim of the game is to collect the apple (0), avoid borders (*). As you collect apples, the user's score gets increased by 10 points. And user's game gets continued, until the user land up touching the border, later the score will be shown on the screen. 

Note: There is no concept of lives. Once you hit an obstacle, that's it, game over.

### Tic Tac Toe

 An agent to play the game of Tic-Tac-Toe. This game is played on a Tic-Tac-Toe boards. The first move is made by placing an X in a randomly chosen cell of a randomly chosen board. After that, the two players take turns placing an O or X alternately into an empty cell of the board corresponding to the cell of the previous move. (For example, if the previous move was into the upper right corner of a board, the next move must be made into the upper right board.)

The game is won by getting three-in-a row either horizontally, vertically or diagonally in one of the boards. If a player is unable to make their move (because the relevant board is already full) the game ends in a draw.

### Hangman game

This is a simple HANGMAN GAME that we all had played in childhood.
Player 1 will give a word as input and Player 2 will guess the word by giving an alphabet as input.
If Player 2 guess it right then he/she will be the winner Player 2 gets only 5 chances to guess the word

But this game has some constrains :

Constrains 1 : all inputs has to be alphabets in small case

Constrains 2: Player 2 can not give any string as input it has to be a single word with no space or any special character.

Constrains 3: the word can not be more than 100 characters long

### Rock paper scissors

 About rock paper scissor game: Rock paper scissors is a hand game usually played between two people, in which each player simultaneously forms one of three shapes with an outstretched hand. One player is computer and other is the user. These shapes are "rock" (a closed fist), "paper" (a flat hand), and "scissors" (a fist with the index finger and middle finger extended, forming a V). A player who decides to play rock will beat another player who has chosen scissors ("rock crushes scissors" or sometimes "blunts scissors"), but will lose to one who has played paper ("paper covers rock"); a play of paper will lose to a play of scissors ("scissors cuts paper").



## Cost and Features and Timeline
- All in one gaming portal where you can play alot of games in a single application.
- The application is free of cost and open source.
- This application is also platform independent and requires just a c language installation to work.



### Features
   - User can play multiple games like snake, tic tac toe,hangman,rock paper scissors.
   - Simple to use
   - User friendly.
   - High performance.
   - Rich functionality.
   - Accuracy in results.



## Defining Our System
![Describing Systeml](https://github.com/GENESIS2021Q1/sdlc2-team-26/blob/main/7_Others/Other%20images/All-in-One%20Gaming%20Portal%20Description.png)
The "ALL-IN-ONE" Gaming Portal is one hotspot for 4 different, enjoyable and vintage games that anyone must have played before. Our Portal System contains of 4 games namely,

 - Snake game
 - Tic Tac Toe
 - Hangman game
 - Rock paper scissors

These 4 games will be available for the user to choose from, and he/she can play all games any number of times until he/she is done with playing those.



## SWOT ANALYSIS
![SWOT final](https://user-images.githubusercontent.com/73350778/124232685-9c782f00-db2f-11eb-97db-989492076166.png)



# 4W&#39;s and 1&#39;H

## Who:

All in one Gaming portal is designed for everyone. It is accessible to anyone who loves playing games irrespective of their age group. 

## What:

The system provides multiple gaming options. The user can select any game of his/her choice from the given options and play the game.

## When:

Gaming has been an integral part in human life and is unlikely to die in future. It has been always relevant and can be used by one during their leisure time.

## Where:

The project is portable and user friendly and hence can be used in many domains. It is a console based application, so the user can play it on console.

## How:

System design and analysing the requirements is the key solution to "How To" approach for the creation of the system. It translates system requirements into ways in which they can be implemented and resolved, It provides understanding and procedural details necessary for implementation. Various UML diagrams can be used for better understanding of working of the system. The system aims to provide smooth experience for users and should be implemeted in least possible cost and efficient way.



# Detail requirements
## High Level Requirements:
 
|ID | Description | Status (Implemented/Future)|
|---|---|---|
|HLR1|User should be able to choose the game he wants| Implemented|
|HLR2|User should be able to play the snake game, once chosen| Implemented|
|HLR3|User should be able to play the tic-tac-toe game, once chosen| Implemented|
|HLR4|User should be able to play the hangman game, once chosen| Implemented|
|HLR5|User should be able to play the rock-paper-scissors game, once chosen| Implemented|
|HLR6|The user should be able to play the games until he decides to exit the portal| Implemented|



##  Low level Requirements:

|ID | HID | Description | Status (Implemented/Future)|
|---|---|---|---
|LLR1|HLR1|User shall play the game by choosing respective number alloted to it.|Implemented|
|LLR2|HLR1|Number should be unique and under 5 or else user will be asked to choose again.|Implemented|
|LLR3|HLR2|User must be able to move Snake in all directions to eat the apple.|Implemented|
|LLR4|HLR2|User's score gets increased by 10 points after eating the apple.|Implemented|
|LLR5|HLR2|When user touches the boundary,game should end and final score shall be given.|Implemented|
|LLR6|HLR2|When user presses 'X' ,game should end and final score shall be given. |Implemented|
|LLR7|HLR3|Selection of Proper symbol for tic tac toe game|Implemented|
|LLR8|HLR3|If no two win then match is draw and if one of them win proper message to be displayed|Implemented|
|LLR9|HLR4|The state of hangman updated for each incorrect guess in hangman game|Implemented|
|LLR10|HLR4|The blanks are updated and filled with input character for each correct guess in hangman game|Implemented|
|LLR11|HLR4|The user input word stored in the file if user wishes to add words in hangman game|Implemented|
|LLR12|HLR4| The user input must be accepted only if it is a character| Implemented|
|LLR13|HLR4| The user must be declared loser if the number of attempts is 0 and blanks left| Implemented|
|LLR14|HLR4| The user must be declared winner if no blanks left| Implemented|
|LLR15|HLR4| The user must be directed to addword operation if he choose addword option| Implemented|
|LLR16|HLR4| The user must be able to exit the game if he choose to exit| Implemented|



