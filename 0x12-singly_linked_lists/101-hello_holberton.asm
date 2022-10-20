;Writing code in assembly language
;Print "Hello, Holberton" in a 64-bit machine

 extern printf 
  
 section .text 
    global main 
  
 main: 
    push rbp 
  
    mov rdi,fmt 
    mov rsi,msg 
    mov rax,0 
    call printf 
  
    pop rbp 
  
    mov rax,0 
    ret 
  
 section .data 
    msg: db "Hello, Holberton", 0 
    fmt: db "%s", 10, 0
	
