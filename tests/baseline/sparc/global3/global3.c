long long a = 0x7048860ddf79LL;
int b = 7;

void foo1();
void foo2();

// address: 0x10754
int main(int argc, char *argv[], char *envp[]) {
    foo1();
    printf("b = %i\n", b);
    return 0;
}

// address: 0x1073c
void foo1() {
    foo2();
    return;
}

// address: 0x106fc
void foo2() {
    b = 12;
    printf("a = %lld\n", a);
    return;
}

