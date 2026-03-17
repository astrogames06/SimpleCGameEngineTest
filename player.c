#include "player.h"

void init_plr()
{
    puts("INITING THE PLAYER");
}

void update_plr()
{
    puts("UPDATING THE PLAYER");
}


void draw_plr()
{
    puts("DRAWING THE PLAYER");
}

Entity player = {
    0,
    &init_plr,
    &update_plr,
    &draw_plr
};