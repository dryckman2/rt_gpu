#ifndef MATERIAL_H
#define MATERIAL_H

#include "../extras/rtweekend.h"

class hit_record;

class material
{
public:
    virtual ~material() = default;

    virtual color emitted(double u, double v, const point3 &p) const
    {
        return color(0, 0, 0);
    }

    virtual bool scatter(
        const ray &r_in, const hit_record &rec, color &attenuation, ray &scattered) const
    {
        return false;
    }
};

#endif