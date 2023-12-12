/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática básica
 *
 * @author Alfredo
 * @date 12/12/2023
 * @brief Este programa crea un objeto de la clase Complejo y realiza operaciones con él
 * @see https://google.github.io/styleguide/cppguide.html
 * 
 */
#pragma once
#include <iostream>
#include <cmath>

struct composicion {
    double real;
    double imaginario;

    // Constructor para inicializar los valores real e imaginario
    composicion(double r = 0.0, double i = 0.0) : real(r), imaginario(i) {}
};

class Complejo {
public:
    // Constructor
    Complejo(const composicion& number) : number_(number) {}

    // Getters
    composicion GetNumber() const { return number_; }

    // Setters
    void SetNumber(const composicion& number) { number_ = number; }
    
    // Operators
    friend std::istream& operator>>(std::istream& is, Complejo& number);
    friend std::ostream& operator<<(std::ostream& os, const Complejo& number);
    Complejo operator+(const Complejo& number) const;
    Complejo operator-(const Complejo& number) const;

private:
    composicion number_;
};