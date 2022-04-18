
#include <iostream>
#include "Modular.h"

using std::cout;
using std::endl;


int main()
{
    M<7> m1 = 3;
    M<7> m2 = 5;

    cout << m1 << " + " << m2 << " = " << m1 + m2 << endl;
    cout << m1 << " - " << m2 << " = " << m1 - m2 << endl;
    cout << m1 << " * " << m2 << " = " << m1 * m2 << endl;
    cout << m1 << " / " << m2 << " = " << m1 / m2 << endl;
    cout << m1 << " % " << m2 << " = " << m1 % m2 << endl;

    cout << endl;

    cout << "+" << m1 << " = " << +m1 << endl;
    cout << "-" << m1 << " = " << -m1 << endl;
    cout << "~" << m1 << " = " << ~m1 << endl;

    cout << endl;

    cout << m1 << " to int = " << (int)m1 << endl;

    cout << endl;

    cout << m1 << " == " << m2 << " : " << (m1 == m2) << endl;
    cout << m1 << " != " << m2 << " : " << (m1 != m2) << endl;
    cout << m1 << " < " << m2 << "  : " << (m1 < m2) << endl;
    cout << m1 << " > " << m2 << "  : " << (m1 > m2) << endl;
    cout << m1 << " <= " << m2 << " : " << (m1 <= m2) << endl;
    cout << m1 << " >= " << m2 << " : " << (m1 >= m2) << endl;

    cout << endl;

    cout << m1 << " == " << m1 << " : " << (m1 == m1) << endl;
    cout << m1 << " != " << m1 << " : " << (m1 != m1) << endl;
    cout << m1 << " < " << m1 << "  : " << (m1 < m1) << endl;
    cout << m1 << " > " << m1 << "  : " << (m1 > m1) << endl;
    cout << m1 << " <= " << m1 << " : " << (m1 <= m1) << endl;
    cout << m1 << " >= " << m1 << " : " << (m1 >= m1) << endl;
}
