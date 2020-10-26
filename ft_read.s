global _ft_read

extern ___error
section .text

_ft_read:
	mov		rax, 0x02000003
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

		