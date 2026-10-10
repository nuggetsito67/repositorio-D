#ifndef LIBRO_H
#define LIBRO_H
#include <string>
class Libro {
private:
    std::string titulo, autor, isbn;
    bool disponible;
public:
    Libro(const std::string& t, const std::string& a, const std::string& i);
    std::string getTitulo() const;
    std::string getAutor() const;
    std::string getIsbn() const;
    bool estaDisponible() const;
    void setDisponible(bool estado);
    void mostrarInformacion() const;
};
#endif
