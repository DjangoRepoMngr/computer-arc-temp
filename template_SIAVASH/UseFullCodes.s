A1                 RN 0
B2                 RN 1
C3                 RN 2
TMP                RN 3
var                RN 4



				AREA MY_CODE,CODE,READONLY
					
					
					
usefull                  PROC
	                     EXPORT usefull 
						 PUSH{r4-r6,LR}
						 
						 ; pass 4 values r0-r3  for the 5ith value use stack, here we used #16 because we stored before r4,r5,r6,LR 4registers each 4bit
						 ;LDR var, [sp, #16]
						 
						 ; XOR eq:00100000 = 0 XOR 0 XOR 1 XOR 0 XOR 0 XOR 0 XOR 0 XOR 0 = 1
						 ; this only works for 8-bit value
						 ;EOR TMP, TMP, TMP, LSR #8  ;this is only needed when we have 16-bit value
						 EOR TMP, TMP, TMP, LSR #4   ; XOR the top 4 bits with the bottom 4
                         EOR TMP, TMP, TMP, LSR #2   ; XOR the top 2 bits (of the new nibble) with the bottom 2
                         EOR TMP, TMP, TMP, LSR #1   ; XOR the top 1 bit with the bottom 1
                         AND TMP, TMP, #1           ; The result is now in the LSB. Store it in TMP.
						 
						 
						 ;calculating A1 dividend  MOD B2 divisor
						 SDIV TMP, A1, B2  ;getting quotient
						 MUL TMP, TMP,B2  ;getting the MUL of quotient with
						 SUB TMP, A1,TMP ; remainder which goes into TMP
						 

						 ;MOV r0,TMP
						
						 POP{r4-r6,PC}
						 ENDP
						 END