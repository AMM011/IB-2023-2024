/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática básica
 *
 * @author Alfredo
 * @date 09/12/2023
 * @brief Este programa resuelve difentes operaciones con circulos
 * @see https://google.github.io/styleguide/cppguide.html
 * 
 */

#pragma once
#include <iostream>
#include <cmath>
#include <string>

// Definiendo una estructura para el centro del círculo.
struct Punto {
    float x;
    float y;
};

// Enumeración para los colores del círculo.
enum ColorCirculo {
    ROJO,
    VERDE,
    AZUL,
    AMARILLO,
};

class Circulo {
  public:
    Circulo(Punto centro, double radio, ColorCirculo color) : centro_{centro}, radio_{radio}, color_{color} {} // Constructor

    // Getters
    Punto GetCentro() const { return centro_; }
    double GetRadio() const { return radio_; }
    ColorCirculo GetColor() const { return color_; }

    // Setters
    void SetCentro(Punto centro) { centro_ = centro; }
    void SetRadio(double radio) { radio_ = radio; }  
    void SetColor(ColorCirculo color) { color_ = color; }

    // Methods
    double CalcularArea() const { return M_PI * pow(radio_, 2); }
    double CalcularPerimtro() const { return 2 * M_PI * radio_; }
    void Print() const;
    void EsInterior(Punto punto) const;
  private:
    Punto centro_;
    double radio_;
    ColorCirculo color_;
};