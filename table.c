#include "table.h"

static __externref_t mytable[0];

__externref_t use() {
    __externref_t x = use3();
    volatile int z;
    z = __builtin_wasm_table_size(mytable);
    __builtin_wasm_table_grow(mytable, x, 1);
    use2(x);
    return x;
}
