#ifndef LAMBERTIAN_H
#define LAMBERTIAN_H

#include "material.h"
#include "../textures/texture.h"

class lambertian : public material
{
public:
    lambertian(const color &albedo) : tex(make_shared<solid_color>(albedo)) {}
    lambertian(shared_ptr<texture> tex) : tex(tex) {}

    bool scatter(const ray &r_in, const hit_record &rec, color &attenuation, ray &scattered)
        const override
    {
        auto scatter_direction = rec.normal + random_unit_vector();
        // Catch degenerate scatter direction
        if (scatter_direction.near_zero())
            scatter_direction = rec.normal;

        scattered = ray(rec.p, scatter_direction, r_in.time());
        attenuation = tex->value(rec.u, rec.v, rec.p);
        return true;
    }

private:
    shared_ptr<texture> tex;
};

#endif