#ifndef LAMBERTIAN_H
#define LAMBERTIAN_H

#include "material.h"
#include "../textures/texture.h"

class lambertian : public material
{
public:
    lambertian(const color &albedo) : tex(make_shared<solid_color>(albedo)) {}
    lambertian(shared_ptr<texture> tex) : tex(tex) {}

    bool scatter(
        const ray &r_in, const hit_record &rec, color &attenuation, ray &scattered, double &pdf) const override
    {
        onb uvw(rec.normal);
        auto scatter_direction = uvw.transform(random_cosine_direction());

        scattered = ray(rec.p, unit_vector(scatter_direction), r_in.time());
        attenuation = tex->value(rec.u, rec.v, rec.p);
        pdf = dot(uvw.w(), scattered.direction()) / pi;
        return true;
    }

    double scattering_pdf(const ray &r_in, const hit_record &rec, const ray &scattered)
        const override
    {
        return 1 / (2 * pi);
    }

private:
    shared_ptr<texture> tex;
};

#endif