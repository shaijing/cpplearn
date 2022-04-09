//
// Created by Chaos on 2022/2/27.
//
#include "../../headers/learn/learn_chapter_3.h"

int i_1 = 1;//traditional C initialization,
int i_2(2);//alternative C++ syntax
/*c++11 initialization methods*/
//use for array or struct
int hamburgers = {24};
int emus{7};//set emus to 7
int rocs = {};//set rocs to 0
int psy{};//set psy to 0

/*wchar*/
wchar_t a_1 = L'a';
/*char16 char32*/
char16_t a_2 = u'a';
char32_t a_3 = U'\U0000222B';

/*bool value*/
bool is_1 = true;
int is_2 = true;
bool is_3 = -100;//assign true
bool is_4 = 0;// assigned false

/*constant value*/
const int CONSTANT_1 = 12;

void limits() {
    using namespace std;
    int n_int = INT_MAX;        // initialize n_int to max int value
    short n_short = SHRT_MAX;   // symbols defined in climits file
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;
    unsigned long long n_ullong = ULONG_LONG_MAX;

    // sizeof operator yields size of type or of variable
    cout << "int is " << sizeof(int) << " bytes." << endl;
    cout << "short is " << sizeof n_short << " bytes." << endl;
    cout << "long is " << sizeof n_long << " bytes." << endl;
    cout << "long long is " << sizeof n_llong << " bytes." << endl;
    cout << endl;

    cout << "Maximum values:" << endl;
    cout << "int: " << n_int << endl;
    cout << "short: " << n_short << endl;
    cout << "long: " << n_long << endl;
    cout << "long long: " << n_llong << endl << endl;
    cout << "long long: " << n_llong << endl << endl;
    cout << "unsigned long long: " << n_ullong << endl << endl;
    cout << "Minimum int value = " << INT_MIN << endl;
    cout << "Bits per byte = " << CHAR_BIT << endl;
}

void hexoct1() {
    int chest = 42;
    int waist = 0x42;
    int inseam = 042;

    cout << "Monsieur cuts a strling figure!\n";
    cout << "chest = " << chest << " (42 in decima)\n";
    cout << "waist = " << waist << " (0x42) in hex\n";
    cout << "inseam = " << inseam << " (042 in octal)\n";
}

void hexoct2() {
    // hexoct2.cpp -- display values in hex and octal
    int chest = 42;
    int waist = 42;
    int inseam = 42;

    cout << "Monsieur cuts a striking figure!" << endl;
    cout << "chest = " << chest << " (decimal for 42)" << endl;
    cout << hex;      // manipulator for changing number base
    cout << "waist = " << waist << " (hexadecimal for 42)" << endl;
    cout << oct;      // manipulator for changing number base
    cout << "inseam = " << inseam << " (octal for 42)" << endl;
}

void chartype() {
    // chartype.cpp -- the char type
    char ch;        // declare a char variable

    cout << "Enter a character: " << endl;
    cin >> ch;
    cout << "Hola! ";
    cout << "Thank you for the " << ch << " character." << endl;
    // cin.get();
    // cin.get();
}

void morechar() {
    char ch = 'M';       // assign ASCII code for M to ch
    int i = ch;          // store same code in an int
    cout << "The ASCII code for " << ch << " is " << i << endl;
    cout << "Add one to the character code:" << endl;
    ch = ch + 1;          // change character code in ch
    i = ch;               // save new character code in i
    cout << "The ASCII code for " << ch << " is " << i << endl;
    // using the cout.put() member function to display a char
    cout << "Displaying char ch using cout.put(ch): ";
    cout.put(ch);
    // using cout.put() to display a char constant
    cout.put('!');
    cout << endl << "Done" << endl;
    // cin.get();
}

void bondini() {
    cout << "\aOperation \"HyperHype\" is now activated!\n";
    cout << "Enter your agent code:________\b\b\b\b\b\b\b\b";
    long code;
    cin >> code;
    cout << "\aYou entered " << code << "...\n";
    cout << "\aCode verified! Proceed with Plan Z3!\n";
    // cin.get();
    // cin.get();
}

/*floating point number*/

void floatnum() {
    // floatnum.cpp -- floating-point types
    cout.setf(ios_base::fixed, ios_base::floatfield); // fixed-point
    float tub = 10.0 / 3.0;     // good to about 6 places
    double mint = 10.0 / 3.0;   // good to about 15 places
    const float million = 1.0e6;

    cout << "tub = " << tub;
    cout << ", a million tubs = " << million * tub;
    cout << ",\nand ten million tubs = ";
    cout << 10 * million * tub << endl;

    cout << "mint = " << mint << " and a million mints = ";
    cout << million * mint << endl;
    // cin.get();
}

//precision problems with float
void fltadd() {
    using namespace std;
    float a = 2.34E+22f;
    float b = a + 1.0f;

    cout << "a = " << a << endl;
    cout << "b - a = " << b - a << endl;
}

/*arithmetic operations*/
void divide() {
    // divide.cpp -- integer and floating-point division
    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout << "Integer division: 9/5 = " << 9 / 5 << endl;
    cout << "Floating-point division: 9.0/5.0 = ";
    cout << 9.0 / 5.0 << endl;
    cout << "Mixed division: 9.0/5 = " << 9.0 / 5 << endl;
    cout << "double constants: 1e7/9.0 = ";
    cout << 1.e7 / 9.0 << endl;
    cout << "float constants: 1e7f/9.0f = ";
    cout << 1.e7f / 9.0f << endl;
    // cin.get();
}

void modulus() {
    // modulus.cpp -- uses % operator to convert lbs to stone
    const int Lbs_per_stn = 14;
    int lbs;

    cout << "Enter your weight in pounds: ";
    cin >> lbs;
    int stone = lbs / Lbs_per_stn;      // whole stone
    int pounds = lbs % Lbs_per_stn;     // remainder in pounds
    cout << lbs << " pounds are " << stone
         << " stone, " << pounds << " pound(s).\n";
    // cin.get();
    // cin.get();
}

void assign() {
    // assign.cpp -- type changes on assignment
    cout.setf(ios_base::fixed, ios_base::floatfield);
    float tree = 3;     // int converted to float
    int guess(3.9832); // float converted to int
    int debt = 7.2E12;  // result not defined in C++
    cout << "tree = " << tree << endl;
    cout << "guess = " << guess << endl;
    cout << "debt = " << debt << endl;
    // cin.get();
}
//Cast
//(typename) value or typename (value) ,converts value to typename value
//such as int('Q')
//static_cast<typeName> (value) converts value to typename value
void typecast() {
    // typecast.cpp -- forcing type changes
    int auks, bats, coots;

    // the following statement adds the values as double,
    // then converts the result to int
    auks = 19.99 + 11.99;

    // these statements add values as int
    bats = (int) 19.99 + (int) 11.99;   // old C syntax
    coots = int(19.99) + int(11.99);  // new C++ syntax
    cout << "auks = " << auks << ", bats = " << bats;
    cout << ", coots = " << coots << endl;

    char ch = 'Z';
    cout << "The code for " << ch << " is ";    // print as char
    cout << int(ch) << endl;                    // print as int
    cout << "Yes, the code is ";
    cout << static_cast<int>(ch) << endl;       // using static_cast
    // cin.get();
}

//the auto in c++11
auto n_1 = 1.5;
auto n_2 = 10;
auto n_3 = 1.3e12L;