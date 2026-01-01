A1                 RN 0
B2                 RN 1
C3                 RN 2
TMP                RN 3



				AREA MY_CODE,CODE,READONLY
					
					
					
Funcname                 PROC
	                     EXPORT Funcname 
						 PUSH{r4-r6,LR}

						 
						
						 POP{r4-r6,PC}
						 ENDP
						 END