#    SPDX-FileCopyrightText: 2025 Lucas Claros <lucas.claros@cobli.co>
#   
#    SPDX-License-Identifier: GPL-3.0-or-later
#
#  This file is a derivative of SYSeg (https://gitlab.com/monaco/syseg)
#  and includes modifications made by the following author(s):
#  Lucas Claros <lucas.claros@cobli.co>

	/* Suppose we receive the argument in %cx. */

	.code16gcc
	.global printf
	.global get_key

	.section .text
	
printf:

	mov   %cx, %bx
	
        mov   $0x0e,%ah               
        mov   $0x0, %si               
loop:                                 
        mov   (%bx, %si), %al           
        cmp   $0x0, %al               
        je    end                    
        int   $0x10                   
        add   $0x1, %si               
        jmp   loop                    
end:
        mov %si, %ax
        ret
get_key:
        mov $0x00, %ah      # Função 00h: lê tecla (bloqueia até pressionar)
        int $0x16           # BIOS call
        movzx %al, %ax      # Retorna ASCII em A
        ret




