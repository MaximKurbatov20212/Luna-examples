#include "ucenv.h"
#include <cstdio>
#include <cstring>

extern "C" {

void c_init(double val, OutputDF &df) {
	df.setValue(val);
}

void c_init_df(InputDF& val, OutputDF &df) {
	df.setValue(val.getValue<double>());
}

void c_print(const InputDF &df) {
	printf("%f \n", df.getValue<double>());
}

void c_i_j_k(int i, int j, int k) {
    printf("[%d, %d, %d]\n", i, j, k);
}

void c_i_j_print(int i, int j, int gen,  InputDF& value) {
    printf("gen = %d : [%d, %d] = %f\n", gen, i, j, value.getValue<double>());
}

}
