/* 
int main()
{
    return add(3, 4);
}

int add(int m, int n)
{
    return m + n;
}
*/

.globl main

main:
	pushl	%ebp
	movl	%esp, %ebp
	andl	$-16, %esp
	subl	$16, %esp
	movl	$4, 4(%esp)
	movl	$3, (%esp)
	call	add
	leave
	ret

add:
	pushl	%ebp
	movl	%esp, %ebp
	movl	12(%ebp), %eax
	movl	8(%ebp), %edx
	addl	%edx, %eax
	popl	%ebp
	ret
