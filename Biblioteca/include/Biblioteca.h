#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H
#include "Libro.h"
#include <vector>
#include <string>
class Biblioteca {
private:
    std::vector<Libro> libros;
public:
    void agregarLibro(const Libro& libro);
    void eliminarLibro(const std::string& isbn);
    void buscarLibro(const std::string& criterio) const;
    void mostrarLibrosDisponibles() const;
};
#endif
