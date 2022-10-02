#include "ucenv.h"
#include <cstdio>

extern "C" {

void c_init(double val, OutputDF &df) {
	df.setValue(val);
}

void c_set_k(OutputDF& K, InputDF in_a, InputDF in_b) {
    K.setValue((double)(in_a.getValue<double>() / in_b.getValue<double>()));
}

void c_set(OutputDF& out, InputDF in) {
    out.setValue(in.getValue<double>());
}

void c_calculate(OutputDF& K, 
                 InputDF in_a, 
                 InputDF in_b,
                 InputDF in_c) {

    K.setValue((double)(in_a.getValue<double>() - 
                (in_b.getValue<double>() * in_c.getValue<double>())));
}

void c_iprint(int val) {
	printf("%d \n", val);
}

void c_print(const InputDF &df) {
	printf("%f \n", df.getValue<double>());
}

}
