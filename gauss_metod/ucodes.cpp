#include <cstdio>
#include "ucenv.h"

extern "C" {

void c_init(int val, OutputDF &df) {
	df.setValue(val);
}

void c_sum(OutputDF& out, InputDF& in_a, InputDF& in_b) {
    out.setValue(in_a.getValue<int>() + in_b.getValue<int>());
}

void c_sub(OutputDF& out, InputDF& red, InputDF& sub) {
    out.setValue(red.getValue<int>() - sub.getValue<int>());
}

void c_iprint(int val) {
	printf("%d\n", val);
}

void c_print(const InputDF &df) {
	printf("%d \n", df.getValue<int>());
}

}
