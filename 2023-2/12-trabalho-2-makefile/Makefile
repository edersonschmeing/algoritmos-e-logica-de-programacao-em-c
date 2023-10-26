all: app_main

app_main: app_main.o array_dinamico.o  
	gcc obj/app_main.o obj/array_dinamico.o -o bin/app_main.out	

array_dinamico.o: src/array_dinamico.c include/array_dinamico.h
	gcc -I include -Wall -Werror -c src/array_dinamico.c -o obj/array_dinamico.o

app_main.o: apps/app_main.c include/array_dinamico.h
	gcc -I include -Wall -Werror -c apps/app_main.c -o obj/app_main.o

run:
	./bin/app_main.out	

clean:
	rm -f bin/app_main.out obj/*.o	
#del /F /A bin\app_main.out obj\*.o 	