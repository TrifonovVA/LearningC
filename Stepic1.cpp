// https://stepik.org/course/363/syllabus

// 1.5.14 Цикл while
/*
#include <iostream>
using namespace std;

int main ()
{
    int n,n1,n2;
    cin>>n2;
    cin>>n1;
    cin>>n;
    int lloc=0;
    int lmin=0;
    int max=0;
    while (n!=0)
    {
        if(n1>n2 && n1>n)
        {
            if (lloc!=0)
            {
                if(lmin!=0)
                {
                    if (lmin>lloc)
                    {
                        lmin=lloc;
                    }
                }
                else
                {
                    lmin=lloc;
                }
            }
            lloc=1;

        }
        else
        {
            if (lloc!=0)
            {
                lloc++;
            }
        }
        n2=n1;
        n1=n;
        cin>>n;
    }


    cout<<lmin;
    return 0;
} */

// 1.6.1
/*
x = (double) k/m.
Функция trunc, которая просто отбрасывает дробную часть числа и выглядит так: n = trunc(x);
Функция floor, которая округляет число в меньшую сторону и выглядит так: n = floor(x);
Функция ceil, которая округляет число в большую сторону и выглядит так: n = ceil(x);
Функция round, которая округляет число по математическим правилам и выглядит так: n = round(x);
 */
#include <iostream> //Работа с вводом и выводом через командную строку
#include <iomanip>  //Работа с форматированием, вводом и выводом действительных чисел
#include <cmath>
using namespace std;

int main()
{
    double n;
    while (n != 0)
    {
        cin >> n;
        cout << setprecision(50) << fixed;
        cout << n << endl;
        cout << (int)n << endl;
        cout << n - (int)n << endl<<endl<<endl;
    }
    return 0;
}