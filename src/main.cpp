#include "myGrep.h"

int main(int argc, char* argv[])
{
    my::grep test(argc, argv);
    test.run();

    return 0;
}