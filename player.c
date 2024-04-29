#include "raylib.h"
#include "raymath.h"
#include "player.h"

void PlayerMovement(Player * player, float delta){
    player->direction.x=0;
    player->direction.y=0;

    //Horizontal direction
    if(IsKeyDown(KEY_A)){
        player->direction.x =-1;
    } 
    if(IsKeyDown(KEY_D)){
        player->direction.x = 1;
    } 
    //Verical direction
    if(IsKeyDown(KEY_W)){
        player->direction.y = -1;
    } 
    if(IsKeyDown(KEY_S)){
        player->direction.y =1;
    } 

    if(player->direction.x!=0 || player->direction.y!=0){

        player->velocity = Vector2Add(player->velocity,Vector2Scale(player->direction,player->acceleration*delta));
    }

    player->position = Vector2Add(player->position,Vector2Scale(player->velocity,delta));
    
}