#include "raylib.h"
#include "raymath.h"

#ifndef PLAYER_H_   /* Include guard */
#define PLAYER_H_

typedef struct Player{
    Vector2 position;

    Vector2 direction;
    Vector2 velocity;

    float speed;
    float acceleration;
    float friction;
} Player;

void PlayerMovement(Player * player, float delta);

#endif