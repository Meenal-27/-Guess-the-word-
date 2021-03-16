# -Guess-the-word-


This game was created as part of a project I undertook as a young C++ coder. We were asked to develop a game for a class 11 project at my school.
This game is based on a game called 'Cows, Bulls and Pigs'. I had first played this game while on a trip with my family and came to like it a lot. With consistent effort, I got very good at it and introduced it to my friends. When we developed a great liking for the game and the project was announced, I was intrigued if this game could be implemented using an algorithm and thus went on and took this up as my project. The experience was particularly memorable as not only did I end up learning new concepts to achieve specific functionalities in my code, but it gave me the thrill that one seeks. It also encouraged me further by giving me the confidence to trust myself and explore more ideas.


The game 'Cows, Bulls and Pigs' is a game that uses logic and memory-based analysis. Rudimentarily speaking, it consists of a master and multiple players. The master thinks of a four-letter word, and each player is given a fixed number of chances to guess the word. The player who can guess the word first wins the game in a limited number of chances. One might wonder how anyone can come to guess the correct word from the vast reserve of words in their respective language. The catch is that after each guesses a player makes, the master gives certain clues. The clues are in the form of three code words, 'COWS', 'Bulls' and 'Bears'. They give a clue about the presence and relative position of each letter in the guess as compared to the original word. Suppose some letter is there in the original word and is also in the correct position with respect to the original word. In that case, it is coded as a 'BULL' whereas if the letter is present but not in the same position as in the original word, it is coded as a 'COW', and if it falls into neither of the above categories, it is coded as a 'PIG'. For instance, the master came up with the word 'BOWL' and a player guesses 'MARK'; then the master says that the word has four pigs and if a player guesses' SOIL', the master says that the word has two pigs and two bulls. By successively guessing and taking aid of the clues, the players attempt to get to the correct word.


The actual implementation as a game was slightly different. Instead of 'Cows, Bulls and Pigs', the codes were given through characters – '$',' #' and '!' for 'COWS',' BULLS' and 'PIGS' respectively. This was done to make the game slightly more user friendly and easier for beginners. The description of the game is as follows:


 
RULES OF THE GAME ARE AS FOLLOWS:

1.You will be given a four-letter word to guess. You will be asked to guess the word.

2.THE LETTERS IN THE WORD CANNOT BE REPEATED.

3.If a particular letter in the given the word is present in the actual word and is in the correct position, it will be indicated by a '$' sign directly below it.

4.If a particular letter in the given word is present in the actual word but not present in the correct position, it will be indicated by a '#' sign directly below it.

5.If a particular letter in the given word is not present in the actual word, it will be indicated by a '!' sign directly below it. 
   	
6.You will be given a maximum of 10 chances to guess the word.

7.If the word is guessed, score will be provided at the end of the game. The maximum score in the game is 1000.

8.If you are not able to guess the word, you lose, and the game ends.

9. The player can choose to play again or exit the game. 
 
Key features of the game:

A library of words is maintained. The program picks random words from the library using the rand() and srand() functions. It uses the STRCMP function for the main feature of comparing the guess with the original word and returning the results. It presents a score at the end of the game, based on the number of turns taken by the user to guess the word. It also provides an option to the user to play the game again. Due to the limitations of the platform, it is a single player game, with the user acting as the player and the computer playing the role of the master. It can be further scaled and improved by adding a GUI, expanding the library of words, grading the levels on the basis of difficulty by giving words of successively increasing length and giving the options of adding multiple players. This game can also serve as a good introduction to words and spellings for beginners as it is not only engaging but intensively based on one’s knowledge of english words. 



