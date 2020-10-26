global _ft_strdup

extern _ft_strlen
extern _ft_strcpy
extern _malloc
section .text

_ft_strdup:
	mov		rax, 0
	push	rdi ;remember argument string
	call	_ft_strlen
	mov		rdi, rax ;move that strlen return to rdi
	call	_malloc ;malloc take arg from rdi
	cmp		rax, 0 ;if malloc returns NULL - out
	je		_err 
	mov		rdi, rax ; else put mallocs addres in fitst arg, for strcpy
	pop		rsi ;and out string that was get from strdup args to second
	call	_ft_strcpy 

_err:
	ret
