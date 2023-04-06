todo: main.o Sistema.o Clase.o DtClase.o DtEntrenamiento.o DtFecha.o DtSocio.o DtSpinning.o Entrenamiento.o Inscripcion.o Socio.o Spinning.o Turno.o
	g++ -Wall -o main main.o Sistema.o Clase.o DtClase.o DtEntrenamiento.o DtFecha.o DtSocio.o DtSpinning.o Entrenamiento.o Inscripcion.o Socio.o Spinning.o Turno.o
main.o: main.cpp
	g++ -Wall -c main.cpp
Sistema.o: Sistema.cpp Sistema.h
	g++ -Wall -c Sistema.cpp
Clase.o: Clase.cpp Clase.h
	g++ -Wall -c Clase.cpp
DtClase.o: DtClase.cpp DtClase.h
	g++ -Wall -c DtClase.cpp
DtEntrenamiento.o: DtEntrenamiento.cpp DtEntrenamiento.h
	g++ -Wall -c DtEntrenamiento.cpp
DtFecha.o: DtFecha.cpp DtFecha.h
	g++ -Wall -c DtFecha.cpp
DtSocio.o: DtSocio.cpp DtSocio.h
	g++ -Wall -c DtSocio.cpp
DtSpinning.o: DtSpinning.cpp DtSpinning.h
	g++ -Wall -c DtSpinning.cpp
Entrenamiento.o: Entrenamiento.cpp Entrenamiento.h
	g++ -Wall -c Entrenamiento.cpp
Inscripcion.o: Entrenamiento.cpp Entrenamiento.h
	g++ -Wall -c Entrenamiento.cpp
Socio.o: Socio.cpp Socio.h
	g++ -Wall -c Socio.cpp Socio.h
Spinning.o: Spinning.cpp Spinning.h
	g++ -Wall -c Spinning.cpp
Turno.o: Turno.cpp Turno.h
	g++ -Wall -c Turno.cpp
clean:
	rm -f *.o
	rm -f main