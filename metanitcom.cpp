// metanit.com C++

/* //Типы данных
signed char                 1 байт    символ    от -128                 до 127

unsigned char               1 байт    символ    от 0                    до 255

char                        1 байт    символ    от -128(0)              до 127(255)

short
short int,
signed short int,
signed short                2 байта   число     от -32768                      до 32767

unsigned short
unsigned short int          2 байта   число     от 0                           до 65535

int
signed int
signed                      4 байта   число     от -2'147'483'648              до 2'147'483'647

unsigned int
unsigned                    4 байта   число     от 0                           до 4 294 967 295

long
long int,
signed long int                                 от -2'147'483'648/             до 2'147'483'647/
signed long                 4/8 байт  число     −9'223'372'036'854'775'808     9'223'372'036'854'775'807

unsigned long
unsigned long int           4 байта   число     0                              4'294'967'295

long long
long long int
signed long long int
signed long long            8 байт    число     от −9'223'372'036'854'775'808  до 9'223'372'036'854'775'807

unsigned long long
unsigned long long int      8 байт    число     от 0                           до 18 446 744 073 709 551 615
 */

/* #include <iostream>

int main()
{
    std::cout<<"Hello";
    int a{};
    int b;
    b=0;
    int c{2};
    return 0;
} */

#include <iostream>
// #include <bitset>
using namespace std;

void work_with_memory();
void change_type();
void binari();
void match();
void switchcase();

int main()
{
    setlocale(LC_ALL, "ru");
    // cout<<"Привет!\n";

    // work_with_memory();

    // change_type();

    // binari();
    
    //switchcase();
    
    cout << "\n\n\n\n\n\n\n\n\n\n";
    return 0;
}

void work_with_memory()
{
    int arr[5]{1, 2, 3, 4, 5};

    for (int i{}; i < 22; i++)
    {
        cout << "Адрес памяти " << i + 1 << " :\t" << arr + i << "\t Значение :\t" << *(arr + i) << "\n";
    }

    cout << "\n\n\n";

    int arr2[5]{};

    for (int j{}; j < 14; j++)
    {
        cout << "Адрес памяти " << j + 1 << " :\t" << arr2 + j << "\t Значение :\t" << *(arr2 + j) << "\n";
    }

    int a{1'123'412};
    int *pa = &a;
    cout << "\n\n"
         << "Адрес: " << &a << " Значение: " << a;
    cout << "\n\n"
         << "Адрес: " << pa << " Значение: " << *pa;
    cout << "\n\n"
         << 0b0000000000000001;
    cout << "\n\n"
         << a + 0b0000000000000001;
    cout << "\n\n"
         << *pa + 0x0001;
    /* *pa=0;
    cout<<"\n"<<a;*/
    float fa{12345.123};
    cout << "\n\nfloat:  \t" << fa;
    double da{12345.123};
    cout << "\n\ndouble:  \t" << da;
    long double dda{12345.123};
    cout << "\n\nlong double\t" << dda;

    cout << "\n\n\n\n";

    unsigned short b{0};
    int count{9};
    unsigned short *pb = &b;
    int *pcount = &count;

    for (; b < count - 1; b++)
    {
        cout << b << "\n";
    }
}

void change_type()
{
    int a{9028347};
    int *pa = &a;
    long int b{3'223'372'036'854'775'800};
    long int *pb = &b;
    a += b;
}

void binari()
{
    /*
    >> 2 сдвиг вправо на 2 0000 1000 >> 2 == 0000 0010
    << 1 сдвиг влево на 1
    &  празрядное "и" Возвращает 1, если оба из соответствующих разрядов обоих чисел равны 1
    | празрядное "или" Возвращает 1, если хотя бы один из соответствующих разрядов обоих чисел равен 1
    ^ празрядное "или" Возвращает 1, если только один из соответствующих разрядов обоих чисел равен 1
    ~ поразрядное "не" Если разряд равен 1, то он становится равен 0, а если он равен 0, то он получает значение 1.
    */

    signed short a{0b0000'0000'0000'0011};
    signed short b{0b0111'1111'1111'1111};
    // signed int b{-4};
    signed short int *pb = &b;
    cout << "a:\t" << a << "\n&a:\t" << &a << "\nsize:\t" << sizeof(a) << "\n\n";
    cout << "b:\t" << b << "\n&b:\t" << &b << "\nsize:\t" << sizeof(b) << "\n\n";
    cout << "~b+0b0001:" << ~b + 0b0001 << "\n\n";
    b = b >> 3;
    cout << "b>>3:\t" << b << "\n";
    cout << b << "\n\n";

    unsigned char ab{0b00000010};
    cout << "char ab:" << ab << endl;
}

void match()
{
    /*
        ==
        >=
        <=
        <
        >
        !=
        !
        &&
        ||
        ^
        */

    int a{5};
    int b{8};
    int c = a > b ? a - b : a + b;

    std::cout << "c = " << c << std::endl; // c = 13

    a > b ? std::cout << a - b : std::cout << a + b;
}

void switchcase()
{
    int i[1]{1};
    char a{'a'};
    for (; *i < 8; (*i)++)
    {
        cout << *i << ":\t";
        switch ((*i))
        {
        case 1:
        {
            cout << "case 1" << endl;
            break;
        }

        case 2:
        {
            cout << "case 2" << endl;
            break;
        }

        case 3:
        case 4:
        {
            cout << "case 3 or 4" << endl;
            break;
        }

        default:
        {
            cout << "default i:" << *i << endl;
            break;
        }
        }

        // cout<<a<<"\t";
        switch (a)
        {
        case 'a':
        {
            cout << "\t"
                 << "a"
                 << "\n";
            break;
        }
        case 'b':
        {
            cout << "\t"
                 << "b"
                 << "\n";
            break;
        }
        case 'c':
        {
            cout << "\t"
                 << "c"
                 << "\n";
            break;
        }
        case 'd':
        {
            cout << "\t"
                 << "d"
                 << "\n";
            break;
        }
        default:
        {
            cout << "\t\t" << a << "\n";
            break;
        }
        }
        a = a + 0b0000'0001;
    }
}


