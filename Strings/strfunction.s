	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 11, 0	sdk_version 11, 3
	.globl	_reverstr                       ## -- Begin function reverstr
	.p2align	4, 0x90
_reverstr:                              ## @reverstr
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_strlen
                                        ## kill: def $eax killed $eax killed $rax
	movl	%eax, -12(%rbp)
	movl	$0, -16(%rbp)
LBB0_1:                                 ## =>This Inner Loop Header: Depth=1
	movl	-16(%rbp), %eax
	movl	-12(%rbp), %ecx
	subl	$1, %ecx
	cmpl	%ecx, %eax
	jge	LBB0_4
## %bb.2:                               ##   in Loop: Header=BB0_1 Depth=1
	movq	-8(%rbp), %rax
	movl	-12(%rbp), %ecx
	subl	-16(%rbp), %ecx
	movslq	%ecx, %rdx
	movb	(%rax,%rdx), %sil
	movq	-8(%rbp), %rax
	movslq	-16(%rbp), %rdx
	movb	%sil, (%rax,%rdx)
## %bb.3:                               ##   in Loop: Header=BB0_1 Depth=1
	movl	-16(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -16(%rbp)
	jmp	LBB0_1
LBB0_4:
	movq	-8(%rbp), %rax
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	_bubbleSort                     ## -- Begin function bubbleSort
	.p2align	4, 0x90
_bubbleSort:                            ## @bubbleSort
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	_strlen
                                        ## kill: def $eax killed $eax killed $rax
	movl	%eax, -12(%rbp)
	movl	-12(%rbp), %esi
	leaq	L_.str(%rip), %rdi
	movb	$0, %al
	callq	_printf
	movl	-12(%rbp), %ecx
	subl	$1, %ecx
	movl	%ecx, -20(%rbp)
LBB1_1:                                 ## =>This Loop Header: Depth=1
                                        ##     Child Loop BB1_3 Depth 2
	cmpl	$0, -20(%rbp)
	jle	LBB1_13
## %bb.2:                               ##   in Loop: Header=BB1_1 Depth=1
	movl	-20(%rbp), %esi
	leaq	L_.str.1(%rip), %rdi
	movb	$0, %al
	callq	_printf
	movl	$1, -24(%rbp)
LBB1_3:                                 ##   Parent Loop BB1_1 Depth=1
                                        ## =>  This Inner Loop Header: Depth=2
	movl	-24(%rbp), %eax
	cmpl	-12(%rbp), %eax
	jge	LBB1_11
## %bb.4:                               ##   in Loop: Header=BB1_3 Depth=2
	movl	-24(%rbp), %eax
	addl	$1, %eax
	leaq	L_.str.2(%rip), %rdi
	movl	%eax, %esi
	movb	$0, %al
	callq	_printf
	movq	-8(%rbp), %rcx
	movl	-24(%rbp), %edx
	subl	$1, %edx
	movslq	%edx, %rdi
	movsbl	(%rcx,%rdi), %edx
	movq	-8(%rbp), %rcx
	movslq	-24(%rbp), %rdi
	movsbl	(%rcx,%rdi), %esi
	cmpl	%esi, %edx
	jg	LBB1_6
## %bb.5:                               ##   in Loop: Header=BB1_3 Depth=2
	jmp	LBB1_10
LBB1_6:                                 ##   in Loop: Header=BB1_3 Depth=2
	movq	-8(%rbp), %rax
	movl	-24(%rbp), %ecx
	subl	$1, %ecx
	movslq	%ecx, %rdx
	movsbl	(%rax,%rdx), %ecx
	movq	-8(%rbp), %rax
	movslq	-24(%rbp), %rdx
	movsbl	(%rax,%rdx), %esi
	cmpl	%esi, %ecx
	jle	LBB1_8
## %bb.7:                               ##   in Loop: Header=BB1_3 Depth=2
	movq	-8(%rbp), %rax
	movl	-24(%rbp), %ecx
	subl	$1, %ecx
	movslq	%ecx, %rdx
	movb	(%rax,%rdx), %sil
	movb	%sil, -13(%rbp)
	movq	-8(%rbp), %rax
	movslq	-24(%rbp), %rdx
	movb	(%rax,%rdx), %sil
	movq	-8(%rbp), %rax
	movl	-24(%rbp), %ecx
	subl	$1, %ecx
	movslq	%ecx, %rdx
	movb	%sil, (%rax,%rdx)
	movb	-13(%rbp), %sil
	movq	-8(%rbp), %rax
	movslq	-24(%rbp), %rdx
	movb	%sil, (%rax,%rdx)
	movq	-8(%rbp), %rax
	movslq	-24(%rbp), %rdx
	movsbl	(%rax,%rdx), %esi
	movq	-8(%rbp), %rax
	movl	-24(%rbp), %ecx
	subl	$1, %ecx
	movslq	%ecx, %rdx
	movsbl	(%rax,%rdx), %edx
	leaq	L_.str.3(%rip), %rdi
	movb	$0, %al
	callq	_printf
LBB1_8:                                 ##   in Loop: Header=BB1_3 Depth=2
	jmp	LBB1_9
LBB1_9:                                 ##   in Loop: Header=BB1_3 Depth=2
	jmp	LBB1_10
LBB1_10:                                ##   in Loop: Header=BB1_3 Depth=2
	movl	-24(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -24(%rbp)
	jmp	LBB1_3
LBB1_11:                                ##   in Loop: Header=BB1_1 Depth=1
	jmp	LBB1_12
LBB1_12:                                ##   in Loop: Header=BB1_1 Depth=1
	movl	-20(%rbp), %eax
	addl	$-1, %eax
	movl	%eax, -20(%rbp)
	jmp	LBB1_1
LBB1_13:
	movq	-8(%rbp), %rax
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	_main                           ## -- Begin function main
	.p2align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$128, %rsp
	movq	___stack_chk_guard@GOTPCREL(%rip), %rax
	movq	(%rax), %rax
	movq	%rax, -8(%rbp)
	movl	$0, -116(%rbp)
	leaq	L_.str.4(%rip), %rdi
	movb	$0, %al
	callq	_printf
	leaq	-112(%rbp), %rsi
	leaq	L_.str.5(%rip), %rdi
	movl	%eax, -120(%rbp)                ## 4-byte Spill
	movb	$0, %al
	callq	_scanf
	leaq	-112(%rbp), %rdi
	movl	%eax, -124(%rbp)                ## 4-byte Spill
	callq	_bubbleSort
	leaq	L_.str.6(%rip), %rdi
	movq	%rax, %rsi
	movb	$0, %al
	callq	_printf
	movq	___stack_chk_guard@GOTPCREL(%rip), %rcx
	movq	(%rcx), %rcx
	movq	-8(%rbp), %rdx
	cmpq	%rdx, %rcx
	jne	LBB2_2
## %bb.1:
	xorl	%eax, %eax
	addq	$128, %rsp
	popq	%rbp
	retq
LBB2_2:
	callq	___stack_chk_fail
	ud2
	.cfi_endproc
                                        ## -- End function
	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"the length is %d\n"

L_.str.1:                               ## @.str.1
	.asciz	"Limit is %d\n"

L_.str.2:                               ## @.str.2
	.asciz	"on position %d\n"

L_.str.3:                               ## @.str.3
	.asciz	"%c %c\n"

L_.str.4:                               ## @.str.4
	.asciz	"Enter your string up to 100 characters:\n"

L_.str.5:                               ## @.str.5
	.asciz	"%s"

L_.str.6:                               ## @.str.6
	.asciz	"The sorted string is: %s\n"

.subsections_via_symbols
