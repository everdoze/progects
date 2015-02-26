	.file	"main.cpp"
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.globl	x
	.bss
	.align 4
	.type	x, @object
	.size	x, 4
x:
	.zero	4
	.globl	y
	.align 4
	.type	y, @object
	.size	y, 4
y:
	.zero	4
	.globl	z
	.align 4
	.type	z, @object
	.size	z, 4
z:
	.zero	4
	.section	.rodata
	.align 8
.LC0:
	.string	"\320\227\320\264\321\200\320\260\321\201\321\202\320\270\321\202\320\265, \321\207\320\270\321\201\320\273\320\260 \320\262\320\262\320\265\320\264\320\270\321\202\320\265!"
.LC1:
	.string	"x = "
.LC2:
	.string	"y = "
.LC3:
	.string	"z = "
.LC4:
	.string	"\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202: "
	.text
	.globl	main
	.type	main, @function
main:
.LFB1020:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	$.LC0, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	movl	$.LC1, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$x, %esi
	movl	$_ZSt3cin, %edi
	call	_ZNSirsERi
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movl	$_ZSt4cout, %edi
	call	_ZNSolsEPFRSoS_E
	movl	$.LC2, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$y, %esi
	movl	$_ZSt3cin, %edi
	call	_ZNSirsERi
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movl	$_ZSt4cout, %edi
	call	_ZNSolsEPFRSoS_E
	movl	$.LC3, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$z, %esi
	movl	$_ZSt3cin, %edi
	call	_ZNSirsERi
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movl	$_ZSt4cout, %edi
	call	_ZNSolsEPFRSoS_E
	movl	z(%rip), %edx
	movl	y(%rip), %ecx
	movl	x(%rip), %eax
	movl	%ecx, %esi
	movl	%eax, %edi
	call	_Z2goiii
	cvttss2si	%xmm0, %eax
	movl	%eax, -4(%rbp)
	movl	$.LC4, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	%rax, %rdx
	movl	-4(%rbp), %eax
	movl	%eax, %esi
	movq	%rdx, %rdi
	call	_ZNSolsEi
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1020:
	.size	main, .-main
	.type	_Z41__static_initialization_and_destruction_0ii, @function
_Z41__static_initialization_and_destruction_0ii:
.LFB1029:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	cmpl	$1, -4(%rbp)
	jne	.L3
	cmpl	$65535, -8(%rbp)
	jne	.L3
	movl	$_ZStL8__ioinit, %edi
	call	_ZNSt8ios_base4InitC1Ev
	movl	$__dso_handle, %edx
	movl	$_ZStL8__ioinit, %esi
	movl	$_ZNSt8ios_base4InitD1Ev, %edi
	call	__cxa_atexit
.L3:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1029:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.type	_GLOBAL__sub_I_x, @function
_GLOBAL__sub_I_x:
.LFB1030:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$65535, %esi
	movl	$1, %edi
	call	_Z41__static_initialization_and_destruction_0ii
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1030:
	.size	_GLOBAL__sub_I_x, .-_GLOBAL__sub_I_x
	.section	.init_array,"aw"
	.align 8
	.quad	_GLOBAL__sub_I_x
	.hidden	__dso_handle
	.ident	"GCC: (Ubuntu 4.9.1-16ubuntu6) 4.9.1"
	.section	.note.GNU-stack,"",@progbits
