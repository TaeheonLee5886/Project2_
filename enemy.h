#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>

class enemy_n
{
    public :
    enemy_n(int frame_, int hp_, int score_, int y_, int x_) : frame(frame_), hp(hp_), score(score_), x(x_), y(y_)
    {};


    int hp;
    int cell_speed;
    int score;
    int frame;
    int x;
    int y;
};