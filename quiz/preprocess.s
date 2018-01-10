	.file	"preprocess.c"
	.text
	.globl	_count_bits
	.def	_count_bits;	.scl	2;	.type	32;	.endef
_count_bits:
LFB10:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$16, %esp
	movl	$0, -4(%ebp)
	jmp	L2
L4:
	movl	8(%ebp), %eax
	andl	$1, %eax
	testl	%eax, %eax
	je	L3
	addl	$1, -4(%ebp)
L3:
	shrl	8(%ebp)
L2:
	cmpl	$0, 8(%ebp)
	jne	L4
	movl	-4(%ebp), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE10:
	.globl	_int_bits
	.def	_int_bits;	.scl	2;	.type	32;	.endef
_int_bits:
LFB11:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$40, %esp
	movl	$0, -16(%ebp)
	movl	$-1, (%esp)
	call	_count_bits
	subl	$1, %eax
	movl	%eax, -12(%ebp)
	jmp	L7
L10:
	addl	$1, -16(%ebp)
	movl	-12(%ebp), %eax
	movl	8(%ebp), %edx
	movl	%eax, %ecx
	shrl	%cl, %edx
	movl	%edx, %eax
	andl	$1, %eax
	testl	%eax, %eax
	je	L8
	movl	$49, %eax
	jmp	L9
L8:
	movl	$48, %eax
L9:
	movl	%eax, (%esp)
	call	_putchar
	subl	$1, -12(%ebp)
L7:
	cmpl	$0, -12(%ebp)
	jns	L10
	movl	-16(%ebp), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE11:
	.globl	_rrotate
	.def	_rrotate;	.scl	2;	.type	32;	.endef
_rrotate:
LFB12:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	pushl	%ebx
	subl	$4, %esp
	.cfi_offset 3, -12
	movl	$-1, (%esp)
	call	_count_bits
	movl	%eax, %ecx
	movl	12(%ebp), %eax
	cltd
	idivl	%ecx
	movl	%edx, 12(%ebp)
	movl	12(%ebp), %eax
	movl	8(%ebp), %edx
	movl	%edx, %ebx
	movl	%eax, %ecx
	shrl	%cl, %ebx
	movl	$-1, (%esp)
	call	_count_bits
	subl	12(%ebp), %eax
	movl	8(%ebp), %edx
	movl	%eax, %ecx
	sall	%cl, %edx
	movl	%edx, %eax
	orl	%ebx, %eax
	addl	$4, %esp
	popl	%ebx
	.cfi_restore 3
	popl	%ebp
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE12:
	.globl	_print_bits
	.def	_print_bits;	.scl	2;	.type	32;	.endef
_print_bits:
LFB13:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	movl	8(%ebp), %eax
	movl	%eax, (%esp)
	call	_int_bits
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE13:
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
	.align 4
LC0:
	.ascii "rrotate(%u\343\202\222,\343\201\277\343\201\216\343\201\253%d\343\201\227\343\201\265\343\201\250) = %u\12\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB14:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$32, %esp
	call	___main
	movl	$298, 28(%esp)
	movl	$10, 24(%esp)
	movl	24(%esp), %eax
	movl	%eax, 4(%esp)
	movl	28(%esp), %eax
	movl	%eax, (%esp)
	call	_rrotate
	movl	%eax, 12(%esp)
	movl	24(%esp), %eax
	movl	%eax, 8(%esp)
	movl	28(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC0, (%esp)
	call	_printf
	movl	28(%esp), %eax
	movl	%eax, (%esp)
	call	_print_bits
	movl	$10, (%esp)
	call	_putchar
	movl	24(%esp), %eax
	movl	%eax, 4(%esp)
	movl	28(%esp), %eax
	movl	%eax, (%esp)
	call	_rrotate
	movl	%eax, (%esp)
	call	_print_bits
	movl	$0, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE14:
	.ident	"GCC: (MinGW.org GCC-6.3.0-1) 6.3.0"
	.def	_putchar;	.scl	2;	.type	32;	.endef
	.def	_printf;	.scl	2;	.type	32;	.endef
