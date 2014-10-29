/*
int main()
{
    printf("hello world!\n");   
    return 0;
}
*/

    .data
hellostr:
    .ascii "hello world!\n" 
helloend:

    .text
    .globl main

main:
    movl $4, %eax
    movl $1, %ebx
    movl $hellostr , %ecx
    movl $(helloend-hellostr), %edx
    int $0x80

    movl $1, %eax
    xorl %ebx, %ebx
    int $0x80
