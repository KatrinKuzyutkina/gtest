### Метод void root(double* roots,double a, double b, double c);
**Тест №1 (позитивный)**

Цель: проверка вычисления корней квадратного уравнения при положительном дискриминанте.

Входные данные: a=1, b=-5, c=6.

Ожидаемый результат: корни уравнения: x1 = 3, x2 = 2.

Описание процесса: используется стандартный вызов функции с контролем возвращаемого значения. Предварительной подготовки не требуется.

**Тест №2 (позитивный)**

Цель: проверка вычисления корней квадратного уравнения при положительном дискриминанте и дробном результате.

Входные данные: a=1, b=-4, c=3.75.

Ожидаемый результат: корни уравнения: x1 = 2.5, x2 = 1.5.

Описание процесса: используется стандартный вызов функции с контролем возвращаемого значения. Предварительной подготовки не требуется.

**Тест №3 (позитивный)**

Цель: проверка вычисления корней квадратного уравнения при дискриминанте равном 0.

Входные данные: a=1, b=-6, c=9.

Ожидаемый результат: корни уравнения: x1 = 3, x2 = 3.

Описание процесса: используется стандартный вызов функции с контролем возвращаемого значения. Предварительной подготовки не требуется.

**Тест №4 (негативный)**

Цель: проверка вычисления корней квадратного уравнения при нулевом коэффициенте a.

Входные данные: a=0, b=0, c=0.

Ожидаемый результат: корней уранения не существует.

Описание процесса: используется стандартный вызов функции с контролем возвращаемого значения. Предварительной подготовки не требуется.


**Тест №5 (негативный)**

Цель: проверка вычисления корней квадратного уравнения при отрицательном дискриминанте.

Входные данные: a=1, b=2, c=3.

Ожидаемый результат: корней уранения не существует.

Описание процесса: используется стандартный вызов функции с контролем возвращаемого значения. Предварительной подготовки не требуется.
