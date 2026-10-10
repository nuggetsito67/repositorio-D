#!/bin/bash
echo "=========================================="
echo " Compilando Laboratorio de C++"
echo "=========================================="
echo "[1/3] Compilando Ejercicio 1 (Biblioteca)..."
cd Biblioteca && mkdir -p build && cd build && cmake .. > /dev/null && make && cd ../..
echo "[2/3] Compilando Ejercicio 2 (Vehículos)..."
g++ -std=c++17 Vehiculos/main.cpp -o Vehiculos/VehiculosApp
echo "[3/3] Compilando Ejercicio 3 (Carrito)..."
g++ -std=c++17 Carrito/main.cpp -o Carrito/CarritoApp
echo "=========================================="
echo "Compilación finalizada exitosamente."
echo "=========================================="
