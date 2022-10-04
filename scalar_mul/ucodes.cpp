#include <cstdio>
#include <cmath>
#include "ucenv.h"

extern "C" {

void c_init(int val, OutputDF &df) {
	df.setValue(val);
}

void c_get_end(OutputDF& out, InputDF val) {
    out.setValue(static_cast<int>(log2(val.getValue<int>()) + 1));
}

void c_set_cur_len(OutputDF& new_len, InputDF old_len) {
    new_len.setValue(static_cast<int>((old_len.getValue<int>() / 2)
                                   + (old_len.getValue<int>() % 2)));
}

void c_sum(OutputDF& out, InputDF in_a, InputDF in_b) {
    out.setValue(in_a.getValue<int>() + in_b.getValue<int>());
}

void c_mul(OutputDF& out, InputDF in_a, InputDF in_b) {
    out.setValue(in_a.getValue<int>() * in_b.getValue<int>());
}

void c_iprint(int val) {
	printf("%d \n", val);
}

void c_print(InputDF &df) {
	printf("%d \n", df.getValue<int>());
}

}
