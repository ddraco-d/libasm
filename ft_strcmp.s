global _ft_strcmp

section .text

_ft_strcmp:
			mov		r10, 0
			mov		rax, 0
			mov		rbx, 0

loop:
			mov		al, byte[rdi + r10] ;al - 8 bits of rax
			mov		bl, byte[rsi + r10] ;bl - 8 bits of rbx
			cmp		byte[rsi + r10], 0 ;s1 != 0
			je		_exit
			cmp		byte[rdi + r10], 0 ; s2 != 0
			je		_exit
			cmp		rax, rbx ;s1 > s2 ?
			jne		_exit
			inc		r10 ;increment
			jmp		loop
_exit:
			mov		al, byte[rdi + r10] ;apply last changes
			mov		bl, byte[rsi + r10]
			sub		rax, rbx ;subraction s1 - s2 and return
			ret