#include "Plane.hpp"
#include "Hit.hpp"

const double eps = 1e-6;

Hit * Plane::hit(const Ray & ray) const {
   double t = (point - ray.origin) * normal / (ray.direction * normal);

   if (t > eps) {
      return new Hit(
         ray.origin + t * ray.direction,
         color,
         t
      );
   }
   return new Hit();
}
