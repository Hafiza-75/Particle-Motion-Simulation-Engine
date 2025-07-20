#ifndef PARTICLE_H
#define PARTICLE_H

class Particle {
public:
    float x, y;
    float vx, vy;
    float ax, ay;
    float mass;

    Particle(float x, float y, float vx, float vy, float ax, float ay, float mass);
    void update(float dt);
    void print() const;
};

#endif
