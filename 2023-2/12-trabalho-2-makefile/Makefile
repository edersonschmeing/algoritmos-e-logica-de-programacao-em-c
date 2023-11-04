all: app_main

app_main: app_main.o array_dinamico.o busca_array.o ordenacao_array.o  
	gcc obj/app_main.o obj/array_dinamico.o obj/busca_array.o obj/ordenacao_array.o -o bin/app_main.out	

busca_array.o: src/busca_array.c include/busca_array.h
	gcc -I include -Wall -Werror -c src/busca_array.c -o obj/busca_array.o

ordenacao_array.o: src/ordenacao_array.c include/ordenacao_array.h
	gcc -I include -Wall -Werror -c src/ordenacao_array.c -o obj/ordenacao_array.o

array_dinamico.o: src/array_dinamico.c include/array_dinamico.h
	gcc -I include -Wall -Werror -c src/array_dinamico.c -o obj/array_dinamico.o

app_main.o: apps/app_main.c include/array_dinamico.h
	gcc -I include -Wall -Werror -c apps/app_main.c -o obj/app_main.o

run:
	./bin/app_main.out	

clean:
	rm -f bin/app_main.out obj/*.o	
#del /F /A bin\app_main.out obj\*.o 	