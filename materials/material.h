#ifndef MATERIAL_H
#define MATERIAL_H

#include "../extras/rtweekend.h"
#include "../math_structures/onb.h"

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
        const ray &r_in, const hit_record &rec, color &attenuation, ray &scattered, double &pdf) const
    {
        return false;
    }
    virtual double scattering_pdf(const ray &r_in, const hit_record &rec, const ray &scattered)
        const
    {
        return 0;
    }
};

#endif