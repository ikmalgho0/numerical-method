# Numerical Methods in C++

A repository containing C++ implementations of non-linear equation root-finding algorithms. Designed for numerical analysis, study references, and algorithm testing.

## Implemented Algorithms

| Method | Source File | Type | Description |
| :--- | :--- | :--- | :--- |
| **Bisection Method** | `bisection.cpp` | Bracketing | Interval halving algorithm to find continuous function roots. |
| **Newton-Raphson Method** | `newtonRaphson.cpp` | Open | Fast-converging method utilizing function derivatives $f'(x)$. |
| **Regula Falsi Method** | `regulaFalsi.cpp` | Bracketing | False position method using linear interpolation between bounds. |
| **Secant Method** | `secant.cpp` | Open | Derivative-free approximation method using two initial guesses. |

## Prerequisites

Ensure you have a C++ compiler (such as GCC/g++) installed on your system.

```bash
g++ --version
```
## How to Run

1. Clone the repository:

```bash
git clone [https://github.com/ikmalgho0/numerical-method.git](https://github.com/ikmalgho0/numerical-method.git)
cd numerical-method
```

2. Compile and execute any method:

- Bisection

```bash
g++ bisection.cpp -o bisection && ./bisection
```

- Newton-Raphson

```bash
g++ newtonRaphson.cpp -o newtonRaphson && ./newtonRaphson
```

- Regula Falsi

```bash
g++ regulaFalsi.cpp -o regulaFalsi && ./regulaFalsi
```

- Secant

```bash
g++ secant.cpp -o secant && ./secant
```