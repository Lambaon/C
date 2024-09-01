#include <stdio.h>  // подключаем заголовочный файл stdio.h юзаем практически всегда
int main(void)                  // определяем функцию main
{                               // начало функции
    printf("Hello \n");       // выводим строку на консоль        
    int number = 33;
    printf("Ось число = %d \n", number);
    int x;// переменные як і в С# переменні чисел :
    int q,w,e;            // декілька перемен зразу 
    long wint = 221; // зараз можна буде юзати лонг місто інт так як інт міститьь тільки –32768 до 32767 (при 2 байтах) или от −2 147 483 648 до 2 147 483 647 (при 4 байтах) и вище.
    printf("Числа = %d \n", wint); // long  в дой час хранить -2 147 483 648 до 2 147 483 647 (4 байта), либо в диапазоне от -9223372036854775807 до +9 223 372 036 854 775 807 (8 байт)
    char greeting[] = "Hello, world!";
    printf("%s\n", greeting);//return 0; // один раз в кінці функції - це іменований блок коду, який виконує певну задачу. Це як рецепт: ви даєте функції певні інгредієнти (аргументи), і вона повертає вам готовий результат
    double pi =3.14159;
    printf("Ось число pi = %d \n", pi);
    float number1 = 3.14f;
    long double number2 = 123456.789;
    printf("number1 = %f\n", number1);
    printf("number2 = %Lf\n", number2);
    //Символи Переменним типа char можно присвоить один символ в одинарних кавичках:
    char letter = 'A';
    printf("letter: %d \n", letter);    // letter: 65 | все діло спецификаторах формата
    printf("letter: %c \n", letter);    // letter: A | все діло в спецификаторах формата 
    // https://imgur.com/a/T1dZlnT
    // https://imgur.com/a/0MAdu4c
    // робота з printf 1 \n: перевод на новую строку 2 \t: табуляция 3 \r: возврат каретки (курсора) в начало строки 4 \\: обратный слеш  5 \': одинарная кавычка 6 \": двойная кавычка
    printf("The book \"The C Programming Language\"\nBrian Kernighan, Dennis Ritchie");
// Спецификации преобразования 
/*
%c: для вывода отдельных символов (тип char)
%s: для вывода строк
%d: для вывода целых чисел со знаком (тип int)
%i: для вывода целых чисел со знаком (тип int)
%u: для вывода целых положительных чисел (тип unsigned)
%f: для вывода чисел с плавающей точкой (float, double)
%F: для вывода чисел с плавающей точкой в верхнем регистре (float, double)
%e: для вывода экспоненциального представления чисел с плавающей точкой (float, double)
%E: для вывода экспоненциального представления чисел с плавающей точкой в верхнем регистре (float, double)
%g: для вывода чисел используется более короткий из форматов %e или %f
%G: для вывода чисел используется более короткий из форматов %E или %F
%o: для вывода восьмеричных чисел без знака
%x: для вывода шестнадцатеричных чисел
%X: для вывода шестнадцатеричных чисел в верхнем регистре
%%: для вывода знака процента
*/
    float r = 71.8986;
    printf("x = %f \n", r);
    printf("x = %e \n", r);
    
    char symbol = 'r';
    printf("symbol = %c \n", symbol);
    
    unsigned int numbe = 23;
    printf("number = %u \n", numbe);
    
    printf("%s \n", "Hello Word 2024");
// https://imgur.com/a/kGuZ8DM
// Константа 
// переменну ми можемо міняти в програмі ось так наприклад:
    int number3 = 2;
    printf("number = %d \n", number3);
    number3 = 55;
    printf("number = %d \n", number3);
    number3 = -23;
    printf("number = %d \n", number3);

    const int number5 = 2589;
    printf("number = %d \n", number5);
    // number5 = 55;  эта строка работать не будет, так как number - это константа
    const float PI = 3.14; // число пі ми ніколи не будемо міняти то можемо писати константу так як не буде мінятися
    printf("Число P = %.2f \n",PI); // %f пише з плавуючой точкой типу 3.50 чи щось з крапкою комою а %.2f 2 це дві точки після крапки або коми 
// арифметика 
    int a = 67;
    int b = 33;
    int c = a + b + 7;
    printf("a + b + 7 = %d \n", c); 
    int wuo = a - b;
    printf("a - b = %d \n", wuo);
    int c1 = a * b;
    printf("%d \n", c1);
    float a1 = 67;
    float b1 = 33;
    float c2 = a1 / b1;
    printf("%f \n",c2);
// Операциї сравнения ==
        int a3 = 10;
    int b3 = 4;
    int c3 = a3 == b3;                 // 0 - числа НЕ равны
    printf("c = %d \n", c3);         // c = 0

    int num = 5;
    int result = num == 2 + 3;      // 1 - числа равны
    printf("result = %d \n", result);     // result = 1
    //Операция "не равно". Возвращает 1, если первый операнд не равен второму, и 0, если оба операнда равны:
    int f = 10 != 4;    // 1
    int d = 4 != 4;     // 0
        // https://imgur.com/a/B1UMztv
    //Операции сравнения имеют больший приоритет, чем логические операции, поэтому мы могли бы напрямую подставить операции сравнения:
    int l = -2 > 5 && 0 < 7 || 0 == 0;        // 1
    printf("%d \n",l);


}



