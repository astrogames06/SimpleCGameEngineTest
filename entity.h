#ifndef ENTITY_H
#define ENTITY_H

#include <stdint.h>

typedef struct
{
    uint32_t id;
    void (*init)();
	void (*update)();
	void (*draw)();
} Entity;

extern Entity* entities[256];
extern uint32_t entity_init_index;

void add_entity(Entity* entity);

#endif