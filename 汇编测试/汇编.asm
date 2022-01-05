
.code

;分号表示注释
;不能用//来注释
mycall proc
mov rax,1111122h
ret
mycall endp
 
myadd1 proc ;proc表示一个函数的开始{
mov rax,12345678h
ret ;return
myadd1 endp ;endp表示一个函数的结束}
 

end