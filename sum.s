#int i, n;
#for(i = 0; i < 10; i++)
#{
#    n += i;
#} 

.globl _start

_start:

movl $0, %eax
movl $0, %edx

op:
addl %edx, %eax
addl $1, %edx
cmpl $10, %edx

jle op

movl %eax, %ebx 
movl $1, %eax 

int $0x80 
