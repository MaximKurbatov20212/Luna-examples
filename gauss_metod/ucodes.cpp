#include "ucenv.h"
#include <cstdio>

extern "C" {

void c_init(int val, OutputDF &df) {
	df.setValue(val);
}

void c_set_k(OutputDF& K, InputDF in_a, InputDF in_b) {
    K.setValue((int)(in_a.getValue<int>() / in_b.getValue<int>()));
}

void c_calculate(OutputDF& K, 
                 InputDF in_a, 
                 InputDF in_b,
                 InputDF in_c) {

//	printf("%d \n", in_a.getValue<int>());
//
//	printf("%d \n", in_b.getValue<int>());
//
//	printf("%d \n", in_c.getValue<int>());
//
//	printf("%d \n", K.getValue<int>());
//
    K.setValue((int)(in_a.getValue<int>() - (in_b.getValue<int>() * in_c.getValue<int>())));
}

void c_iprint(int val) {
	printf("%d \n", val);
}

void c_print(const InputDF &df) {
	printf("%d \n", df.getValue<int>());
}

}
