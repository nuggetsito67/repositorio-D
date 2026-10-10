#include "Libro.h"
#include <iostream>
Libro::Libro(const std::string& t, const std::string& a, const std::string& i) : titulo(t), autor(a), isbn(i), disponible(true) {}
std::string Libro::getTitulo() const { return titulo; }
std::string Libro::getAutor() const { return autor; }
std::string Libro::getIsbn() const { return isbn; }
bool Libro::estaDisponible() const { return disponible; }
void Libro::setDisponible(bool estado) { disponible = estado; }
void Libro::mostrarInformacion() const {
    std::cout << "Título: " << titulo << " | Autor: " << autor << " | ISBN: " << isbn << " | Estado: " << (disponible ? "Disponible" : "Prestado") << "\n";
}
