# Nombre del ejecutable, modificar si se desea
TARGET = myprogram

# Compilador
CC = g++

# Opciones de compilación, -g para incluir información de depuración
CFLAGS = -Wall -g

# Encuentra todos los archivos .cc y .h
SRC = $(wildcard *.cc)
HDR = $(wildcard *.h)

# Objetos
OBJ = $(SRC:.cc=.o)

# Regla por defecto
all: $(TARGET) clean_objs

# Regla para construir el ejecutable
$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

# Regla para los archivos objeto
%.o: %.cc $(HDR)
	$(CC) $(CFLAGS) -c $<

# Regla para limpiar
clean:
	rm -f $(OBJ) $(TARGET)

# Regla para limpiar objetos después de la construcción, para que no se suban al repositorio de git los .o
clean_objs:
	rm -f $(OBJ)

# Evita conflictos con archivos de mismo nombre
.PHONY: all clean clean_objs