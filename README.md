# Домашнее задание к работе 14: Указатели (Вариант 6)

## Условие задачи

> **Вариант 6. Поиск элемента**
> 
> Реализуйте `const int *findValue(const int *a, int n, int value)`. Функция возвращает указатель на первое вхождение искомого значения или `NULL`, если значение не найдено. В `main` проверьте результат и не разыменовывайте `NULL`.

## 1. Алгоритм и блок-схема

### Алгоритм

1. **Начало**
2. **Объявление функции** `findValue(const int *a, int n, int value)`.
3. **В цикле** (`i` от 0 до `n-1`):
   * Проверить: `a[i] == value`?
   * Если **Да** — вернуть указатель `&a[i]`.
4. **Конец цикла** (элемент не найден).
5. **Вернуть `NULL`**.
6. **Функция `main`**:
   * Инициализировать массив.
   * Вызвать `findValue`.
   * Проверить результат на `NULL`.
   * Если не `NULL` — вывести значение по указателю.
   * Если `NULL` — вывести сообщение "Не найдено".
7. **Конец**

### Блок-схема

<img width="823" height="735" alt="image" src="https://github.com/user-attachments/assets/18d72eb5-d993-444c-8402-1bc15f2d02ca" />


## 2. Реализация программы

```c
#include <stdio.h>

const int *findValue(const int *a, int n, int value) {
    for (int i = 0; i < n; i++) {
        if (a[i] == value) {
            return &a[i];
        }
    }
    return NULL;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 30;

    const int *result = findValue(arr, n, target);

    if (result != NULL) {
        printf("Элемент найден: %d\n", *result);
    } else {
        printf("Элемент не найден\n");
    }

    return 0;
}
```
## 3. Результат работы программы
```
Элемент найден: 30
```

## 4. Информация о разработчике
### Гусев Данил БИЦТ-261
