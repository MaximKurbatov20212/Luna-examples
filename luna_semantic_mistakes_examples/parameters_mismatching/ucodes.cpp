#include <cstdio>
#include "ucenv.h"

extern "C" {

void c_foo(InputDF& val, OutputDF &df) {
	df.setValue(val.getValue<int>());
}
}
