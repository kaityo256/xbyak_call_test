#include <cstdio>
#include <xbyak/xbyak.h>

void func() {
  puts("Hello");
}

struct Code : Xbyak::CodeGenerator {
  Code() {
    mov(rax, (size_t)func);
    call(rax);
    ret();
  }
};

int main() {
  Code c;
  int (*f)() = c.getCode<int (*)()>();
  puts("");
  f();
}
