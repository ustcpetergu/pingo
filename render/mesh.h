#pragma once

#include <stdint.h>

#include "../math/vec3.h"

#include "material.h"

typedef struct Mesh {
    int positions_count;
    Vec3f * positions;
    int indexes_count;
    uint32_t * indexes;
} Mesh;


