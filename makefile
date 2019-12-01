Ejer.png : Ejer.dat Bifur.py
	python Bifur.py

Ejer.dat  : Ejer.x
	./Ejer.x > Ejer.dat

Ejer.x : bifurcador.cpp
	c++ bifurcador.cpp -o Ejer.x
	
clean:
	rm -r *.x *.dat *.png
