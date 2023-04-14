todo: main.o Sistema.o Clase.o DtClase.o DtEntrenamiento.o DtFecha.o DtSocio.o DtSpinning.o Entrenamiento.o Inscripcion.o Socio.o Spinning.o
	g++ -g -Wall -o main main.o Sistema.o Clase.o DtClase.o DtEntrenamiento.o DtFecha.o DtSocio.o DtSpinning.o Entrenamiento.o Inscripcion.o Socio.o Spinning.o
main.o: main.cpp
	g++ -g -Wall -c main.cpp
Sistema.o: Sistema.cpp Sistema.h
	g++ -g -Wall -c Sistema.cpp
Clase.o: Clase.cpp Clase.h
	g++ -g -Wall -c Clase.cpp
DtClase.o: DtClase.cpp DtClase.h
	g++ -g -Wall -c DtClase.cpp
DtEntrenamiento.o: DtEntrenamiento.cpp DtEntrenamiento.h
	g++ -g -Wall -c DtEntrenamiento.cpp
DtFecha.o: DtFecha.cpp DtFecha.h
	g++ -g -Wall -c DtFecha.cpp
DtSocio.o: DtSocio.cpp DtSocio.h
	g++ -g -Wall -c DtSocio.cpp
DtSpinning.o: DtSpinning.cpp DtSpinning.h
	g++ -g -Wall -c DtSpinning.cpp
Entrenamiento.o: Entrenamiento.cpp Entrenamiento.h
	g++ -g -Wall -c Entrenamiento.cpp
Inscripcion.o: Inscripcion.cpp Inscripcion.h
	g++ -g -Wall -c Inscripcion.cpp
Socio.o: Socio.cpp Socio.h
	g++ -g -Wall -c Socio.cpp Socio.h
Spinning.o: Spinning.cpp Spinning.h
	g++ -g -Wall -c Spinning.cpp 
clean:
	rm -f *.o
	rm -f *.h.gch
	rm -f main