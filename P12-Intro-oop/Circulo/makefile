# Nombre del ejecutable
TARGET = myprogram

# Compilador
CC = g++

# Opciones de compilación
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

# Regla para limpiar objetos después de la construcción
clean_objs:
	rm -f $(OBJ)

# Regla para subir a GitHub
github:
	git pull
	git add .
	git commit -m "Práctica IB"
	git push 

# Evita conflictos con archivos de mismo nombre
.PHONY: all clean clean_objs github