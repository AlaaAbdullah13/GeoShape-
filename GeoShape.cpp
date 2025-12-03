#include "GeoShape.h"
#define PI 3.14159f

// ========== GeoShape ==========
GeoShape::GeoShape() : d1(0), d2(0) {}
GeoShape::GeoShape(float x, float y) : d1(x), d2(y) {}

void GeoShape::setD1(float x) { d1 = x; }
void GeoShape::setD2(float y) { d2 = y; }

float GeoShape::getD1() const { return d1; }
float GeoShape::getD2() const { return d2; }

// ========== TRIANGLE ==========
Triangle::Triangle(float base, float height)
    : GeoShape(base, height) {}

float Triangle::calcArea() const {
    return 0.5f * d1 * d2;
}

// ========== RECT ==========
Rect::Rect(float w, float h)
    : GeoShape(w, h) {}

float Rect::calcArea() const {
    return d1 * d2;
}

// ========== SQUARE ==========
Square::Square(float side)
    : Rect(side, side) {}

// ========== CIRCLE ==========
Circle::Circle(float radius)
    : GeoShape(radius, 0) {}

float Circle::calcArea() const {
    return PI * d1 * d1;
}
