#include <iostream>
#include <fstream>
#include "../src/Particle.h"

int main() {
    Particle p(0, 0, 10, 20, 0, -9.8, 1.0);
    float time = 0.0f;
    float dt = 0.1f;

    std::ofstream logFile("log.csv");
    logFile << "time,x,y,vx,vy\n";

    for (int i = 0; i < 100; ++i) {
        p.update(dt);
        logFile << time << "," << p.x << "," << p.y << "," << p.vx << "," << p.vy << "\n";
        time += dt;
    }

    logFile.close();
    std::cout << "Simulation complete. Data saved in log.csv\n";
    return 0;
}
