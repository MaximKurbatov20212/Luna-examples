#include <cstdio>
#include "ucenv.h"

extern "C" {

void c_init(int val, OutputDF &df) {
	df.setValue(val);
}

void c_init_real(double val, OutputDF &df) {
	df.setValue(val);
}

void c_sum(OutputDF& out, InputDF& in_a, InputDF& in_b) {
    out.setValue(in_a.getValue<int>() + in_b.getValue<int>());
}

void c_iprint(int val) {
	printf("%d \n", val);
}

void c_print(InputDF &df) {
	printf("%d \n", df.getValue<int>());
}

}
