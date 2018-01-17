	.file	"preprocess.c"
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
	.align 4
LC0:
	.ascii "max(max(a,b),max(c,d))) = %d \12\0"
LC1:
	.ascii "max(max(a,b),c),d) = %d \12\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB10:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$32, %esp
	call	___main
	movl	$0, 28(%esp)
	movl	$10, 24(%esp)
	movl	$24, 20(%esp)
	movl	$1, 16(%esp)
	movl	20(%esp), %eax
	movl	16(%esp), %edx
	cmpl	%eax, %edx
	jge	L2
	movl	%eax, %edx
L2:
	movl	28(%esp), %ecx
	movl	24(%esp), %eax
	cmpl	%ecx, %eax
	jge	L3
	movl	%ecx, %eax
L3:
	cmpl	%eax, %edx
	jge	L4
	movl	%eax, %edx
L4:
	movl	%edx, 4(%esp)
	movl	$LC0, (%esp)
	call	_printf
	movl	28(%esp), %edx
	movl	24(%esp), %eax
	cmpl	%edx, %eax
	jge	L5
	movl	%edx, %eax
L5:
	movl	20(%esp), %edx
	cmpl	%edx, %eax
	jge	L6
	movl	%edx, %eax
L6:
	movl	16(%esp), %edx
	movl	%edx, 8(%esp)
	movl	%eax, 4(%esp)
	movl	$LC1, (%esp)
	call	_printf
	movl	$0, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE10:
	.ident	"GCC: (MinGW.org GCC-6.3.0-1) 6.3.0"
	.def	_printf;	.scl	2;	.type	32;	.endef
