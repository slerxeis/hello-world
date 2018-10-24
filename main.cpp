#include <iostream>
#include <stdexcept>

using namespace std;

int
main(int argc,
     char* argv[])
{
    int rv = 0;

    try {

        cout << "Hello, World!" << endl;

    } catch (const exception& e) {
        cerr << "*** Error: " << e.what() << endl;
        rv = 1;
    }

    return rv;
}
