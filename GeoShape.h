#ifndef GEOSHAPE_H
#define GEOSHAPE_H

class GeoShape {
protected:
    float d1, d2;

public:
    GeoShape();
    GeoShape(float x, float y);

    void setD1(float x);
    void setD2(float y);

    float getD1() const;
    float getD2() const;

    virtual float calcArea() const = 0;
};

// ========== TRIANGLE ==========
class Triangle : public GeoShape {
public:
    Triangle(float base, float height);
    float calcArea() const override;
};

// ========== RECTANGLE ==========
class Rect : public GeoShape {
public:
    Rect(float w, float h);
    float calcArea() const override;
};

// ========== SQUARE (from RECT only) ==========
class Square : private Rect {
public:
    Square(float side);
    float calcArea() const {
        return Rect::calcArea();
    }
};

// ========== CIRCLE ==========
class Circle : private GeoShape {
public:
    Circle(float radius);
    void setRedius(int r);
    float calcArea() const override;
};

#endif
