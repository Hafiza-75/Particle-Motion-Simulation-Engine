#include "Particle.h"
#include <iostream>

Particle::Particle(float x, float y, float vx, float vy, float ax, float ay, float mass)
    : x(x), y(y), vx(vx), vy(vy), ax(ax), ay(ay), mass(mass) {}

void Particle::update(float dt) {
    vx += ax * dt;
    vy += ay * dt;
    x += vx * dt;
    y += vy * dt;
}

void Particle::print() const {
    std::cout << "x: " << x << ", y: " << y << ", vx: " << vx << ", vy: " << vy << std::endl;
}
