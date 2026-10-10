#include "Biblioteca.h"
int main() {
    Biblioteca b;
    b.agregarLibro(Libro("Cien Anos de Soledad", "Gabriel Garcia Marquez", "978-0307474728"));
    b.agregarLibro(Libro("Don Quijote", "Miguel de Cervantes", "978-8424116033"));
    b.mostrarLibrosDisponibles();
    b.buscarLibro("Garcia");
    b.eliminarLibro("978-8424116033");
    b.mostrarLibrosDisponibles();
    return 0;
}
