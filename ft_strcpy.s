global _ft_strcpy

section .text

_ft_strcpy:
			mov		rcx, 0

loop:
			mov		r10b, byte[rsi + rcx]
			mov		byte[rdi + rcx], r10b
			cmp		byte[rsi + rcx], 0
			je		_exit
			inc		rcx
			jmp		loop

_exit:
			mov		rax, rdi
			ret