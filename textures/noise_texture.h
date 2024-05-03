#ifndef NOISE_TEXTURE_H
#define NOISE_TEXTURE_H

#include "texture.h"
#include "../extras/perlin.h"

class noise_texture : public texture
{
public:
    noise_texture() {}

    noise_texture(double scale) : scale(scale) {}

    color value(double u, double v, const point3 &p) const override
    {
        return color(.5, .5, .5) * (1 + sin(scale * p.z() + 10 * noise.turb(p, 7)));
    }

private:
    perlin noise;
    double scale;
};

#endif