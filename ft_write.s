global _ft_write

extern ___error
section .text

_ft_write:
	mov		rax, 0x02000004
	syscall
	jc _err
	ret

_err:
	push	rax ;because errno adress will apperar in rax
	call	___error ;find addres errno
	pop		r10 ;to take value in stack
	mov		[rax], r10 ; take value(*) then put result of syscall in errno
	mov		rax, -1
	ret

		