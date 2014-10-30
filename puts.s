/*
int main()
{
    puts("hello world");
    return 0;
}
*/

data:
    .string "hello world"

    .globl main
main:
    pushl   $data
    call    puts

    addl    $4, %esp 
    movl    $0, %eax 
    ret
