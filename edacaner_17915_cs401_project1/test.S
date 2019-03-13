	.globl test
test:
	mov X3, X0
	orr X0, XZR, XZR
	orr X1, XZR, XZR
	orr X2, XZR, XZR
	add X2, X2, #1

	cmp X3, #1
	b.gt exit
	mov X0, X3
	br X30
	exit:

	orr X4, XZR, XZR
	add X4, X4, #1

	loop: add X0, X1, X2
		  mov X1, X2
		  mov X2, X0
		  add X4, X4, #1
		  cmp X4, X3
		  b.lt loop

	br	X30
