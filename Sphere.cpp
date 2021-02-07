#include "Sphere.hpp"
#include <cmath>

const double eps = 1e-6;

Hit * Sphere::hit(const Ray & ray) const {
    Vector3D diff = ray.origin - center;
    double a = ray.direction * ray.direction;
    double b = 2 * diff * ray.direction;
    double c = diff * diff - radius * radius;
    double disc = b * b - 4 * a * c;

    if (disc < 0) {
        return new Hit();
    } else {
        double e = sqrt(disc);
        double denom = 2 * a;

        double t = (-b - e) / denom;
        if (t > eps) {
            return new Hit(
                ray.origin + t * ray.direction,
                color,
                t
            );
        }

        t = (-b + e) / denom;
        if (t > eps) {
            return new Hit(
                ray.origin + t * ray.direction,
                color,
                t
            );
        }
    }
    return new Hit();
}
