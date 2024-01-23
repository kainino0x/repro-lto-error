#include "table.h"

int main() {
    __externref_t x = use();
    use2(x);
    __externref_t y = use3();
    use2(y);
}
