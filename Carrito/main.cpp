#include <iostream>
#include <string>
#include <vector>
class Producto {
    std::string nombre;
    double precio;
    int stock;
public:
    Producto(std::string n, double p, int s) : nombre(n), precio(p), stock(s) {}
    std::string getNombre() const { return nombre; }
    double getPrecio() const { return precio; }
};
class ItemCarrito {
    Producto producto;
    int cantidad;
public:
    ItemCarrito(Producto p, int c) : producto(p), cantidad(c) {}
    double getSubtotal() const { return producto.getPrecio() * cantidad;
    }
};
class CarritoCompras {
    std::vector<ItemCarrito> items;
public:
    void agregarProducto(Producto p, int c) { items.push_back(ItemCarrito(p, c)); }
    double calcularTotal() const {
        double total = 0;
        for (const auto& item : items) total += item.getSubtotal();
        return total;
    }
};
int main() {
    Producto p1("Laptop", 1200.0, 10);
    CarritoCompras carrito;
    carrito.agregarProducto(p1, 1);
    std::cout << "Total del carrito: $" << carrito.calcularTotal() << "\n";
    return 0;
}
