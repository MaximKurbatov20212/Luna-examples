#include "ucenv.h"
#include <cstdio>
#include <cstring>

extern "C" {

void c_init(double val, OutputDF &df) {
	df.setValue(val);
}

void c_init_df(InputDF val, OutputDF &df) {
	df.setValue(val.getValue<double>());
}

void c_set_k(OutputDF& K, InputDF in_a, InputDF in_b) {
    printf("setK\n");
    K.setValue(static_cast<double>(in_a.getValue<double>() / in_b.getValue<double>()));
}

void c_set(OutputDF& out, InputDF in) {
    out.setValue(in.getValue<double>());
}

void c_calculate(OutputDF& K, 
                 InputDF in_a, 
                 InputDF in_b,
                 InputDF in_c) {
    printf("calculate\n");

    K.setValue(static_cast<double>(in_a.getValue<double>() - 
                (in_b.getValue<double>() * in_c.getValue<double>())));
}

void c_iprint(int val) {
	printf("%d \n", val);
}


void c_print_str(const char* string) {
	printf("%s\n", string);
}

void c_print(const InputDF &df) {
	printf("%f \n", df.getValue<int>());
}

void c_println() {
	printf("\n");
}

void c_i_j_print(int i, int j, InputDF value) {
    printf("[%d, %d] = %f\n", i, j, value.getValue<double>());
}

}
