# smart_prt_oop_hw
Умные указатели
Создать иерархию классов: базовый и наследник, в каждом по 2-3 метода
(наследование виртуальное, но ни в одном классе нет чисто виртуальных функций).
В main() создать объект ребенка через умный указатель родителя (аналог Parent* p =
new Child(), только через умные указатели).
Вызвать какой-нибудь метод у этого объекта для проверки работоспособности.
Затем совершить downcast, причем проверить, что указатель внутри получившегося
умного указателя не nullptr (так же, как мы и должны проверять, если бы делали
обычный динамик каст. Но тут синтаксис слегка отличается из-за использования умных
указателей).
И снова вызвать тот же метод у этого объекта для проверки работоспособности.
Все можно написать в одном .cpp файле.
Проанализируйте результаты своей работы.
