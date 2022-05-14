#include "main.h"

using namespace matrix;

int main() {

    Matrix m, m1, m2;
    m1.init();
    m2.init();
    m = m1 * m2;
    cout  << m;
    return 0;
}
