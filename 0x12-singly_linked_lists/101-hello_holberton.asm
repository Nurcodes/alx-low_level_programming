section .data
	msg: db "Hello, Holberton", 0x0a
	msglen equ $-msg

section .text
	global main

main:
	mov eax, 1
	mov edi, 1
	mov rsi, msg
	mov edx, msglen
	syscall
	mov eax, 60
	xor edi, edi
	syscall
