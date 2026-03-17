#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <unistd.h>

#include <emscripten/emscripten.h>

#include "player.h"

void game_init()
{
    puts("GAME INIT");

    add_entity(&player);

    for (int i = 0; i < entity_init_index; i++)
    {
        if (entities[i] != NULL)
        {
            entities[i]->init();
        }
    }

    puts("GAME INIT END");
}

void game_update()
{
    puts("GAME UPDATE");

    printf("%d\n", entity_init_index);
    for (int i = 0; i < entity_init_index; i++)
    {
        if (entities[i] != NULL)
        {
            entities[i]->update();
        }
    }

    puts("GAME UPDATE END");
}

void game_draw()
{
    puts("GAME DRAW");

    for (int i = 0; i < entity_init_index; i++)
    {
        if (entities[i] != NULL)
        {
            entities[i]->draw();
        }
    }

    puts("GAME DRAW END");
}

long long loop = 0;
void game_loop()
{
    printf("%lld\n", loop); // Just to keep track on loop

    game_update();
    game_draw();

    loop++;
}

int main()
{
    puts("Hello, World!");
    game_init();

    emscripten_set_main_loop(game_loop, 10, 1);

    return 0;
}