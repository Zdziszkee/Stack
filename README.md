Odpowiedzi na pytania:
- Co to jest stos?
- Stos to struktura danych w której elementy ukladane sa w kolejnosci LIFO (Last In, First Out)


- Zastosowania  stosu:
- ONP, przechowywanie zmiennych lokalnych, stack wywolan funkcji


- Dlaczego operacja pop() z std::stack nie zwraca wartości elementu
- Operacja pop() na obiekcie std::stack nie zwraca wartości elementu, ponieważ jej głównym celem jest usunięcie (zdjęcie) elementu ze stosu.


-  Do czego służy funkcja std::queue::emplace:
- W tym przykładzie, std::queue::emplace jest używane do umieszczenia nowego obiektu w kolejce, bez koniecznosci jego kopiowania


Kompilacja:
Stack.cpp:
- make Stack.x

Generator.cpp:
- make Generator.x

ONP.cpp:
- make ONP.x

Kompilacja wszystkich:
- make all

Uruchamianie:
Stack.x:
- ./Stack.x

Generator.x:
- ./Generator.x 10

Generator.x i zapisanie wyników do pliku txt:
- ./Generator.x 10 > wynik.txt

Stack  z Generatorem:
- ./Generator.x 10 | ./Stack.x

 ONP.x:
 - ./ONP.x