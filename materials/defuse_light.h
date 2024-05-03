#include "material.h"
#include "../textures/texture.h"

#ifndef DEFUSE_LIGHT_H
#define DEFUSE_LIGHT_H

class diffuse_light : public material
{
public:
    diffuse_light(shared_ptr<texture> tex) : tex(tex) {}
    diffuse_light(const color &emit) : tex(make_shared<solid_color>(emit)) {}

    color emitted(double u, double v, const point3 &p) const override
    {
        return tex->value(u, v, p);
    }

private:
    shared_ptr<texture> tex;
};

#endif