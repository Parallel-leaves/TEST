 AREA MYDATA, DATA
	
 AREA MYCODE, CODE
	ENTRY
	EXPORT led

led
	
    ldr r0, =0x40021018
    ldr r1, =0x0000001c
    str r1, [r0]                


	
	ldr r0, =0x40010800
    ldr r1, [r0]
    bic r1, r1, #0x000f0000
    orr r1, r1, #0x00010000
    str r1, [r0]

	
    ldr r0, =0x40010c00
    ldr r1, [r0]
    bic r1, r1, #0x00f00000
    orr r1, r1, #0x00100000
    str r1, [r0]
	
	
	ldr r0, =0x40011004
    ldr r1, [r0]
    bic r1, r1, #0x0f000000
    orr r1, r1, #0x01000000
    str r1, [r0]

	
	ldr r0, =0x4001080c
    ldr r1, =0x00000010
    str r1, [r0]

	ldr r0, =5000000
    ldr r1, =0
	
	
blink
    add r1, r1, #1
    cmp r1, r0
    blt blink
	
	
	ldr r1, =0x4001080c
    ldr r2, [r1]
    eor r2, r2, #0x00000010
    str r2, [r1]
	
	
	ldr r1, =0x40010c0c
    ldr r2, [r1]
    eor r2, r2, #0x00000020
    str r2, [r1]
	
	ldr r1, =0

blink1	
	add r1, r1, #1
    cmp r1, r0
    blt blink1
	
	
	ldr r1, =0x40010c0c
    ldr r2, [r1]
    eor r2, r2, #0x00000020
    str r2, [r1]
	
	
	ldr r1, =0x4001100c
    ldr r2, [r1]
    eor r2, r2, #0x00004000
    str r2, [r1]
	

	ldr r1, =0

blink2
	add r1, r1, #1
    cmp r1, r0
    blt blink2
	

	ldr r1, =0x4001100c
    ldr r2, [r1]
    eor r2, r2, #0x00004000
    str r2, [r1]
	
	
	ldr r1, =0x4001080c
    ldr r2, [r1]
    eor r2, r2, #0x00000010
    str r2, [r1]
	

	ldr r1, =0
    b blink

	
	END


