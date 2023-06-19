#ifndef BULLET_H
#define BULLET_H

#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <fstream>
#include <Windows.h>
#include <conio.h>
#include <chrono>
#include <vector>

class Bullet {
public:
    Bullet(int y_value, int x_value, char bul_tp_, int ss_)
        : y(y_value), x(x_value), bul_tp(bul_tp_), ss(ss_) {}
    Bullet(int y, int x, char sym, int damage, int frame) : 
    y(y), x(x), bul_tp(bul_tp), damage(damage), create_frame_bullet(frame) {}
    int damage = 1;
    int y, x;
    int create_frame_bullet; // initialize when it creates
    int check_frame_bullet;
    int level = 1;
    char bul_type[3] = {'\'', '^', '!'};
    char bul_tp;
    int ss;
    int cell_speed=1;
    bool power_buff=false;
};

class powerup_bullet : public Bullet {
public:
    powerup_bullet(int y_, int x_, char bul_tp_, int ss_)
        : Bullet(y_, x_, bul_tp_, ss_) {}
};

class levelup_bullet : public Bullet {
public:
    levelup_bullet(int y_, int x_, char bul_tp_, int ss_)
        : Bullet(y_, x_, bul_tp_, ss_) {}
};

class enemy_bullet : public Bullet{
    public:
        enemy_bullet(int y, int x, char ss, int damage, int frame) : Bullet(y, x, ss, damage, frame) {}
};

#endif
