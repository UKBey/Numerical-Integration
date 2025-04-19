# Numerical Integration Using Riemann Sums

This is a C++ program that approximates the definite integral of the function **f(x) = x³ + 4x** over a user-defined interval using three different numerical methods:

- Left Hand Rule (LHF)
- Right Hand Rule (RHF)
- Midpoint Rule (MF)

---

## 📌 Features

- Prompts user to enter interval [a, b] and number of subintervals (n)
- Calculates deltaX = (b - a) / n
- Displays x values, epsilon values (midpoints), and the result of each method for each step
- Sums up and prints final results for LHF, RHF, and MF
- Cleanly formatted table output using `iomanip`

---

## 🧠 Mathematical Formula

Given:
```
f(x) = x³ + 4x
```

The program approximates the integral:
```
∫[a to b] f(x) dx ≈ sum(f(xi) * Δx)
```

For each method:
- **LHF:** uses left endpoints (xi)
- **RHF:** uses right endpoints (xi+1)
- **MF:** uses midpoints (xi + Δx/2)

---

## 🛠️ Technologies Used

- **C++**
- `<iostream>` – input/output
- `<cmath>` – for power calculations
- `<iomanip>` – for formatted table output

---

## 🚀 How to Run

1. Compile the code using a C++ compiler:
   ```
   g++ main.cpp -o NumericalIntegration
   ```
2. Run the program:
   ```
   ./NumericalIntegration
   ```
3. Enter values for `a`, `b`, and `n` when prompted.

---

## 👤 Author

**Ukbe Taha Şahinkaya**  

---

## 📄 License

This project is open for educational and personal use.
