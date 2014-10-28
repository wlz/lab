/*
int data = {6, 5, 10, 3, 15, 17};
int max = 0;
int i;
for(i = 0; i < 6; i++)
{
    if(data[i] > max)
        max = data[i]
}
*/

data:
.long 6
.long 5
.long 10
.long 3 
.long 15
.long 17

.globl _start
_start:

movl $1, %edi
movl data, %ebx

op:
movl data(, %edi, 4), %eax

cmpl %eax, %ebx
jg done
movl %eax, %ebx
done:

addl $1, %edi
cmpl $5, %edi 

jle op 

movl $1, %eax
int $0x80
