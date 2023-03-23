// int age1 {22 + 5};  
// int age2 (22 + 5);
// int age3 = 22 + 5;

/*//Escape последовательности


\\  \b удаление последнего выведенного символа
\\  \n перейти на начало новой строки
\\  \t перейти к следующей позиции табуляции

\\  \\ вывести обратную черту
\\  \" вывести двойную кавычку
\\  \' вывести одинарную кавычку


#include <iostream>
using namespace std;

int main()
{
    
    return 0;
}
*/

/*//const

#include <iostream>
using namespace std;

int main()
{
    const int VAR_A = 1;
    return 0;
}

*/

/*//Логические операции
//  < - меньше
//  > - больше
//  <= - меньше или равно
//  >= - больше или равно
//  == - сравнение равенства
//  != - сравнение неравенства
//  && - и
//  || - или
//  != - не

#include <iostream>
using namespace std;

int main()
{
    const int VAR_A = 1;
    return 0;
}

*/

/*//for

#include <iostream>
using namespace std;

int main()
{
    int i{};

    for (int j{}; j<=10; j++)
    {
        cout<<"j = "<<j<<"\n";
    }

    for (;;)
    {
        cout<<"i = "<<i<<"\n";
        if (i>=10) break;
        i++;
    }
    return 0;
}
*/

/* //continue

#include <iostream>
using namespace std;

int main ()
{
    for (int i{};;)
    {
        i++;
        if(i==4)continue;  //игнорирует оставшееся тело цикла и возвращается к началу цикла
        cout<<i<<" \n";
        if(i>=10)break;
    }
    return 0;
} */

//ARRAY

#include <iostream>
//#include <bitset>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    //cout<<"Привет!\n";

    int arr[5]{1,2,3,4,5};

    for(int i{};i<22;i++)
    {
        cout<<"Адрес памяти "<<i+1<<" :\t"<<arr+i<<"\t Значение :\t"<<*(arr+i)<<"\n";
    }

    cout<<"\n\n\n";
    
    int arr2[5]{};

    for (int j{};j<14;j++)
    {
        cout<<"Адрес памяти "<<j+1<<" :\t"<<arr2+j<<"\t Значение :\t"<<*(arr2+j)<<"\n";
    }
    
    int a{ 1'123'412};
    int *pa=&a;
    cout<<"\n\n"<<"Адрес: " << &a << " Значение: "<<a;
    cout<<"\n\n"<<"Адрес: " << pa << " Значение: "<< *pa;
    cout<<"\n\n"<<0b0000000000000001;
    cout<<"\n\n"<<a+0b0000000000000001;
    cout<<"\n\n"<<*pa+0x0001;
    /* *pa=0;
    cout<<"\n"<<a;*/
    float fa{12345.123};
    cout<<"\n\nfloat:  \t"<<fa;
    double da{12345.123};
    cout<<"\n\ndouble:  \t"<<da;
    long double dda{12345.123};
    cout<<"\n\nlong double\t"<<dda;


    cout<<"\n\n\n\n";
    return 0;


} 

