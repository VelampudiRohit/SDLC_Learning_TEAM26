# TEST PLAN:

## Table no: High level test plan

| **Test ID** | **Description**                                              | **Given INPUT** | **Exp O/P** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  H_01       | On selecting the snake game, screen will redirect into snake game | 1 | Snake Game | Snake Game |Scenario based |
|  H_02       | On selecting the tictactoe game, screen will redirect into tictactoe game | 2 | tictactoe game | tictactoe game |Scenario based    |
|  H_03       | On selecting the hangman game, screen will redirect into hangman game | 3 | hangman game | hangman game |Scenario based    |
|  H_04       | On selecting the rock-paper-scissors game, screen will redirect into rock-paper-scissors game | 4 | rock-paper-scissors game | rock-paper-scissors game |Scenario based    |
|  H_05       | On selecting the thankyou, screen will redirect into thankyou screen | 5 | Thankyou screen | Thankyou screen |Scenario based |

## Table no: Low level test plan


| **Test ID** | **HID** | **Description**                                              | **Given INPUT** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01  | H_01     |After selection of snake game, game starts.| - |Game starts|Game starts|Requirement based |
|  L_02  | H_01    |User has choice to move snake up using w|  w|Snake moves upwards|Snake moves upwards|Requirement based    |
|  L_03  | H_01    |User has choice to move snake down using s|  s|Snake moves downards|Snake moves downwards|Requirement based    |
|  L_04  | H_01    |User has choice to move snake left using a|  a|Snake moves leftwards|Snake moves leftwards|Requirement based    |
|  L_05  | H_01    |User has choice to move snake right using d|  d|Snake moves rightwards|Snake moves rightwards|Requirement based    |
|  L_06  | H_01   |Score updates after every time snake eats apple.| -|Score updated|Score updated|Requirement based    |
|  L_07  | H_01    |When snake touches the boundary, game ends and final score displayed|-|Game ends, final score given|Game ends, final score given|Requirement based    |
|  L_08  | H_02     |After selection of tic tac toe game menu display.| - |Display Menu|Display Menu|Requirement based |
|  L_09  | H_02     |User has choice to choose X/0|  X|Choice selected|Choice selected|Requirement based    |
|  L_010  | H_02     |User has choice to choose X/0|  0|Choice selected|Choice selected|Requirement based    |
|  L_011  | H_02     |Display of 3*3 board after symbol selection.| -|Display board|Display board|Requirement based    |
|  L_012  | H_02    |User input for position no.| position no(From 1-9).|diplay the symbol at that position|diplay of symbol at that position|Requirement based    |
|  L_013  | H_02     |Player one and two getting chances one after other.| -|Success|Success|Requirement based    |
|  L_014  | H_02     |The board is reachable ,and although no player can win from this position,still the game continues.| position no(From 1-9).|symbol at that position.|symbol at that position.|Scenario based    |
|  L_015  | H_02     |There can't be multiple winners in the game.| -|Success|Success|Requirement based    |
|  L_016  | H_02     |A game draw message if no one wins.| -|Success|Success|Requirement based    |
|  L_017  | H_02     |The  Game winner message as soon as one of the player wins.| -|Success|Success|Requirement based    |
|L_01| H_03   | Check if the input is accepted if its character | a character | accepts input |    | Requirement based |
| L_02| H_03 | Check if the input rejected if its not a character | a digit, a symbol | Incorrect input message delivered |  |Requirement based |
| L_03 | H_03 | Check if user directed to addword if chosen the option 2 | 2 | Redirect to addword option | | Requirement based|
| L_04 | H_03 | Check if user directed to play if chosen the option 1 | 1 | Redirect to play option | | Requirement based|
| L_05 | H_03 | Check if user exits the game if chosen the option 3 | 3 | Exits hangman game | | Requirement based|
| L_06 | H_03 | Check if an operation performed only once for a certain input | a new char| operation performed |  |Scenario based |  
| L_07 | H_03 | Check if an operation performed only once for a certain input | previously tried letter| User notified the letter has been tried before |  |Scenario based | 
| L_08 | H_03 | Check correct hangman state shown for each attempts left | Attempts left | Corresponding state of hangman |  | Scenario based |
| L_09 | H_03 | Word input by user added to 'words.txt' | A word | Word written to 'words.txt' |  | Requirement based |
|  L_01  | H_04     |After selection of Rock Paper Scissors game menu display.| - |Display Menu|Display Menu|Requirement based |
|  L_02  | H_04     |User has choice to select Rock.|  Rock|win or lose|win or lose|Requirement based  |
|  L_03  | H_04     |User has choice to select Paper.|  Paper|win or lose|win or lose|Requirement based  |
|  L_04  | H_04     |User has choice to select Scissors.|  Scissors|win or lose|win or lose|Requirement based  |
|  L_05  | H_04     |User wins or lose based on selection.| -|Display final score|Display final score|Requirement based |

