	.globl mul
mul:
	mul X0, X0, X1
	br	X30

	.globl add
add:
	add X0, X0, X1
	br	X30

	.globl sub
sub:
	sub X0, X0, X1
	br	X30

	.globl and
and:
	and X0, X0, X1
	br	X30

	.globl orr
orr:
	orr X0, X0, X1
	br	X30

	.globl eor
eor:
	eor X0, X0, X1
	br	X30

	.globl muladd
muladd:
	mul X2, X0, X1
	add X3, X0, X1
	add X0, X2, X3
	br	X30