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

void c_set(OutputDF& out, InputDF in) {
    out.setValue(in.getValue<double>());
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
