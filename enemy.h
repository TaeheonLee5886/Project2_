#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>

class enemy_n
{
    public :
    enemy_n(int frame_, int hp_, int score_, int y_, int x_, int order_,int cell_speed_=0, int attack_damage_=1) : frame(frame_), hp(hp_), score(score_), x(x_), y(y_), order(order_), cell_speed(cell_speed_), attack_damage(attack_damage_)
    {};

    int hp;
    int cell_speed;
    int score;
    int frame; 
    int x;
    int y;
    int order;
    int attack_damage; //
    void move(){y++;}
};
class enemy_r :public enemy_n
{
    public:
    enemy_r(int frame_, int hp_, int score_, int y_, int x_, int order_,int cell_speed_, int attack_damage_) : enemy_n(frame_, hp_, score_, y_, x_, order_,cell_speed_, attack_damage_)
    {};
};

class enemy_s : public enemy_n
{
    public:
    enemy_s(int frame_, int hp_, int score_, int y_, int x_, int order_,int cell_speed_, int attack_damage_) : enemy_n(frame_, hp_, score_, y_, x_, order_,cell_speed_, attack_damage_)
    {};

};

class enemy_d : public enemy_n
{
    public:
    enemy_d(int frame_, int hp_, int score_, int y_, int x_, int order_,int cell_speed_, int attack_damage_) : enemy_n(frame_, hp_, score_, y_, x_, order_,cell_speed_, attack_damage_)
    {};

};

class enemy_a : public enemy_n
{
    public:
    enemy_a(int frame_, int hp_, int score_, int y_, int x_, int order_,int cell_speed_, int attack_damage_) : enemy_n(frame_, hp_, score_, y_, x_, order_,cell_speed_, attack_damage_)
    {};

};
