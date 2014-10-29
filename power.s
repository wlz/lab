/*
int power(int a, int b)
{
    int i, n = 1;
    for(i = 0; i < b; i++)
        n *= a;
    return n; 
}
*/
    .globl _start
_start:
    subl    $8, %esp

    movl    $2, (%esp)
    movl    $3, 4(%esp)

    call    power

    movl    %eax, %ebx 
    movl    $1, %eax
    int     $0x80

power:
    pushl   %ebp 
    movl    %esp, %ebp 
    
    movl    $1, %eax
    movl    8(%ebp), %ecx   
    movl    12(%ebp), %edi 
    
    movl    $0, %ebx
    
multi:
    imull   %ecx, %eax
    addl    $1, %ebx 
    cmpl    %edi, %ebx
    jl      multi

    popl    %ebp 
    ret 
