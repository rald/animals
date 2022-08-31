animals: main.cpp animal.cpp dog.cpp cat.cpp bird.cpp
	g++ main.cpp animal.cpp dog.cpp cat.cpp bird.cpp -o animals

.PHONY: clean

clean:
	rm animals
