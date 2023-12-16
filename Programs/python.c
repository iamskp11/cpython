/* Minimal main program -- everything is loaded from the library */

#include "Python.h"

#ifdef MS_WINDOWS
int
wmain(int argc, wchar_t **argv)
{
    printf("[DEBUG] MS_WINDOWS V001\n");
    return Py_Main(argc, argv);
}
#else
int
main(int argc, char **argv)
{
    printf("[DEBUG] NON-MS_WINDOWS V001\n");
    return Py_BytesMain(argc, argv);
}
#endif
