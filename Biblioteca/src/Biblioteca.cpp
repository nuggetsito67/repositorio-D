#include "Biblioteca.h"
#include <iostream>
#include <algorithm>
void Biblioteca::agregarLibro(const Libro& libro) {
    libros.push_back(libro);
    std::cout << "Libro '" << libro.getTitulo() << "' agregado exitosamente.\n";
}
void Biblioteca::eliminarLibro(const std::string& isbn) {
    auto it = std::remove_if(libros.begin(), libros.end(), [&isbn](const Libro& l) { return l.getIsbn() == isbn; });
    if (it != libros.end()) {
        libros.erase(it, libros.end());
        std::cout << "Libro con ISBN " << isbn << " eliminado.\n";
    } else {
        std::cout << "No se encontró el libro.\n";
    }
}
void Biblioteca::buscarLibro(const std::string& criterio) const {
    std::cout << "\n--- Búsqueda: '" << criterio << "' ---\n";
    for (const auto& libro : libros) {
        if (libro.getTitulo().find(criterio) != std::string::npos || libro.getAutor().find(criterio) != std::string::npos) libro.mostrarInformacion();
    }
}
void Biblioteca::mostrarLibrosDisponibles() const {
    std::cout << "\n--- Libros Disponibles ---\n";
    for (const auto& libro : libros) {
        if (libro.estaDisponible()) libro.mostrarInformacion();
    }
}
