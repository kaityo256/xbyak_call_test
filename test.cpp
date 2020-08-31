#include <cstdio>
#include <xbyak/xbyak.h>

void func() {
  puts("Hello");
}

struct Code : Xbyak::CodeGenerator {
  Code() {
    mov(eax, (size_t)func);
    call(eax);
    ret();
  }
};

int main() {
  Code c;
  int (*f)() = c.getCode<int (*)()>();
  f();
}
