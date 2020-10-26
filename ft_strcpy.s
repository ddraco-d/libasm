global _ft_strcpy

section .text

_ft_strcpy:
			mov		rax, 0

loop:
			cmp		byte[rsi + rax], 0
			je		_exit
			mov		r10b, byte[rsi + rax]
			mov		byte[rdi + rax], r10b
			inc		rax
			jmp		loop

_exit:
			mov		rax, rdi
			ret