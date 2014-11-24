/*
int main()
{
    printf("hello world!\n");   
    return 0;
}
*/

    .data
str:
    .ascii "hello world!\n" 
end:

    .text
    .globl main

main:
    movl $4, %eax
    movl $1, %ebx
    movl $str , %ecx
    movl $(end-str), %edx
    int $0x80

    movl $1, %eax
    xorl %ebx, %ebx
    int $0x80
