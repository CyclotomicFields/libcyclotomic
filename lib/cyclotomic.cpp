#include "../include/cyclotomic.h"

extern "C" {
#include "gap/cyclotom.h"
#include "gap/intobj.h"
#include "gap/gasman.h"
#include "gap/modules.h"
#include "gap/io.h"
}

#include <iostream>

namespace cyclotomic {

void hello() {
  int x = 0;
  int *topOfStack = &x;
  
  UInt initialSize =  16 * sizeof(Obj) * 1024;
  InitBags(initialSize, (Bag*) topOfStack);

  Obj e3 = FuncE(nullptr, INTOBJ_INT(3));
  PrintCyc(e3);
  std::cout << std::endl;
}

}
