/*
int fact(int n)    
{
    return n == 1 ? 1 : n * fact(n - 1);
}

int main()
{
    return fact(5);
}
*/

    .globl _start

_start:
    subl    $4, %esp 
    movl    $5, (%esp) 
    call    fact
    movl    %eax, %ebx 
    movl    $1, %eax 
    int     $0x80

fact:
    pushl   %ebp
    movl    %esp, %ebp
    
    cmpl    $1, 8(%ebp)
    je      case_1

    movl    8(%ebp), %eax 
    subl    $4, %esp
    subl    $1, %eax
    movl    %eax, (%esp)
    call    fact
    imull   8(%ebp), %eax 
    jmp     done

case_1:
    movl    $1, %eax 

done:
    leave
    ret

