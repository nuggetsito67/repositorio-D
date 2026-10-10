#include <iostream>
#include <vector>
#include <string>
#include <memory>
class Vehiculo {
protected:
    std::string marca, modelo, placa;
    bool alquilado;
public:
    Vehiculo(std::string m, std::string mod, std::string p) : marca(m), modelo(mod), placa(p), alquilado(false) {}
    virtual ~Vehiculo() = default;
    std::string getPlaca() const { return placa; }
    bool estaAlquilado() const { return alquilado; }
    void setAlquilado(bool b) { alquilado = b; }
    virtual void mostrarInformacion() const { std::cout << "Marca: " << marca << " | Modelo: " << modelo << " | Placa: " << placa; }
};
class Auto : public Vehiculo {
    int capacidad;
public:
    Auto(std::string m, std::string mod, std::string p, int cap) : Vehiculo(m, mod, p), capacidad(cap) {}
    void mostrarInformacion() const override {
        Vehiculo::mostrarInformacion();
        std::cout << " | Capacidad: " << capacidad << " personas [Auto]\n";
    }
};
class Bicicleta : public Vehiculo {
    std::string tipo;
public:
    Bicicleta(std::string m, std::string mod, std::string p, std::string t) : Vehiculo(m, mod, p), tipo(t) {}
    void mostrarInformacion() const override {
        Vehiculo::mostrarInformacion();
        std::cout << " | Tipo: " << tipo << " [Bicicleta]\n";
    }
};
class SistemaAlquiler {
    std::vector<std::shared_ptr<Vehiculo>> flota;
public:
    void registrarVehiculo(std::shared_ptr<Vehiculo> v) { flota.push_back(v); }
    void mostrarVehiculosDisponibles() const {
        std::cout << "\n--- Vehículos Disponibles ---\n";
        for (const auto& v : flota) if (!v->estaAlquilado()) v->mostrarInformacion();
    }
};
int main() {
    SistemaAlquiler sistema;
    sistema.registrarVehiculo(std::make_shared<Auto>("Toyota", "Corolla", "ABC-123", 5));
    sistema.registrarVehiculo(std::make_shared<Bicicleta>("Trek", "Marlin", "BIC-001", "Montaña"));
    sistema.mostrarVehiculosDisponibles();
    return 0;
}
