#include "block.h"

static ivec2s get_texture_location(struct World *world, ivec3s pos, enum Direction d) {
    return (ivec2s) {{ 6, 2 }};
}

void pine_planks_init() {
    struct Block planks = BLOCK_DEFAULT;
    planks.id = PINE_PLANKS;
    planks.get_texture_location = get_texture_location;
    BLOCKS[PINE_PLANKS] = planks;
}