segment .text
	del byte 4
	public go
go:
	pop DS ; z
	pop AX ; y
	pop BX ; x
	imul AX, 2 ;y * 2
	mov CS, AX ;cs = y * 2
	imul DS, 3 ;z * 3
	mov DS, AX ;ds = z * 3
	add BX, CS ;x + (y*2)
	add BX, DS ; выражение в скобках
	mov AX, BX ;
	div del ; al =  частное, ah = остаток
	
