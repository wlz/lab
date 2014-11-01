nmap <F6> :w<cr>:!as % --32 -o a.o && ld -m elf_i386 -s a.o -o a.out && ./a.out && rm ./a.o ./a.out<cr>
nmap <F5> :w<cr>:!gcc -Wall % -m32 -o a.out && ./a.out && rm ./a.out<cr>
map <C-k><C-k> :s/^/#/<cr>:nohl<cr>:<bs>
map <C-k><C-u> :s/#//<cr>:nohl<cr>:<bs>

ab movl movl   
ab addl addl   
ab andl andl   
ab subl subl   
ab cmpl cmpl   
ab popl popl   
ab call call   
ab leal leal   
ab int int    
ab jmp jmp   
ab jg jg     
ab jl jl     
ab je je     
ab pushl pushl  
ab imull imull  

ab ea %eax
ab eb %ebx
ab ec %ecx
ab ed %edx
ab bp %ebp
ab sp %esp
