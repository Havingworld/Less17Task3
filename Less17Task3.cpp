/*
Написать функцию, которая принимаем указатель на char, по которому лежит строка.
Функция должна возвращать true, если вторая строка является подстрокой первой.
*/

#include <iostream>
using namespace std;

bool substr(char a[], char b[])
{
    
    for (int i = 0; *(a + i) != '\0'; i++)
    {
        bool bCorrect = true;
        for (int n = 0; *(b + n) != '\0'; n++)
        {
            if (*(b + n) != *(a + i + n)) bCorrect = false;
        }
        if (bCorrect) return true;
    }
    return false;
}

int main()
{
    char a[] = "Hello world";
    char b[] = "wor";
    char c[] = "bababa";

    cout << boolalpha << substr(a, b) << " " << substr(a, c);

}
