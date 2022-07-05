VEKTOR

1. insert(početak) -> 0ms O(n)
2. insert(sredina) -> 0ms
3. insert(kraj)    -> 0ms

dohvaćanje (1000-ti element) -> 0ms   O(1)

1. delete(početak) -> 0ms  O(n)
2. delete(sredina) -> 0ms
3. delete(kraj)    -> 0ms



FORWARD LIST

1. insert(početak) -> 0ms   O(1)
2. insert(sredina) -> 0ms
2. insert(kraj)    -> 0ms

dohvaćanje (1000-ti element) -> 0ms //ne odgovara  O(n)

1. delete(početak) -> 0ms   O(1)
2. delete(sredina) -> 0ms
3. delete(kraj)    -> 0ms


Gledajući  Big-O Cheat Sheet možemo reći da je prva struktura bolja kada želimo dohvatiti neki podatak strukture, dohvaćamo ga odmah i k tome 
vektor ima posebnu funkciju at() za pristup vrijednosti na određenoj poziciji. Za sve ostale funkcije najpogodnija nam je forward lista po brzini 
ali za nju su potrebi i međukodovi za određene funkcije.


Vrijednosti jedne i druge strukture ne podudaraju se u potpunosti sa službenim mjerenjima a priori.

BUBBLE SORT algoritam je algoritam za sortiranje podataka, radi na način da prolazi kroz neku strukturu podataka 
i uspoređuje susjedne elemente ovisno o zadanom uvjetu (zamijeni manji za veći ili obrnuto).

Ovaj algoritam je idealan kada je struktura podataka već sortirana ili donekle sortirana Ω(n), što znaći da prolazi jednom ili nekoliko
puta kroz strukturu podatak da prepozna da je već sortirana ili mora nekoliko puta promijeniti redoslijed.

Ovaj algoritam je loš izbor kada naša struktura ima vrlo ispremiješanu strukturu podataka i kada se u strukturi podataka nalazi
veliki broj podataka, tada ja O(n*n).

U odnosu na druge algoritme sortiranja sa Big-O cheet sheeta-a se može vidjeti da je ovaj algoritam jedan od najsporijih algoritama za sortiranje
no ukoliko je struktura podataka već ili skoro sortirana tada je jedan od najboljih.




