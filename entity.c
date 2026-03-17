#include "entity.h"

Entity* entities[256];
uint32_t entity_init_index = 0;

void add_entity(Entity* entity)
{
    entities[entity_init_index] = entity;
    entity_init_index++;
}