CXX = g++
CXXFLAGS = -Wall -g

all: main_scalar_product

main_scalar_product: main_scalar_product.o scalar_product.o
	$(CXX) $(CXXFLAGS) -o $@ $^

main_scalar_product.o: main_scalar_product.cc scalar_product.h
	$(CXX) $(CXXFLAGS) -c $<

scalar_product.o: scalar_product.cc scalar_product.h
	$(CXX) $(CXXFLAGS) -c $<

clean:
	rm -f *.o main_scalar_product