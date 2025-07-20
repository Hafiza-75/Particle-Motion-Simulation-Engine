# Particle Motion Simulation Engine

A simple physics-based particle motion simulator written in C++.  
It uses basic kinematic equations to simulate and log particle movement in 2D space over time.

## Features
- Object-Oriented Design (C++ Classes)
- Real-time motion simulation
- Logs particle data (x, y, velocity) into `log.csv`
- Configurable via code or file (coming soon)
- Easy to compile and run on any system (MinGW, g++)

## Physics Model
Equations used:
- v = u + at
- s = ut + 0.5at²

## Technologies
- C++
- g++ (MinGW)
- Git & VS Code

## How to Run
```bash
g++ src/main.cpp src/Particle.cpp -o ParticleSim.exe
.\ParticleSim.exe
