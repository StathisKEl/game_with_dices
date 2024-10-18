# game_with_dices
A simple two-player game whose winner is determined by the score formed after each player rolls three dice


Each player simultaneously rolls all three dice at once.
For each player an initial score is obtained from the above action

The initial score is as follows:
  the score is 1 for different values on all three dice,
  the score is 2 for same values on two of the three dice,
  the score is 3 for same values on all three dice,
  the score is 4 for consecutive values on the three dice starting with the value four on the first dice

In case of the two players have the same initial score the winner is determined according to the following rules:
  if both players have initial score 1 or initial score 3 the winner is the player with the highest sum and his/her final score is the initial score plus one and if both players have the same sum then there is no winner (tie),
  if both players have initial score 2 the player with the highest value in the unique dice is the winner and his/her final score is the initial score plus one and if the value in the unique dice of each player is the same then there is no winner (tie),
  if both players have initial score 4 there is no winner (tie)

In case of the two players have different initial score the winner is the player with the highest initial score and his/her final score is his/her initial score


In order for each player to roll all three dice at the same time they must type r
