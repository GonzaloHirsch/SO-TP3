
./server:     file format elf64-x86-64


Disassembly of section .interp:

0000000000400200 <.interp>:
  400200:	2f                   	(bad)  
  400201:	6c                   	insb   (%dx),%es:(%rdi)
  400202:	69 62 36 34 2f 6c 64 	imul   $0x646c2f34,0x36(%rdx),%esp
  400209:	2d 6c 69 6e 75       	sub    $0x756e696c,%eax
  40020e:	78 2d                	js     40023d <_init-0x83b>
  400210:	78 38                	js     40024a <_init-0x82e>
  400212:	36 2d 36 34 2e 73    	ss sub $0x732e3436,%eax
  400218:	6f                   	outsl  %ds:(%rsi),(%dx)
  400219:	2e 32 00             	xor    %cs:(%rax),%al

Disassembly of section .note.ABI-tag:

000000000040021c <.note.ABI-tag>:
  40021c:	04 00                	add    $0x0,%al
  40021e:	00 00                	add    %al,(%rax)
  400220:	10 00                	adc    %al,(%rax)
  400222:	00 00                	add    %al,(%rax)
  400224:	01 00                	add    %eax,(%rax)
  400226:	00 00                	add    %al,(%rax)
  400228:	47                   	rex.RXB
  400229:	4e 55                	rex.WRX push %rbp
  40022b:	00 00                	add    %al,(%rax)
  40022d:	00 00                	add    %al,(%rax)
  40022f:	00 02                	add    %al,(%rdx)
  400231:	00 00                	add    %al,(%rax)
  400233:	00 06                	add    %al,(%rsi)
  400235:	00 00                	add    %al,(%rax)
  400237:	00 20                	add    %ah,(%rax)
  400239:	00 00                	add    %al,(%rax)
	...

Disassembly of section .note.gnu.build-id:

000000000040023c <.note.gnu.build-id>:
  40023c:	04 00                	add    $0x0,%al
  40023e:	00 00                	add    %al,(%rax)
  400240:	14 00                	adc    $0x0,%al
  400242:	00 00                	add    %al,(%rax)
  400244:	03 00                	add    (%rax),%eax
  400246:	00 00                	add    %al,(%rax)
  400248:	47                   	rex.RXB
  400249:	4e 55                	rex.WRX push %rbp
  40024b:	00 66 d4             	add    %ah,-0x2c(%rsi)
  40024e:	82                   	(bad)  
  40024f:	9d                   	popfq  
  400250:	41 09 d4             	or     %edx,%r12d
  400253:	8c 33                	mov    %?,(%rbx)
  400255:	8b 75 b9             	mov    -0x47(%rbp),%esi
  400258:	41 07                	rex.B (bad) 
  40025a:	7d cb                	jge    400227 <_init-0x851>
  40025c:	c6                   	(bad)  
  40025d:	22 22                	and    (%rdx),%ah
  40025f:	b3                   	.byte 0xb3

Disassembly of section .gnu.hash:

0000000000400260 <.gnu.hash>:
  400260:	02 00                	add    (%rax),%al
  400262:	00 00                	add    %al,(%rax)
  400264:	21 00                	and    %eax,(%rax)
  400266:	00 00                	add    %al,(%rax)
  400268:	01 00                	add    %eax,(%rax)
  40026a:	00 00                	add    %al,(%rax)
  40026c:	06                   	(bad)  
  40026d:	00 00                	add    %al,(%rax)
  40026f:	00 00                	add    %al,(%rax)
  400271:	01 00                	add    %eax,(%rax)
  400273:	00 00                	add    %al,(%rax)
  400275:	01 10                	add    %edx,(%rax)
  400277:	02 21                	add    (%rcx),%ah
  400279:	00 00                	add    %al,(%rax)
  40027b:	00 22                	add    %ah,(%rdx)
  40027d:	00 00                	add    %al,(%rax)
  40027f:	00 29                	add    %ch,(%rcx)
  400281:	1d 8c 1c 39 f2       	sbb    $0xf2391c8c,%eax
  400286:	8b                   	.byte 0x8b
  400287:	1c                   	.byte 0x1c

Disassembly of section .dynsym:

0000000000400288 <.dynsym>:
	...
  4002a0:	76 00                	jbe    4002a2 <_init-0x7d6>
  4002a2:	00 00                	add    %al,(%rax)
  4002a4:	12 00                	adc    (%rax),%al
	...
  4002b6:	00 00                	add    %al,(%rax)
  4002b8:	3b 00                	cmp    (%rax),%eax
  4002ba:	00 00                	add    %al,(%rax)
  4002bc:	12 00                	adc    (%rax),%al
	...
  4002ce:	00 00                	add    %al,(%rax)
  4002d0:	7c 00                	jl     4002d2 <_init-0x7a6>
  4002d2:	00 00                	add    %al,(%rax)
  4002d4:	12 00                	adc    (%rax),%al
	...
  4002e6:	00 00                	add    %al,(%rax)
  4002e8:	88 00                	mov    %al,(%rax)
  4002ea:	00 00                	add    %al,(%rax)
  4002ec:	12 00                	adc    (%rax),%al
	...
  4002fe:	00 00                	add    %al,(%rax)
  400300:	cf                   	iret   
  400301:	00 00                	add    %al,(%rax)
  400303:	00 12                	add    %dl,(%rdx)
	...
  400315:	00 00                	add    %al,(%rax)
  400317:	00 81 00 00 00 12    	add    %al,0x12000000(%rcx)
	...
  40032d:	00 00                	add    %al,(%rax)
  40032f:	00 56 00             	add    %dl,0x0(%rsi)
  400332:	00 00                	add    %al,(%rax)
  400334:	12 00                	adc    (%rax),%al
	...
  400346:	00 00                	add    %al,(%rax)
  400348:	9a                   	(bad)  
  400349:	00 00                	add    %al,(%rax)
  40034b:	00 12                	add    %dl,(%rdx)
	...
  40035d:	00 00                	add    %al,(%rax)
  40035f:	00 1d 00 00 00 12    	add    %bl,0x12000000(%rip)        # 12400365 <_end+0x11debbcd>
	...
  400375:	00 00                	add    %al,(%rax)
  400377:	00 d7                	add    %dl,%bh
  400379:	00 00                	add    %al,(%rax)
  40037b:	00 12                	add    %dl,(%rdx)
	...
  40038d:	00 00                	add    %al,(%rax)
  40038f:	00 d5                	add    %dl,%ch
  400391:	00 00                	add    %al,(%rax)
  400393:	00 12                	add    %dl,(%rdx)
	...
  4003a5:	00 00                	add    %al,(%rax)
  4003a7:	00 7b 00             	add    %bh,0x0(%rbx)
  4003aa:	00 00                	add    %al,(%rax)
  4003ac:	12 00                	adc    (%rax),%al
	...
  4003be:	00 00                	add    %al,(%rax)
  4003c0:	17                   	(bad)  
  4003c1:	00 00                	add    %al,(%rax)
  4003c3:	00 12                	add    %dl,(%rdx)
	...
  4003d5:	00 00                	add    %al,(%rax)
  4003d7:	00 5d 00             	add    %bl,0x0(%rbp)
  4003da:	00 00                	add    %al,(%rax)
  4003dc:	12 00                	adc    (%rax),%al
	...
  4003ee:	00 00                	add    %al,(%rax)
  4003f0:	70 00                	jo     4003f2 <_init-0x686>
  4003f2:	00 00                	add    %al,(%rax)
  4003f4:	12 00                	adc    (%rax),%al
	...
  400406:	00 00                	add    %al,(%rax)
  400408:	bd 00 00 00 12       	mov    $0x12000000,%ebp
	...
  40041d:	00 00                	add    %al,(%rax)
  40041f:	00 23                	add    %ah,(%rbx)
  400421:	00 00                	add    %al,(%rax)
  400423:	00 12                	add    %dl,(%rdx)
	...
  400435:	00 00                	add    %al,(%rax)
  400437:	00 50 00             	add    %dl,0x0(%rax)
  40043a:	00 00                	add    %al,(%rax)
  40043c:	12 00                	adc    (%rax),%al
	...
  40044e:	00 00                	add    %al,(%rax)
  400450:	b6 00                	mov    $0x0,%dh
  400452:	00 00                	add    %al,(%rax)
  400454:	12 00                	adc    (%rax),%al
	...
  400466:	00 00                	add    %al,(%rax)
  400468:	de 00                	fiadd  (%rax)
  40046a:	00 00                	add    %al,(%rax)
  40046c:	20 00                	and    %al,(%rax)
	...
  40047e:	00 00                	add    %al,(%rax)
  400480:	36 00 00             	add    %al,%ss:(%rax)
  400483:	00 12                	add    %dl,(%rdx)
	...
  400495:	00 00                	add    %al,(%rax)
  400497:	00 43 00             	add    %al,0x0(%rbx)
  40049a:	00 00                	add    %al,(%rax)
  40049c:	12 00                	adc    (%rax),%al
	...
  4004ae:	00 00                	add    %al,(%rax)
  4004b0:	ae                   	scas   %es:(%rdi),%al
  4004b1:	00 00                	add    %al,(%rax)
  4004b3:	00 12                	add    %dl,(%rdx)
	...
  4004c5:	00 00                	add    %al,(%rax)
  4004c7:	00 64 00 00          	add    %ah,0x0(%rax,%rax,1)
  4004cb:	00 12                	add    %dl,(%rdx)
	...
  4004dd:	00 00                	add    %al,(%rax)
  4004df:	00 4a 00             	add    %cl,0x0(%rdx)
  4004e2:	00 00                	add    %al,(%rax)
  4004e4:	12 00                	adc    (%rax),%al
	...
  4004f6:	00 00                	add    %al,(%rax)
  4004f8:	29 00                	sub    %eax,(%rax)
  4004fa:	00 00                	add    %al,(%rax)
  4004fc:	12 00                	adc    (%rax),%al
	...
  40050e:	00 00                	add    %al,(%rax)
  400510:	2f                   	(bad)  
  400511:	00 00                	add    %al,(%rax)
  400513:	00 12                	add    %dl,(%rdx)
	...
  400525:	00 00                	add    %al,(%rax)
  400527:	00 a1 00 00 00 12    	add    %ah,0x12000000(%rcx)
	...
  40053d:	00 00                	add    %al,(%rax)
  40053f:	00 12                	add    %dl,(%rdx)
  400541:	00 00                	add    %al,(%rax)
  400543:	00 12                	add    %dl,(%rdx)
	...
  400555:	00 00                	add    %al,(%rax)
  400557:	00 a8 00 00 00 12    	add    %ch,0x12000000(%rax)
	...
  40056d:	00 00                	add    %al,(%rax)
  40056f:	00 24 00             	add    %ah,(%rax,%rax,1)
  400572:	00 00                	add    %al,(%rax)
  400574:	12 00                	adc    (%rax),%al
	...
  400586:	00 00                	add    %al,(%rax)
  400588:	0b 00                	or     (%rax),%eax
  40058a:	00 00                	add    %al,(%rax)
  40058c:	12 00                	adc    (%rax),%al
	...
  40059e:	00 00                	add    %al,(%rax)
  4005a0:	69 00 00 00 11 00    	imul   $0x110000,(%rax),%eax
  4005a6:	19 00                	sbb    %eax,(%rax)
  4005a8:	80 47 61 00          	addb   $0x0,0x61(%rdi)
  4005ac:	00 00                	add    %al,(%rax)
  4005ae:	00 00                	add    %al,(%rax)
  4005b0:	08 00                	or     %al,(%rax)
  4005b2:	00 00                	add    %al,(%rax)
  4005b4:	00 00                	add    %al,(%rax)
  4005b6:	00 00                	add    %al,(%rax)
  4005b8:	93                   	xchg   %eax,%ebx
  4005b9:	00 00                	add    %al,(%rax)
  4005bb:	00 11                	add    %dl,(%rcx)
  4005bd:	00 19                	add    %bl,(%rcx)
  4005bf:	00 88 47 61 00 00    	add    %cl,0x6147(%rax)
  4005c5:	00 00                	add    %al,(%rax)
  4005c7:	00 08                	add    %cl,(%rax)
  4005c9:	00 00                	add    %al,(%rax)
  4005cb:	00 00                	add    %al,(%rax)
  4005cd:	00 00                	add    %al,(%rax)
	...

Disassembly of section .dynstr:

00000000004005d0 <.dynstr>:
  4005d0:	00 6c 69 62          	add    %ch,0x62(%rcx,%rbp,2)
  4005d4:	63 2e                	movslq (%rsi),%ebp
  4005d6:	73 6f                	jae    400647 <_init-0x431>
  4005d8:	2e 36 00 73 6f       	cs add %dh,%ss:0x6f(%rbx)
  4005dd:	63 6b 65             	movslq 0x65(%rbx),%ebp
  4005e0:	74 00                	je     4005e2 <_init-0x496>
  4005e2:	65 78 69             	gs js  40064e <_init-0x42a>
  4005e5:	74 00                	je     4005e7 <_init-0x491>
  4005e7:	68 74 6f 6e 6c       	pushq  $0x6c6e6f74
  4005ec:	00 68 74             	add    %ch,0x74(%rax)
  4005ef:	6f                   	outsl  %ds:(%rsi),(%dx)
  4005f0:	6e                   	outsb  %ds:(%rsi),(%dx)
  4005f1:	73 00                	jae    4005f3 <_init-0x485>
  4005f3:	73 72                	jae    400667 <_init-0x411>
  4005f5:	61                   	(bad)  
  4005f6:	6e                   	outsb  %ds:(%rsi),(%dx)
  4005f7:	64 00 66 6f          	add    %ah,%fs:0x6f(%rsi)
  4005fb:	70 65                	jo     400662 <_init-0x416>
  4005fd:	6e                   	outsb  %ds:(%rsi),(%dx)
  4005fe:	00 70 65             	add    %dh,0x65(%rax)
  400601:	72 72                	jb     400675 <_init-0x403>
  400603:	6f                   	outsl  %ds:(%rsi),(%dx)
  400604:	72 00                	jb     400606 <_init-0x472>
  400606:	74 69                	je     400671 <_init-0x407>
  400608:	6d                   	insl   (%dx),%es:(%rdi)
  400609:	65 00 70 75          	add    %dh,%gs:0x75(%rax)
  40060d:	74 63                	je     400672 <_init-0x406>
  40060f:	68 61 72 00 6c       	pushq  $0x6c007261
  400614:	69 73 74 65 6e 00 70 	imul   $0x70006e65,0x74(%rbx),%esi
  40061b:	6f                   	outsl  %ds:(%rsi),(%dx)
  40061c:	70 65                	jo     400683 <_init-0x3f5>
  40061e:	6e                   	outsb  %ds:(%rsi),(%dx)
  40061f:	00 66 67             	add    %ah,0x67(%rsi)
  400622:	65 74 73             	gs je  400698 <_init-0x3e0>
  400625:	00 73 74             	add    %dh,0x74(%rbx)
  400628:	72 6c                	jb     400696 <_init-0x3e2>
  40062a:	65 6e                	outsb  %gs:(%rsi),(%dx)
  40062c:	00 6d 65             	add    %ch,0x65(%rbp)
  40062f:	6d                   	insl   (%dx),%es:(%rdi)
  400630:	73 65                	jae    400697 <_init-0x3e1>
  400632:	74 00                	je     400634 <_init-0x444>
  400634:	62                   	(bad)  
  400635:	69 6e 64 00 73 74 64 	imul   $0x64747300,0x64(%rsi),%ebp
  40063c:	6f                   	outsl  %ds:(%rsi),(%dx)
  40063d:	75 74                	jne    4006b3 <_init-0x3c5>
  40063f:	00 66 70             	add    %ah,0x70(%rsi)
  400642:	75 74                	jne    4006b8 <_init-0x3c0>
  400644:	63 00                	movslq (%rax),%eax
  400646:	72 65                	jb     4006ad <_init-0x3cb>
  400648:	63 76 00             	movslq 0x0(%rsi),%esi
  40064b:	66 70 75             	data16 jo 4006c3 <_init-0x3b5>
  40064e:	74 73                	je     4006c3 <_init-0x3b5>
  400650:	00 66 63             	add    %ah,0x63(%rsi)
  400653:	6c                   	insb   (%dx),%es:(%rdi)
  400654:	6f                   	outsl  %ds:(%rsi),(%dx)
  400655:	73 65                	jae    4006bc <_init-0x3bc>
  400657:	00 73 65             	add    %dh,0x65(%rbx)
  40065a:	74 73                	je     4006cf <_init-0x3a9>
  40065c:	6f                   	outsl  %ds:(%rsi),(%dx)
  40065d:	63 6b 6f             	movslq 0x6f(%rbx),%ebp
  400660:	70 74                	jo     4006d6 <_init-0x3a2>
  400662:	00 73 74             	add    %dh,0x74(%rbx)
  400665:	64 65 72 72          	fs gs jb 4006db <_init-0x39d>
  400669:	00 73 79             	add    %dh,0x79(%rbx)
  40066c:	73 74                	jae    4006e2 <_init-0x396>
  40066e:	65 6d                	gs insl (%dx),%es:(%rdi)
  400670:	00 61 63             	add    %ah,0x63(%rcx)
  400673:	63 65 70             	movslq 0x70(%rbp),%esp
  400676:	74 00                	je     400678 <_init-0x400>
  400678:	73 6c                	jae    4006e6 <_init-0x392>
  40067a:	65 65 70 00          	gs gs jo 40067e <_init-0x3fa>
  40067e:	73 65                	jae    4006e5 <_init-0x393>
  400680:	74 76                	je     4006f8 <_init-0x380>
  400682:	62                   	(bad)  
  400683:	75 66                	jne    4006eb <_init-0x38d>
  400685:	00 73 74             	add    %dh,0x74(%rbx)
  400688:	72 63                	jb     4006ed <_init-0x38b>
  40068a:	6d                   	insl   (%dx),%es:(%rdi)
  40068b:	70 00                	jo     40068d <_init-0x3eb>
  40068d:	5f                   	pop    %rdi
  40068e:	5f                   	pop    %rdi
  40068f:	6c                   	insb   (%dx),%es:(%rdi)
  400690:	69 62 63 5f 73 74 61 	imul   $0x6174735f,0x63(%rdx),%esp
  400697:	72 74                	jb     40070d <_init-0x36b>
  400699:	5f                   	pop    %rdi
  40069a:	6d                   	insl   (%dx),%es:(%rdi)
  40069b:	61                   	(bad)  
  40069c:	69 6e 00 77 72 69 74 	imul   $0x74697277,0x0(%rsi),%ebp
  4006a3:	65 00 73 6e          	add    %dh,%gs:0x6e(%rbx)
  4006a7:	70 72                	jo     40071b <_init-0x35d>
  4006a9:	69 6e 74 66 00 5f 5f 	imul   $0x5f5f0066,0x74(%rsi),%ebp
  4006b0:	67 6d                	insl   (%dx),%es:(%edi)
  4006b2:	6f                   	outsl  %ds:(%rsi),(%dx)
  4006b3:	6e                   	outsb  %ds:(%rsi),(%dx)
  4006b4:	5f                   	pop    %rdi
  4006b5:	73 74                	jae    40072b <_init-0x34d>
  4006b7:	61                   	(bad)  
  4006b8:	72 74                	jb     40072e <_init-0x34a>
  4006ba:	5f                   	pop    %rdi
  4006bb:	5f                   	pop    %rdi
  4006bc:	00 47 4c             	add    %al,0x4c(%rdi)
  4006bf:	49                   	rex.WB
  4006c0:	42                   	rex.X
  4006c1:	43 5f                	rex.XB pop %r15
  4006c3:	32 2e                	xor    (%rsi),%ch
  4006c5:	32 2e                	xor    (%rsi),%ch
  4006c7:	35                   	.byte 0x35
	...

Disassembly of section .gnu.version:

00000000004006ca <.gnu.version>:
  4006ca:	00 00                	add    %al,(%rax)
  4006cc:	02 00                	add    (%rax),%al
  4006ce:	02 00                	add    (%rax),%al
  4006d0:	02 00                	add    (%rax),%al
  4006d2:	02 00                	add    (%rax),%al
  4006d4:	02 00                	add    (%rax),%al
  4006d6:	02 00                	add    (%rax),%al
  4006d8:	02 00                	add    (%rax),%al
  4006da:	02 00                	add    (%rax),%al
  4006dc:	02 00                	add    (%rax),%al
  4006de:	02 00                	add    (%rax),%al
  4006e0:	02 00                	add    (%rax),%al
  4006e2:	02 00                	add    (%rax),%al
  4006e4:	02 00                	add    (%rax),%al
  4006e6:	02 00                	add    (%rax),%al
  4006e8:	02 00                	add    (%rax),%al
  4006ea:	02 00                	add    (%rax),%al
  4006ec:	02 00                	add    (%rax),%al
  4006ee:	02 00                	add    (%rax),%al
  4006f0:	02 00                	add    (%rax),%al
  4006f2:	00 00                	add    %al,(%rax)
  4006f4:	02 00                	add    (%rax),%al
  4006f6:	02 00                	add    (%rax),%al
  4006f8:	02 00                	add    (%rax),%al
  4006fa:	02 00                	add    (%rax),%al
  4006fc:	02 00                	add    (%rax),%al
  4006fe:	02 00                	add    (%rax),%al
  400700:	02 00                	add    (%rax),%al
  400702:	02 00                	add    (%rax),%al
  400704:	02 00                	add    (%rax),%al
  400706:	02 00                	add    (%rax),%al
  400708:	02 00                	add    (%rax),%al
  40070a:	02 00                	add    (%rax),%al
  40070c:	02 00                	add    (%rax),%al
  40070e:	02 00                	add    (%rax),%al

Disassembly of section .gnu.version_r:

0000000000400710 <.gnu.version_r>:
  400710:	01 00                	add    %eax,(%rax)
  400712:	01 00                	add    %eax,(%rax)
  400714:	01 00                	add    %eax,(%rax)
  400716:	00 00                	add    %al,(%rax)
  400718:	10 00                	adc    %al,(%rax)
  40071a:	00 00                	add    %al,(%rax)
  40071c:	00 00                	add    %al,(%rax)
  40071e:	00 00                	add    %al,(%rax)
  400720:	75 1a                	jne    40073c <_init-0x33c>
  400722:	69 09 00 00 02 00    	imul   $0x20000,(%rcx),%ecx
  400728:	ed                   	in     (%dx),%eax
  400729:	00 00                	add    %al,(%rax)
  40072b:	00 00                	add    %al,(%rax)
  40072d:	00 00                	add    %al,(%rax)
	...

Disassembly of section .rela.dyn:

0000000000400730 <.rela.dyn>:
  400730:	e8 42 61 00 00       	callq  406877 <q+0x37f7>
  400735:	00 00                	add    %al,(%rax)
  400737:	00 06                	add    %al,(%rsi)
  400739:	00 00                	add    %al,(%rax)
  40073b:	00 14 00             	add    %dl,(%rax,%rax,1)
	...
  400746:	00 00                	add    %al,(%rax)
  400748:	80 47 61 00          	addb   $0x0,0x61(%rdi)
  40074c:	00 00                	add    %al,(%rax)
  40074e:	00 00                	add    %al,(%rax)
  400750:	05 00 00 00 21       	add    $0x21000000,%eax
	...
  40075d:	00 00                	add    %al,(%rax)
  40075f:	00 88 47 61 00 00    	add    %cl,0x6147(%rax)
  400765:	00 00                	add    %al,(%rax)
  400767:	00 05 00 00 00 22    	add    %al,0x22000000(%rip)        # 2240076d <_end+0x21debfd5>
	...

Disassembly of section .rela.plt:

0000000000400778 <.rela.plt>:
  400778:	08 43 61             	or     %al,0x61(%rbx)
  40077b:	00 00                	add    %al,(%rax)
  40077d:	00 00                	add    %al,(%rax)
  40077f:	00 07                	add    %al,(%rdi)
  400781:	00 00                	add    %al,(%rax)
  400783:	00 01                	add    %al,(%rcx)
	...
  40078d:	00 00                	add    %al,(%rax)
  40078f:	00 10                	add    %dl,(%rax)
  400791:	43 61                	rex.XB (bad) 
  400793:	00 00                	add    %al,(%rax)
  400795:	00 00                	add    %al,(%rax)
  400797:	00 07                	add    %al,(%rdi)
  400799:	00 00                	add    %al,(%rax)
  40079b:	00 02                	add    %al,(%rdx)
	...
  4007a5:	00 00                	add    %al,(%rax)
  4007a7:	00 18                	add    %bl,(%rax)
  4007a9:	43 61                	rex.XB (bad) 
  4007ab:	00 00                	add    %al,(%rax)
  4007ad:	00 00                	add    %al,(%rax)
  4007af:	00 07                	add    %al,(%rdi)
  4007b1:	00 00                	add    %al,(%rax)
  4007b3:	00 03                	add    %al,(%rbx)
	...
  4007bd:	00 00                	add    %al,(%rax)
  4007bf:	00 20                	add    %ah,(%rax)
  4007c1:	43 61                	rex.XB (bad) 
  4007c3:	00 00                	add    %al,(%rax)
  4007c5:	00 00                	add    %al,(%rax)
  4007c7:	00 07                	add    %al,(%rdi)
  4007c9:	00 00                	add    %al,(%rax)
  4007cb:	00 04 00             	add    %al,(%rax,%rax,1)
	...
  4007d6:	00 00                	add    %al,(%rax)
  4007d8:	28 43 61             	sub    %al,0x61(%rbx)
  4007db:	00 00                	add    %al,(%rax)
  4007dd:	00 00                	add    %al,(%rax)
  4007df:	00 07                	add    %al,(%rdi)
  4007e1:	00 00                	add    %al,(%rax)
  4007e3:	00 05 00 00 00 00    	add    %al,0x0(%rip)        # 4007e9 <_init-0x28f>
  4007e9:	00 00                	add    %al,(%rax)
  4007eb:	00 00                	add    %al,(%rax)
  4007ed:	00 00                	add    %al,(%rax)
  4007ef:	00 30                	add    %dh,(%rax)
  4007f1:	43 61                	rex.XB (bad) 
  4007f3:	00 00                	add    %al,(%rax)
  4007f5:	00 00                	add    %al,(%rax)
  4007f7:	00 07                	add    %al,(%rdi)
  4007f9:	00 00                	add    %al,(%rax)
  4007fb:	00 06                	add    %al,(%rsi)
	...
  400805:	00 00                	add    %al,(%rax)
  400807:	00 38                	add    %bh,(%rax)
  400809:	43 61                	rex.XB (bad) 
  40080b:	00 00                	add    %al,(%rax)
  40080d:	00 00                	add    %al,(%rax)
  40080f:	00 07                	add    %al,(%rdi)
  400811:	00 00                	add    %al,(%rax)
  400813:	00 07                	add    %al,(%rdi)
	...
  40081d:	00 00                	add    %al,(%rax)
  40081f:	00 40 43             	add    %al,0x43(%rax)
  400822:	61                   	(bad)  
  400823:	00 00                	add    %al,(%rax)
  400825:	00 00                	add    %al,(%rax)
  400827:	00 07                	add    %al,(%rdi)
  400829:	00 00                	add    %al,(%rax)
  40082b:	00 08                	add    %cl,(%rax)
	...
  400835:	00 00                	add    %al,(%rax)
  400837:	00 48 43             	add    %cl,0x43(%rax)
  40083a:	61                   	(bad)  
  40083b:	00 00                	add    %al,(%rax)
  40083d:	00 00                	add    %al,(%rax)
  40083f:	00 07                	add    %al,(%rdi)
  400841:	00 00                	add    %al,(%rax)
  400843:	00 09                	add    %cl,(%rcx)
	...
  40084d:	00 00                	add    %al,(%rax)
  40084f:	00 50 43             	add    %dl,0x43(%rax)
  400852:	61                   	(bad)  
  400853:	00 00                	add    %al,(%rax)
  400855:	00 00                	add    %al,(%rax)
  400857:	00 07                	add    %al,(%rdi)
  400859:	00 00                	add    %al,(%rax)
  40085b:	00 0a                	add    %cl,(%rdx)
	...
  400865:	00 00                	add    %al,(%rax)
  400867:	00 58 43             	add    %bl,0x43(%rax)
  40086a:	61                   	(bad)  
  40086b:	00 00                	add    %al,(%rax)
  40086d:	00 00                	add    %al,(%rax)
  40086f:	00 07                	add    %al,(%rdi)
  400871:	00 00                	add    %al,(%rax)
  400873:	00 0b                	add    %cl,(%rbx)
	...
  40087d:	00 00                	add    %al,(%rax)
  40087f:	00 60 43             	add    %ah,0x43(%rax)
  400882:	61                   	(bad)  
  400883:	00 00                	add    %al,(%rax)
  400885:	00 00                	add    %al,(%rax)
  400887:	00 07                	add    %al,(%rdi)
  400889:	00 00                	add    %al,(%rax)
  40088b:	00 0c 00             	add    %cl,(%rax,%rax,1)
	...
  400896:	00 00                	add    %al,(%rax)
  400898:	68 43 61 00 00       	pushq  $0x6143
  40089d:	00 00                	add    %al,(%rax)
  40089f:	00 07                	add    %al,(%rdi)
  4008a1:	00 00                	add    %al,(%rax)
  4008a3:	00 0d 00 00 00 00    	add    %cl,0x0(%rip)        # 4008a9 <_init-0x1cf>
  4008a9:	00 00                	add    %al,(%rax)
  4008ab:	00 00                	add    %al,(%rax)
  4008ad:	00 00                	add    %al,(%rax)
  4008af:	00 70 43             	add    %dh,0x43(%rax)
  4008b2:	61                   	(bad)  
  4008b3:	00 00                	add    %al,(%rax)
  4008b5:	00 00                	add    %al,(%rax)
  4008b7:	00 07                	add    %al,(%rdi)
  4008b9:	00 00                	add    %al,(%rax)
  4008bb:	00 0e                	add    %cl,(%rsi)
	...
  4008c5:	00 00                	add    %al,(%rax)
  4008c7:	00 78 43             	add    %bh,0x43(%rax)
  4008ca:	61                   	(bad)  
  4008cb:	00 00                	add    %al,(%rax)
  4008cd:	00 00                	add    %al,(%rax)
  4008cf:	00 07                	add    %al,(%rdi)
  4008d1:	00 00                	add    %al,(%rax)
  4008d3:	00 0f                	add    %cl,(%rdi)
	...
  4008dd:	00 00                	add    %al,(%rax)
  4008df:	00 80 43 61 00 00    	add    %al,0x6143(%rax)
  4008e5:	00 00                	add    %al,(%rax)
  4008e7:	00 07                	add    %al,(%rdi)
  4008e9:	00 00                	add    %al,(%rax)
  4008eb:	00 10                	add    %dl,(%rax)
	...
  4008f5:	00 00                	add    %al,(%rax)
  4008f7:	00 88 43 61 00 00    	add    %cl,0x6143(%rax)
  4008fd:	00 00                	add    %al,(%rax)
  4008ff:	00 07                	add    %al,(%rdi)
  400901:	00 00                	add    %al,(%rax)
  400903:	00 11                	add    %dl,(%rcx)
	...
  40090d:	00 00                	add    %al,(%rax)
  40090f:	00 90 43 61 00 00    	add    %dl,0x6143(%rax)
  400915:	00 00                	add    %al,(%rax)
  400917:	00 07                	add    %al,(%rdi)
  400919:	00 00                	add    %al,(%rax)
  40091b:	00 12                	add    %dl,(%rdx)
	...
  400925:	00 00                	add    %al,(%rax)
  400927:	00 98 43 61 00 00    	add    %bl,0x6143(%rax)
  40092d:	00 00                	add    %al,(%rax)
  40092f:	00 07                	add    %al,(%rdi)
  400931:	00 00                	add    %al,(%rax)
  400933:	00 13                	add    %dl,(%rbx)
	...
  40093d:	00 00                	add    %al,(%rax)
  40093f:	00 a0 43 61 00 00    	add    %ah,0x6143(%rax)
  400945:	00 00                	add    %al,(%rax)
  400947:	00 07                	add    %al,(%rdi)
  400949:	00 00                	add    %al,(%rax)
  40094b:	00 14 00             	add    %dl,(%rax,%rax,1)
	...
  400956:	00 00                	add    %al,(%rax)
  400958:	a8 43                	test   $0x43,%al
  40095a:	61                   	(bad)  
  40095b:	00 00                	add    %al,(%rax)
  40095d:	00 00                	add    %al,(%rax)
  40095f:	00 07                	add    %al,(%rdi)
  400961:	00 00                	add    %al,(%rax)
  400963:	00 15 00 00 00 00    	add    %dl,0x0(%rip)        # 400969 <_init-0x10f>
  400969:	00 00                	add    %al,(%rax)
  40096b:	00 00                	add    %al,(%rax)
  40096d:	00 00                	add    %al,(%rax)
  40096f:	00 b0 43 61 00 00    	add    %dh,0x6143(%rax)
  400975:	00 00                	add    %al,(%rax)
  400977:	00 07                	add    %al,(%rdi)
  400979:	00 00                	add    %al,(%rax)
  40097b:	00 16                	add    %dl,(%rsi)
	...
  400985:	00 00                	add    %al,(%rax)
  400987:	00 b8 43 61 00 00    	add    %bh,0x6143(%rax)
  40098d:	00 00                	add    %al,(%rax)
  40098f:	00 07                	add    %al,(%rdi)
  400991:	00 00                	add    %al,(%rax)
  400993:	00 17                	add    %dl,(%rdi)
	...
  40099d:	00 00                	add    %al,(%rax)
  40099f:	00 c0                	add    %al,%al
  4009a1:	43 61                	rex.XB (bad) 
  4009a3:	00 00                	add    %al,(%rax)
  4009a5:	00 00                	add    %al,(%rax)
  4009a7:	00 07                	add    %al,(%rdi)
  4009a9:	00 00                	add    %al,(%rax)
  4009ab:	00 18                	add    %bl,(%rax)
	...
  4009b5:	00 00                	add    %al,(%rax)
  4009b7:	00 c8                	add    %cl,%al
  4009b9:	43 61                	rex.XB (bad) 
  4009bb:	00 00                	add    %al,(%rax)
  4009bd:	00 00                	add    %al,(%rax)
  4009bf:	00 07                	add    %al,(%rdi)
  4009c1:	00 00                	add    %al,(%rax)
  4009c3:	00 19                	add    %bl,(%rcx)
	...
  4009cd:	00 00                	add    %al,(%rax)
  4009cf:	00 d0                	add    %dl,%al
  4009d1:	43 61                	rex.XB (bad) 
  4009d3:	00 00                	add    %al,(%rax)
  4009d5:	00 00                	add    %al,(%rax)
  4009d7:	00 07                	add    %al,(%rdi)
  4009d9:	00 00                	add    %al,(%rax)
  4009db:	00 1a                	add    %bl,(%rdx)
	...
  4009e5:	00 00                	add    %al,(%rax)
  4009e7:	00 d8                	add    %bl,%al
  4009e9:	43 61                	rex.XB (bad) 
  4009eb:	00 00                	add    %al,(%rax)
  4009ed:	00 00                	add    %al,(%rax)
  4009ef:	00 07                	add    %al,(%rdi)
  4009f1:	00 00                	add    %al,(%rax)
  4009f3:	00 1b                	add    %bl,(%rbx)
	...
  4009fd:	00 00                	add    %al,(%rax)
  4009ff:	00 e0                	add    %ah,%al
  400a01:	43 61                	rex.XB (bad) 
  400a03:	00 00                	add    %al,(%rax)
  400a05:	00 00                	add    %al,(%rax)
  400a07:	00 07                	add    %al,(%rdi)
  400a09:	00 00                	add    %al,(%rax)
  400a0b:	00 1c 00             	add    %bl,(%rax,%rax,1)
	...
  400a16:	00 00                	add    %al,(%rax)
  400a18:	e8 43 61 00 00       	callq  406b60 <q+0x3ae0>
  400a1d:	00 00                	add    %al,(%rax)
  400a1f:	00 07                	add    %al,(%rdi)
  400a21:	00 00                	add    %al,(%rax)
  400a23:	00 1d 00 00 00 00    	add    %bl,0x0(%rip)        # 400a29 <_init-0x4f>
  400a29:	00 00                	add    %al,(%rax)
  400a2b:	00 00                	add    %al,(%rax)
  400a2d:	00 00                	add    %al,(%rax)
  400a2f:	00 f0                	add    %dh,%al
  400a31:	43 61                	rex.XB (bad) 
  400a33:	00 00                	add    %al,(%rax)
  400a35:	00 00                	add    %al,(%rax)
  400a37:	00 07                	add    %al,(%rdi)
  400a39:	00 00                	add    %al,(%rax)
  400a3b:	00 1e                	add    %bl,(%rsi)
	...
  400a45:	00 00                	add    %al,(%rax)
  400a47:	00 f8                	add    %bh,%al
  400a49:	43 61                	rex.XB (bad) 
  400a4b:	00 00                	add    %al,(%rax)
  400a4d:	00 00                	add    %al,(%rax)
  400a4f:	00 07                	add    %al,(%rdi)
  400a51:	00 00                	add    %al,(%rax)
  400a53:	00 1f                	add    %bl,(%rdi)
	...
  400a61:	44 61                	rex.R (bad) 
  400a63:	00 00                	add    %al,(%rax)
  400a65:	00 00                	add    %al,(%rax)
  400a67:	00 07                	add    %al,(%rdi)
  400a69:	00 00                	add    %al,(%rax)
  400a6b:	00 20                	add    %ah,(%rax)
	...

Disassembly of section .init:

0000000000400a78 <_init>:
  400a78:	48 83 ec 08          	sub    $0x8,%rsp
  400a7c:	48 8b 05 65 38 21 00 	mov    0x213865(%rip),%rax        # 6142e8 <_DYNAMIC+0x1d0>
  400a83:	48 85 c0             	test   %rax,%rax
  400a86:	74 05                	je     400a8d <_init+0x15>
  400a88:	e8 53 01 00 00       	callq  400be0 <__gmon_start__@plt>
  400a8d:	48 83 c4 08          	add    $0x8,%rsp
  400a91:	c3                   	retq   

Disassembly of section .plt:

0000000000400aa0 <recv@plt-0x10>:
  400aa0:	ff 35 52 38 21 00    	pushq  0x213852(%rip)        # 6142f8 <_GLOBAL_OFFSET_TABLE_+0x8>
  400aa6:	ff 25 54 38 21 00    	jmpq   *0x213854(%rip)        # 614300 <_GLOBAL_OFFSET_TABLE_+0x10>
  400aac:	0f 1f 40 00          	nopl   0x0(%rax)

0000000000400ab0 <recv@plt>:
  400ab0:	ff 25 52 38 21 00    	jmpq   *0x213852(%rip)        # 614308 <_GLOBAL_OFFSET_TABLE_+0x18>
  400ab6:	68 00 00 00 00       	pushq  $0x0
  400abb:	e9 e0 ff ff ff       	jmpq   400aa0 <_init+0x28>

0000000000400ac0 <putchar@plt>:
  400ac0:	ff 25 4a 38 21 00    	jmpq   *0x21384a(%rip)        # 614310 <_GLOBAL_OFFSET_TABLE_+0x20>
  400ac6:	68 01 00 00 00       	pushq  $0x1
  400acb:	e9 d0 ff ff ff       	jmpq   400aa0 <_init+0x28>

0000000000400ad0 <puts@plt>:
  400ad0:	ff 25 42 38 21 00    	jmpq   *0x213842(%rip)        # 614318 <_GLOBAL_OFFSET_TABLE_+0x28>
  400ad6:	68 02 00 00 00       	pushq  $0x2
  400adb:	e9 c0 ff ff ff       	jmpq   400aa0 <_init+0x28>

0000000000400ae0 <setsockopt@plt>:
  400ae0:	ff 25 3a 38 21 00    	jmpq   *0x21383a(%rip)        # 614320 <_GLOBAL_OFFSET_TABLE_+0x30>
  400ae6:	68 03 00 00 00       	pushq  $0x3
  400aeb:	e9 b0 ff ff ff       	jmpq   400aa0 <_init+0x28>

0000000000400af0 <write@plt>:
  400af0:	ff 25 32 38 21 00    	jmpq   *0x213832(%rip)        # 614328 <_GLOBAL_OFFSET_TABLE_+0x38>
  400af6:	68 04 00 00 00       	pushq  $0x4
  400afb:	e9 a0 ff ff ff       	jmpq   400aa0 <_init+0x28>

0000000000400b00 <fclose@plt>:
  400b00:	ff 25 2a 38 21 00    	jmpq   *0x21382a(%rip)        # 614330 <_GLOBAL_OFFSET_TABLE_+0x40>
  400b06:	68 05 00 00 00       	pushq  $0x5
  400b0b:	e9 90 ff ff ff       	jmpq   400aa0 <_init+0x28>

0000000000400b10 <strlen@plt>:
  400b10:	ff 25 22 38 21 00    	jmpq   *0x213822(%rip)        # 614338 <_GLOBAL_OFFSET_TABLE_+0x48>
  400b16:	68 06 00 00 00       	pushq  $0x6
  400b1b:	e9 80 ff ff ff       	jmpq   400aa0 <_init+0x28>

0000000000400b20 <system@plt>:
  400b20:	ff 25 1a 38 21 00    	jmpq   *0x21381a(%rip)        # 614340 <_GLOBAL_OFFSET_TABLE_+0x50>
  400b26:	68 07 00 00 00       	pushq  $0x7
  400b2b:	e9 70 ff ff ff       	jmpq   400aa0 <_init+0x28>

0000000000400b30 <htons@plt>:
  400b30:	ff 25 12 38 21 00    	jmpq   *0x213812(%rip)        # 614348 <_GLOBAL_OFFSET_TABLE_+0x58>
  400b36:	68 08 00 00 00       	pushq  $0x8
  400b3b:	e9 60 ff ff ff       	jmpq   400aa0 <_init+0x28>

0000000000400b40 <printf@plt>:
  400b40:	ff 25 0a 38 21 00    	jmpq   *0x21380a(%rip)        # 614350 <_GLOBAL_OFFSET_TABLE_+0x60>
  400b46:	68 09 00 00 00       	pushq  $0x9
  400b4b:	e9 50 ff ff ff       	jmpq   400aa0 <_init+0x28>

0000000000400b50 <snprintf@plt>:
  400b50:	ff 25 02 38 21 00    	jmpq   *0x213802(%rip)        # 614358 <_GLOBAL_OFFSET_TABLE_+0x68>
  400b56:	68 0a 00 00 00       	pushq  $0xa
  400b5b:	e9 40 ff ff ff       	jmpq   400aa0 <_init+0x28>

0000000000400b60 <fputs@plt>:
  400b60:	ff 25 fa 37 21 00    	jmpq   *0x2137fa(%rip)        # 614360 <_GLOBAL_OFFSET_TABLE_+0x70>
  400b66:	68 0b 00 00 00       	pushq  $0xb
  400b6b:	e9 30 ff ff ff       	jmpq   400aa0 <_init+0x28>

0000000000400b70 <htonl@plt>:
  400b70:	ff 25 f2 37 21 00    	jmpq   *0x2137f2(%rip)        # 614368 <_GLOBAL_OFFSET_TABLE_+0x78>
  400b76:	68 0c 00 00 00       	pushq  $0xc
  400b7b:	e9 20 ff ff ff       	jmpq   400aa0 <_init+0x28>

0000000000400b80 <memset@plt>:
  400b80:	ff 25 ea 37 21 00    	jmpq   *0x2137ea(%rip)        # 614370 <_GLOBAL_OFFSET_TABLE_+0x80>
  400b86:	68 0d 00 00 00       	pushq  $0xd
  400b8b:	e9 10 ff ff ff       	jmpq   400aa0 <_init+0x28>

0000000000400b90 <fputc@plt>:
  400b90:	ff 25 e2 37 21 00    	jmpq   *0x2137e2(%rip)        # 614378 <_GLOBAL_OFFSET_TABLE_+0x88>
  400b96:	68 0e 00 00 00       	pushq  $0xe
  400b9b:	e9 00 ff ff ff       	jmpq   400aa0 <_init+0x28>

0000000000400ba0 <__libc_start_main@plt>:
  400ba0:	ff 25 da 37 21 00    	jmpq   *0x2137da(%rip)        # 614380 <_GLOBAL_OFFSET_TABLE_+0x90>
  400ba6:	68 0f 00 00 00       	pushq  $0xf
  400bab:	e9 f0 fe ff ff       	jmpq   400aa0 <_init+0x28>

0000000000400bb0 <srand@plt>:
  400bb0:	ff 25 d2 37 21 00    	jmpq   *0x2137d2(%rip)        # 614388 <_GLOBAL_OFFSET_TABLE_+0x98>
  400bb6:	68 10 00 00 00       	pushq  $0x10
  400bbb:	e9 e0 fe ff ff       	jmpq   400aa0 <_init+0x28>

0000000000400bc0 <fgets@plt>:
  400bc0:	ff 25 ca 37 21 00    	jmpq   *0x2137ca(%rip)        # 614390 <_GLOBAL_OFFSET_TABLE_+0xa0>
  400bc6:	68 11 00 00 00       	pushq  $0x11
  400bcb:	e9 d0 fe ff ff       	jmpq   400aa0 <_init+0x28>

0000000000400bd0 <strcmp@plt>:
  400bd0:	ff 25 c2 37 21 00    	jmpq   *0x2137c2(%rip)        # 614398 <_GLOBAL_OFFSET_TABLE_+0xa8>
  400bd6:	68 12 00 00 00       	pushq  $0x12
  400bdb:	e9 c0 fe ff ff       	jmpq   400aa0 <_init+0x28>

0000000000400be0 <__gmon_start__@plt>:
  400be0:	ff 25 ba 37 21 00    	jmpq   *0x2137ba(%rip)        # 6143a0 <_GLOBAL_OFFSET_TABLE_+0xb0>
  400be6:	68 13 00 00 00       	pushq  $0x13
  400beb:	e9 b0 fe ff ff       	jmpq   400aa0 <_init+0x28>

0000000000400bf0 <time@plt>:
  400bf0:	ff 25 b2 37 21 00    	jmpq   *0x2137b2(%rip)        # 6143a8 <_GLOBAL_OFFSET_TABLE_+0xb8>
  400bf6:	68 14 00 00 00       	pushq  $0x14
  400bfb:	e9 a0 fe ff ff       	jmpq   400aa0 <_init+0x28>

0000000000400c00 <listen@plt>:
  400c00:	ff 25 aa 37 21 00    	jmpq   *0x2137aa(%rip)        # 6143b0 <_GLOBAL_OFFSET_TABLE_+0xc0>
  400c06:	68 15 00 00 00       	pushq  $0x15
  400c0b:	e9 90 fe ff ff       	jmpq   400aa0 <_init+0x28>

0000000000400c10 <setvbuf@plt>:
  400c10:	ff 25 a2 37 21 00    	jmpq   *0x2137a2(%rip)        # 6143b8 <_GLOBAL_OFFSET_TABLE_+0xc8>
  400c16:	68 16 00 00 00       	pushq  $0x16
  400c1b:	e9 80 fe ff ff       	jmpq   400aa0 <_init+0x28>

0000000000400c20 <bind@plt>:
  400c20:	ff 25 9a 37 21 00    	jmpq   *0x21379a(%rip)        # 6143c0 <_GLOBAL_OFFSET_TABLE_+0xd0>
  400c26:	68 17 00 00 00       	pushq  $0x17
  400c2b:	e9 70 fe ff ff       	jmpq   400aa0 <_init+0x28>

0000000000400c30 <popen@plt>:
  400c30:	ff 25 92 37 21 00    	jmpq   *0x213792(%rip)        # 6143c8 <_GLOBAL_OFFSET_TABLE_+0xd8>
  400c36:	68 18 00 00 00       	pushq  $0x18
  400c3b:	e9 60 fe ff ff       	jmpq   400aa0 <_init+0x28>

0000000000400c40 <fopen@plt>:
  400c40:	ff 25 8a 37 21 00    	jmpq   *0x21378a(%rip)        # 6143d0 <_GLOBAL_OFFSET_TABLE_+0xe0>
  400c46:	68 19 00 00 00       	pushq  $0x19
  400c4b:	e9 50 fe ff ff       	jmpq   400aa0 <_init+0x28>

0000000000400c50 <perror@plt>:
  400c50:	ff 25 82 37 21 00    	jmpq   *0x213782(%rip)        # 6143d8 <_GLOBAL_OFFSET_TABLE_+0xe8>
  400c56:	68 1a 00 00 00       	pushq  $0x1a
  400c5b:	e9 40 fe ff ff       	jmpq   400aa0 <_init+0x28>

0000000000400c60 <accept@plt>:
  400c60:	ff 25 7a 37 21 00    	jmpq   *0x21377a(%rip)        # 6143e0 <_GLOBAL_OFFSET_TABLE_+0xf0>
  400c66:	68 1b 00 00 00       	pushq  $0x1b
  400c6b:	e9 30 fe ff ff       	jmpq   400aa0 <_init+0x28>

0000000000400c70 <exit@plt>:
  400c70:	ff 25 72 37 21 00    	jmpq   *0x213772(%rip)        # 6143e8 <_GLOBAL_OFFSET_TABLE_+0xf8>
  400c76:	68 1c 00 00 00       	pushq  $0x1c
  400c7b:	e9 20 fe ff ff       	jmpq   400aa0 <_init+0x28>

0000000000400c80 <sleep@plt>:
  400c80:	ff 25 6a 37 21 00    	jmpq   *0x21376a(%rip)        # 6143f0 <_GLOBAL_OFFSET_TABLE_+0x100>
  400c86:	68 1d 00 00 00       	pushq  $0x1d
  400c8b:	e9 10 fe ff ff       	jmpq   400aa0 <_init+0x28>

0000000000400c90 <rand@plt>:
  400c90:	ff 25 62 37 21 00    	jmpq   *0x213762(%rip)        # 6143f8 <_GLOBAL_OFFSET_TABLE_+0x108>
  400c96:	68 1e 00 00 00       	pushq  $0x1e
  400c9b:	e9 00 fe ff ff       	jmpq   400aa0 <_init+0x28>

0000000000400ca0 <socket@plt>:
  400ca0:	ff 25 5a 37 21 00    	jmpq   *0x21375a(%rip)        # 614400 <_GLOBAL_OFFSET_TABLE_+0x110>
  400ca6:	68 1f 00 00 00       	pushq  $0x1f
  400cab:	e9 f0 fd ff ff       	jmpq   400aa0 <_init+0x28>

Disassembly of section .text:

0000000000400cb0 <_start>:
  400cb0:	31 ed                	xor    %ebp,%ebp
  400cb2:	49 89 d1             	mov    %rdx,%r9
  400cb5:	5e                   	pop    %rsi
  400cb6:	48 89 e2             	mov    %rsp,%rdx
  400cb9:	48 83 e4 f0          	and    $0xfffffffffffffff0,%rsp
  400cbd:	50                   	push   %rax
  400cbe:	54                   	push   %rsp
  400cbf:	49 c7 c0 40 17 40 00 	mov    $0x401740,%r8
  400cc6:	48 c7 c1 d0 16 40 00 	mov    $0x4016d0,%rcx
  400ccd:	48 c7 c7 ec 14 40 00 	mov    $0x4014ec,%rdi
  400cd4:	e8 c7 fe ff ff       	callq  400ba0 <__libc_start_main@plt>
  400cd9:	f4                   	hlt    
  400cda:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)

0000000000400ce0 <deregister_tm_clones>:
  400ce0:	b8 7f 47 61 00       	mov    $0x61477f,%eax
  400ce5:	55                   	push   %rbp
  400ce6:	48 2d 78 47 61 00    	sub    $0x614778,%rax
  400cec:	48 83 f8 0e          	cmp    $0xe,%rax
  400cf0:	48 89 e5             	mov    %rsp,%rbp
  400cf3:	76 1b                	jbe    400d10 <deregister_tm_clones+0x30>
  400cf5:	b8 00 00 00 00       	mov    $0x0,%eax
  400cfa:	48 85 c0             	test   %rax,%rax
  400cfd:	74 11                	je     400d10 <deregister_tm_clones+0x30>
  400cff:	5d                   	pop    %rbp
  400d00:	bf 78 47 61 00       	mov    $0x614778,%edi
  400d05:	ff e0                	jmpq   *%rax
  400d07:	66 0f 1f 84 00 00 00 	nopw   0x0(%rax,%rax,1)
  400d0e:	00 00 
  400d10:	5d                   	pop    %rbp
  400d11:	c3                   	retq   
  400d12:	66 66 66 66 66 2e 0f 	data16 data16 data16 data16 nopw %cs:0x0(%rax,%rax,1)
  400d19:	1f 84 00 00 00 00 00 

0000000000400d20 <register_tm_clones>:
  400d20:	be 78 47 61 00       	mov    $0x614778,%esi
  400d25:	55                   	push   %rbp
  400d26:	48 81 ee 78 47 61 00 	sub    $0x614778,%rsi
  400d2d:	48 c1 fe 03          	sar    $0x3,%rsi
  400d31:	48 89 e5             	mov    %rsp,%rbp
  400d34:	48 89 f0             	mov    %rsi,%rax
  400d37:	48 c1 e8 3f          	shr    $0x3f,%rax
  400d3b:	48 01 c6             	add    %rax,%rsi
  400d3e:	48 d1 fe             	sar    %rsi
  400d41:	74 15                	je     400d58 <register_tm_clones+0x38>
  400d43:	b8 00 00 00 00       	mov    $0x0,%eax
  400d48:	48 85 c0             	test   %rax,%rax
  400d4b:	74 0b                	je     400d58 <register_tm_clones+0x38>
  400d4d:	5d                   	pop    %rbp
  400d4e:	bf 78 47 61 00       	mov    $0x614778,%edi
  400d53:	ff e0                	jmpq   *%rax
  400d55:	0f 1f 00             	nopl   (%rax)
  400d58:	5d                   	pop    %rbp
  400d59:	c3                   	retq   
  400d5a:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)

0000000000400d60 <__do_global_dtors_aux>:
  400d60:	80 3d 29 3a 21 00 00 	cmpb   $0x0,0x213a29(%rip)        # 614790 <completed.6670>
  400d67:	75 11                	jne    400d7a <__do_global_dtors_aux+0x1a>
  400d69:	55                   	push   %rbp
  400d6a:	48 89 e5             	mov    %rsp,%rbp
  400d6d:	e8 6e ff ff ff       	callq  400ce0 <deregister_tm_clones>
  400d72:	5d                   	pop    %rbp
  400d73:	c6 05 16 3a 21 00 01 	movb   $0x1,0x213a16(%rip)        # 614790 <completed.6670>
  400d7a:	f3 c3                	repz retq 
  400d7c:	0f 1f 40 00          	nopl   0x0(%rax)

0000000000400d80 <frame_dummy>:
  400d80:	bf 10 41 61 00       	mov    $0x614110,%edi
  400d85:	48 83 3f 00          	cmpq   $0x0,(%rdi)
  400d89:	75 05                	jne    400d90 <frame_dummy+0x10>
  400d8b:	eb 93                	jmp    400d20 <register_tm_clones>
  400d8d:	0f 1f 00             	nopl   (%rax)
  400d90:	b8 00 00 00 00       	mov    $0x0,%eax
  400d95:	48 85 c0             	test   %rax,%rax
  400d98:	74 f1                	je     400d8b <frame_dummy+0xb>
  400d9a:	55                   	push   %rbp
  400d9b:	48 89 e5             	mov    %rsp,%rbp
  400d9e:	ff d0                	callq  *%rax
  400da0:	5d                   	pop    %rbp
  400da1:	e9 7a ff ff ff       	jmpq   400d20 <register_tm_clones>

0000000000400da6 <get_accepted_connection_fd>:
  400da6:	55                   	push   %rbp
  400da7:	48 89 e5             	mov    %rsp,%rbp
  400daa:	48 83 ec 30          	sub    $0x30,%rsp
  400dae:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  400db2:	ba 10 00 00 00       	mov    $0x10,%edx
  400db7:	be 30 00 00 00       	mov    $0x30,%esi
  400dbc:	48 89 c7             	mov    %rax,%rdi
  400dbf:	e8 bc fd ff ff       	callq  400b80 <memset@plt>
  400dc4:	66 c7 45 e0 02 00    	movw   $0x2,-0x20(%rbp)
  400dca:	bf 7f 5b 00 00       	mov    $0x5b7f,%edi
  400dcf:	e8 5c fd ff ff       	callq  400b30 <htons@plt>
  400dd4:	66 89 45 e2          	mov    %ax,-0x1e(%rbp)
  400dd8:	bf 00 00 00 00       	mov    $0x0,%edi
  400ddd:	e8 8e fd ff ff       	callq  400b70 <htonl@plt>
  400de2:	89 45 e4             	mov    %eax,-0x1c(%rbp)
  400de5:	ba 00 00 00 00       	mov    $0x0,%edx
  400dea:	be 01 00 00 00       	mov    $0x1,%esi
  400def:	bf 02 00 00 00       	mov    $0x2,%edi
  400df4:	e8 a7 fe ff ff       	callq  400ca0 <socket@plt>
  400df9:	89 45 fc             	mov    %eax,-0x4(%rbp)
  400dfc:	83 7d fc ff          	cmpl   $0xffffffff,-0x4(%rbp)
  400e00:	75 14                	jne    400e16 <get_accepted_connection_fd+0x70>
  400e02:	bf 84 17 40 00       	mov    $0x401784,%edi
  400e07:	e8 44 fe ff ff       	callq  400c50 <perror@plt>
  400e0c:	bf 01 00 00 00       	mov    $0x1,%edi
  400e11:	e8 5a fe ff ff       	callq  400c70 <exit@plt>
  400e16:	c7 45 dc 01 00 00 00 	movl   $0x1,-0x24(%rbp)
  400e1d:	48 8d 55 dc          	lea    -0x24(%rbp),%rdx
  400e21:	8b 45 fc             	mov    -0x4(%rbp),%eax
  400e24:	41 b8 04 00 00 00    	mov    $0x4,%r8d
  400e2a:	48 89 d1             	mov    %rdx,%rcx
  400e2d:	ba 0f 00 00 00       	mov    $0xf,%edx
  400e32:	be 01 00 00 00       	mov    $0x1,%esi
  400e37:	89 c7                	mov    %eax,%edi
  400e39:	e8 a2 fc ff ff       	callq  400ae0 <setsockopt@plt>
  400e3e:	83 f8 ff             	cmp    $0xffffffff,%eax
  400e41:	75 14                	jne    400e57 <get_accepted_connection_fd+0xb1>
  400e43:	bf 91 17 40 00       	mov    $0x401791,%edi
  400e48:	e8 03 fe ff ff       	callq  400c50 <perror@plt>
  400e4d:	bf 01 00 00 00       	mov    $0x1,%edi
  400e52:	e8 19 fe ff ff       	callq  400c70 <exit@plt>
  400e57:	48 8d 4d e0          	lea    -0x20(%rbp),%rcx
  400e5b:	8b 45 fc             	mov    -0x4(%rbp),%eax
  400e5e:	ba 10 00 00 00       	mov    $0x10,%edx
  400e63:	48 89 ce             	mov    %rcx,%rsi
  400e66:	89 c7                	mov    %eax,%edi
  400e68:	e8 b3 fd ff ff       	callq  400c20 <bind@plt>
  400e6d:	83 f8 ff             	cmp    $0xffffffff,%eax
  400e70:	75 14                	jne    400e86 <get_accepted_connection_fd+0xe0>
  400e72:	bf a2 17 40 00       	mov    $0x4017a2,%edi
  400e77:	e8 d4 fd ff ff       	callq  400c50 <perror@plt>
  400e7c:	bf 01 00 00 00       	mov    $0x1,%edi
  400e81:	e8 ea fd ff ff       	callq  400c70 <exit@plt>
  400e86:	8b 45 fc             	mov    -0x4(%rbp),%eax
  400e89:	be 01 00 00 00       	mov    $0x1,%esi
  400e8e:	89 c7                	mov    %eax,%edi
  400e90:	e8 6b fd ff ff       	callq  400c00 <listen@plt>
  400e95:	83 f8 ff             	cmp    $0xffffffff,%eax
  400e98:	75 14                	jne    400eae <get_accepted_connection_fd+0x108>
  400e9a:	bf ad 17 40 00       	mov    $0x4017ad,%edi
  400e9f:	e8 ac fd ff ff       	callq  400c50 <perror@plt>
  400ea4:	bf 01 00 00 00       	mov    $0x1,%edi
  400ea9:	e8 c2 fd ff ff       	callq  400c70 <exit@plt>
  400eae:	8b 45 fc             	mov    -0x4(%rbp),%eax
  400eb1:	ba 00 00 00 00       	mov    $0x0,%edx
  400eb6:	be 00 00 00 00       	mov    $0x0,%esi
  400ebb:	89 c7                	mov    %eax,%edi
  400ebd:	e8 9e fd ff ff       	callq  400c60 <accept@plt>
  400ec2:	89 45 f8             	mov    %eax,-0x8(%rbp)
  400ec5:	83 7d f8 ff          	cmpl   $0xffffffff,-0x8(%rbp)
  400ec9:	75 14                	jne    400edf <get_accepted_connection_fd+0x139>
  400ecb:	bf ba 17 40 00       	mov    $0x4017ba,%edi
  400ed0:	e8 7b fd ff ff       	callq  400c50 <perror@plt>
  400ed5:	bf 01 00 00 00       	mov    $0x1,%edi
  400eda:	e8 91 fd ff ff       	callq  400c70 <exit@plt>
  400edf:	8b 45 f8             	mov    -0x8(%rbp),%eax
  400ee2:	c9                   	leaveq 
  400ee3:	c3                   	retq   

0000000000400ee4 <receive>:
  400ee4:	55                   	push   %rbp
  400ee5:	48 89 e5             	mov    %rsp,%rbp
  400ee8:	48 83 ec 30          	sub    $0x30,%rsp
  400eec:	89 7d ec             	mov    %edi,-0x14(%rbp)
  400eef:	48 89 75 e0          	mov    %rsi,-0x20(%rbp)
  400ef3:	48 89 55 d8          	mov    %rdx,-0x28(%rbp)
  400ef7:	48 8b 55 d8          	mov    -0x28(%rbp),%rdx
  400efb:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
  400eff:	be 00 00 00 00       	mov    $0x0,%esi
  400f04:	48 89 c7             	mov    %rax,%rdi
  400f07:	e8 74 fc ff ff       	callq  400b80 <memset@plt>
  400f0c:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  400f10:	48 8d 50 ff          	lea    -0x1(%rax),%rdx
  400f14:	48 8b 75 e0          	mov    -0x20(%rbp),%rsi
  400f18:	8b 45 ec             	mov    -0x14(%rbp),%eax
  400f1b:	b9 00 00 00 00       	mov    $0x0,%ecx
  400f20:	89 c7                	mov    %eax,%edi
  400f22:	e8 89 fb ff ff       	callq  400ab0 <recv@plt>
  400f27:	89 45 fc             	mov    %eax,-0x4(%rbp)
  400f2a:	83 7d fc ff          	cmpl   $0xffffffff,-0x4(%rbp)
  400f2e:	75 14                	jne    400f44 <receive+0x60>
  400f30:	bf c7 17 40 00       	mov    $0x4017c7,%edi
  400f35:	e8 16 fd ff ff       	callq  400c50 <perror@plt>
  400f3a:	bf 01 00 00 00       	mov    $0x1,%edi
  400f3f:	e8 2c fd ff ff       	callq  400c70 <exit@plt>
  400f44:	83 7d fc 00          	cmpl   $0x0,-0x4(%rbp)
  400f48:	75 0a                	jne    400f54 <receive+0x70>
  400f4a:	bf 00 00 00 00       	mov    $0x0,%edi
  400f4f:	e8 1c fd ff ff       	callq  400c70 <exit@plt>
  400f54:	c9                   	leaveq 
  400f55:	c3                   	retq   

0000000000400f56 <ebadf>:
  400f56:	55                   	push   %rbp
  400f57:	48 89 e5             	mov    %rsp,%rbp
  400f5a:	48 81 ec b0 04 00 00 	sub    $0x4b0,%rsp
  400f61:	48 8d 85 50 fb ff ff 	lea    -0x4b0(%rbp),%rax
  400f68:	ba 00 18 40 00       	mov    $0x401800,%edx
  400f6d:	b9 15 00 00 00       	mov    $0x15,%ecx
  400f72:	48 89 c7             	mov    %rax,%rdi
  400f75:	48 89 d6             	mov    %rdx,%rsi
  400f78:	f3 48 a5             	rep movsq %ds:(%rsi),%es:(%rdi)
  400f7b:	48 89 f2             	mov    %rsi,%rdx
  400f7e:	48 89 f8             	mov    %rdi,%rax
  400f81:	8b 0a                	mov    (%rdx),%ecx
  400f83:	89 08                	mov    %ecx,(%rax)
  400f85:	48 8d 40 04          	lea    0x4(%rax),%rax
  400f89:	48 8d 52 04          	lea    0x4(%rdx),%rdx
  400f8d:	48 8d 95 00 fc ff ff 	lea    -0x400(%rbp),%rdx
  400f94:	48 8d 85 50 fb ff ff 	lea    -0x4b0(%rbp),%rax
  400f9b:	48 89 d6             	mov    %rdx,%rsi
  400f9e:	48 89 c7             	mov    %rax,%rdi
  400fa1:	e8 c7 03 00 00       	callq  40136d <de>
  400fa6:	48 8d 85 00 fc ff ff 	lea    -0x400(%rbp),%rax
  400fad:	48 89 c7             	mov    %rax,%rdi
  400fb0:	e8 5b fb ff ff       	callq  400b10 <strlen@plt>
  400fb5:	48 89 c2             	mov    %rax,%rdx
  400fb8:	48 8d 85 00 fc ff ff 	lea    -0x400(%rbp),%rax
  400fbf:	48 89 c6             	mov    %rax,%rsi
  400fc2:	bf 05 00 00 00       	mov    $0x5,%edi
  400fc7:	e8 24 fb ff ff       	callq  400af0 <write@plt>
  400fcc:	c9                   	leaveq 
  400fcd:	c3                   	retq   

0000000000400fce <m_fds>:
  400fce:	55                   	push   %rbp
  400fcf:	48 89 e5             	mov    %rsp,%rbp
  400fd2:	53                   	push   %rbx
  400fd3:	48 81 ec c8 00 00 00 	sub    $0xc8,%rsp
  400fda:	48 8b 05 9f 37 21 00 	mov    0x21379f(%rip),%rax        # 614780 <stdout@@GLIBC_2.2.5>
  400fe1:	b9 00 00 00 00       	mov    $0x0,%ecx
  400fe6:	ba 02 00 00 00       	mov    $0x2,%edx
  400feb:	be 00 00 00 00       	mov    $0x0,%esi
  400ff0:	48 89 c7             	mov    %rax,%rdi
  400ff3:	e8 18 fc ff ff       	callq  400c10 <setvbuf@plt>
  400ff8:	48 8b 05 89 37 21 00 	mov    0x213789(%rip),%rax        # 614788 <stderr@@GLIBC_2.2.5>
  400fff:	b9 00 00 00 00       	mov    $0x0,%ecx
  401004:	ba 02 00 00 00       	mov    $0x2,%edx
  401009:	be 00 00 00 00       	mov    $0x0,%esi
  40100e:	48 89 c7             	mov    %rax,%rdi
  401011:	e8 fa fb ff ff       	callq  400c10 <setvbuf@plt>
  401016:	bf 00 00 00 00       	mov    $0x0,%edi
  40101b:	e8 d0 fb ff ff       	callq  400bf0 <time@plt>
  401020:	89 c7                	mov    %eax,%edi
  401022:	e8 89 fb ff ff       	callq  400bb0 <srand@plt>
  401027:	48 8d 85 30 ff ff ff 	lea    -0xd0(%rbp),%rax
  40102e:	ba c0 18 40 00       	mov    $0x4018c0,%edx
  401033:	b9 17 00 00 00       	mov    $0x17,%ecx
  401038:	48 89 c7             	mov    %rax,%rdi
  40103b:	48 89 d6             	mov    %rdx,%rsi
  40103e:	f3 48 a5             	rep movsq %ds:(%rsi),%es:(%rdi)
  401041:	48 89 f2             	mov    %rsi,%rdx
  401044:	48 89 f8             	mov    %rdi,%rax
  401047:	8b 0a                	mov    (%rdx),%ecx
  401049:	89 08                	mov    %ecx,(%rax)
  40104b:	48 8d 40 04          	lea    0x4(%rax),%rax
  40104f:	48 8d 52 04          	lea    0x4(%rdx),%rdx
  401053:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%rbp)
  40105a:	e9 98 00 00 00       	jmpq   4010f7 <m_fds+0x129>
  40105f:	e8 2c fc ff ff       	callq  400c90 <rand@plt>
  401064:	89 c1                	mov    %eax,%ecx
  401066:	ba 1f 85 eb 51       	mov    $0x51eb851f,%edx
  40106b:	89 c8                	mov    %ecx,%eax
  40106d:	f7 ea                	imul   %edx
  40106f:	c1 fa 05             	sar    $0x5,%edx
  401072:	89 c8                	mov    %ecx,%eax
  401074:	c1 f8 1f             	sar    $0x1f,%eax
  401077:	29 c2                	sub    %eax,%edx
  401079:	89 d0                	mov    %edx,%eax
  40107b:	6b c0 64             	imul   $0x64,%eax,%eax
  40107e:	29 c1                	sub    %eax,%ecx
  401080:	89 c8                	mov    %ecx,%eax
  401082:	83 f8 4b             	cmp    $0x4b,%eax
  401085:	7e 36                	jle    4010bd <m_fds+0xef>
  401087:	8b 45 ec             	mov    -0x14(%rbp),%eax
  40108a:	48 98                	cltq   
  40108c:	8b 8c 85 30 ff ff ff 	mov    -0xd0(%rbp,%rax,4),%ecx
  401093:	ba 41 2f 00 bd       	mov    $0xbd002f41,%edx
  401098:	89 c8                	mov    %ecx,%eax
  40109a:	f7 ea                	imul   %edx
  40109c:	8d 04 0a             	lea    (%rdx,%rcx,1),%eax
  40109f:	c1 f8 0a             	sar    $0xa,%eax
  4010a2:	89 c2                	mov    %eax,%edx
  4010a4:	89 c8                	mov    %ecx,%eax
  4010a6:	c1 f8 1f             	sar    $0x1f,%eax
  4010a9:	29 c2                	sub    %eax,%edx
  4010ab:	89 d0                	mov    %edx,%eax
  4010ad:	0f be c0             	movsbl %al,%eax
  4010b0:	89 c7                	mov    %eax,%edi
  4010b2:	e8 09 fa ff ff       	callq  400ac0 <putchar@plt>
  4010b7:	83 45 ec 01          	addl   $0x1,-0x14(%rbp)
  4010bb:	eb 3a                	jmp    4010f7 <m_fds+0x129>
  4010bd:	48 8b 1d c4 36 21 00 	mov    0x2136c4(%rip),%rbx        # 614788 <stderr@@GLIBC_2.2.5>
  4010c4:	e8 c7 fb ff ff       	callq  400c90 <rand@plt>
  4010c9:	89 c1                	mov    %eax,%ecx
  4010cb:	ba 4f ec c4 4e       	mov    $0x4ec4ec4f,%edx
  4010d0:	89 c8                	mov    %ecx,%eax
  4010d2:	f7 ea                	imul   %edx
  4010d4:	c1 fa 03             	sar    $0x3,%edx
  4010d7:	89 c8                	mov    %ecx,%eax
  4010d9:	c1 f8 1f             	sar    $0x1f,%eax
  4010dc:	29 c2                	sub    %eax,%edx
  4010de:	89 d0                	mov    %edx,%eax
  4010e0:	6b c0 1a             	imul   $0x1a,%eax,%eax
  4010e3:	29 c1                	sub    %eax,%ecx
  4010e5:	89 c8                	mov    %ecx,%eax
  4010e7:	83 c0 61             	add    $0x61,%eax
  4010ea:	0f be c0             	movsbl %al,%eax
  4010ed:	48 89 de             	mov    %rbx,%rsi
  4010f0:	89 c7                	mov    %eax,%edi
  4010f2:	e8 99 fa ff ff       	callq  400b90 <fputc@plt>
  4010f7:	8b 45 ec             	mov    -0x14(%rbp),%eax
  4010fa:	48 98                	cltq   
  4010fc:	8b 84 85 30 ff ff ff 	mov    -0xd0(%rbp,%rax,4),%eax
  401103:	85 c0                	test   %eax,%eax
  401105:	0f 85 54 ff ff ff    	jne    40105f <m_fds+0x91>
  40110b:	48 81 c4 c8 00 00 00 	add    $0xc8,%rsp
  401112:	5b                   	pop    %rbx
  401113:	5d                   	pop    %rbp
  401114:	c3                   	retq   

0000000000401115 <portrait>:
  401115:	55                   	push   %rbp
  401116:	48 89 e5             	mov    %rsp,%rbp
  401119:	bf 80 19 40 00       	mov    $0x401980,%edi
  40111e:	b8 00 00 00 00       	mov    $0x0,%eax
  401123:	e8 18 fa ff ff       	callq  400b40 <printf@plt>
  401128:	5d                   	pop    %rbp
  401129:	c3                   	retq   

000000000040112a <quine>:
  40112a:	55                   	push   %rbp
  40112b:	48 89 e5             	mov    %rsp,%rbp
  40112e:	48 81 ec 60 06 00 00 	sub    $0x660,%rsp
  401135:	48 8d 85 80 fa ff ff 	lea    -0x580(%rbp),%rax
  40113c:	ba c0 2a 40 00       	mov    $0x402ac0,%edx
  401141:	b9 2c 00 00 00       	mov    $0x2c,%ecx
  401146:	48 89 c7             	mov    %rax,%rdi
  401149:	48 89 d6             	mov    %rdx,%rsi
  40114c:	f3 48 a5             	rep movsq %ds:(%rsi),%es:(%rdi)
  40114f:	48 89 f2             	mov    %rsi,%rdx
  401152:	48 89 f8             	mov    %rdi,%rax
  401155:	8b 0a                	mov    (%rdx),%ecx
  401157:	89 08                	mov    %ecx,(%rax)
  401159:	48 8d 40 04          	lea    0x4(%rax),%rax
  40115d:	48 8d 52 04          	lea    0x4(%rdx),%rdx
  401161:	48 8d 85 a0 f9 ff ff 	lea    -0x660(%rbp),%rax
  401168:	ba 40 2c 40 00       	mov    $0x402c40,%edx
  40116d:	b9 1a 00 00 00       	mov    $0x1a,%ecx
  401172:	48 89 c7             	mov    %rax,%rdi
  401175:	48 89 d6             	mov    %rdx,%rsi
  401178:	f3 48 a5             	rep movsq %ds:(%rsi),%es:(%rdi)
  40117b:	48 89 f2             	mov    %rsi,%rdx
  40117e:	48 89 f8             	mov    %rdi,%rax
  401181:	8b 0a                	mov    (%rdx),%ecx
  401183:	89 08                	mov    %ecx,(%rax)
  401185:	48 8d 40 04          	lea    0x4(%rax),%rax
  401189:	48 8d 52 04          	lea    0x4(%rdx),%rdx
  40118d:	bf 78 2a 40 00       	mov    $0x402a78,%edi
  401192:	e8 89 f9 ff ff       	callq  400b20 <system@plt>
  401197:	89 45 fc             	mov    %eax,-0x4(%rbp)
  40119a:	83 7d fc 00          	cmpl   $0x0,-0x4(%rbp)
  40119e:	0f 85 8d 00 00 00    	jne    401231 <quine+0x107>
  4011a4:	48 8d 95 f0 fb ff ff 	lea    -0x410(%rbp),%rdx
  4011ab:	48 8d 85 80 fa ff ff 	lea    -0x580(%rbp),%rax
  4011b2:	48 89 d6             	mov    %rdx,%rsi
  4011b5:	48 89 c7             	mov    %rax,%rdi
  4011b8:	e8 b0 01 00 00       	callq  40136d <de>
  4011bd:	48 8d 85 f0 fb ff ff 	lea    -0x410(%rbp),%rax
  4011c4:	48 89 c6             	mov    %rax,%rsi
  4011c7:	bf 8d 2a 40 00       	mov    $0x402a8d,%edi
  4011cc:	b8 00 00 00 00       	mov    $0x0,%eax
  4011d1:	e8 6a f9 ff ff       	callq  400b40 <printf@plt>
  4011d6:	bf 90 2a 40 00       	mov    $0x402a90,%edi
  4011db:	e8 40 f9 ff ff       	callq  400b20 <system@plt>
  4011e0:	89 45 fc             	mov    %eax,-0x4(%rbp)
  4011e3:	83 7d fc 00          	cmpl   $0x0,-0x4(%rbp)
  4011e7:	75 34                	jne    40121d <quine+0xf3>
  4011e9:	48 8d 95 f0 fb ff ff 	lea    -0x410(%rbp),%rdx
  4011f0:	48 8d 85 a0 f9 ff ff 	lea    -0x660(%rbp),%rax
  4011f7:	48 89 d6             	mov    %rdx,%rsi
  4011fa:	48 89 c7             	mov    %rax,%rdi
  4011fd:	e8 6b 01 00 00       	callq  40136d <de>
  401202:	48 8d 85 f0 fb ff ff 	lea    -0x410(%rbp),%rax
  401209:	48 89 c6             	mov    %rax,%rsi
  40120c:	bf 8d 2a 40 00       	mov    $0x402a8d,%edi
  401211:	b8 00 00 00 00       	mov    $0x0,%eax
  401216:	e8 25 f9 ff ff       	callq  400b40 <printf@plt>
  40121b:	eb 14                	jmp    401231 <quine+0x107>
  40121d:	8b 45 fc             	mov    -0x4(%rbp),%eax
  401220:	89 c6                	mov    %eax,%esi
  401222:	bf a9 2a 40 00       	mov    $0x402aa9,%edi
  401227:	b8 00 00 00 00       	mov    $0x0,%eax
  40122c:	e8 0f f9 ff ff       	callq  400b40 <printf@plt>
  401231:	c9                   	leaveq 
  401232:	c3                   	retq   

0000000000401233 <gdbme>:
  401233:	55                   	push   %rbp
  401234:	48 89 e5             	mov    %rsp,%rbp
  401237:	48 81 ec e0 04 00 00 	sub    $0x4e0,%rsp
  40123e:	48 8d 85 20 fb ff ff 	lea    -0x4e0(%rbp),%rax
  401245:	be 40 2d 40 00       	mov    $0x402d40,%esi
  40124a:	ba 19 00 00 00       	mov    $0x19,%edx
  40124f:	48 89 c7             	mov    %rax,%rdi
  401252:	48 89 d1             	mov    %rdx,%rcx
  401255:	f3 48 a5             	rep movsq %ds:(%rsi),%es:(%rdi)
  401258:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%rbp)
  40125f:	81 7d fc 45 23 01 00 	cmpl   $0x12345,-0x4(%rbp)
  401266:	75 34                	jne    40129c <gdbme+0x69>
  401268:	48 8d 95 f0 fb ff ff 	lea    -0x410(%rbp),%rdx
  40126f:	48 8d 85 20 fb ff ff 	lea    -0x4e0(%rbp),%rax
  401276:	48 89 d6             	mov    %rdx,%rsi
  401279:	48 89 c7             	mov    %rax,%rdi
  40127c:	e8 ec 00 00 00       	callq  40136d <de>
  401281:	48 8d 85 f0 fb ff ff 	lea    -0x410(%rbp),%rax
  401288:	48 89 c6             	mov    %rax,%rsi
  40128b:	bf 8d 2a 40 00       	mov    $0x402a8d,%edi
  401290:	b8 00 00 00 00       	mov    $0x0,%eax
  401295:	e8 a6 f8 ff ff       	callq  400b40 <printf@plt>
  40129a:	eb 0a                	jmp    4012a6 <gdbme+0x73>
  40129c:	bf 14 2d 40 00       	mov    $0x402d14,%edi
  4012a1:	e8 2a f8 ff ff       	callq  400ad0 <puts@plt>
  4012a6:	c9                   	leaveq 
  4012a7:	c3                   	retq   

00000000004012a8 <esto_es_un>:
  4012a8:	55                   	push   %rbp
  4012a9:	48 89 e5             	mov    %rsp,%rbp
  4012ac:	8b 45 f0             	mov    -0x10(%rbp),%eax
  4012af:	85 c0                	test   %eax,%eax
  4012b1:	74 07                	je     4012ba <esto_es_un+0x12>
  4012b3:	b8 01 00 00 00       	mov    $0x1,%eax
  4012b8:	eb 05                	jmp    4012bf <esto_es_un+0x17>
  4012ba:	b8 00 00 00 00       	mov    $0x0,%eax
  4012bf:	5d                   	pop    %rbp
  4012c0:	c3                   	retq   

00000000004012c1 <secreto>:
  4012c1:	55                   	push   %rbp
  4012c2:	48 89 e5             	mov    %rsp,%rbp
  4012c5:	b8 00 00 00 00       	mov    $0x0,%eax
  4012ca:	e8 d9 ff ff ff       	callq  4012a8 <esto_es_un>
  4012cf:	5d                   	pop    %rbp
  4012d0:	c3                   	retq   

00000000004012d1 <solo_di>:
  4012d1:	55                   	push   %rbp
  4012d2:	48 89 e5             	mov    %rsp,%rbp
  4012d5:	b8 00 00 00 00       	mov    $0x0,%eax
  4012da:	e8 e2 ff ff ff       	callq  4012c1 <secreto>
  4012df:	5d                   	pop    %rbp
  4012e0:	c3                   	retq   

00000000004012e1 <valgrind_manda>:
  4012e1:	55                   	push   %rbp
  4012e2:	48 89 e5             	mov    %rsp,%rbp
  4012e5:	b8 00 00 00 00       	mov    $0x0,%eax
  4012ea:	e8 e2 ff ff ff       	callq  4012d1 <solo_di>
  4012ef:	5d                   	pop    %rbp
  4012f0:	c3                   	retq   

00000000004012f1 <h_f>:
  4012f1:	55                   	push   %rbp
  4012f2:	48 89 e5             	mov    %rsp,%rbp
  4012f5:	48 81 ec f0 05 00 00 	sub    $0x5f0,%rsp
  4012fc:	48 8d 85 10 fa ff ff 	lea    -0x5f0(%rbp),%rax
  401303:	be 40 2e 40 00       	mov    $0x402e40,%esi
  401308:	ba 3c 00 00 00       	mov    $0x3c,%edx
  40130d:	48 89 c7             	mov    %rax,%rdi
  401310:	48 89 d1             	mov    %rdx,%rcx
  401313:	f3 48 a5             	rep movsq %ds:(%rsi),%es:(%rdi)
  401316:	48 8d 95 f0 fb ff ff 	lea    -0x410(%rbp),%rdx
  40131d:	48 8d 85 10 fa ff ff 	lea    -0x5f0(%rbp),%rax
  401324:	48 89 d6             	mov    %rdx,%rsi
  401327:	48 89 c7             	mov    %rax,%rdi
  40132a:	e8 3e 00 00 00       	callq  40136d <de>
  40132f:	be 08 2e 40 00       	mov    $0x402e08,%esi
  401334:	bf 0a 2e 40 00       	mov    $0x402e0a,%edi
  401339:	e8 02 f9 ff ff       	callq  400c40 <fopen@plt>
  40133e:	48 89 45 f8          	mov    %rax,-0x8(%rbp)
  401342:	48 83 7d f8 00       	cmpq   $0x0,-0x8(%rbp)
  401347:	74 22                	je     40136b <h_f+0x7a>
  401349:	48 8b 55 f8          	mov    -0x8(%rbp),%rdx
  40134d:	48 8d 85 f0 fb ff ff 	lea    -0x410(%rbp),%rax
  401354:	48 89 d6             	mov    %rdx,%rsi
  401357:	48 89 c7             	mov    %rax,%rdi
  40135a:	e8 01 f8 ff ff       	callq  400b60 <fputs@plt>
  40135f:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
  401363:	48 89 c7             	mov    %rax,%rdi
  401366:	e8 95 f7 ff ff       	callq  400b00 <fclose@plt>
  40136b:	c9                   	leaveq 
  40136c:	c3                   	retq   

000000000040136d <de>:
  40136d:	55                   	push   %rbp
  40136e:	48 89 e5             	mov    %rsp,%rbp
  401371:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
  401375:	48 89 75 f0          	mov    %rsi,-0x10(%rbp)
  401379:	eb 32                	jmp    4013ad <de+0x40>
  40137b:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
  40137f:	8b 08                	mov    (%rax),%ecx
  401381:	ba 41 2f 00 bd       	mov    $0xbd002f41,%edx
  401386:	89 c8                	mov    %ecx,%eax
  401388:	f7 ea                	imul   %edx
  40138a:	8d 04 0a             	lea    (%rdx,%rcx,1),%eax
  40138d:	c1 f8 0a             	sar    $0xa,%eax
  401390:	89 c2                	mov    %eax,%edx
  401392:	89 c8                	mov    %ecx,%eax
  401394:	c1 f8 1f             	sar    $0x1f,%eax
  401397:	29 c2                	sub    %eax,%edx
  401399:	89 d0                	mov    %edx,%eax
  40139b:	89 c2                	mov    %eax,%edx
  40139d:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
  4013a1:	88 10                	mov    %dl,(%rax)
  4013a3:	48 83 45 f8 04       	addq   $0x4,-0x8(%rbp)
  4013a8:	48 83 45 f0 01       	addq   $0x1,-0x10(%rbp)
  4013ad:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
  4013b1:	8b 00                	mov    (%rax),%eax
  4013b3:	85 c0                	test   %eax,%eax
  4013b5:	75 c4                	jne    40137b <de+0xe>
  4013b7:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
  4013bb:	c6 00 00             	movb   $0x0,(%rax)
  4013be:	5d                   	pop    %rbp
  4013bf:	c3                   	retq   

00000000004013c0 <en>:
  4013c0:	55                   	push   %rbp
  4013c1:	48 89 e5             	mov    %rsp,%rbp
  4013c4:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
  4013c8:	48 89 75 f0          	mov    %rsi,-0x10(%rbp)
  4013cc:	eb 20                	jmp    4013ee <en+0x2e>
  4013ce:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
  4013d2:	0f b6 00             	movzbl (%rax),%eax
  4013d5:	0f be c0             	movsbl %al,%eax
  4013d8:	69 d0 6b 05 00 00    	imul   $0x56b,%eax,%edx
  4013de:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
  4013e2:	89 10                	mov    %edx,(%rax)
  4013e4:	48 83 45 f8 01       	addq   $0x1,-0x8(%rbp)
  4013e9:	48 83 45 f0 04       	addq   $0x4,-0x10(%rbp)
  4013ee:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
  4013f2:	0f b6 00             	movzbl (%rax),%eax
  4013f5:	84 c0                	test   %al,%al
  4013f7:	75 d5                	jne    4013ce <en+0xe>
  4013f9:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
  4013fd:	c7 00 00 00 00 00    	movl   $0x0,(%rax)
  401403:	5d                   	pop    %rbp
  401404:	c3                   	retq   

0000000000401405 <hash>:
  401405:	55                   	push   %rbp
  401406:	48 89 e5             	mov    %rsp,%rbp
  401409:	48 81 ec a0 00 00 00 	sub    $0xa0,%rsp
  401410:	48 89 bd 68 ff ff ff 	mov    %rdi,-0x98(%rbp)
  401417:	48 89 b5 60 ff ff ff 	mov    %rsi,-0xa0(%rbp)
  40141e:	48 8b 95 68 ff ff ff 	mov    -0x98(%rbp),%rdx
  401425:	48 8d 85 70 ff ff ff 	lea    -0x90(%rbp),%rax
  40142c:	48 89 d1             	mov    %rdx,%rcx
  40142f:	ba 20 30 40 00       	mov    $0x403020,%edx
  401434:	be 80 00 00 00       	mov    $0x80,%esi
  401439:	48 89 c7             	mov    %rax,%rdi
  40143c:	b8 00 00 00 00       	mov    $0x0,%eax
  401441:	e8 0a f7 ff ff       	callq  400b50 <snprintf@plt>
  401446:	48 8d 85 70 ff ff ff 	lea    -0x90(%rbp),%rax
  40144d:	be 48 30 40 00       	mov    $0x403048,%esi
  401452:	48 89 c7             	mov    %rax,%rdi
  401455:	e8 d6 f7 ff ff       	callq  400c30 <popen@plt>
  40145a:	48 89 45 f8          	mov    %rax,-0x8(%rbp)
  40145e:	48 83 7d f8 00       	cmpq   $0x0,-0x8(%rbp)
  401463:	75 14                	jne    401479 <hash+0x74>
  401465:	bf 4a 30 40 00       	mov    $0x40304a,%edi
  40146a:	e8 e1 f7 ff ff       	callq  400c50 <perror@plt>
  40146f:	bf 01 00 00 00       	mov    $0x1,%edi
  401474:	e8 f7 f7 ff ff       	callq  400c70 <exit@plt>
  401479:	48 8b 55 f8          	mov    -0x8(%rbp),%rdx
  40147d:	48 8b 85 60 ff ff ff 	mov    -0xa0(%rbp),%rax
  401484:	be 28 00 00 00       	mov    $0x28,%esi
  401489:	48 89 c7             	mov    %rax,%rdi
  40148c:	e8 2f f7 ff ff       	callq  400bc0 <fgets@plt>
  401491:	c9                   	leaveq 
  401492:	c3                   	retq   

0000000000401493 <cmp>:
  401493:	55                   	push   %rbp
  401494:	48 89 e5             	mov    %rsp,%rbp
  401497:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
  40149b:	48 89 75 f0          	mov    %rsi,-0x10(%rbp)
  40149f:	eb 21                	jmp    4014c2 <cmp+0x2f>
  4014a1:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
  4014a5:	8b 10                	mov    (%rax),%edx
  4014a7:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
  4014ab:	8b 00                	mov    (%rax),%eax
  4014ad:	39 c2                	cmp    %eax,%edx
  4014af:	74 07                	je     4014b8 <cmp+0x25>
  4014b1:	b8 01 00 00 00       	mov    $0x1,%eax
  4014b6:	eb 32                	jmp    4014ea <cmp+0x57>
  4014b8:	48 83 45 f8 04       	addq   $0x4,-0x8(%rbp)
  4014bd:	48 83 45 f0 04       	addq   $0x4,-0x10(%rbp)
  4014c2:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
  4014c6:	8b 00                	mov    (%rax),%eax
  4014c8:	85 c0                	test   %eax,%eax
  4014ca:	74 0a                	je     4014d6 <cmp+0x43>
  4014cc:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
  4014d0:	8b 00                	mov    (%rax),%eax
  4014d2:	85 c0                	test   %eax,%eax
  4014d4:	75 cb                	jne    4014a1 <cmp+0xe>
  4014d6:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
  4014da:	8b 10                	mov    (%rax),%edx
  4014dc:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
  4014e0:	8b 00                	mov    (%rax),%eax
  4014e2:	39 c2                	cmp    %eax,%edx
  4014e4:	0f 95 c0             	setne  %al
  4014e7:	0f b6 c0             	movzbl %al,%eax
  4014ea:	5d                   	pop    %rbp
  4014eb:	c3                   	retq   

00000000004014ec <main>:
  4014ec:	55                   	push   %rbp
  4014ed:	48 89 e5             	mov    %rsp,%rbp
  4014f0:	48 81 ec 10 08 00 00 	sub    $0x810,%rsp
  4014f7:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%rbp)
  4014fe:	b8 00 00 00 00       	mov    $0x0,%eax
  401503:	e8 d9 fd ff ff       	callq  4012e1 <valgrind_manda>
  401508:	b8 00 00 00 00       	mov    $0x0,%eax
  40150d:	e8 94 f8 ff ff       	callq  400da6 <get_accepted_connection_fd>
  401512:	89 45 f8             	mov    %eax,-0x8(%rbp)
  401515:	bf a0 3c 41 00       	mov    $0x413ca0,%edi
  40151a:	e8 01 f6 ff ff       	callq  400b20 <system@plt>
  40151f:	48 8d 95 f0 fb ff ff 	lea    -0x410(%rbp),%rdx
  401526:	8b 45 fc             	mov    -0x4(%rbp),%eax
  401529:	48 89 d6             	mov    %rdx,%rsi
  40152c:	89 c7                	mov    %eax,%edi
  40152e:	e8 43 01 00 00       	callq  401676 <e_i_f>
  401533:	bf a8 3c 41 00       	mov    $0x413ca8,%edi
  401538:	e8 93 f5 ff ff       	callq  400ad0 <puts@plt>
  40153d:	8b 45 fc             	mov    -0x4(%rbp),%eax
  401540:	48 98                	cltq   
  401542:	48 69 c0 18 0b 00 00 	imul   $0xb18,%rax,%rax
  401549:	48 8d 90 80 30 40 00 	lea    0x403080(%rax),%rdx
  401550:	48 8d 85 f0 fb ff ff 	lea    -0x410(%rbp),%rax
  401557:	48 89 c6             	mov    %rax,%rsi
  40155a:	48 89 d7             	mov    %rdx,%rdi
  40155d:	e8 0b fe ff ff       	callq  40136d <de>
  401562:	48 8d 85 f0 fb ff ff 	lea    -0x410(%rbp),%rax
  401569:	48 89 c6             	mov    %rax,%rsi
  40156c:	bf cc 3c 41 00       	mov    $0x413ccc,%edi
  401571:	b8 00 00 00 00       	mov    $0x0,%eax
  401576:	e8 c5 f5 ff ff       	callq  400b40 <printf@plt>
  40157b:	8b 45 fc             	mov    -0x4(%rbp),%eax
  40157e:	48 98                	cltq   
  401580:	48 8b 04 c5 00 45 61 	mov    0x614500(,%rax,8),%rax
  401587:	00 
  401588:	48 85 c0             	test   %rax,%rax
  40158b:	74 14                	je     4015a1 <main+0xb5>
  40158d:	8b 45 fc             	mov    -0x4(%rbp),%eax
  401590:	48 98                	cltq   
  401592:	48 8b 14 c5 00 45 61 	mov    0x614500(,%rax,8),%rdx
  401599:	00 
  40159a:	b8 00 00 00 00       	mov    $0x0,%eax
  40159f:	ff d2                	callq  *%rdx
  4015a1:	bf d0 3c 41 00       	mov    $0x413cd0,%edi
  4015a6:	e8 25 f5 ff ff       	callq  400ad0 <puts@plt>
  4015ab:	8b 45 fc             	mov    -0x4(%rbp),%eax
  4015ae:	48 98                	cltq   
  4015b0:	48 69 c0 18 0b 00 00 	imul   $0xb18,%rax,%rax
  4015b7:	48 8d 90 80 b7 40 00 	lea    0x40b780(%rax),%rdx
  4015be:	48 8d 85 f0 fb ff ff 	lea    -0x410(%rbp),%rax
  4015c5:	48 89 c6             	mov    %rax,%rsi
  4015c8:	48 89 d7             	mov    %rdx,%rdi
  4015cb:	e8 9d fd ff ff       	callq  40136d <de>
  4015d0:	48 8d 85 f0 fb ff ff 	lea    -0x410(%rbp),%rax
  4015d7:	48 89 c6             	mov    %rax,%rsi
  4015da:	bf cc 3c 41 00       	mov    $0x413ccc,%edi
  4015df:	b8 00 00 00 00       	mov    $0x0,%eax
  4015e4:	e8 57 f5 ff ff       	callq  400b40 <printf@plt>
  4015e9:	48 8d 8d f0 fb ff ff 	lea    -0x410(%rbp),%rcx
  4015f0:	8b 45 f8             	mov    -0x8(%rbp),%eax
  4015f3:	ba 00 04 00 00       	mov    $0x400,%edx
  4015f8:	48 89 ce             	mov    %rcx,%rsi
  4015fb:	89 c7                	mov    %eax,%edi
  4015fd:	e8 e2 f8 ff ff       	callq  400ee4 <receive>
  401602:	48 8d 95 f0 f7 ff ff 	lea    -0x810(%rbp),%rdx
  401609:	48 8d 85 f0 fb ff ff 	lea    -0x410(%rbp),%rax
  401610:	48 89 d6             	mov    %rdx,%rsi
  401613:	48 89 c7             	mov    %rax,%rdi
  401616:	e8 ea fd ff ff       	callq  401405 <hash>
  40161b:	8b 45 fc             	mov    -0x4(%rbp),%eax
  40161e:	48 98                	cltq   
  401620:	48 8b 14 c5 80 44 61 	mov    0x614480(,%rax,8),%rdx
  401627:	00 
  401628:	48 8d 85 f0 f7 ff ff 	lea    -0x810(%rbp),%rax
  40162f:	48 89 d6             	mov    %rdx,%rsi
  401632:	48 89 c7             	mov    %rax,%rdi
  401635:	e8 96 f5 ff ff       	callq  400bd0 <strcmp@plt>
  40163a:	85 c0                	test   %eax,%eax
  40163c:	75 10                	jne    40164e <main+0x162>
  40163e:	bf f6 3c 41 00       	mov    $0x413cf6,%edi
  401643:	e8 88 f4 ff ff       	callq  400ad0 <puts@plt>
  401648:	83 45 fc 01          	addl   $0x1,-0x4(%rbp)
  40164c:	eb 19                	jmp    401667 <main+0x17b>
  40164e:	48 8d 85 f0 fb ff ff 	lea    -0x410(%rbp),%rax
  401655:	48 89 c6             	mov    %rax,%rsi
  401658:	bf 09 3d 41 00       	mov    $0x413d09,%edi
  40165d:	b8 00 00 00 00       	mov    $0x0,%eax
  401662:	e8 d9 f4 ff ff       	callq  400b40 <printf@plt>
  401667:	bf 01 00 00 00       	mov    $0x1,%edi
  40166c:	e8 0f f6 ff ff       	callq  400c80 <sleep@plt>
  401671:	e9 9f fe ff ff       	jmpq   401515 <main+0x29>

0000000000401676 <e_i_f>:
  401676:	55                   	push   %rbp
  401677:	48 89 e5             	mov    %rsp,%rbp
  40167a:	48 83 ec 10          	sub    $0x10,%rsp
  40167e:	89 7d fc             	mov    %edi,-0x4(%rbp)
  401681:	48 89 75 f0          	mov    %rsi,-0x10(%rbp)
  401685:	83 7d fc 0a          	cmpl   $0xa,-0x4(%rbp)
  401689:	7e 3b                	jle    4016c6 <e_i_f+0x50>
  40168b:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
  40168f:	48 89 c6             	mov    %rax,%rsi
  401692:	bf 88 aa 40 00       	mov    $0x40aa88,%edi
  401697:	e8 d1 fc ff ff       	callq  40136d <de>
  40169c:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
  4016a0:	48 89 c6             	mov    %rax,%rsi
  4016a3:	bf cc 3c 41 00       	mov    $0x413ccc,%edi
  4016a8:	b8 00 00 00 00       	mov    $0x0,%eax
  4016ad:	e8 8e f4 ff ff       	callq  400b40 <printf@plt>
  4016b2:	b8 00 00 00 00       	mov    $0x0,%eax
  4016b7:	e8 35 fc ff ff       	callq  4012f1 <h_f>
  4016bc:	bf 00 00 00 00       	mov    $0x0,%edi
  4016c1:	e8 aa f5 ff ff       	callq  400c70 <exit@plt>
  4016c6:	c9                   	leaveq 
  4016c7:	c3                   	retq   
  4016c8:	0f 1f 84 00 00 00 00 	nopl   0x0(%rax,%rax,1)
  4016cf:	00 

00000000004016d0 <__libc_csu_init>:
  4016d0:	41 57                	push   %r15
  4016d2:	41 89 ff             	mov    %edi,%r15d
  4016d5:	41 56                	push   %r14
  4016d7:	49 89 f6             	mov    %rsi,%r14
  4016da:	41 55                	push   %r13
  4016dc:	49 89 d5             	mov    %rdx,%r13
  4016df:	41 54                	push   %r12
  4016e1:	4c 8d 25 18 2a 21 00 	lea    0x212a18(%rip),%r12        # 614100 <__frame_dummy_init_array_entry>
  4016e8:	55                   	push   %rbp
  4016e9:	48 8d 2d 18 2a 21 00 	lea    0x212a18(%rip),%rbp        # 614108 <__init_array_end>
  4016f0:	53                   	push   %rbx
  4016f1:	4c 29 e5             	sub    %r12,%rbp
  4016f4:	31 db                	xor    %ebx,%ebx
  4016f6:	48 c1 fd 03          	sar    $0x3,%rbp
  4016fa:	48 83 ec 08          	sub    $0x8,%rsp
  4016fe:	e8 75 f3 ff ff       	callq  400a78 <_init>
  401703:	48 85 ed             	test   %rbp,%rbp
  401706:	74 1e                	je     401726 <__libc_csu_init+0x56>
  401708:	0f 1f 84 00 00 00 00 	nopl   0x0(%rax,%rax,1)
  40170f:	00 
  401710:	4c 89 ea             	mov    %r13,%rdx
  401713:	4c 89 f6             	mov    %r14,%rsi
  401716:	44 89 ff             	mov    %r15d,%edi
  401719:	41 ff 14 dc          	callq  *(%r12,%rbx,8)
  40171d:	48 83 c3 01          	add    $0x1,%rbx
  401721:	48 39 eb             	cmp    %rbp,%rbx
  401724:	75 ea                	jne    401710 <__libc_csu_init+0x40>
  401726:	48 83 c4 08          	add    $0x8,%rsp
  40172a:	5b                   	pop    %rbx
  40172b:	5d                   	pop    %rbp
  40172c:	41 5c                	pop    %r12
  40172e:	41 5d                	pop    %r13
  401730:	41 5e                	pop    %r14
  401732:	41 5f                	pop    %r15
  401734:	c3                   	retq   
  401735:	66 66 2e 0f 1f 84 00 	data16 nopw %cs:0x0(%rax,%rax,1)
  40173c:	00 00 00 00 

0000000000401740 <__libc_csu_fini>:
  401740:	f3 c3                	repz retq 

Disassembly of section .fini:

0000000000401744 <_fini>:
  401744:	48 83 ec 08          	sub    $0x8,%rsp
  401748:	48 83 c4 08          	add    $0x8,%rsp
  40174c:	c3                   	retq   

Disassembly of section .rodata:

0000000000401780 <_IO_stdin_used>:
  401780:	01 00                	add    %eax,(%rax)
  401782:	02 00                	add    (%rax),%al
  401784:	73 6f                	jae    4017f5 <_IO_stdin_used+0x75>
  401786:	63 6b 65             	movslq 0x65(%rbx),%ebp
  401789:	74 20                	je     4017ab <_IO_stdin_used+0x2b>
  40178b:	65 72 72             	gs jb  401800 <_IO_stdin_used+0x80>
  40178e:	6f                   	outsl  %ds:(%rsi),(%dx)
  40178f:	72 00                	jb     401791 <_IO_stdin_used+0x11>
  401791:	73 65                	jae    4017f8 <_IO_stdin_used+0x78>
  401793:	74 73                	je     401808 <_IO_stdin_used+0x88>
  401795:	6f                   	outsl  %ds:(%rsi),(%dx)
  401796:	63 6b 6f             	movslq 0x6f(%rbx),%ebp
  401799:	70 74                	jo     40180f <_IO_stdin_used+0x8f>
  40179b:	20 65 72             	and    %ah,0x72(%rbp)
  40179e:	72 6f                	jb     40180f <_IO_stdin_used+0x8f>
  4017a0:	72 00                	jb     4017a2 <_IO_stdin_used+0x22>
  4017a2:	62                   	(bad)  
  4017a3:	69 6e 64 20 65 72 72 	imul   $0x72726520,0x64(%rsi),%ebp
  4017aa:	6f                   	outsl  %ds:(%rsi),(%dx)
  4017ab:	72 00                	jb     4017ad <_IO_stdin_used+0x2d>
  4017ad:	6c                   	insb   (%dx),%es:(%rdi)
  4017ae:	69 73 74 65 6e 20 65 	imul   $0x65206e65,0x74(%rbx),%esi
  4017b5:	72 72                	jb     401829 <_IO_stdin_used+0xa9>
  4017b7:	6f                   	outsl  %ds:(%rsi),(%dx)
  4017b8:	72 00                	jb     4017ba <_IO_stdin_used+0x3a>
  4017ba:	61                   	(bad)  
  4017bb:	63 63 65             	movslq 0x65(%rbx),%esp
  4017be:	70 74                	jo     401834 <_IO_stdin_used+0xb4>
  4017c0:	20 65 72             	and    %ah,0x72(%rbp)
  4017c3:	72 6f                	jb     401834 <_IO_stdin_used+0xb4>
  4017c5:	72 00                	jb     4017c7 <_IO_stdin_used+0x47>
  4017c7:	72 65                	jb     40182e <_IO_stdin_used+0xae>
  4017c9:	63 76 20             	movslq 0x20(%rsi),%esi
  4017cc:	65 72 72             	gs jb  401841 <_IO_stdin_used+0xc1>
  4017cf:	6f                   	outsl  %ds:(%rsi),(%dx)
  4017d0:	72 00                	jb     4017d2 <_IO_stdin_used+0x52>
	...
  4017fe:	00 00                	add    %al,(%rax)
  401800:	24 49                	and    $0x49,%al
  401802:	02 00                	add    (%rax),%al
  401804:	8b 0d 02 00 60 ad    	mov    -0x529ffffe(%rip),%ecx        # ffffffffada0180c <_end+0xffffffffad3ed074>
  40180a:	00 00                	add    %al,(%rax)
  40180c:	a6                   	cmpsb  %es:(%rdi),%ds:(%rsi)
  40180d:	69 02 00 37 23 02    	imul   $0x2233700,(%rdx),%eax
  401813:	00 11                	add    %dl,(%rcx)
  401815:	6f                   	outsl  %ds:(%rsi),(%dx)
  401816:	02 00                	add    (%rax),%al
  401818:	d0 5e 02             	rcrb   0x2(%rsi)
  40181b:	00 e7                	add    %ah,%bh
  40181d:	79 02                	jns    401821 <_IO_stdin_used+0xa1>
  40181f:	00 37                	add    %dh,(%rdi)
  401821:	23 02                	and    (%rdx),%eax
  401823:	00 11                	add    %dl,(%rcx)
  401825:	6f                   	outsl  %ds:(%rsi),(%dx)
  401826:	02 00                	add    (%rax),%al
  401828:	7c 74                	jl     40189e <_IO_stdin_used+0x11e>
  40182a:	02 00                	add    (%rax),%al
  40182c:	8b 0d 02 00 60 ad    	mov    -0x529ffffe(%rip),%ecx        # ffffffffada01834 <_end+0xffffffffad3ed09c>
  401832:	00 00                	add    %al,(%rax)
  401834:	8b 0d 02 00 60 ad    	mov    -0x529ffffe(%rip),%ecx        # ffffffffada0183c <_end+0xffffffffad3ed0a4>
  40183a:	00 00                	add    %al,(%rax)
  40183c:	37                   	(bad)  
  40183d:	23 02                	and    (%rdx),%eax
  40183f:	00 11                	add    %dl,(%rcx)
  401841:	6f                   	outsl  %ds:(%rsi),(%dx)
  401842:	02 00                	add    (%rax),%al
  401844:	7c 74                	jl     4018ba <_IO_stdin_used+0x13a>
  401846:	02 00                	add    (%rax),%al
  401848:	37                   	(bad)  
  401849:	23 02                	and    (%rdx),%eax
  40184b:	00 60 ad             	add    %ah,-0x53(%rax)
  40184e:	00 00                	add    %al,(%rax)
  401850:	8b 0d 02 00 61 18    	mov    0x18610002(%rip),%ecx        # 18a11858 <_end+0x183fd0c0>
  401856:	02 00                	add    (%rax),%al
  401858:	37                   	(bad)  
  401859:	23 02                	and    (%rdx),%eax
  40185b:	00 a6 69 02 00 7c    	add    %ah,0x7c000269(%rsi)
  401861:	74 02                	je     401865 <_IO_stdin_used+0xe5>
  401863:	00 e3                	add    %ah,%bl
  401865:	38 02                	cmp    %al,(%rdx)
  401867:	00 4e 3e             	add    %cl,0x3e(%rsi)
  40186a:	02 00                	add    (%rax),%al
  40186c:	65 59                	gs pop %rcx
  40186e:	02 00                	add    (%rax),%al
  401870:	60                   	(bad)  
  401871:	ad                   	lods   %ds:(%rsi),%eax
  401872:	00 00                	add    %al,(%rax)
  401874:	37                   	(bad)  
  401875:	23 02                	and    (%rdx),%eax
  401877:	00 11                	add    %dl,(%rcx)
  401879:	6f                   	outsl  %ds:(%rsi),(%dx)
  40187a:	02 00                	add    (%rax),%al
  40187c:	60                   	(bad)  
  40187d:	ad                   	lods   %ds:(%rsi),%eax
  40187e:	00 00                	add    %al,(%rax)
  401880:	d0 5e 02             	rcrb   0x2(%rsi)
  401883:	00 e3                	add    %ah,%bl
  401885:	38 02                	cmp    %al,(%rdx)
  401887:	00 11                	add    %dl,(%rcx)
  401889:	6f                   	outsl  %ds:(%rsi),(%dx)
  40188a:	02 00                	add    (%rax),%al
  40188c:	7c 74                	jl     401902 <_IO_stdin_used+0x182>
  40188e:	02 00                	add    (%rax),%al
  401890:	65 59                	gs pop %rcx
  401892:	02 00                	add    (%rax),%al
  401894:	24 49                	and    $0x49,%al
  401896:	02 00                	add    (%rax),%al
  401898:	37                   	(bad)  
  401899:	23 02                	and    (%rdx),%eax
  40189b:	00 a6 69 02 00 65    	add    %ah,0x65000269(%rsi)
  4018a1:	59                   	pop    %rcx
  4018a2:	02 00                	add    (%rax),%al
  4018a4:	2e 36 00 00          	cs add %al,%ss:(%rax)
	...
  4018c0:	24 49                	and    $0x49,%al
  4018c2:	02 00                	add    (%rax),%al
  4018c4:	8b 0d 02 00 60 ad    	mov    -0x529ffffe(%rip),%ecx        # ffffffffada018cc <_end+0xffffffffad3ed134>
  4018ca:	00 00                	add    %al,(%rax)
  4018cc:	a6                   	cmpsb  %es:(%rdi),%ds:(%rsi)
  4018cd:	69 02 00 37 23 02    	imul   $0x2233700,(%rdx),%eax
  4018d3:	00 11                	add    %dl,(%rcx)
  4018d5:	6f                   	outsl  %ds:(%rsi),(%dx)
  4018d6:	02 00                	add    (%rax),%al
  4018d8:	d0 5e 02             	rcrb   0x2(%rsi)
  4018db:	00 e7                	add    %ah,%bh
  4018dd:	79 02                	jns    4018e1 <_IO_stdin_used+0x161>
  4018df:	00 37                	add    %dh,(%rdi)
  4018e1:	23 02                	and    (%rdx),%eax
  4018e3:	00 11                	add    %dl,(%rcx)
  4018e5:	6f                   	outsl  %ds:(%rsi),(%dx)
  4018e6:	02 00                	add    (%rax),%al
  4018e8:	7c 74                	jl     40195e <_IO_stdin_used+0x1de>
  4018ea:	02 00                	add    (%rax),%al
  4018ec:	8b 0d 02 00 60 ad    	mov    -0x529ffffe(%rip),%ecx        # ffffffffada018f4 <_end+0xffffffffad3ed15c>
  4018f2:	00 00                	add    %al,(%rax)
  4018f4:	8b 0d 02 00 60 ad    	mov    -0x529ffffe(%rip),%ecx        # ffffffffada018fc <_end+0xffffffffad3ed164>
  4018fa:	00 00                	add    %al,(%rax)
  4018fc:	37                   	(bad)  
  4018fd:	23 02                	and    (%rdx),%eax
  4018ff:	00 11                	add    %dl,(%rcx)
  401901:	6f                   	outsl  %ds:(%rsi),(%dx)
  401902:	02 00                	add    (%rax),%al
  401904:	7c 74                	jl     40197a <_IO_stdin_used+0x1fa>
  401906:	02 00                	add    (%rax),%al
  401908:	37                   	(bad)  
  401909:	23 02                	and    (%rdx),%eax
  40190b:	00 60 ad             	add    %ah,-0x53(%rax)
  40190e:	00 00                	add    %al,(%rax)
  401910:	8b 0d 02 00 61 18    	mov    0x18610002(%rip),%ecx        # 18a11918 <_end+0x183fd180>
  401916:	02 00                	add    (%rax),%al
  401918:	37                   	(bad)  
  401919:	23 02                	and    (%rdx),%eax
  40191b:	00 a6 69 02 00 7c    	add    %ah,0x7c000269(%rsi)
  401921:	74 02                	je     401925 <_IO_stdin_used+0x1a5>
  401923:	00 e3                	add    %ah,%bl
  401925:	38 02                	cmp    %al,(%rdx)
  401927:	00 4e 3e             	add    %cl,0x3e(%rsi)
  40192a:	02 00                	add    (%rax),%al
  40192c:	65 59                	gs pop %rcx
  40192e:	02 00                	add    (%rax),%al
  401930:	60                   	(bad)  
  401931:	ad                   	lods   %ds:(%rsi),%eax
  401932:	00 00                	add    %al,(%rax)
  401934:	37                   	(bad)  
  401935:	23 02                	and    (%rdx),%eax
  401937:	00 11                	add    %dl,(%rcx)
  401939:	6f                   	outsl  %ds:(%rsi),(%dx)
  40193a:	02 00                	add    (%rax),%al
  40193c:	60                   	(bad)  
  40193d:	ad                   	lods   %ds:(%rsi),%eax
  40193e:	00 00                	add    %al,(%rax)
  401940:	e3 38                	jrcxz  40197a <_IO_stdin_used+0x1fa>
  401942:	02 00                	add    (%rax),%al
  401944:	fa                   	cli    
  401945:	53                   	push   %rbx
  401946:	02 00                	add    (%rax),%al
  401948:	cc                   	int3   
  401949:	1d 02 00 37 23       	sbb    $0x23370002,%eax
  40194e:	02 00                	add    (%rax),%al
  401950:	7c 74                	jl     4019c6 <_IO_stdin_used+0x246>
  401952:	02 00                	add    (%rax),%al
  401954:	37                   	(bad)  
  401955:	23 02                	and    (%rdx),%eax
  401957:	00 a6 69 02 00 8f    	add    %ah,-0x70fffd97(%rsi)
  40195d:	4e 02 00             	rex.WRX add (%rax),%r8b
  401960:	e3 38                	jrcxz  40199a <_IO_stdin_used+0x21a>
  401962:	02 00                	add    (%rax),%al
  401964:	fa                   	cli    
  401965:	53                   	push   %rbx
  401966:	02 00                	add    (%rax),%al
  401968:	8b 0d 02 00 cc 1d    	mov    0x1dcc0002(%rip),%ecx        # 1e0c1970 <_end+0x1daad1d8>
  40196e:	02 00                	add    (%rax),%al
  401970:	65 59                	gs pop %rcx
  401972:	02 00                	add    (%rax),%al
  401974:	2e 36 00 00          	cs add %al,%ss:(%rax)
	...
  401980:	20 20                	and    %ah,(%rax)
  401982:	20 20                	and    %ah,(%rax)
  401984:	20 20                	and    %ah,(%rax)
  401986:	20 20                	and    %ah,(%rax)
  401988:	20 20                	and    %ah,(%rax)
  40198a:	20 20                	and    %ah,(%rax)
  40198c:	20 20                	and    %ah,(%rax)
  40198e:	20 20                	and    %ah,(%rax)
  401990:	20 20                	and    %ah,(%rax)
  401992:	20 20                	and    %ah,(%rax)
  401994:	20 20                	and    %ah,(%rax)
  401996:	20 20                	and    %ah,(%rax)
  401998:	20 20                	and    %ah,(%rax)
  40199a:	20 20                	and    %ah,(%rax)
  40199c:	20 20                	and    %ah,(%rax)
  40199e:	20 20                	and    %ah,(%rax)
  4019a0:	20 20                	and    %ah,(%rax)
  4019a2:	5f                   	pop    %rdi
  4019a3:	5f                   	pop    %rdi
  4019a4:	5f                   	pop    %rdi
  4019a5:	5f                   	pop    %rdi
  4019a6:	5f                   	pop    %rdi
  4019a7:	5f                   	pop    %rdi
  4019a8:	5f                   	pop    %rdi
  4019a9:	20 20                	and    %ah,(%rax)
  4019ab:	20 20                	and    %ah,(%rax)
  4019ad:	20 20                	and    %ah,(%rax)
  4019af:	20 20                	and    %ah,(%rax)
  4019b1:	20 20                	and    %ah,(%rax)
  4019b3:	20 20                	and    %ah,(%rax)
  4019b5:	20 20                	and    %ah,(%rax)
  4019b7:	20 20                	and    %ah,(%rax)
  4019b9:	20 20                	and    %ah,(%rax)
  4019bb:	20 20                	and    %ah,(%rax)
  4019bd:	20 20                	and    %ah,(%rax)
  4019bf:	20 20                	and    %ah,(%rax)
  4019c1:	20 20                	and    %ah,(%rax)
  4019c3:	20 20                	and    %ah,(%rax)
  4019c5:	20 20                	and    %ah,(%rax)
  4019c7:	20 20                	and    %ah,(%rax)
  4019c9:	20 20                	and    %ah,(%rax)
  4019cb:	20 20                	and    %ah,(%rax)
  4019cd:	20 20                	and    %ah,(%rax)
  4019cf:	20 20                	and    %ah,(%rax)
  4019d1:	20 20                	and    %ah,(%rax)
  4019d3:	20 20                	and    %ah,(%rax)
  4019d5:	20 20                	and    %ah,(%rax)
  4019d7:	20 20                	and    %ah,(%rax)
  4019d9:	20 20                	and    %ah,(%rax)
  4019db:	20 20                	and    %ah,(%rax)
  4019dd:	20 20                	and    %ah,(%rax)
  4019df:	20 20                	and    %ah,(%rax)
  4019e1:	20 20                	and    %ah,(%rax)
  4019e3:	20 20                	and    %ah,(%rax)
  4019e5:	20 20                	and    %ah,(%rax)
  4019e7:	20 20                	and    %ah,(%rax)
  4019e9:	20 5f 2c             	and    %bl,0x2c(%rdi)
  4019ec:	2c 61                	sub    $0x61,%al
  4019ee:	64 38 38             	cmp    %bh,%fs:(%rax)
  4019f1:	38 38                	cmp    %bh,(%rax)
  4019f3:	38 38                	cmp    %bh,(%rax)
  4019f5:	38 38                	cmp    %bh,(%rax)
  4019f7:	38 38                	cmp    %bh,(%rax)
  4019f9:	62 62                	(bad)  
  4019fb:	61                   	(bad)  
  4019fc:	2c 5f                	sub    $0x5f,%al
  4019fe:	20 20                	and    %ah,(%rax)
  401a00:	20 20                	and    %ah,(%rax)
  401a02:	20 20                	and    %ah,(%rax)
  401a04:	20 20                	and    %ah,(%rax)
  401a06:	20 20                	and    %ah,(%rax)
  401a08:	20 20                	and    %ah,(%rax)
  401a0a:	20 20                	and    %ah,(%rax)
  401a0c:	20 20                	and    %ah,(%rax)
  401a0e:	20 20                	and    %ah,(%rax)
  401a10:	20 20                	and    %ah,(%rax)
  401a12:	20 20                	and    %ah,(%rax)
  401a14:	20 20                	and    %ah,(%rax)
  401a16:	20 20                	and    %ah,(%rax)
  401a18:	20 20                	and    %ah,(%rax)
  401a1a:	20 20                	and    %ah,(%rax)
  401a1c:	20 20                	and    %ah,(%rax)
  401a1e:	20 20                	and    %ah,(%rax)
  401a20:	20 20                	and    %ah,(%rax)
  401a22:	20 20                	and    %ah,(%rax)
  401a24:	20 20                	and    %ah,(%rax)
  401a26:	20 20                	and    %ah,(%rax)
  401a28:	20 20                	and    %ah,(%rax)
  401a2a:	20 20                	and    %ah,(%rax)
  401a2c:	20 20                	and    %ah,(%rax)
  401a2e:	20 20                	and    %ah,(%rax)
  401a30:	20 20                	and    %ah,(%rax)
  401a32:	20 20                	and    %ah,(%rax)
  401a34:	20 20                	and    %ah,(%rax)
  401a36:	2c 61                	sub    $0x61,%al
  401a38:	64 38 38             	cmp    %bh,%fs:(%rax)
  401a3b:	38 38                	cmp    %bh,(%rax)
  401a3d:	38 49 38             	cmp    %cl,0x38(%rcx)
  401a40:	38 38                	cmp    %bh,(%rax)
  401a42:	38 38                	cmp    %bh,(%rax)
  401a44:	38 38                	cmp    %bh,(%rax)
  401a46:	38 38                	cmp    %bh,(%rax)
  401a48:	38 38                	cmp    %bh,(%rax)
  401a4a:	38 38                	cmp    %bh,(%rax)
  401a4c:	38 38                	cmp    %bh,(%rax)
  401a4e:	62 61 2c 20 20       	(bad)  
  401a53:	20 20                	and    %ah,(%rax)
  401a55:	20 20                	and    %ah,(%rax)
  401a57:	20 20                	and    %ah,(%rax)
  401a59:	20 20                	and    %ah,(%rax)
  401a5b:	20 20                	and    %ah,(%rax)
  401a5d:	20 20                	and    %ah,(%rax)
  401a5f:	20 20                	and    %ah,(%rax)
  401a61:	20 20                	and    %ah,(%rax)
  401a63:	20 20                	and    %ah,(%rax)
  401a65:	20 20                	and    %ah,(%rax)
  401a67:	20 20                	and    %ah,(%rax)
  401a69:	20 20                	and    %ah,(%rax)
  401a6b:	20 20                	and    %ah,(%rax)
  401a6d:	20 20                	and    %ah,(%rax)
  401a6f:	20 20                	and    %ah,(%rax)
  401a71:	20 20                	and    %ah,(%rax)
  401a73:	20 20                	and    %ah,(%rax)
  401a75:	20 20                	and    %ah,(%rax)
  401a77:	20 20                	and    %ah,(%rax)
  401a79:	20 20                	and    %ah,(%rax)
  401a7b:	20 20                	and    %ah,(%rax)
  401a7d:	20 20                	and    %ah,(%rax)
  401a7f:	20 20                	and    %ah,(%rax)
  401a81:	20 20                	and    %ah,(%rax)
  401a83:	2c 38                	sub    $0x38,%al
  401a85:	38 38                	cmp    %bh,(%rax)
  401a87:	38 38                	cmp    %bh,(%rax)
  401a89:	38 38                	cmp    %bh,(%rax)
  401a8b:	38 49 38             	cmp    %cl,0x38(%rcx)
  401a8e:	38 38                	cmp    %bh,(%rax)
  401a90:	38 38                	cmp    %bh,(%rax)
  401a92:	38 38                	cmp    %bh,(%rax)
  401a94:	38 38                	cmp    %bh,(%rax)
  401a96:	38 38                	cmp    %bh,(%rax)
  401a98:	38 38                	cmp    %bh,(%rax)
  401a9a:	38 38                	cmp    %bh,(%rax)
  401a9c:	38 38                	cmp    %bh,(%rax)
  401a9e:	38 38                	cmp    %bh,(%rax)
  401aa0:	38 61 2c             	cmp    %ah,0x2c(%rcx)
  401aa3:	20 20                	and    %ah,(%rax)
  401aa5:	20 20                	and    %ah,(%rax)
  401aa7:	20 20                	and    %ah,(%rax)
  401aa9:	20 20                	and    %ah,(%rax)
  401aab:	20 20                	and    %ah,(%rax)
  401aad:	20 20                	and    %ah,(%rax)
  401aaf:	20 20                	and    %ah,(%rax)
  401ab1:	20 20                	and    %ah,(%rax)
  401ab3:	20 20                	and    %ah,(%rax)
  401ab5:	20 20                	and    %ah,(%rax)
  401ab7:	20 20                	and    %ah,(%rax)
  401ab9:	20 20                	and    %ah,(%rax)
  401abb:	20 20                	and    %ah,(%rax)
  401abd:	20 20                	and    %ah,(%rax)
  401abf:	20 20                	and    %ah,(%rax)
  401ac1:	20 20                	and    %ah,(%rax)
  401ac3:	20 20                	and    %ah,(%rax)
  401ac5:	20 20                	and    %ah,(%rax)
  401ac7:	20 20                	and    %ah,(%rax)
  401ac9:	20 20                	and    %ah,(%rax)
  401acb:	20 20                	and    %ah,(%rax)
  401acd:	20 20                	and    %ah,(%rax)
  401acf:	20 2c 64             	and    %ch,(%rsp,%riz,2)
  401ad2:	38 38                	cmp    %bh,(%rax)
  401ad4:	38 38                	cmp    %bh,(%rax)
  401ad6:	38 38                	cmp    %bh,(%rax)
  401ad8:	38 38                	cmp    %bh,(%rax)
  401ada:	38 49 38             	cmp    %cl,0x38(%rcx)
  401add:	38 38                	cmp    %bh,(%rax)
  401adf:	38 38                	cmp    %bh,(%rax)
  401ae1:	38 38                	cmp    %bh,(%rax)
  401ae3:	38 38                	cmp    %bh,(%rax)
  401ae5:	38 38                	cmp    %bh,(%rax)
  401ae7:	38 38                	cmp    %bh,(%rax)
  401ae9:	38 38                	cmp    %bh,(%rax)
  401aeb:	38 38                	cmp    %bh,(%rax)
  401aed:	38 38                	cmp    %bh,(%rax)
  401aef:	38 38                	cmp    %bh,(%rax)
  401af1:	38 62 2c             	cmp    %ah,0x2c(%rdx)
  401af4:	20 20                	and    %ah,(%rax)
  401af6:	20 20                	and    %ah,(%rax)
  401af8:	20 20                	and    %ah,(%rax)
  401afa:	20 20                	and    %ah,(%rax)
  401afc:	20 20                	and    %ah,(%rax)
  401afe:	20 20                	and    %ah,(%rax)
  401b00:	20 20                	and    %ah,(%rax)
  401b02:	20 20                	and    %ah,(%rax)
  401b04:	20 20                	and    %ah,(%rax)
  401b06:	20 20                	and    %ah,(%rax)
  401b08:	20 20                	and    %ah,(%rax)
  401b0a:	20 20                	and    %ah,(%rax)
  401b0c:	20 20                	and    %ah,(%rax)
  401b0e:	20 20                	and    %ah,(%rax)
  401b10:	20 20                	and    %ah,(%rax)
  401b12:	20 20                	and    %ah,(%rax)
  401b14:	20 20                	and    %ah,(%rax)
  401b16:	20 20                	and    %ah,(%rax)
  401b18:	20 20                	and    %ah,(%rax)
  401b1a:	20 20                	and    %ah,(%rax)
  401b1c:	20 20                	and    %ah,(%rax)
  401b1e:	64 38 38             	cmp    %bh,%fs:(%rax)
  401b21:	38 38                	cmp    %bh,(%rax)
  401b23:	38 50 50             	cmp    %dl,0x50(%rax)
  401b26:	22 22                	and    (%rdx),%ah
  401b28:	22 22                	and    (%rdx),%ah
  401b2a:	20 22                	and    %ah,(%rdx)
  401b2c:	22 59 59             	and    0x59(%rcx),%bl
  401b2f:	38 38                	cmp    %bh,(%rax)
  401b31:	38 38                	cmp    %bh,(%rax)
  401b33:	38 38                	cmp    %bh,(%rax)
  401b35:	38 38                	cmp    %bh,(%rax)
  401b37:	38 38                	cmp    %bh,(%rax)
  401b39:	38 38                	cmp    %bh,(%rax)
  401b3b:	38 38                	cmp    %bh,(%rax)
  401b3d:	38 38                	cmp    %bh,(%rax)
  401b3f:	38 38                	cmp    %bh,(%rax)
  401b41:	38 38                	cmp    %bh,(%rax)
  401b43:	62                   	(bad)  
  401b44:	2c 20                	sub    $0x20,%al
  401b46:	20 20                	and    %ah,(%rax)
  401b48:	20 20                	and    %ah,(%rax)
  401b4a:	20 20                	and    %ah,(%rax)
  401b4c:	20 20                	and    %ah,(%rax)
  401b4e:	20 20                	and    %ah,(%rax)
  401b50:	20 20                	and    %ah,(%rax)
  401b52:	20 20                	and    %ah,(%rax)
  401b54:	20 20                	and    %ah,(%rax)
  401b56:	20 20                	and    %ah,(%rax)
  401b58:	20 20                	and    %ah,(%rax)
  401b5a:	20 20                	and    %ah,(%rax)
  401b5c:	20 20                	and    %ah,(%rax)
  401b5e:	20 20                	and    %ah,(%rax)
  401b60:	20 20                	and    %ah,(%rax)
  401b62:	20 20                	and    %ah,(%rax)
  401b64:	20 20                	and    %ah,(%rax)
  401b66:	20 20                	and    %ah,(%rax)
  401b68:	20 20                	and    %ah,(%rax)
  401b6a:	20 2c 64             	and    %ch,(%rsp,%riz,2)
  401b6d:	38 38                	cmp    %bh,(%rax)
  401b6f:	22 27                	and    (%rdi),%ah
  401b71:	5f                   	pop    %rdi
  401b72:	5f                   	pop    %rdi
  401b73:	2c 2c                	sub    $0x2c,%al
  401b75:	2d 2d 2d 2d 2d       	sub    $0x2d2d2d2d,%eax
  401b7a:	2d 2d 2d 2c 2c       	sub    $0x2c2c2d2d,%eax
  401b7f:	2c 2c                	sub    $0x2c,%al
  401b81:	2e 3b 5a 5a          	cmp    %cs:0x5a(%rdx),%ebx
  401b85:	5a                   	pop    %rdx
  401b86:	59                   	pop    %rcx
  401b87:	38 38                	cmp    %bh,(%rax)
  401b89:	38 38                	cmp    %bh,(%rax)
  401b8b:	38 38                	cmp    %bh,(%rax)
  401b8d:	38 38                	cmp    %bh,(%rax)
  401b8f:	38 38                	cmp    %bh,(%rax)
  401b91:	38 38                	cmp    %bh,(%rax)
  401b93:	38 2c 20             	cmp    %ch,(%rax,%riz,1)
  401b96:	20 20                	and    %ah,(%rax)
  401b98:	20 20                	and    %ah,(%rax)
  401b9a:	20 20                	and    %ah,(%rax)
  401b9c:	20 20                	and    %ah,(%rax)
  401b9e:	20 20                	and    %ah,(%rax)
  401ba0:	20 20                	and    %ah,(%rax)
  401ba2:	20 20                	and    %ah,(%rax)
  401ba4:	20 20                	and    %ah,(%rax)
  401ba6:	20 20                	and    %ah,(%rax)
  401ba8:	20 20                	and    %ah,(%rax)
  401baa:	20 20                	and    %ah,(%rax)
  401bac:	20 20                	and    %ah,(%rax)
  401bae:	20 20                	and    %ah,(%rax)
  401bb0:	20 20                	and    %ah,(%rax)
  401bb2:	20 20                	and    %ah,(%rax)
  401bb4:	20 20                	and    %ah,(%rax)
  401bb6:	20 20                	and    %ah,(%rax)
  401bb8:	20 2c 38             	and    %ch,(%rax,%rdi,1)
  401bbb:	49                   	rex.WB
  401bbc:	49 6c                	rex.WB insb (%dx),%es:(%rdi)
  401bbe:	27                   	(bad)  
  401bbf:	22 20                	and    (%rax),%ah
  401bc1:	20 20                	and    %ah,(%rax)
  401bc3:	20 20                	and    %ah,(%rax)
  401bc5:	20 20                	and    %ah,(%rax)
  401bc7:	20 20                	and    %ah,(%rax)
  401bc9:	20 20                	and    %ah,(%rax)
  401bcb:	20 20                	and    %ah,(%rax)
  401bcd:	20 20                	and    %ah,(%rax)
  401bcf:	20 3b                	and    %bh,(%rbx)
  401bd1:	3b 6c 22 5a          	cmp    0x5a(%rdx,%riz,1),%ebp
  401bd5:	5a                   	pop    %rdx
  401bd6:	5a                   	pop    %rdx
  401bd7:	49                   	rex.WB
  401bd8:	49                   	rex.WB
  401bd9:	49 38 38             	rex.WB cmp %dil,(%r8)
  401bdc:	38 38                	cmp    %bh,(%rax)
  401bde:	38 38                	cmp    %bh,(%rax)
  401be0:	38 38                	cmp    %bh,(%rax)
  401be2:	38 38                	cmp    %bh,(%rax)
  401be4:	2c 20                	sub    $0x20,%al
  401be6:	20 20                	and    %ah,(%rax)
  401be8:	20 20                	and    %ah,(%rax)
  401bea:	20 20                	and    %ah,(%rax)
  401bec:	20 20                	and    %ah,(%rax)
  401bee:	20 20                	and    %ah,(%rax)
  401bf0:	20 20                	and    %ah,(%rax)
  401bf2:	20 20                	and    %ah,(%rax)
  401bf4:	20 20                	and    %ah,(%rax)
  401bf6:	20 20                	and    %ah,(%rax)
  401bf8:	20 20                	and    %ah,(%rax)
  401bfa:	20 20                	and    %ah,(%rax)
  401bfc:	20 20                	and    %ah,(%rax)
  401bfe:	20 20                	and    %ah,(%rax)
  401c00:	20 20                	and    %ah,(%rax)
  401c02:	20 20                	and    %ah,(%rax)
  401c04:	20 20                	and    %ah,(%rax)
  401c06:	20 2c 49             	and    %ch,(%rcx,%rcx,2)
  401c09:	38 38                	cmp    %bh,(%rax)
  401c0b:	6c                   	insb   (%dx),%es:(%rdi)
  401c0c:	3b 27                	cmp    (%rdi),%esp
  401c0e:	20 20                	and    %ah,(%rax)
  401c10:	20 20                	and    %ah,(%rax)
  401c12:	20 20                	and    %ah,(%rax)
  401c14:	20 20                	and    %ah,(%rax)
  401c16:	20 20                	and    %ah,(%rax)
  401c18:	20 20                	and    %ah,(%rax)
  401c1a:	20 20                	and    %ah,(%rax)
  401c1c:	20 20                	and    %ah,(%rax)
  401c1e:	20 20                	and    %ah,(%rax)
  401c20:	3b 6c 5a 5a          	cmp    0x5a(%rdx,%rbx,2),%ebp
  401c24:	5a                   	pop    %rdx
  401c25:	5a                   	pop    %rdx
  401c26:	5a                   	pop    %rdx
  401c27:	38 38                	cmp    %bh,(%rax)
  401c29:	38 49 49             	cmp    %cl,0x49(%rcx)
  401c2c:	49 38 38             	rex.WB cmp %dil,(%r8)
  401c2f:	38 38                	cmp    %bh,(%rax)
  401c31:	38 38                	cmp    %bh,(%rax)
  401c33:	38 2c 20             	cmp    %ch,(%rax,%riz,1)
  401c36:	20 20                	and    %ah,(%rax)
  401c38:	20 20                	and    %ah,(%rax)
  401c3a:	20 20                	and    %ah,(%rax)
  401c3c:	20 20                	and    %ah,(%rax)
  401c3e:	20 20                	and    %ah,(%rax)
  401c40:	20 20                	and    %ah,(%rax)
  401c42:	20 20                	and    %ah,(%rax)
  401c44:	20 20                	and    %ah,(%rax)
  401c46:	20 20                	and    %ah,(%rax)
  401c48:	20 20                	and    %ah,(%rax)
  401c4a:	20 20                	and    %ah,(%rax)
  401c4c:	20 20                	and    %ah,(%rax)
  401c4e:	20 20                	and    %ah,(%rax)
  401c50:	20 20                	and    %ah,(%rax)
  401c52:	20 20                	and    %ah,(%rax)
  401c54:	2c 49                	sub    $0x49,%al
  401c56:	49 38 38             	rex.WB cmp %dil,(%r8)
  401c59:	5a                   	pop    %rdx
  401c5a:	6c                   	insb   (%dx),%es:(%rdi)
  401c5b:	3b 2e                	cmp    (%rsi),%ebp
  401c5d:	20 20                	and    %ah,(%rax)
  401c5f:	20 20                	and    %ah,(%rax)
  401c61:	20 20                	and    %ah,(%rax)
  401c63:	20 20                	and    %ah,(%rax)
  401c65:	20 20                	and    %ah,(%rax)
  401c67:	20 20                	and    %ah,(%rax)
  401c69:	20 20                	and    %ah,(%rax)
  401c6b:	20 20                	and    %ah,(%rax)
  401c6d:	20 20                	and    %ah,(%rax)
  401c6f:	3b 6c 6c 5a          	cmp    0x5a(%rsp,%rbp,2),%ebp
  401c73:	5a                   	pop    %rdx
  401c74:	5a                   	pop    %rdx
  401c75:	5a                   	pop    %rdx
  401c76:	5a                   	pop    %rdx
  401c77:	38 38                	cmp    %bh,(%rax)
  401c79:	38 38                	cmp    %bh,(%rax)
  401c7b:	38 38                	cmp    %bh,(%rax)
  401c7d:	49 38 38             	rex.WB cmp %dil,(%r8)
  401c80:	38 38                	cmp    %bh,(%rax)
  401c82:	38 38                	cmp    %bh,(%rax)
  401c84:	2c 20                	sub    $0x20,%al
  401c86:	20 20                	and    %ah,(%rax)
  401c88:	20 20                	and    %ah,(%rax)
  401c8a:	20 20                	and    %ah,(%rax)
  401c8c:	20 20                	and    %ah,(%rax)
  401c8e:	20 20                	and    %ah,(%rax)
  401c90:	20 20                	and    %ah,(%rax)
  401c92:	20 20                	and    %ah,(%rax)
  401c94:	20 20                	and    %ah,(%rax)
  401c96:	20 20                	and    %ah,(%rax)
  401c98:	20 20                	and    %ah,(%rax)
  401c9a:	20 20                	and    %ah,(%rax)
  401c9c:	20 20                	and    %ah,(%rax)
  401c9e:	20 20                	and    %ah,(%rax)
  401ca0:	20 20                	and    %ah,(%rax)
  401ca2:	2c 49                	sub    $0x49,%al
  401ca4:	49 38 38             	rex.WB cmp %dil,(%r8)
  401ca7:	38 5a 6c             	cmp    %bl,0x6c(%rdx)
  401caa:	3b 2e                	cmp    (%rsi),%ebp
  401cac:	20 20                	and    %ah,(%rax)
  401cae:	20 20                	and    %ah,(%rax)
  401cb0:	20 20                	and    %ah,(%rax)
  401cb2:	20 20                	and    %ah,(%rax)
  401cb4:	20 20                	and    %ah,(%rax)
  401cb6:	20 20                	and    %ah,(%rax)
  401cb8:	20 20                	and    %ah,(%rax)
  401cba:	20 20                	and    %ah,(%rax)
  401cbc:	2e 3b 3b             	cmp    %cs:(%rbx),%edi
  401cbf:	3b 3b                	cmp    (%rbx),%edi
  401cc1:	3b 6c 6c 6c          	cmp    0x6c(%rsp,%rbp,2),%ebp
  401cc5:	5a                   	pop    %rdx
  401cc6:	5a                   	pop    %rdx
  401cc7:	5a                   	pop    %rdx
  401cc8:	38 38                	cmp    %bh,(%rax)
  401cca:	38 38                	cmp    %bh,(%rax)
  401ccc:	38 38                	cmp    %bh,(%rax)
  401cce:	49 38 38             	rex.WB cmp %dil,(%r8)
  401cd1:	38 38                	cmp    %bh,(%rax)
  401cd3:	62                   	(bad)  
  401cd4:	20 20                	and    %ah,(%rax)
  401cd6:	20 20                	and    %ah,(%rax)
  401cd8:	20 20                	and    %ah,(%rax)
  401cda:	20 20                	and    %ah,(%rax)
  401cdc:	20 20                	and    %ah,(%rax)
  401cde:	20 20                	and    %ah,(%rax)
  401ce0:	20 20                	and    %ah,(%rax)
  401ce2:	20 20                	and    %ah,(%rax)
  401ce4:	20 20                	and    %ah,(%rax)
  401ce6:	20 20                	and    %ah,(%rax)
  401ce8:	20 20                	and    %ah,(%rax)
  401cea:	20 20                	and    %ah,(%rax)
  401cec:	20 20                	and    %ah,(%rax)
  401cee:	20 20                	and    %ah,(%rax)
  401cf0:	2c 49                	sub    $0x49,%al
  401cf2:	49 38 38             	rex.WB cmp %dil,(%r8)
  401cf5:	38 38                	cmp    %bh,(%rax)
  401cf7:	5a                   	pop    %rdx
  401cf8:	3b 3b                	cmp    (%rbx),%edi
  401cfa:	20 20                	and    %ah,(%rax)
  401cfc:	20 20                	and    %ah,(%rax)
  401cfe:	20 20                	and    %ah,(%rax)
  401d00:	20 20                	and    %ah,(%rax)
  401d02:	20 20                	and    %ah,(%rax)
  401d04:	20 20                	and    %ah,(%rax)
  401d06:	20 20                	and    %ah,(%rax)
  401d08:	20 20                	and    %ah,(%rax)
  401d0a:	20 60 3b             	and    %ah,0x3b(%rax)
  401d0d:	3b 3b                	cmp    (%rbx),%edi
  401d0f:	3b 3b                	cmp    (%rbx),%edi
  401d11:	27                   	(bad)  
  401d12:	27                   	(bad)  
  401d13:	6c                   	insb   (%dx),%es:(%rdi)
  401d14:	6c                   	insb   (%dx),%es:(%rdi)
  401d15:	5a                   	pop    %rdx
  401d16:	5a                   	pop    %rdx
  401d17:	38 38                	cmp    %bh,(%rax)
  401d19:	38 38                	cmp    %bh,(%rax)
  401d1b:	38 38                	cmp    %bh,(%rax)
  401d1d:	38 49 38             	cmp    %cl,0x38(%rcx)
  401d20:	38 38                	cmp    %bh,(%rax)
  401d22:	38 2c 20             	cmp    %ch,(%rax,%riz,1)
  401d25:	20 20                	and    %ah,(%rax)
  401d27:	20 20                	and    %ah,(%rax)
  401d29:	20 20                	and    %ah,(%rax)
  401d2b:	20 20                	and    %ah,(%rax)
  401d2d:	20 20                	and    %ah,(%rax)
  401d2f:	20 20                	and    %ah,(%rax)
  401d31:	20 20                	and    %ah,(%rax)
  401d33:	20 20                	and    %ah,(%rax)
  401d35:	20 20                	and    %ah,(%rax)
  401d37:	20 20                	and    %ah,(%rax)
  401d39:	20 20                	and    %ah,(%rax)
  401d3b:	20 20                	and    %ah,(%rax)
  401d3d:	20 20                	and    %ah,(%rax)
  401d3f:	49                   	rex.WB
  401d40:	49 38 38             	rex.WB cmp %dil,(%r8)
  401d43:	38 38                	cmp    %bh,(%rax)
  401d45:	38 5a 3b             	cmp    %bl,0x3b(%rdx)
  401d48:	27                   	(bad)  
  401d49:	20 20                	and    %ah,(%rax)
  401d4b:	20 20                	and    %ah,(%rax)
  401d4d:	20 20                	and    %ah,(%rax)
  401d4f:	20 20                	and    %ah,(%rax)
  401d51:	20 20                	and    %ah,(%rax)
  401d53:	20 20                	and    %ah,(%rax)
  401d55:	20 20                	and    %ah,(%rax)
  401d57:	20 20                	and    %ah,(%rax)
  401d59:	20 20                	and    %ah,(%rax)
  401d5b:	20 20                	and    %ah,(%rax)
  401d5d:	20 20                	and    %ah,(%rax)
  401d5f:	20 20                	and    %ah,(%rax)
  401d61:	2e 3b 6c 5a 5a       	cmp    %cs:0x5a(%rdx,%rbx,2),%ebp
  401d66:	5a                   	pop    %rdx
  401d67:	38 38                	cmp    %bh,(%rax)
  401d69:	38 38                	cmp    %bh,(%rax)
  401d6b:	38 38                	cmp    %bh,(%rax)
  401d6d:	38 49 38             	cmp    %cl,0x38(%rcx)
  401d70:	38 38                	cmp    %bh,(%rax)
  401d72:	62                   	(bad)  
  401d73:	20 20                	and    %ah,(%rax)
  401d75:	20 20                	and    %ah,(%rax)
  401d77:	20 20                	and    %ah,(%rax)
  401d79:	20 20                	and    %ah,(%rax)
  401d7b:	20 20                	and    %ah,(%rax)
  401d7d:	20 20                	and    %ah,(%rax)
  401d7f:	20 20                	and    %ah,(%rax)
  401d81:	20 20                	and    %ah,(%rax)
  401d83:	20 20                	and    %ah,(%rax)
  401d85:	20 20                	and    %ah,(%rax)
  401d87:	20 20                	and    %ah,(%rax)
  401d89:	20 20                	and    %ah,(%rax)
  401d8b:	20 20                	and    %ah,(%rax)
  401d8d:	20 49 49             	and    %cl,0x49(%rcx)
  401d90:	38 38                	cmp    %bh,(%rax)
  401d92:	38 38                	cmp    %bh,(%rax)
  401d94:	38 5a 3b             	cmp    %bl,0x3b(%rdx)
  401d97:	20 5f 2c             	and    %bl,0x2c(%rdi)
  401d9a:	61                   	(bad)  
  401d9b:	61                   	(bad)  
  401d9c:	61                   	(bad)  
  401d9d:	2c 20                	sub    $0x20,%al
  401d9f:	20 20                	and    %ah,(%rax)
  401da1:	20 20                	and    %ah,(%rax)
  401da3:	20 2e                	and    %ch,(%rsi)
  401da5:	2c 61                	sub    $0x61,%al
  401da7:	61                   	(bad)  
  401da8:	61                   	(bad)  
  401da9:	61                   	(bad)  
  401daa:	61                   	(bad)  
  401dab:	2c 5f                	sub    $0x5f,%al
  401dad:	5f                   	pop    %rdi
  401dae:	2e 6c                	cs insb (%dx),%es:(%rdi)
  401db0:	3b 6c 6c 5a          	cmp    0x5a(%rsp,%rbp,2),%ebp
  401db4:	5a                   	pop    %rdx
  401db5:	5a                   	pop    %rdx
  401db6:	38 38                	cmp    %bh,(%rax)
  401db8:	38 38                	cmp    %bh,(%rax)
  401dba:	38 38                	cmp    %bh,(%rax)
  401dbc:	38 38                	cmp    %bh,(%rax)
  401dbe:	49 38 38             	rex.WB cmp %dil,(%r8)
  401dc1:	38 20                	cmp    %ah,(%rax)
  401dc3:	20 20                	and    %ah,(%rax)
  401dc5:	20 20                	and    %ah,(%rax)
  401dc7:	20 20                	and    %ah,(%rax)
  401dc9:	20 20                	and    %ah,(%rax)
  401dcb:	20 20                	and    %ah,(%rax)
  401dcd:	20 20                	and    %ah,(%rax)
  401dcf:	20 20                	and    %ah,(%rax)
  401dd1:	20 20                	and    %ah,(%rax)
  401dd3:	20 20                	and    %ah,(%rax)
  401dd5:	20 20                	and    %ah,(%rax)
  401dd7:	20 20                	and    %ah,(%rax)
  401dd9:	20 20                	and    %ah,(%rax)
  401ddb:	20 20                	and    %ah,(%rax)
  401ddd:	49                   	rex.WB
  401dde:	49 38 38             	rex.WB cmp %dil,(%r8)
  401de1:	38 38                	cmp    %bh,(%rax)
  401de3:	38 49 5a             	cmp    %cl,0x5a(%rcx)
  401de6:	5a                   	pop    %rdx
  401de7:	5a                   	pop    %rdx
  401de8:	5a                   	pop    %rdx
  401de9:	5a                   	pop    %rdx
  401dea:	5a                   	pop    %rdx
  401deb:	5a                   	pop    %rdx
  401dec:	5a                   	pop    %rdx
  401ded:	5a                   	pop    %rdx
  401dee:	2c 20                	sub    $0x20,%al
  401df0:	20 2e                	and    %ch,(%rsi)
  401df2:	5a                   	pop    %rdx
  401df3:	5a                   	pop    %rdx
  401df4:	5a                   	pop    %rdx
  401df5:	5a                   	pop    %rdx
  401df6:	5a                   	pop    %rdx
  401df7:	5a                   	pop    %rdx
  401df8:	5a                   	pop    %rdx
  401df9:	5a                   	pop    %rdx
  401dfa:	5a                   	pop    %rdx
  401dfb:	5a                   	pop    %rdx
  401dfc:	5a                   	pop    %rdx
  401dfd:	5a                   	pop    %rdx
  401dfe:	5a                   	pop    %rdx
  401dff:	5a                   	pop    %rdx
  401e00:	3b 6c 6c 5a          	cmp    0x5a(%rsp,%rbp,2),%ebp
  401e04:	5a                   	pop    %rdx
  401e05:	38 38                	cmp    %bh,(%rax)
  401e07:	38 38                	cmp    %bh,(%rax)
  401e09:	38 38                	cmp    %bh,(%rax)
  401e0b:	38 38                	cmp    %bh,(%rax)
  401e0d:	49 38 38             	rex.WB cmp %dil,(%r8)
  401e10:	38 2c 20             	cmp    %ch,(%rax,%riz,1)
  401e13:	20 20                	and    %ah,(%rax)
  401e15:	20 20                	and    %ah,(%rax)
  401e17:	20 20                	and    %ah,(%rax)
  401e19:	20 20                	and    %ah,(%rax)
  401e1b:	20 20                	and    %ah,(%rax)
  401e1d:	20 20                	and    %ah,(%rax)
  401e1f:	20 20                	and    %ah,(%rax)
  401e21:	20 20                	and    %ah,(%rax)
  401e23:	20 20                	and    %ah,(%rax)
  401e25:	20 20                	and    %ah,(%rax)
  401e27:	20 20                	and    %ah,(%rax)
  401e29:	20 20                	and    %ah,(%rax)
  401e2b:	20 49 49             	and    %cl,0x49(%rcx)
  401e2e:	38 38                	cmp    %bh,(%rax)
  401e30:	38 38                	cmp    %bh,(%rax)
  401e32:	38 49 5a             	cmp    %cl,0x5a(%rcx)
  401e35:	5a                   	pop    %rdx
  401e36:	3c 27                	cmp    $0x27,%al
  401e38:	28 40 40             	sub    %al,0x40(%rax)
  401e3b:	3e 5a                	ds pop %rdx
  401e3d:	7c 20                	jl     401e5f <_IO_stdin_used+0x6df>
  401e3f:	20 7c 5a 5a          	and    %bh,0x5a(%rdx,%rbx,2)
  401e43:	5a                   	pop    %rdx
  401e44:	3c 27                	cmp    $0x27,%al
  401e46:	28 40 40             	sub    %al,0x40(%rax)
  401e49:	3e 5a                	ds pop %rdx
  401e4b:	5a                   	pop    %rdx
  401e4c:	5a                   	pop    %rdx
  401e4d:	5a                   	pop    %rdx
  401e4e:	3b 3b                	cmp    (%rbx),%edi
  401e50:	6c                   	insb   (%dx),%es:(%rdi)
  401e51:	6c                   	insb   (%dx),%es:(%rdi)
  401e52:	5a                   	pop    %rdx
  401e53:	5a                   	pop    %rdx
  401e54:	38 38                	cmp    %bh,(%rax)
  401e56:	38 38                	cmp    %bh,(%rax)
  401e58:	38 38                	cmp    %bh,(%rax)
  401e5a:	38 38                	cmp    %bh,(%rax)
  401e5c:	38 49 38             	cmp    %cl,0x38(%rcx)
  401e5f:	38 49 20             	cmp    %cl,0x20(%rcx)
  401e62:	20 20                	and    %ah,(%rax)
  401e64:	20 20                	and    %ah,(%rax)
  401e66:	20 20                	and    %ah,(%rax)
  401e68:	20 20                	and    %ah,(%rax)
  401e6a:	20 20                	and    %ah,(%rax)
  401e6c:	20 20                	and    %ah,(%rax)
  401e6e:	20 20                	and    %ah,(%rax)
  401e70:	20 20                	and    %ah,(%rax)
  401e72:	20 20                	and    %ah,(%rax)
  401e74:	20 20                	and    %ah,(%rax)
  401e76:	20 20                	and    %ah,(%rax)
  401e78:	20 20                	and    %ah,(%rax)
  401e7a:	2c 49                	sub    $0x49,%al
  401e7c:	49 38 38             	rex.WB cmp %dil,(%r8)
  401e7f:	38 38                	cmp    %bh,(%rax)
  401e81:	38 3b                	cmp    %bh,(%rbx)
  401e83:	20 20                	and    %ah,(%rax)
  401e85:	20 60 22             	and    %ah,0x22(%rax)
  401e88:	22 22                	and    (%rdx),%ah
  401e8a:	20 3b                	and    %bh,(%rbx)
  401e8c:	7c 20                	jl     401eae <_IO_stdin_used+0x72e>
  401e8e:	20 7c 5a 5a          	and    %bh,0x5a(%rdx,%rbx,2)
  401e92:	3b 20                	cmp    (%rax),%esp
  401e94:	60                   	(bad)  
  401e95:	22 22                	and    (%rdx),%ah
  401e97:	22 20                	and    (%rax),%ah
  401e99:	20 20                	and    %ah,(%rax)
  401e9b:	20 20                	and    %ah,(%rax)
  401e9d:	3b 3b                	cmp    (%rbx),%edi
  401e9f:	6c                   	insb   (%dx),%es:(%rdi)
  401ea0:	6c                   	insb   (%dx),%es:(%rdi)
  401ea1:	5a                   	pop    %rdx
  401ea2:	38 38                	cmp    %bh,(%rax)
  401ea4:	38 38                	cmp    %bh,(%rax)
  401ea6:	38 38                	cmp    %bh,(%rax)
  401ea8:	38 38                	cmp    %bh,(%rax)
  401eaa:	38 38                	cmp    %bh,(%rax)
  401eac:	49 38 38             	rex.WB cmp %dil,(%r8)
  401eaf:	38 20                	cmp    %ah,(%rax)
  401eb1:	20 20                	and    %ah,(%rax)
  401eb3:	20 20                	and    %ah,(%rax)
  401eb5:	20 20                	and    %ah,(%rax)
  401eb7:	20 20                	and    %ah,(%rax)
  401eb9:	20 20                	and    %ah,(%rax)
  401ebb:	20 20                	and    %ah,(%rax)
  401ebd:	20 20                	and    %ah,(%rax)
  401ebf:	20 20                	and    %ah,(%rax)
  401ec1:	20 20                	and    %ah,(%rax)
  401ec3:	20 20                	and    %ah,(%rax)
  401ec5:	20 20                	and    %ah,(%rax)
  401ec7:	20 20                	and    %ah,(%rax)
  401ec9:	49                   	rex.WB
  401eca:	49 38 38             	rex.WB cmp %dil,(%r8)
  401ecd:	38 38                	cmp    %bh,(%rax)
  401ecf:	38 38                	cmp    %bh,(%rax)
  401ed1:	6c                   	insb   (%dx),%es:(%rdi)
  401ed2:	20 20                	and    %ah,(%rax)
  401ed4:	20 20                	and    %ah,(%rax)
  401ed6:	20 20                	and    %ah,(%rax)
  401ed8:	20 20                	and    %ah,(%rax)
  401eda:	20 20                	and    %ah,(%rax)
  401edc:	20 20                	and    %ah,(%rax)
  401ede:	60                   	(bad)  
  401edf:	3b 3b                	cmp    (%rbx),%edi
  401ee1:	20 20                	and    %ah,(%rax)
  401ee3:	20 20                	and    %ah,(%rax)
  401ee5:	20 20                	and    %ah,(%rax)
  401ee7:	20 20                	and    %ah,(%rax)
  401ee9:	20 20                	and    %ah,(%rax)
  401eeb:	2e 3b 6c 6c 5a       	cmp    %cs:0x5a(%rsp,%rbp,2),%ebp
  401ef0:	5a                   	pop    %rdx
  401ef1:	38 38                	cmp    %bh,(%rax)
  401ef3:	38 38                	cmp    %bh,(%rax)
  401ef5:	38 38                	cmp    %bh,(%rax)
  401ef7:	38 38                	cmp    %bh,(%rax)
  401ef9:	38 38                	cmp    %bh,(%rax)
  401efb:	49 38 38             	rex.WB cmp %dil,(%r8)
  401efe:	38 2c 20             	cmp    %ch,(%rax,%riz,1)
  401f01:	20 20                	and    %ah,(%rax)
  401f03:	20 20                	and    %ah,(%rax)
  401f05:	20 20                	and    %ah,(%rax)
  401f07:	20 20                	and    %ah,(%rax)
  401f09:	20 20                	and    %ah,(%rax)
  401f0b:	20 20                	and    %ah,(%rax)
  401f0d:	20 20                	and    %ah,(%rax)
  401f0f:	20 20                	and    %ah,(%rax)
  401f11:	20 20                	and    %ah,(%rax)
  401f13:	20 20                	and    %ah,(%rax)
  401f15:	20 20                	and    %ah,(%rax)
  401f17:	2c 49                	sub    $0x49,%al
  401f19:	49 38 38             	rex.WB cmp %dil,(%r8)
  401f1c:	38 38                	cmp    %bh,(%rax)
  401f1e:	38 38                	cmp    %bh,(%rax)
  401f20:	5a                   	pop    %rdx
  401f21:	3b 20                	cmp    (%rax),%esp
  401f23:	20 20                	and    %ah,(%rax)
  401f25:	20 20                	and    %ah,(%rax)
  401f27:	20 20                	and    %ah,(%rax)
  401f29:	20 20                	and    %ah,(%rax)
  401f2b:	20 20                	and    %ah,(%rax)
  401f2d:	3b 3b                	cmp    (%rbx),%edi
  401f2f:	3b 20                	cmp    (%rax),%esp
  401f31:	20 20                	and    %ah,(%rax)
  401f33:	20 20                	and    %ah,(%rax)
  401f35:	20 20                	and    %ah,(%rax)
  401f37:	20 2e                	and    %ch,(%rsi)
  401f39:	3b 3b                	cmp    (%rbx),%edi
  401f3b:	6c                   	insb   (%dx),%es:(%rdi)
  401f3c:	6c                   	insb   (%dx),%es:(%rdi)
  401f3d:	5a                   	pop    %rdx
  401f3e:	5a                   	pop    %rdx
  401f3f:	5a                   	pop    %rdx
  401f40:	38 38                	cmp    %bh,(%rax)
  401f42:	38 38                	cmp    %bh,(%rax)
  401f44:	38 38                	cmp    %bh,(%rax)
  401f46:	38 38                	cmp    %bh,(%rax)
  401f48:	38 38                	cmp    %bh,(%rax)
  401f4a:	49 38 38             	rex.WB cmp %dil,(%r8)
  401f4d:	38 49 20             	cmp    %cl,0x20(%rcx)
  401f50:	20 20                	and    %ah,(%rax)
  401f52:	20 20                	and    %ah,(%rax)
  401f54:	20 20                	and    %ah,(%rax)
  401f56:	20 20                	and    %ah,(%rax)
  401f58:	20 20                	and    %ah,(%rax)
  401f5a:	20 20                	and    %ah,(%rax)
  401f5c:	20 20                	and    %ah,(%rax)
  401f5e:	20 20                	and    %ah,(%rax)
  401f60:	20 20                	and    %ah,(%rax)
  401f62:	20 20                	and    %ah,(%rax)
  401f64:	20 20                	and    %ah,(%rax)
  401f66:	49                   	rex.WB
  401f67:	49                   	rex.WB
  401f68:	49 38 38             	rex.WB cmp %dil,(%r8)
  401f6b:	38 38                	cmp    %bh,(%rax)
  401f6d:	38 38                	cmp    %bh,(%rax)
  401f6f:	5a                   	pop    %rdx
  401f70:	6c                   	insb   (%dx),%es:(%rdi)
  401f71:	3b 20                	cmp    (%rax),%esp
  401f73:	20 20                	and    %ah,(%rax)
  401f75:	20 2e                	and    %ch,(%rsi)
  401f77:	2e 2c 20             	cs sub $0x20,%al
  401f7a:	20 20                	and    %ah,(%rax)
  401f7c:	60                   	(bad)  
  401f7d:	3b 3b                	cmp    (%rbx),%edi
  401f7f:	20 20                	and    %ah,(%rax)
  401f81:	20 20                	and    %ah,(%rax)
  401f83:	20 20                	and    %ah,(%rax)
  401f85:	20 2c 3b             	and    %ch,(%rbx,%rdi,1)
  401f88:	3b 6c 6c 6c          	cmp    0x6c(%rsp,%rbp,2),%ebp
  401f8c:	5a                   	pop    %rdx
  401f8d:	5a                   	pop    %rdx
  401f8e:	5a                   	pop    %rdx
  401f8f:	38 38                	cmp    %bh,(%rax)
  401f91:	38 38                	cmp    %bh,(%rax)
  401f93:	38 38                	cmp    %bh,(%rax)
  401f95:	38 38                	cmp    %bh,(%rax)
  401f97:	38 38                	cmp    %bh,(%rax)
  401f99:	38 49 38             	cmp    %cl,0x38(%rcx)
  401f9c:	38 38                	cmp    %bh,(%rax)
  401f9e:	20 20                	and    %ah,(%rax)
  401fa0:	20 20                	and    %ah,(%rax)
  401fa2:	20 20                	and    %ah,(%rax)
  401fa4:	20 20                	and    %ah,(%rax)
  401fa6:	20 20                	and    %ah,(%rax)
  401fa8:	20 20                	and    %ah,(%rax)
  401faa:	20 20                	and    %ah,(%rax)
  401fac:	20 20                	and    %ah,(%rax)
  401fae:	20 20                	and    %ah,(%rax)
  401fb0:	20 20                	and    %ah,(%rax)
  401fb2:	20 20                	and    %ah,(%rax)
  401fb4:	20 49 49             	and    %cl,0x49(%rcx)
  401fb7:	38 38                	cmp    %bh,(%rax)
  401fb9:	38 38                	cmp    %bh,(%rax)
  401fbb:	38 38                	cmp    %bh,(%rax)
  401fbd:	38 38                	cmp    %bh,(%rax)
  401fbf:	5a                   	pop    %rdx
  401fc0:	3b 3b                	cmp    (%rbx),%edi
  401fc2:	2e 2e 2e 3b 28       	cs cs cmp %cs:(%rax),%ebp
  401fc7:	5f                   	pop    %rdi
  401fc8:	20 20                	and    %ah,(%rax)
  401fca:	20 20                	and    %ah,(%rax)
  401fcc:	5f                   	pop    %rdi
  401fcd:	29 20                	sub    %esp,(%rax)
  401fcf:	20 20                	and    %ah,(%rax)
  401fd1:	20 20                	and    %ah,(%rax)
  401fd3:	20 2c 3b             	and    %ch,(%rbx,%rdi,1)
  401fd6:	3b 3b                	cmp    (%rbx),%edi
  401fd8:	6c                   	insb   (%dx),%es:(%rdi)
  401fd9:	6c                   	insb   (%dx),%es:(%rdi)
  401fda:	5a                   	pop    %rdx
  401fdb:	5a                   	pop    %rdx
  401fdc:	5a                   	pop    %rdx
  401fdd:	5a                   	pop    %rdx
  401fde:	38 38                	cmp    %bh,(%rax)
  401fe0:	38 38                	cmp    %bh,(%rax)
  401fe2:	38 38                	cmp    %bh,(%rax)
  401fe4:	38 38                	cmp    %bh,(%rax)
  401fe6:	38 38                	cmp    %bh,(%rax)
  401fe8:	38 49 38             	cmp    %cl,0x38(%rcx)
  401feb:	38 38                	cmp    %bh,(%rax)
  401fed:	2c 20                	sub    $0x20,%al
  401fef:	20 20                	and    %ah,(%rax)
  401ff1:	20 20                	and    %ah,(%rax)
  401ff3:	20 20                	and    %ah,(%rax)
  401ff5:	20 20                	and    %ah,(%rax)
  401ff7:	20 20                	and    %ah,(%rax)
  401ff9:	20 20                	and    %ah,(%rax)
  401ffb:	20 20                	and    %ah,(%rax)
  401ffd:	20 20                	and    %ah,(%rax)
  401fff:	20 20                	and    %ah,(%rax)
  402001:	20 20                	and    %ah,(%rax)
  402003:	20 49 49             	and    %cl,0x49(%rcx)
  402006:	38 38                	cmp    %bh,(%rax)
  402008:	38 38                	cmp    %bh,(%rax)
  40200a:	38 38                	cmp    %bh,(%rax)
  40200c:	38 38                	cmp    %bh,(%rax)
  40200e:	5a                   	pop    %rdx
  40200f:	6c                   	insb   (%dx),%es:(%rdi)
  402010:	3b 3b                	cmp    (%rbx),%edi
  402012:	3b 3b                	cmp    (%rbx),%edi
  402014:	3b 27                	cmp    (%rdi),%esp
  402016:	20 60 2d             	and    %ah,0x2d(%rax)
  402019:	2d 27 5a 3b 2e       	sub    $0x2e3b5a27,%eax
  40201e:	20 20                	and    %ah,(%rax)
  402020:	20 2e                	and    %ch,(%rsi)
  402022:	2c 3b                	sub    $0x3b,%al
  402024:	3b 3b                	cmp    (%rbx),%edi
  402026:	3b 6c 6c 5a          	cmp    0x5a(%rsp,%rbp,2),%ebp
  40202a:	5a                   	pop    %rdx
  40202b:	5a                   	pop    %rdx
  40202c:	5a                   	pop    %rdx
  40202d:	38 38                	cmp    %bh,(%rax)
  40202f:	38 38                	cmp    %bh,(%rax)
  402031:	38 38                	cmp    %bh,(%rax)
  402033:	38 38                	cmp    %bh,(%rax)
  402035:	38 38                	cmp    %bh,(%rax)
  402037:	38 49 38             	cmp    %cl,0x38(%rcx)
  40203a:	38 38                	cmp    %bh,(%rax)
  40203c:	62                   	(bad)  
  40203d:	20 20                	and    %ah,(%rax)
  40203f:	20 20                	and    %ah,(%rax)
  402041:	20 20                	and    %ah,(%rax)
  402043:	20 20                	and    %ah,(%rax)
  402045:	20 20                	and    %ah,(%rax)
  402047:	20 20                	and    %ah,(%rax)
  402049:	20 20                	and    %ah,(%rax)
  40204b:	20 20                	and    %ah,(%rax)
  40204d:	20 20                	and    %ah,(%rax)
  40204f:	20 20                	and    %ah,(%rax)
  402051:	20 20                	and    %ah,(%rax)
  402053:	5d                   	pop    %rbp
  402054:	49 38 38             	rex.WB cmp %dil,(%r8)
  402057:	38 38                	cmp    %bh,(%rax)
  402059:	38 38                	cmp    %bh,(%rax)
  40205b:	38 38                	cmp    %bh,(%rax)
  40205d:	38 5a 3b             	cmp    %bl,0x3b(%rdx)
  402060:	3b 3b                	cmp    (%rbx),%edi
  402062:	3b 27                	cmp    (%rdi),%esp
  402064:	20 20                	and    %ah,(%rax)
  402066:	20 22                	and    %ah,(%rdx)
  402068:	3b 6c 6c 6c          	cmp    0x6c(%rsp,%rbp,2),%ebp
  40206c:	6c                   	insb   (%dx),%es:(%rdi)
  40206d:	6c                   	insb   (%dx),%es:(%rdi)
  40206e:	6c                   	insb   (%dx),%es:(%rdi)
  40206f:	3b 2e                	cmp    (%rsi),%ebp
  402071:	2e 3b 3b             	cmp    %cs:(%rbx),%edi
  402074:	3b 6c 6c 6c          	cmp    0x6c(%rsp,%rbp,2),%ebp
  402078:	5a                   	pop    %rdx
  402079:	5a                   	pop    %rdx
  40207a:	5a                   	pop    %rdx
  40207b:	5a                   	pop    %rdx
  40207c:	38 38                	cmp    %bh,(%rax)
  40207e:	38 38                	cmp    %bh,(%rax)
  402080:	38 38                	cmp    %bh,(%rax)
  402082:	38 38                	cmp    %bh,(%rax)
  402084:	38 38                	cmp    %bh,(%rax)
  402086:	38 49 38             	cmp    %cl,0x38(%rcx)
  402089:	38 38                	cmp    %bh,(%rax)
  40208b:	38 2c 20             	cmp    %ch,(%rax,%riz,1)
  40208e:	20 20                	and    %ah,(%rax)
  402090:	20 20                	and    %ah,(%rax)
  402092:	20 20                	and    %ah,(%rax)
  402094:	20 20                	and    %ah,(%rax)
  402096:	20 20                	and    %ah,(%rax)
  402098:	20 20                	and    %ah,(%rax)
  40209a:	20 20                	and    %ah,(%rax)
  40209c:	20 20                	and    %ah,(%rax)
  40209e:	20 20                	and    %ah,(%rax)
  4020a0:	20 20                	and    %ah,(%rax)
  4020a2:	49                   	rex.WB
  4020a3:	49 38 38             	rex.WB cmp %dil,(%r8)
  4020a6:	38 38                	cmp    %bh,(%rax)
  4020a8:	38 38                	cmp    %bh,(%rax)
  4020aa:	38 38                	cmp    %bh,(%rax)
  4020ac:	38 5a 6c             	cmp    %bl,0x6c(%rdx)
  4020af:	2e 3b 3b             	cmp    %cs:(%rbx),%edi
  4020b2:	22 59 38             	and    0x38(%rcx),%bl
  4020b5:	38 62 64             	cmp    %ah,0x64(%rdx)
  4020b8:	38 38                	cmp    %bh,(%rax)
  4020ba:	38 50 22             	cmp    %dl,0x22(%rax)
  4020bd:	3b 3b                	cmp    (%rbx),%edi
  4020bf:	2c 2e                	sub    $0x2e,%al
  4020c1:	2e 3b 6c 6c 6c       	cmp    %cs:0x6c(%rsp,%rbp,2),%ebp
  4020c6:	5a                   	pop    %rdx
  4020c7:	5a                   	pop    %rdx
  4020c8:	5a                   	pop    %rdx
  4020c9:	5a                   	pop    %rdx
  4020ca:	5a                   	pop    %rdx
  4020cb:	38 38                	cmp    %bh,(%rax)
  4020cd:	38 38                	cmp    %bh,(%rax)
  4020cf:	38 38                	cmp    %bh,(%rax)
  4020d1:	38 38                	cmp    %bh,(%rax)
  4020d3:	38 38                	cmp    %bh,(%rax)
  4020d5:	38 49 38             	cmp    %cl,0x38(%rcx)
  4020d8:	38 38                	cmp    %bh,(%rax)
  4020da:	38 49 20             	cmp    %cl,0x20(%rcx)
  4020dd:	20 20                	and    %ah,(%rax)
  4020df:	20 20                	and    %ah,(%rax)
  4020e1:	20 20                	and    %ah,(%rax)
  4020e3:	20 20                	and    %ah,(%rax)
  4020e5:	20 20                	and    %ah,(%rax)
  4020e7:	20 20                	and    %ah,(%rax)
  4020e9:	20 20                	and    %ah,(%rax)
  4020eb:	20 20                	and    %ah,(%rax)
  4020ed:	20 20                	and    %ah,(%rax)
  4020ef:	20 20                	and    %ah,(%rax)
  4020f1:	49                   	rex.WB
  4020f2:	49 38 38             	rex.WB cmp %dil,(%r8)
  4020f5:	38 38                	cmp    %bh,(%rax)
  4020f7:	38 38                	cmp    %bh,(%rax)
  4020f9:	38 38                	cmp    %bh,(%rax)
  4020fb:	38 38                	cmp    %bh,(%rax)
  4020fd:	5a                   	pop    %rdx
  4020fe:	6c                   	insb   (%dx),%es:(%rdi)
  4020ff:	3b 2e                	cmp    (%rsi),%ebp
  402101:	3b 20                	cmp    (%rax),%esp
  402103:	60                   	(bad)  
  402104:	22 50 50             	and    0x50(%rax),%dl
  402107:	50                   	push   %rax
  402108:	22 3b                	and    (%rbx),%bh
  40210a:	3b 3b                	cmp    (%rbx),%edi
  40210c:	2c 2e                	sub    $0x2e,%al
  40210e:	2e 3b 6c 6c 6c       	cmp    %cs:0x6c(%rsp,%rbp,2),%ebp
  402113:	5a                   	pop    %rdx
  402114:	5a                   	pop    %rdx
  402115:	5a                   	pop    %rdx
  402116:	5a                   	pop    %rdx
  402117:	5a                   	pop    %rdx
  402118:	5a                   	pop    %rdx
  402119:	5a                   	pop    %rdx
  40211a:	38 38                	cmp    %bh,(%rax)
  40211c:	38 38                	cmp    %bh,(%rax)
  40211e:	38 38                	cmp    %bh,(%rax)
  402120:	38 38                	cmp    %bh,(%rax)
  402122:	38 38                	cmp    %bh,(%rax)
  402124:	38 49 38             	cmp    %cl,0x38(%rcx)
  402127:	38 38                	cmp    %bh,(%rax)
  402129:	38 38                	cmp    %bh,(%rax)
  40212b:	20 20                	and    %ah,(%rax)
  40212d:	20 20                	and    %ah,(%rax)
  40212f:	20 20                	and    %ah,(%rax)
  402131:	20 20                	and    %ah,(%rax)
  402133:	20 20                	and    %ah,(%rax)
  402135:	20 20                	and    %ah,(%rax)
  402137:	20 20                	and    %ah,(%rax)
  402139:	20 20                	and    %ah,(%rax)
  40213b:	20 20                	and    %ah,(%rax)
  40213d:	20 20                	and    %ah,(%rax)
  40213f:	20 49 49             	and    %cl,0x49(%rcx)
  402142:	38 38                	cmp    %bh,(%rax)
  402144:	38 38                	cmp    %bh,(%rax)
  402146:	38 38                	cmp    %bh,(%rax)
  402148:	38 38                	cmp    %bh,(%rax)
  40214a:	38 38                	cmp    %bh,(%rax)
  40214c:	38 38                	cmp    %bh,(%rax)
  40214e:	5a                   	pop    %rdx
  40214f:	6c                   	insb   (%dx),%es:(%rdi)
  402150:	3b 3b                	cmp    (%rbx),%edi
  402152:	2e 20 60 3b          	and    %ah,%cs:0x3b(%rax)
  402156:	3b 3b                	cmp    (%rbx),%edi
  402158:	6c                   	insb   (%dx),%es:(%rdi)
  402159:	3b 3b                	cmp    (%rbx),%edi
  40215b:	3b 3b                	cmp    (%rbx),%edi
  40215d:	6c                   	insb   (%dx),%es:(%rdi)
  40215e:	6c                   	insb   (%dx),%es:(%rdi)
  40215f:	6c                   	insb   (%dx),%es:(%rdi)
  402160:	5a                   	pop    %rdx
  402161:	5a                   	pop    %rdx
  402162:	5a                   	pop    %rdx
  402163:	5a                   	pop    %rdx
  402164:	5a                   	pop    %rdx
  402165:	5a                   	pop    %rdx
  402166:	5a                   	pop    %rdx
  402167:	5a                   	pop    %rdx
  402168:	57                   	push   %rdi
  402169:	38 38                	cmp    %bh,(%rax)
  40216b:	38 38                	cmp    %bh,(%rax)
  40216d:	38 38                	cmp    %bh,(%rax)
  40216f:	38 38                	cmp    %bh,(%rax)
  402171:	38 38                	cmp    %bh,(%rax)
  402173:	38 49 38             	cmp    %cl,0x38(%rcx)
  402176:	38 38                	cmp    %bh,(%rax)
  402178:	38 38                	cmp    %bh,(%rax)
  40217a:	20 20                	and    %ah,(%rax)
  40217c:	20 20                	and    %ah,(%rax)
  40217e:	20 20                	and    %ah,(%rax)
  402180:	20 20                	and    %ah,(%rax)
  402182:	20 20                	and    %ah,(%rax)
  402184:	20 20                	and    %ah,(%rax)
  402186:	20 20                	and    %ah,(%rax)
  402188:	20 20                	and    %ah,(%rax)
  40218a:	20 20                	and    %ah,(%rax)
  40218c:	20 20                	and    %ah,(%rax)
  40218e:	20 60 49             	and    %ah,0x49(%rax)
  402191:	49 38 38             	rex.WB cmp %dil,(%r8)
  402194:	38 38                	cmp    %bh,(%rax)
  402196:	38 38                	cmp    %bh,(%rax)
  402198:	38 38                	cmp    %bh,(%rax)
  40219a:	38 38                	cmp    %bh,(%rax)
  40219c:	38 38                	cmp    %bh,(%rax)
  40219e:	38 5a 6c             	cmp    %bl,0x6c(%rdx)
  4021a1:	3b 2e                	cmp    (%rsi),%ebp
  4021a3:	20 20                	and    %ah,(%rax)
  4021a5:	20 20                	and    %ah,(%rax)
  4021a7:	2c 3b                	sub    $0x3b,%al
  4021a9:	3b 6c 6c 6c          	cmp    0x6c(%rsp,%rbp,2),%ebp
  4021ad:	5a                   	pop    %rdx
  4021ae:	5a                   	pop    %rdx
  4021af:	5a                   	pop    %rdx
  4021b0:	5a                   	pop    %rdx
  4021b1:	5a                   	pop    %rdx
  4021b2:	5a                   	pop    %rdx
  4021b3:	5a                   	pop    %rdx
  4021b4:	5a                   	pop    %rdx
  4021b5:	57                   	push   %rdi
  4021b6:	4d 5a                	rex.WRB pop %r10
  4021b8:	38 38                	cmp    %bh,(%rax)
  4021ba:	38 38                	cmp    %bh,(%rax)
  4021bc:	38 38                	cmp    %bh,(%rax)
  4021be:	38 38                	cmp    %bh,(%rax)
  4021c0:	38 38                	cmp    %bh,(%rax)
  4021c2:	38 49 38             	cmp    %cl,0x38(%rcx)
  4021c5:	38 38                	cmp    %bh,(%rax)
  4021c7:	38 38                	cmp    %bh,(%rax)
  4021c9:	20 20                	and    %ah,(%rax)
  4021cb:	20 20                	and    %ah,(%rax)
  4021cd:	20 20                	and    %ah,(%rax)
  4021cf:	20 20                	and    %ah,(%rax)
  4021d1:	20 20                	and    %ah,(%rax)
  4021d3:	20 20                	and    %ah,(%rax)
  4021d5:	20 20                	and    %ah,(%rax)
  4021d7:	20 20                	and    %ah,(%rax)
  4021d9:	20 20                	and    %ah,(%rax)
  4021db:	20 20                	and    %ah,(%rax)
  4021dd:	20 20                	and    %ah,(%rax)
  4021df:	49                   	rex.WB
  4021e0:	49 38 38             	rex.WB cmp %dil,(%r8)
  4021e3:	38 38                	cmp    %bh,(%rax)
  4021e5:	38 38                	cmp    %bh,(%rax)
  4021e7:	38 38                	cmp    %bh,(%rax)
  4021e9:	38 38                	cmp    %bh,(%rax)
  4021eb:	38 38                	cmp    %bh,(%rax)
  4021ed:	38 38                	cmp    %bh,(%rax)
  4021ef:	38 38                	cmp    %bh,(%rax)
  4021f1:	5a                   	pop    %rdx
  4021f2:	62 61                	(bad)  
  4021f4:	61                   	(bad)  
  4021f5:	6c                   	insb   (%dx),%es:(%rdi)
  4021f6:	6c                   	insb   (%dx),%es:(%rdi)
  4021f7:	6c                   	insb   (%dx),%es:(%rdi)
  4021f8:	5a                   	pop    %rdx
  4021f9:	5a                   	pop    %rdx
  4021fa:	5a                   	pop    %rdx
  4021fb:	5a                   	pop    %rdx
  4021fc:	5a                   	pop    %rdx
  4021fd:	5a                   	pop    %rdx
  4021fe:	5a                   	pop    %rdx
  4021ff:	5a                   	pop    %rdx
  402200:	5a                   	pop    %rdx
  402201:	57                   	push   %rdi
  402202:	57                   	push   %rdi
  402203:	4d 5a                	rex.WRB pop %r10
  402205:	5a                   	pop    %rdx
  402206:	5a                   	pop    %rdx
  402207:	38 38                	cmp    %bh,(%rax)
  402209:	38 38                	cmp    %bh,(%rax)
  40220b:	38 38                	cmp    %bh,(%rax)
  40220d:	38 38                	cmp    %bh,(%rax)
  40220f:	38 38                	cmp    %bh,(%rax)
  402211:	49 38 38             	rex.WB cmp %dil,(%r8)
  402214:	38 38                	cmp    %bh,(%rax)
  402216:	38 38                	cmp    %bh,(%rax)
  402218:	2c 20                	sub    $0x20,%al
  40221a:	20 20                	and    %ah,(%rax)
  40221c:	20 20                	and    %ah,(%rax)
  40221e:	20 20                	and    %ah,(%rax)
  402220:	20 20                	and    %ah,(%rax)
  402222:	20 20                	and    %ah,(%rax)
  402224:	20 20                	and    %ah,(%rax)
  402226:	20 20                	and    %ah,(%rax)
  402228:	20 20                	and    %ah,(%rax)
  40222a:	20 20                	and    %ah,(%rax)
  40222c:	20 20                	and    %ah,(%rax)
  40222e:	60                   	(bad)  
  40222f:	49                   	rex.WB
  402230:	49 38 38             	rex.WB cmp %dil,(%r8)
  402233:	38 38                	cmp    %bh,(%rax)
  402235:	38 38                	cmp    %bh,(%rax)
  402237:	38 38                	cmp    %bh,(%rax)
  402239:	38 38                	cmp    %bh,(%rax)
  40223b:	38 38                	cmp    %bh,(%rax)
  40223d:	38 38                	cmp    %bh,(%rax)
  40223f:	38 38                	cmp    %bh,(%rax)
  402241:	38 62 22             	cmp    %ah,0x22(%rdx)
  402244:	57                   	push   %rdi
  402245:	57                   	push   %rdi
  402246:	5a                   	pop    %rdx
  402247:	5a                   	pop    %rdx
  402248:	5a                   	pop    %rdx
  402249:	5a                   	pop    %rdx
  40224a:	5a                   	pop    %rdx
  40224b:	57                   	push   %rdi
  40224c:	57                   	push   %rdi
  40224d:	57                   	push   %rdi
  40224e:	4d                   	rex.WRB
  40224f:	4d 5a                	rex.WRB pop %r10
  402251:	5a                   	pop    %rdx
  402252:	5a                   	pop    %rdx
  402253:	5a                   	pop    %rdx
  402254:	5a                   	pop    %rdx
  402255:	5a                   	pop    %rdx
  402256:	49 38 38             	rex.WB cmp %dil,(%r8)
  402259:	38 38                	cmp    %bh,(%rax)
  40225b:	38 38                	cmp    %bh,(%rax)
  40225d:	38 38                	cmp    %bh,(%rax)
  40225f:	38 49 38             	cmp    %cl,0x38(%rcx)
  402262:	38 38                	cmp    %bh,(%rax)
  402264:	38 38                	cmp    %bh,(%rax)
  402266:	38 62 20             	cmp    %ah,0x20(%rdx)
  402269:	20 20                	and    %ah,(%rax)
  40226b:	20 20                	and    %ah,(%rax)
  40226d:	20 20                	and    %ah,(%rax)
  40226f:	20 20                	and    %ah,(%rax)
  402271:	20 20                	and    %ah,(%rax)
  402273:	20 20                	and    %ah,(%rax)
  402275:	20 20                	and    %ah,(%rax)
  402277:	20 20                	and    %ah,(%rax)
  402279:	20 20                	and    %ah,(%rax)
  40227b:	20 20                	and    %ah,(%rax)
  40227d:	20 60 49             	and    %ah,0x49(%rax)
  402280:	49 38 38             	rex.WB cmp %dil,(%r8)
  402283:	38 38                	cmp    %bh,(%rax)
  402285:	38 38                	cmp    %bh,(%rax)
  402287:	38 38                	cmp    %bh,(%rax)
  402289:	38 38                	cmp    %bh,(%rax)
  40228b:	38 38                	cmp    %bh,(%rax)
  40228d:	38 38                	cmp    %bh,(%rax)
  40228f:	38 38                	cmp    %bh,(%rax)
  402291:	38 3b                	cmp    %bh,(%rbx)
  402293:	5a                   	pop    %rdx
  402294:	5a                   	pop    %rdx
  402295:	4d                   	rex.WRB
  402296:	4d                   	rex.WRB
  402297:	4d                   	rex.WRB
  402298:	4d                   	rex.WRB
  402299:	4d                   	rex.WRB
  40229a:	4d 5a                	rex.WRB pop %r10
  40229c:	5a                   	pop    %rdx
  40229d:	5a                   	pop    %rdx
  40229e:	5a                   	pop    %rdx
  40229f:	5a                   	pop    %rdx
  4022a0:	5a                   	pop    %rdx
  4022a1:	5a                   	pop    %rdx
  4022a2:	5a                   	pop    %rdx
  4022a3:	6c                   	insb   (%dx),%es:(%rdi)
  4022a4:	6c                   	insb   (%dx),%es:(%rdi)
  4022a5:	49 38 38             	rex.WB cmp %dil,(%r8)
  4022a8:	38 38                	cmp    %bh,(%rax)
  4022aa:	38 38                	cmp    %bh,(%rax)
  4022ac:	38 38                	cmp    %bh,(%rax)
  4022ae:	38 49 38             	cmp    %cl,0x38(%rcx)
  4022b1:	38 38                	cmp    %bh,(%rax)
  4022b3:	38 38                	cmp    %bh,(%rax)
  4022b5:	38 38                	cmp    %bh,(%rax)
  4022b7:	20 20                	and    %ah,(%rax)
  4022b9:	20 20                	and    %ah,(%rax)
  4022bb:	20 20                	and    %ah,(%rax)
  4022bd:	20 20                	and    %ah,(%rax)
  4022bf:	20 20                	and    %ah,(%rax)
  4022c1:	20 20                	and    %ah,(%rax)
  4022c3:	20 20                	and    %ah,(%rax)
  4022c5:	20 20                	and    %ah,(%rax)
  4022c7:	20 20                	and    %ah,(%rax)
  4022c9:	20 20                	and    %ah,(%rax)
  4022cb:	20 20                	and    %ah,(%rax)
  4022cd:	20 60 49             	and    %ah,0x49(%rax)
  4022d0:	49 38 38             	rex.WB cmp %dil,(%r8)
  4022d3:	38 38                	cmp    %bh,(%rax)
  4022d5:	38 38                	cmp    %bh,(%rax)
  4022d7:	38 38                	cmp    %bh,(%rax)
  4022d9:	38 38                	cmp    %bh,(%rax)
  4022db:	38 38                	cmp    %bh,(%rax)
  4022dd:	38 38                	cmp    %bh,(%rax)
  4022df:	38 38                	cmp    %bh,(%rax)
  4022e1:	20 60 3b             	and    %ah,0x3b(%rax)
  4022e4:	6c                   	insb   (%dx),%es:(%rdi)
  4022e5:	5a                   	pop    %rdx
  4022e6:	5a                   	pop    %rdx
  4022e7:	5a                   	pop    %rdx
  4022e8:	5a                   	pop    %rdx
  4022e9:	5a                   	pop    %rdx
  4022ea:	5a                   	pop    %rdx
  4022eb:	5a                   	pop    %rdx
  4022ec:	5a                   	pop    %rdx
  4022ed:	5a                   	pop    %rdx
  4022ee:	5a                   	pop    %rdx
  4022ef:	5a                   	pop    %rdx
  4022f0:	6c                   	insb   (%dx),%es:(%rdi)
  4022f1:	6c                   	insb   (%dx),%es:(%rdi)
  4022f2:	6c                   	insb   (%dx),%es:(%rdi)
  4022f3:	6c                   	insb   (%dx),%es:(%rdi)
  4022f4:	6c                   	insb   (%dx),%es:(%rdi)
  4022f5:	38 38                	cmp    %bh,(%rax)
  4022f7:	38 38                	cmp    %bh,(%rax)
  4022f9:	38 38                	cmp    %bh,(%rax)
  4022fb:	38 38                	cmp    %bh,(%rax)
  4022fd:	38 49 38             	cmp    %cl,0x38(%rcx)
  402300:	38 38                	cmp    %bh,(%rax)
  402302:	38 38                	cmp    %bh,(%rax)
  402304:	38 38                	cmp    %bh,(%rax)
  402306:	2c 20                	sub    $0x20,%al
  402308:	20 20                	and    %ah,(%rax)
  40230a:	20 20                	and    %ah,(%rax)
  40230c:	20 20                	and    %ah,(%rax)
  40230e:	20 20                	and    %ah,(%rax)
  402310:	20 20                	and    %ah,(%rax)
  402312:	20 20                	and    %ah,(%rax)
  402314:	20 20                	and    %ah,(%rax)
  402316:	20 20                	and    %ah,(%rax)
  402318:	20 20                	and    %ah,(%rax)
  40231a:	20 20                	and    %ah,(%rax)
  40231c:	20 20                	and    %ah,(%rax)
  40231e:	49                   	rex.WB
  40231f:	49 38 38             	rex.WB cmp %dil,(%r8)
  402322:	38 38                	cmp    %bh,(%rax)
  402324:	38 38                	cmp    %bh,(%rax)
  402326:	38 38                	cmp    %bh,(%rax)
  402328:	38 38                	cmp    %bh,(%rax)
  40232a:	38 38                	cmp    %bh,(%rax)
  40232c:	38 38                	cmp    %bh,(%rax)
  40232e:	38 38                	cmp    %bh,(%rax)
  402330:	2c 20                	sub    $0x20,%al
  402332:	60                   	(bad)  
  402333:	3b 6c 6c 6c          	cmp    0x6c(%rsp,%rbp,2),%ebp
  402337:	5a                   	pop    %rdx
  402338:	5a                   	pop    %rdx
  402339:	5a                   	pop    %rdx
  40233a:	5a                   	pop    %rdx
  40233b:	6c                   	insb   (%dx),%es:(%rdi)
  40233c:	6c                   	insb   (%dx),%es:(%rdi)
  40233d:	6c                   	insb   (%dx),%es:(%rdi)
  40233e:	6c                   	insb   (%dx),%es:(%rdi)
  40233f:	6c                   	insb   (%dx),%es:(%rdi)
  402340:	6c                   	insb   (%dx),%es:(%rdi)
  402341:	3b 3b                	cmp    (%rbx),%edi
  402343:	2e 59                	cs pop %rcx
  402345:	38 38                	cmp    %bh,(%rax)
  402347:	38 38                	cmp    %bh,(%rax)
  402349:	38 38                	cmp    %bh,(%rax)
  40234b:	38 38                	cmp    %bh,(%rax)
  40234d:	49 38 38             	rex.WB cmp %dil,(%r8)
  402350:	38 38                	cmp    %bh,(%rax)
  402352:	38 38                	cmp    %bh,(%rax)
  402354:	38 62 2c             	cmp    %ah,0x2c(%rdx)
  402357:	20 20                	and    %ah,(%rax)
  402359:	20 20                	and    %ah,(%rax)
  40235b:	20 20                	and    %ah,(%rax)
  40235d:	20 20                	and    %ah,(%rax)
  40235f:	20 20                	and    %ah,(%rax)
  402361:	20 20                	and    %ah,(%rax)
  402363:	20 20                	and    %ah,(%rax)
  402365:	20 20                	and    %ah,(%rax)
  402367:	20 20                	and    %ah,(%rax)
  402369:	20 20                	and    %ah,(%rax)
  40236b:	20 2c 49             	and    %ch,(%rcx,%rcx,2)
  40236e:	49 38 38             	rex.WB cmp %dil,(%r8)
  402371:	38 38                	cmp    %bh,(%rax)
  402373:	38 38                	cmp    %bh,(%rax)
  402375:	38 38                	cmp    %bh,(%rax)
  402377:	38 38                	cmp    %bh,(%rax)
  402379:	38 38                	cmp    %bh,(%rax)
  40237b:	38 38                	cmp    %bh,(%rax)
  40237d:	38 38                	cmp    %bh,(%rax)
  40237f:	62                   	(bad)  
  402380:	20 20                	and    %ah,(%rax)
  402382:	20 2e                	and    %ch,(%rsi)
  402384:	3b 3b                	cmp    (%rbx),%edi
  402386:	6c                   	insb   (%dx),%es:(%rdi)
  402387:	6c                   	insb   (%dx),%es:(%rdi)
  402388:	6c                   	insb   (%dx),%es:(%rdi)
  402389:	6c                   	insb   (%dx),%es:(%rdi)
  40238a:	6c                   	insb   (%dx),%es:(%rdi)
  40238b:	6c                   	insb   (%dx),%es:(%rdi)
  40238c:	6c                   	insb   (%dx),%es:(%rdi)
  40238d:	3b 3b                	cmp    (%rbx),%edi
  40238f:	3b 2e                	cmp    (%rsi),%ebp
  402391:	3b 2e                	cmp    (%rsi),%ebp
  402393:	2e 38 38             	cmp    %bh,%cs:(%rax)
  402396:	38 38                	cmp    %bh,(%rax)
  402398:	38 38                	cmp    %bh,(%rax)
  40239a:	38 38                	cmp    %bh,(%rax)
  40239c:	49 38 38             	rex.WB cmp %dil,(%r8)
  40239f:	38 38                	cmp    %bh,(%rax)
  4023a1:	38 38                	cmp    %bh,(%rax)
  4023a3:	38 38                	cmp    %bh,(%rax)
  4023a5:	62                   	(bad)  
  4023a6:	2c 20                	sub    $0x20,%al
  4023a8:	20 20                	and    %ah,(%rax)
  4023aa:	20 20                	and    %ah,(%rax)
  4023ac:	20 20                	and    %ah,(%rax)
  4023ae:	20 20                	and    %ah,(%rax)
  4023b0:	20 20                	and    %ah,(%rax)
  4023b2:	20 20                	and    %ah,(%rax)
  4023b4:	20 20                	and    %ah,(%rax)
  4023b6:	20 20                	and    %ah,(%rax)
  4023b8:	20 20                	and    %ah,(%rax)
  4023ba:	20 49 49             	and    %cl,0x49(%rcx)
  4023bd:	38 38                	cmp    %bh,(%rax)
  4023bf:	38 38                	cmp    %bh,(%rax)
  4023c1:	38 38                	cmp    %bh,(%rax)
  4023c3:	38 38                	cmp    %bh,(%rax)
  4023c5:	38 38                	cmp    %bh,(%rax)
  4023c7:	38 38                	cmp    %bh,(%rax)
  4023c9:	38 38                	cmp    %bh,(%rax)
  4023cb:	38 50 5a             	cmp    %dl,0x5a(%rax)
  4023ce:	49 3b 2e             	cmp    (%r14),%rbp
  4023d1:	20 20                	and    %ah,(%rax)
  4023d3:	2e 60                	cs (bad) 
  4023d5:	3b 3b                	cmp    (%rbx),%edi
  4023d7:	3b 2e                	cmp    (%rsi),%ebp
  4023d9:	3b 3b                	cmp    (%rbx),%edi
  4023db:	3b 2e                	cmp    (%rsi),%ebp
  4023dd:	2e 3b 20             	cmp    %cs:(%rax),%esp
  4023e0:	2e 2e 2e 38 38       	cs cs cmp %bh,%cs:(%rax)
  4023e5:	38 38                	cmp    %bh,(%rax)
  4023e7:	38 38                	cmp    %bh,(%rax)
  4023e9:	38 38                	cmp    %bh,(%rax)
  4023eb:	49 38 38             	rex.WB cmp %dil,(%r8)
  4023ee:	38 38                	cmp    %bh,(%rax)
  4023f0:	38 38                	cmp    %bh,(%rax)
  4023f2:	38 38                	cmp    %bh,(%rax)
  4023f4:	38 38                	cmp    %bh,(%rax)
  4023f6:	2c 20                	sub    $0x20,%al
  4023f8:	20 20                	and    %ah,(%rax)
  4023fa:	20 20                	and    %ah,(%rax)
  4023fc:	20 20                	and    %ah,(%rax)
  4023fe:	20 20                	and    %ah,(%rax)
  402400:	20 20                	and    %ah,(%rax)
  402402:	20 20                	and    %ah,(%rax)
  402404:	20 20                	and    %ah,(%rax)
  402406:	20 20                	and    %ah,(%rax)
  402408:	20 20                	and    %ah,(%rax)
  40240a:	49                   	rex.WB
  40240b:	49 38 38             	rex.WB cmp %dil,(%r8)
  40240e:	38 38                	cmp    %bh,(%rax)
  402410:	38 38                	cmp    %bh,(%rax)
  402412:	38 38                	cmp    %bh,(%rax)
  402414:	38 38                	cmp    %bh,(%rax)
  402416:	38 38                	cmp    %bh,(%rax)
  402418:	50                   	push   %rax
  402419:	5a                   	pop    %rdx
  40241a:	3b 3b                	cmp    (%rbx),%edi
  40241c:	27                   	(bad)  
  40241d:	3b 3b                	cmp    (%rbx),%edi
  40241f:	2e 20 20             	and    %ah,%cs:(%rax)
  402422:	20 3b                	and    %bh,(%rbx)
  402424:	2e 20 2e             	and    %ch,%cs:(%rsi)
  402427:	3b 2e                	cmp    (%rsi),%ebp
  402429:	20 20                	and    %ah,(%rax)
  40242b:	2e 3b 2e             	cmp    %cs:(%rsi),%ebp
  40242e:	20 2e                	and    %ch,(%rsi)
  402430:	2e 20 59 38          	and    %bl,%cs:0x38(%rcx)
  402434:	38 38                	cmp    %bh,(%rax)
  402436:	38 38                	cmp    %bh,(%rax)
  402438:	38 38                	cmp    %bh,(%rax)
  40243a:	49 38 38             	rex.WB cmp %dil,(%r8)
  40243d:	38 38                	cmp    %bh,(%rax)
  40243f:	38 38                	cmp    %bh,(%rax)
  402441:	38 38                	cmp    %bh,(%rax)
  402443:	38 38                	cmp    %bh,(%rax)
  402445:	38 62 2c             	cmp    %ah,0x2c(%rdx)
  402448:	20 20                	and    %ah,(%rax)
  40244a:	20 20                	and    %ah,(%rax)
  40244c:	20 20                	and    %ah,(%rax)
  40244e:	20 20                	and    %ah,(%rax)
  402450:	20 20                	and    %ah,(%rax)
  402452:	20 20                	and    %ah,(%rax)
  402454:	20 20                	and    %ah,(%rax)
  402456:	20 20                	and    %ah,(%rax)
  402458:	2c 49                	sub    $0x49,%al
  40245a:	49 38 38             	rex.WB cmp %dil,(%r8)
  40245d:	38 38                	cmp    %bh,(%rax)
  40245f:	38 38                	cmp    %bh,(%rax)
  402461:	38 38                	cmp    %bh,(%rax)
  402463:	38 50 5a             	cmp    %dl,0x5a(%rax)
  402466:	3b 3b                	cmp    (%rbx),%edi
  402468:	27                   	(bad)  
  402469:	20 20                	and    %ah,(%rax)
  40246b:	20 20                	and    %ah,(%rax)
  40246d:	20 20                	and    %ah,(%rax)
  40246f:	20 20                	and    %ah,(%rax)
  402471:	20 20                	and    %ah,(%rax)
  402473:	20 20                	and    %ah,(%rax)
  402475:	20 20                	and    %ah,(%rax)
  402477:	20 20                	and    %ah,(%rax)
  402479:	20 20                	and    %ah,(%rax)
  40247b:	20 20                	and    %ah,(%rax)
  40247d:	20 20                	and    %ah,(%rax)
  40247f:	20 20                	and    %ah,(%rax)
  402481:	60                   	(bad)  
  402482:	38 38                	cmp    %bh,(%rax)
  402484:	38 38                	cmp    %bh,(%rax)
  402486:	38 38                	cmp    %bh,(%rax)
  402488:	38 49 38             	cmp    %cl,0x38(%rcx)
  40248b:	38 38                	cmp    %bh,(%rax)
  40248d:	38 38                	cmp    %bh,(%rax)
  40248f:	38 38                	cmp    %bh,(%rax)
  402491:	38 38                	cmp    %bh,(%rax)
  402493:	38 38                	cmp    %bh,(%rax)
  402495:	38 38                	cmp    %bh,(%rax)
  402497:	62                   	(bad)  
  402498:	2c 20                	sub    $0x20,%al
  40249a:	20 20                	and    %ah,(%rax)
  40249c:	20 20                	and    %ah,(%rax)
  40249e:	20 20                	and    %ah,(%rax)
  4024a0:	20 20                	and    %ah,(%rax)
  4024a2:	20 20                	and    %ah,(%rax)
  4024a4:	20 20                	and    %ah,(%rax)
  4024a6:	20 49 49             	and    %cl,0x49(%rcx)
  4024a9:	38 38                	cmp    %bh,(%rax)
  4024ab:	38 38                	cmp    %bh,(%rax)
  4024ad:	38 38                	cmp    %bh,(%rax)
  4024af:	38 38                	cmp    %bh,(%rax)
  4024b1:	38 27                	cmp    %ah,(%rdi)
  4024b3:	20 20                	and    %ah,(%rax)
  4024b5:	20 20                	and    %ah,(%rax)
  4024b7:	20 20                	and    %ah,(%rax)
  4024b9:	20 20                	and    %ah,(%rax)
  4024bb:	20 20                	and    %ah,(%rax)
  4024bd:	20 20                	and    %ah,(%rax)
  4024bf:	20 20                	and    %ah,(%rax)
  4024c1:	20 20                	and    %ah,(%rax)
  4024c3:	20 20                	and    %ah,(%rax)
  4024c5:	20 20                	and    %ah,(%rax)
  4024c7:	20 20                	and    %ah,(%rax)
  4024c9:	20 20                	and    %ah,(%rax)
  4024cb:	20 20                	and    %ah,(%rax)
  4024cd:	20 20                	and    %ah,(%rax)
  4024cf:	20 20                	and    %ah,(%rax)
  4024d1:	38 38                	cmp    %bh,(%rax)
  4024d3:	38 38                	cmp    %bh,(%rax)
  4024d5:	38 38                	cmp    %bh,(%rax)
  4024d7:	49 38 38             	rex.WB cmp %dil,(%r8)
  4024da:	38 38                	cmp    %bh,(%rax)
  4024dc:	38 38                	cmp    %bh,(%rax)
  4024de:	38 38                	cmp    %bh,(%rax)
  4024e0:	38 38                	cmp    %bh,(%rax)
  4024e2:	38 38                	cmp    %bh,(%rax)
  4024e4:	38 38                	cmp    %bh,(%rax)
  4024e6:	38 38                	cmp    %bh,(%rax)
  4024e8:	62                   	(bad)  
  4024e9:	20 20                	and    %ah,(%rax)
  4024eb:	20 20                	and    %ah,(%rax)
  4024ed:	20 20                	and    %ah,(%rax)
  4024ef:	20 20                	and    %ah,(%rax)
  4024f1:	20 20                	and    %ah,(%rax)
  4024f3:	20 20                	and    %ah,(%rax)
  4024f5:	2c 49                	sub    $0x49,%al
  4024f7:	49 38 38             	rex.WB cmp %dil,(%r8)
  4024fa:	38 38                	cmp    %bh,(%rax)
  4024fc:	38 38                	cmp    %bh,(%rax)
  4024fe:	38 38                	cmp    %bh,(%rax)
  402500:	38 20                	cmp    %ah,(%rax)
  402502:	20 20                	and    %ah,(%rax)
  402504:	20 20                	and    %ah,(%rax)
  402506:	20 20                	and    %ah,(%rax)
  402508:	20 20                	and    %ah,(%rax)
  40250a:	20 20                	and    %ah,(%rax)
  40250c:	20 20                	and    %ah,(%rax)
  40250e:	20 20                	and    %ah,(%rax)
  402510:	20 20                	and    %ah,(%rax)
  402512:	20 20                	and    %ah,(%rax)
  402514:	20 20                	and    %ah,(%rax)
  402516:	20 20                	and    %ah,(%rax)
  402518:	20 20                	and    %ah,(%rax)
  40251a:	20 20                	and    %ah,(%rax)
  40251c:	20 20                	and    %ah,(%rax)
  40251e:	20 2c 38             	and    %ch,(%rax,%rdi,1)
  402521:	38 38                	cmp    %bh,(%rax)
  402523:	38 38                	cmp    %bh,(%rax)
  402525:	38 49 38             	cmp    %cl,0x38(%rcx)
  402528:	38 38                	cmp    %bh,(%rax)
  40252a:	38 38                	cmp    %bh,(%rax)
  40252c:	38 38                	cmp    %bh,(%rax)
  40252e:	38 38                	cmp    %bh,(%rax)
  402530:	38 38                	cmp    %bh,(%rax)
  402532:	38 38                	cmp    %bh,(%rax)
  402534:	38 38                	cmp    %bh,(%rax)
  402536:	38 38                	cmp    %bh,(%rax)
  402538:	20 20                	and    %ah,(%rax)
  40253a:	20 20                	and    %ah,(%rax)
  40253c:	20 20                	and    %ah,(%rax)
  40253e:	20 20                	and    %ah,(%rax)
  402540:	20 20                	and    %ah,(%rax)
  402542:	20 2c 64             	and    %ch,(%rsp,%riz,2)
  402545:	38 38                	cmp    %bh,(%rax)
  402547:	38 38                	cmp    %bh,(%rax)
  402549:	38 38                	cmp    %bh,(%rax)
  40254b:	38 38                	cmp    %bh,(%rax)
  40254d:	38 38                	cmp    %bh,(%rax)
  40254f:	38 20                	cmp    %ah,(%rax)
  402551:	20 20                	and    %ah,(%rax)
  402553:	20 20                	and    %ah,(%rax)
  402555:	20 20                	and    %ah,(%rax)
  402557:	20 20                	and    %ah,(%rax)
  402559:	20 20                	and    %ah,(%rax)
  40255b:	20 20                	and    %ah,(%rax)
  40255d:	20 20                	and    %ah,(%rax)
  40255f:	20 20                	and    %ah,(%rax)
  402561:	20 20                	and    %ah,(%rax)
  402563:	20 20                	and    %ah,(%rax)
  402565:	20 20                	and    %ah,(%rax)
  402567:	20 20                	and    %ah,(%rax)
  402569:	20 20                	and    %ah,(%rax)
  40256b:	20 20                	and    %ah,(%rax)
  40256d:	20 64 38 38          	and    %ah,0x38(%rax,%rdi,1)
  402571:	38 38                	cmp    %bh,(%rax)
  402573:	38 38                	cmp    %bh,(%rax)
  402575:	49 38 38             	rex.WB cmp %dil,(%r8)
  402578:	38 38                	cmp    %bh,(%rax)
  40257a:	38 38                	cmp    %bh,(%rax)
  40257c:	38 38                	cmp    %bh,(%rax)
  40257e:	38 38                	cmp    %bh,(%rax)
  402580:	5a                   	pop    %rdx
  402581:	5a                   	pop    %rdx
  402582:	5a                   	pop    %rdx
  402583:	5a                   	pop    %rdx
  402584:	5a                   	pop    %rdx
  402585:	5a                   	pop    %rdx
  402586:	5a                   	pop    %rdx
  402587:	20 20                	and    %ah,(%rax)
  402589:	20 20                	and    %ah,(%rax)
  40258b:	20 20                	and    %ah,(%rax)
  40258d:	20 20                	and    %ah,(%rax)
  40258f:	2c 61                	sub    $0x61,%al
  402591:	64 38 38             	cmp    %bh,%fs:(%rax)
  402594:	38 38                	cmp    %bh,(%rax)
  402596:	38 38                	cmp    %bh,(%rax)
  402598:	38 38                	cmp    %bh,(%rax)
  40259a:	38 38                	cmp    %bh,(%rax)
  40259c:	38 38                	cmp    %bh,(%rax)
  40259e:	49 20 20             	rex.WB and %spl,(%r8)
  4025a1:	20 20                	and    %ah,(%rax)
  4025a3:	20 20                	and    %ah,(%rax)
  4025a5:	20 20                	and    %ah,(%rax)
  4025a7:	20 20                	and    %ah,(%rax)
  4025a9:	20 20                	and    %ah,(%rax)
  4025ab:	20 20                	and    %ah,(%rax)
  4025ad:	20 20                	and    %ah,(%rax)
  4025af:	20 20                	and    %ah,(%rax)
  4025b1:	20 20                	and    %ah,(%rax)
  4025b3:	20 20                	and    %ah,(%rax)
  4025b5:	20 20                	and    %ah,(%rax)
  4025b7:	20 20                	and    %ah,(%rax)
  4025b9:	20 20                	and    %ah,(%rax)
  4025bb:	20 20                	and    %ah,(%rax)
  4025bd:	38 38                	cmp    %bh,(%rax)
  4025bf:	38 38                	cmp    %bh,(%rax)
  4025c1:	38 38                	cmp    %bh,(%rax)
  4025c3:	38 49 38             	cmp    %cl,0x38(%rcx)
  4025c6:	38 38                	cmp    %bh,(%rax)
  4025c8:	38 5a 5a             	cmp    %bl,0x5a(%rdx)
  4025cb:	5a                   	pop    %rdx
  4025cc:	5a                   	pop    %rdx
  4025cd:	5a                   	pop    %rdx
  4025ce:	5a                   	pop    %rdx
  4025cf:	5a                   	pop    %rdx
  4025d0:	5a                   	pop    %rdx
  4025d1:	5a                   	pop    %rdx
  4025d2:	5a                   	pop    %rdx
  4025d3:	5a                   	pop    %rdx
  4025d4:	5a                   	pop    %rdx
  4025d5:	5a                   	pop    %rdx
  4025d6:	20 20                	and    %ah,(%rax)
  4025d8:	20 20                	and    %ah,(%rax)
  4025da:	20 20                	and    %ah,(%rax)
  4025dc:	2c 64                	sub    $0x64,%al
  4025de:	38 38                	cmp    %bh,(%rax)
  4025e0:	38 38                	cmp    %bh,(%rax)
  4025e2:	38 38                	cmp    %bh,(%rax)
  4025e4:	38 38                	cmp    %bh,(%rax)
  4025e6:	38 38                	cmp    %bh,(%rax)
  4025e8:	38 38                	cmp    %bh,(%rax)
  4025ea:	38 38                	cmp    %bh,(%rax)
  4025ec:	38 27                	cmp    %ah,(%rdi)
  4025ee:	20 20                	and    %ah,(%rax)
  4025f0:	20 20                	and    %ah,(%rax)
  4025f2:	20 20                	and    %ah,(%rax)
  4025f4:	20 20                	and    %ah,(%rax)
  4025f6:	20 20                	and    %ah,(%rax)
  4025f8:	20 20                	and    %ah,(%rax)
  4025fa:	20 20                	and    %ah,(%rax)
  4025fc:	20 20                	and    %ah,(%rax)
  4025fe:	20 20                	and    %ah,(%rax)
  402600:	20 20                	and    %ah,(%rax)
  402602:	20 20                	and    %ah,(%rax)
  402604:	20 20                	and    %ah,(%rax)
  402606:	20 20                	and    %ah,(%rax)
  402608:	20 20                	and    %ah,(%rax)
  40260a:	20 20                	and    %ah,(%rax)
  40260c:	38 38                	cmp    %bh,(%rax)
  40260e:	38 38                	cmp    %bh,(%rax)
  402610:	38 38                	cmp    %bh,(%rax)
  402612:	49 5a                	rex.WB pop %r10
  402614:	5a                   	pop    %rdx
  402615:	5a                   	pop    %rdx
  402616:	5a                   	pop    %rdx
  402617:	5a                   	pop    %rdx
  402618:	5a                   	pop    %rdx
  402619:	5a                   	pop    %rdx
  40261a:	5a                   	pop    %rdx
  40261b:	5a                   	pop    %rdx
  40261c:	5a                   	pop    %rdx
  40261d:	5a                   	pop    %rdx
  40261e:	5a                   	pop    %rdx
  40261f:	5a                   	pop    %rdx
  402620:	5a                   	pop    %rdx
  402621:	5a                   	pop    %rdx
  402622:	5a                   	pop    %rdx
  402623:	5a                   	pop    %rdx
  402624:	5a                   	pop    %rdx
  402625:	20 20                	and    %ah,(%rax)
  402627:	20 20                	and    %ah,(%rax)
  402629:	2c 64                	sub    $0x64,%al
  40262b:	38 38                	cmp    %bh,(%rax)
  40262d:	38 38                	cmp    %bh,(%rax)
  40262f:	38 38                	cmp    %bh,(%rax)
  402631:	38 38                	cmp    %bh,(%rax)
  402633:	38 38                	cmp    %bh,(%rax)
  402635:	38 38                	cmp    %bh,(%rax)
  402637:	50                   	push   %rax
  402638:	27                   	(bad)  
  402639:	38 50 27             	cmp    %dl,0x27(%rax)
  40263c:	20 20                	and    %ah,(%rax)
  40263e:	20 20                	and    %ah,(%rax)
  402640:	20 20                	and    %ah,(%rax)
  402642:	20 20                	and    %ah,(%rax)
  402644:	20 20                	and    %ah,(%rax)
  402646:	20 20                	and    %ah,(%rax)
  402648:	20 20                	and    %ah,(%rax)
  40264a:	20 20                	and    %ah,(%rax)
  40264c:	20 20                	and    %ah,(%rax)
  40264e:	20 20                	and    %ah,(%rax)
  402650:	20 20                	and    %ah,(%rax)
  402652:	20 20                	and    %ah,(%rax)
  402654:	20 20                	and    %ah,(%rax)
  402656:	20 20                	and    %ah,(%rax)
  402658:	20 20                	and    %ah,(%rax)
  40265a:	20 59 38             	and    %bl,0x38(%rcx)
  40265d:	38 38                	cmp    %bh,(%rax)
  40265f:	5a                   	pop    %rdx
  402660:	5a                   	pop    %rdx
  402661:	5a                   	pop    %rdx
  402662:	5a                   	pop    %rdx
  402663:	5a                   	pop    %rdx
  402664:	5a                   	pop    %rdx
  402665:	5a                   	pop    %rdx
  402666:	5a                   	pop    %rdx
  402667:	5a                   	pop    %rdx
  402668:	5a                   	pop    %rdx
  402669:	5a                   	pop    %rdx
  40266a:	5a                   	pop    %rdx
  40266b:	5a                   	pop    %rdx
  40266c:	5a                   	pop    %rdx
  40266d:	5a                   	pop    %rdx
  40266e:	5a                   	pop    %rdx
  40266f:	5a                   	pop    %rdx
  402670:	5a                   	pop    %rdx
  402671:	5a                   	pop    %rdx
  402672:	5a                   	pop    %rdx
  402673:	5a                   	pop    %rdx
  402674:	20 20                	and    %ah,(%rax)
  402676:	20 2c 38             	and    %ch,(%rax,%rdi,1)
  402679:	38 38                	cmp    %bh,(%rax)
  40267b:	38 38                	cmp    %bh,(%rax)
  40267d:	38 38                	cmp    %bh,(%rax)
  40267f:	38 38                	cmp    %bh,(%rax)
  402681:	38 38                	cmp    %bh,(%rax)
  402683:	38 38                	cmp    %bh,(%rax)
  402685:	2c 20                	sub    $0x20,%al
  402687:	20 22                	and    %ah,(%rdx)
  402689:	20 20                	and    %ah,(%rax)
  40268b:	20 20                	and    %ah,(%rax)
  40268d:	20 20                	and    %ah,(%rax)
  40268f:	20 20                	and    %ah,(%rax)
  402691:	20 20                	and    %ah,(%rax)
  402693:	20 20                	and    %ah,(%rax)
  402695:	20 20                	and    %ah,(%rax)
  402697:	20 20                	and    %ah,(%rax)
  402699:	20 20                	and    %ah,(%rax)
  40269b:	20 20                	and    %ah,(%rax)
  40269d:	20 20                	and    %ah,(%rax)
  40269f:	20 20                	and    %ah,(%rax)
  4026a1:	20 20                	and    %ah,(%rax)
  4026a3:	20 20                	and    %ah,(%rax)
  4026a5:	20 20                	and    %ah,(%rax)
  4026a7:	20 20                	and    %ah,(%rax)
  4026a9:	20 2c 5a             	and    %ch,(%rdx,%rbx,2)
  4026ac:	5a                   	pop    %rdx
  4026ad:	5a                   	pop    %rdx
  4026ae:	5a                   	pop    %rdx
  4026af:	5a                   	pop    %rdx
  4026b0:	5a                   	pop    %rdx
  4026b1:	5a                   	pop    %rdx
  4026b2:	5a                   	pop    %rdx
  4026b3:	5a                   	pop    %rdx
  4026b4:	5a                   	pop    %rdx
  4026b5:	5a                   	pop    %rdx
  4026b6:	5a                   	pop    %rdx
  4026b7:	5a                   	pop    %rdx
  4026b8:	5a                   	pop    %rdx
  4026b9:	5a                   	pop    %rdx
  4026ba:	5a                   	pop    %rdx
  4026bb:	5a                   	pop    %rdx
  4026bc:	5a                   	pop    %rdx
  4026bd:	5a                   	pop    %rdx
  4026be:	5a                   	pop    %rdx
  4026bf:	5a                   	pop    %rdx
  4026c0:	5a                   	pop    %rdx
  4026c1:	5a                   	pop    %rdx
  4026c2:	5a                   	pop    %rdx
  4026c3:	20 20                	and    %ah,(%rax)
  4026c5:	64 38 38             	cmp    %bh,%fs:(%rax)
  4026c8:	38 38                	cmp    %bh,(%rax)
  4026ca:	38 38                	cmp    %bh,(%rax)
  4026cc:	38 38                	cmp    %bh,(%rax)
  4026ce:	38 38                	cmp    %bh,(%rax)
  4026d0:	38 38                	cmp    %bh,(%rax)
  4026d2:	38 38                	cmp    %bh,(%rax)
  4026d4:	38 2c 20             	cmp    %ch,(%rax,%riz,1)
  4026d7:	20 20                	and    %ah,(%rax)
  4026d9:	20 20                	and    %ah,(%rax)
  4026db:	20 20                	and    %ah,(%rax)
  4026dd:	20 20                	and    %ah,(%rax)
  4026df:	20 20                	and    %ah,(%rax)
  4026e1:	20 20                	and    %ah,(%rax)
  4026e3:	20 20                	and    %ah,(%rax)
  4026e5:	20 20                	and    %ah,(%rax)
  4026e7:	20 20                	and    %ah,(%rax)
  4026e9:	20 20                	and    %ah,(%rax)
  4026eb:	20 20                	and    %ah,(%rax)
  4026ed:	20 20                	and    %ah,(%rax)
  4026ef:	20 20                	and    %ah,(%rax)
  4026f1:	20 20                	and    %ah,(%rax)
  4026f3:	20 20                	and    %ah,(%rax)
  4026f5:	20 2c 5a             	and    %ch,(%rdx,%rbx,2)
  4026f8:	5a                   	pop    %rdx
  4026f9:	5a                   	pop    %rdx
  4026fa:	5a                   	pop    %rdx
  4026fb:	5a                   	pop    %rdx
  4026fc:	5a                   	pop    %rdx
  4026fd:	5a                   	pop    %rdx
  4026fe:	5a                   	pop    %rdx
  4026ff:	5a                   	pop    %rdx
  402700:	5a                   	pop    %rdx
  402701:	5a                   	pop    %rdx
  402702:	5a                   	pop    %rdx
  402703:	5a                   	pop    %rdx
  402704:	5a                   	pop    %rdx
  402705:	5a                   	pop    %rdx
  402706:	5a                   	pop    %rdx
  402707:	5a                   	pop    %rdx
  402708:	5a                   	pop    %rdx
  402709:	5a                   	pop    %rdx
  40270a:	5a                   	pop    %rdx
  40270b:	5a                   	pop    %rdx
  40270c:	5a                   	pop    %rdx
  40270d:	5a                   	pop    %rdx
  40270e:	5a                   	pop    %rdx
  40270f:	5a                   	pop    %rdx
  402710:	5a                   	pop    %rdx
  402711:	5a                   	pop    %rdx
  402712:	20 20                	and    %ah,(%rax)
  402714:	38 38                	cmp    %bh,(%rax)
  402716:	38 38                	cmp    %bh,(%rax)
  402718:	38 38                	cmp    %bh,(%rax)
  40271a:	38 38                	cmp    %bh,(%rax)
  40271c:	38 38                	cmp    %bh,(%rax)
  40271e:	38 38                	cmp    %bh,(%rax)
  402720:	38 38                	cmp    %bh,(%rax)
  402722:	38 38                	cmp    %bh,(%rax)
  402724:	38 38                	cmp    %bh,(%rax)
  402726:	61                   	(bad)  
  402727:	2c 20                	sub    $0x20,%al
  402729:	20 20                	and    %ah,(%rax)
  40272b:	20 20                	and    %ah,(%rax)
  40272d:	20 5f 20             	and    %bl,0x20(%rdi)
  402730:	20 20                	and    %ah,(%rax)
  402732:	20 20                	and    %ah,(%rax)
  402734:	20 20                	and    %ah,(%rax)
  402736:	20 20                	and    %ah,(%rax)
  402738:	20 20                	and    %ah,(%rax)
  40273a:	20 20                	and    %ah,(%rax)
  40273c:	20 20                	and    %ah,(%rax)
  40273e:	20 20                	and    %ah,(%rax)
  402740:	20 20                	and    %ah,(%rax)
  402742:	20 2c 5a             	and    %ch,(%rdx,%rbx,2)
  402745:	5a                   	pop    %rdx
  402746:	5a                   	pop    %rdx
  402747:	5a                   	pop    %rdx
  402748:	5a                   	pop    %rdx
  402749:	5a                   	pop    %rdx
  40274a:	5a                   	pop    %rdx
  40274b:	5a                   	pop    %rdx
  40274c:	5a                   	pop    %rdx
  40274d:	5a                   	pop    %rdx
  40274e:	5a                   	pop    %rdx
  40274f:	5a                   	pop    %rdx
  402750:	5a                   	pop    %rdx
  402751:	5a                   	pop    %rdx
  402752:	5a                   	pop    %rdx
  402753:	5a                   	pop    %rdx
  402754:	5a                   	pop    %rdx
  402755:	5a                   	pop    %rdx
  402756:	5a                   	pop    %rdx
  402757:	5a                   	pop    %rdx
  402758:	38 38                	cmp    %bh,(%rax)
  40275a:	38 38                	cmp    %bh,(%rax)
  40275c:	38 38                	cmp    %bh,(%rax)
  40275e:	38 38                	cmp    %bh,(%rax)
  402760:	38 20                	cmp    %ah,(%rax)
  402762:	20 38                	and    %bh,(%rax)
  402764:	38 38                	cmp    %bh,(%rax)
  402766:	38 38                	cmp    %bh,(%rax)
  402768:	38 38                	cmp    %bh,(%rax)
  40276a:	38 38                	cmp    %bh,(%rax)
  40276c:	38 38                	cmp    %bh,(%rax)
  40276e:	38 38                	cmp    %bh,(%rax)
  402770:	38 38                	cmp    %bh,(%rax)
  402772:	38 38                	cmp    %bh,(%rax)
  402774:	38 38                	cmp    %bh,(%rax)
  402776:	38 38                	cmp    %bh,(%rax)
  402778:	62 61 2c 5f 64       	(bad)  {%k7}
  40277d:	27                   	(bad)  
  40277e:	20 20                	and    %ah,(%rax)
  402780:	20 20                	and    %ah,(%rax)
  402782:	20 20                	and    %ah,(%rax)
  402784:	20 20                	and    %ah,(%rax)
  402786:	20 20                	and    %ah,(%rax)
  402788:	20 20                	and    %ah,(%rax)
  40278a:	20 20                	and    %ah,(%rax)
  40278c:	20 20                	and    %ah,(%rax)
  40278e:	20 20                	and    %ah,(%rax)
  402790:	2c 5a                	sub    $0x5a,%al
  402792:	5a                   	pop    %rdx
  402793:	5a                   	pop    %rdx
  402794:	5a                   	pop    %rdx
  402795:	5a                   	pop    %rdx
  402796:	5a                   	pop    %rdx
  402797:	5a                   	pop    %rdx
  402798:	5a                   	pop    %rdx
  402799:	5a                   	pop    %rdx
  40279a:	5a                   	pop    %rdx
  40279b:	5a                   	pop    %rdx
  40279c:	5a                   	pop    %rdx
  40279d:	5a                   	pop    %rdx
  40279e:	5a                   	pop    %rdx
  40279f:	5a                   	pop    %rdx
  4027a0:	5a                   	pop    %rdx
  4027a1:	5a                   	pop    %rdx
  4027a2:	38 38                	cmp    %bh,(%rax)
  4027a4:	38 38                	cmp    %bh,(%rax)
  4027a6:	38 38                	cmp    %bh,(%rax)
  4027a8:	38 38                	cmp    %bh,(%rax)
  4027aa:	38 38                	cmp    %bh,(%rax)
  4027ac:	38 38                	cmp    %bh,(%rax)
  4027ae:	38 38                	cmp    %bh,(%rax)
  4027b0:	20 20                	and    %ah,(%rax)
  4027b2:	38 38                	cmp    %bh,(%rax)
  4027b4:	38 38                	cmp    %bh,(%rax)
  4027b6:	38 38                	cmp    %bh,(%rax)
  4027b8:	38 38                	cmp    %bh,(%rax)
  4027ba:	38 38                	cmp    %bh,(%rax)
  4027bc:	38 38                	cmp    %bh,(%rax)
  4027be:	38 38                	cmp    %bh,(%rax)
  4027c0:	38 38                	cmp    %bh,(%rax)
  4027c2:	38 38                	cmp    %bh,(%rax)
  4027c4:	38 38                	cmp    %bh,(%rax)
  4027c6:	38 38                	cmp    %bh,(%rax)
  4027c8:	38 38                	cmp    %bh,(%rax)
  4027ca:	38 38                	cmp    %bh,(%rax)
  4027cc:	38 38                	cmp    %bh,(%rax)
  4027ce:	62 62                	(bad)  {%k7}
  4027d0:	62 61                	(bad)  {%k7}
  4027d2:	61                   	(bad)  
  4027d3:	61                   	(bad)  
  4027d4:	2c 2c                	sub    $0x2c,%al
  4027d6:	2c 5f                	sub    $0x5f,%al
  4027d8:	5f                   	pop    %rdi
  4027d9:	5f                   	pop    %rdi
  4027da:	5f                   	pop    %rdi
  4027db:	5f                   	pop    %rdi
  4027dc:	5f                   	pop    %rdi
  4027dd:	2c 5a                	sub    $0x5a,%al
  4027df:	5a                   	pop    %rdx
  4027e0:	5a                   	pop    %rdx
  4027e1:	5a                   	pop    %rdx
  4027e2:	5a                   	pop    %rdx
  4027e3:	5a                   	pop    %rdx
  4027e4:	5a                   	pop    %rdx
  4027e5:	5a                   	pop    %rdx
  4027e6:	5a                   	pop    %rdx
  4027e7:	5a                   	pop    %rdx
  4027e8:	5a                   	pop    %rdx
  4027e9:	5a                   	pop    %rdx
  4027ea:	5a                   	pop    %rdx
  4027eb:	5a                   	pop    %rdx
  4027ec:	5a                   	pop    %rdx
  4027ed:	38 38                	cmp    %bh,(%rax)
  4027ef:	38 38                	cmp    %bh,(%rax)
  4027f1:	38 38                	cmp    %bh,(%rax)
  4027f3:	38 38                	cmp    %bh,(%rax)
  4027f5:	38 38                	cmp    %bh,(%rax)
  4027f7:	38 38                	cmp    %bh,(%rax)
  4027f9:	38 38                	cmp    %bh,(%rax)
  4027fb:	38 38                	cmp    %bh,(%rax)
  4027fd:	38 38                	cmp    %bh,(%rax)
  4027ff:	20 20                	and    %ah,(%rax)
  402801:	38 38                	cmp    %bh,(%rax)
  402803:	38 38                	cmp    %bh,(%rax)
  402805:	38 38                	cmp    %bh,(%rax)
  402807:	38 38                	cmp    %bh,(%rax)
  402809:	38 38                	cmp    %bh,(%rax)
  40280b:	38 38                	cmp    %bh,(%rax)
  40280d:	38 38                	cmp    %bh,(%rax)
  40280f:	38 38                	cmp    %bh,(%rax)
  402811:	38 38                	cmp    %bh,(%rax)
  402813:	38 38                	cmp    %bh,(%rax)
  402815:	38 38                	cmp    %bh,(%rax)
  402817:	38 38                	cmp    %bh,(%rax)
  402819:	38 38                	cmp    %bh,(%rax)
  40281b:	38 38                	cmp    %bh,(%rax)
  40281d:	38 38                	cmp    %bh,(%rax)
  40281f:	38 38                	cmp    %bh,(%rax)
  402821:	38 38                	cmp    %bh,(%rax)
  402823:	38 38                	cmp    %bh,(%rax)
  402825:	38 38                	cmp    %bh,(%rax)
  402827:	38 38                	cmp    %bh,(%rax)
  402829:	38 5a 5a             	cmp    %bl,0x5a(%rdx)
  40282c:	5a                   	pop    %rdx
  40282d:	5a                   	pop    %rdx
  40282e:	5a                   	pop    %rdx
  40282f:	5a                   	pop    %rdx
  402830:	5a                   	pop    %rdx
  402831:	5a                   	pop    %rdx
  402832:	5a                   	pop    %rdx
  402833:	5a                   	pop    %rdx
  402834:	5a                   	pop    %rdx
  402835:	5a                   	pop    %rdx
  402836:	5a                   	pop    %rdx
  402837:	5a                   	pop    %rdx
  402838:	5a                   	pop    %rdx
  402839:	38 38                	cmp    %bh,(%rax)
  40283b:	38 38                	cmp    %bh,(%rax)
  40283d:	38 38                	cmp    %bh,(%rax)
  40283f:	38 38                	cmp    %bh,(%rax)
  402841:	38 38                	cmp    %bh,(%rax)
  402843:	38 38                	cmp    %bh,(%rax)
  402845:	38 38                	cmp    %bh,(%rax)
  402847:	38 38                	cmp    %bh,(%rax)
  402849:	38 38                	cmp    %bh,(%rax)
  40284b:	38 38                	cmp    %bh,(%rax)
  40284d:	38 20                	cmp    %ah,(%rax)
  40284f:	20 38                	and    %bh,(%rax)
  402851:	38 38                	cmp    %bh,(%rax)
  402853:	38 38                	cmp    %bh,(%rax)
  402855:	38 38                	cmp    %bh,(%rax)
  402857:	38 38                	cmp    %bh,(%rax)
  402859:	38 38                	cmp    %bh,(%rax)
  40285b:	38 38                	cmp    %bh,(%rax)
  40285d:	38 38                	cmp    %bh,(%rax)
  40285f:	38 38                	cmp    %bh,(%rax)
  402861:	38 38                	cmp    %bh,(%rax)
  402863:	38 38                	cmp    %bh,(%rax)
  402865:	38 38                	cmp    %bh,(%rax)
  402867:	38 38                	cmp    %bh,(%rax)
  402869:	38 38                	cmp    %bh,(%rax)
  40286b:	38 38                	cmp    %bh,(%rax)
  40286d:	38 38                	cmp    %bh,(%rax)
  40286f:	38 38                	cmp    %bh,(%rax)
  402871:	38 38                	cmp    %bh,(%rax)
  402873:	38 38                	cmp    %bh,(%rax)
  402875:	38 38                	cmp    %bh,(%rax)
  402877:	38 5a 5a             	cmp    %bl,0x5a(%rdx)
  40287a:	5a                   	pop    %rdx
  40287b:	5a                   	pop    %rdx
  40287c:	5a                   	pop    %rdx
  40287d:	5a                   	pop    %rdx
  40287e:	5a                   	pop    %rdx
  40287f:	5a                   	pop    %rdx
  402880:	5a                   	pop    %rdx
  402881:	5a                   	pop    %rdx
  402882:	5a                   	pop    %rdx
  402883:	5a                   	pop    %rdx
  402884:	5a                   	pop    %rdx
  402885:	5a                   	pop    %rdx
  402886:	38 38                	cmp    %bh,(%rax)
  402888:	38 38                	cmp    %bh,(%rax)
  40288a:	38 38                	cmp    %bh,(%rax)
  40288c:	38 38                	cmp    %bh,(%rax)
  40288e:	38 38                	cmp    %bh,(%rax)
  402890:	38 38                	cmp    %bh,(%rax)
  402892:	38 38                	cmp    %bh,(%rax)
  402894:	38 38                	cmp    %bh,(%rax)
  402896:	38 38                	cmp    %bh,(%rax)
  402898:	38 38                	cmp    %bh,(%rax)
  40289a:	38 38                	cmp    %bh,(%rax)
  40289c:	38 20                	cmp    %ah,(%rax)
  40289e:	20 38                	and    %bh,(%rax)
  4028a0:	38 38                	cmp    %bh,(%rax)
  4028a2:	38 38                	cmp    %bh,(%rax)
  4028a4:	38 38                	cmp    %bh,(%rax)
  4028a6:	38 38                	cmp    %bh,(%rax)
  4028a8:	38 38                	cmp    %bh,(%rax)
  4028aa:	38 38                	cmp    %bh,(%rax)
  4028ac:	38 38                	cmp    %bh,(%rax)
  4028ae:	38 38                	cmp    %bh,(%rax)
  4028b0:	38 38                	cmp    %bh,(%rax)
  4028b2:	38 38                	cmp    %bh,(%rax)
  4028b4:	38 38                	cmp    %bh,(%rax)
  4028b6:	38 38                	cmp    %bh,(%rax)
  4028b8:	38 38                	cmp    %bh,(%rax)
  4028ba:	38 38                	cmp    %bh,(%rax)
  4028bc:	38 38                	cmp    %bh,(%rax)
  4028be:	38 38                	cmp    %bh,(%rax)
  4028c0:	38 38                	cmp    %bh,(%rax)
  4028c2:	38 38                	cmp    %bh,(%rax)
  4028c4:	38 38                	cmp    %bh,(%rax)
  4028c6:	5a                   	pop    %rdx
  4028c7:	5a                   	pop    %rdx
  4028c8:	5a                   	pop    %rdx
  4028c9:	5a                   	pop    %rdx
  4028ca:	5a                   	pop    %rdx
  4028cb:	5a                   	pop    %rdx
  4028cc:	5a                   	pop    %rdx
  4028cd:	5a                   	pop    %rdx
  4028ce:	5a                   	pop    %rdx
  4028cf:	5a                   	pop    %rdx
  4028d0:	5a                   	pop    %rdx
  4028d1:	5a                   	pop    %rdx
  4028d2:	5a                   	pop    %rdx
  4028d3:	5a                   	pop    %rdx
  4028d4:	38 38                	cmp    %bh,(%rax)
  4028d6:	38 38                	cmp    %bh,(%rax)
  4028d8:	38 38                	cmp    %bh,(%rax)
  4028da:	38 38                	cmp    %bh,(%rax)
  4028dc:	38 38                	cmp    %bh,(%rax)
  4028de:	38 38                	cmp    %bh,(%rax)
  4028e0:	38 38                	cmp    %bh,(%rax)
  4028e2:	38 38                	cmp    %bh,(%rax)
  4028e4:	38 38                	cmp    %bh,(%rax)
  4028e6:	38 38                	cmp    %bh,(%rax)
  4028e8:	38 38                	cmp    %bh,(%rax)
  4028ea:	38 38                	cmp    %bh,(%rax)
  4028ec:	20 20                	and    %ah,(%rax)
  4028ee:	38 38                	cmp    %bh,(%rax)
  4028f0:	38 38                	cmp    %bh,(%rax)
  4028f2:	38 38                	cmp    %bh,(%rax)
  4028f4:	38 38                	cmp    %bh,(%rax)
  4028f6:	38 38                	cmp    %bh,(%rax)
  4028f8:	38 38                	cmp    %bh,(%rax)
  4028fa:	38 38                	cmp    %bh,(%rax)
  4028fc:	38 38                	cmp    %bh,(%rax)
  4028fe:	38 38                	cmp    %bh,(%rax)
  402900:	38 38                	cmp    %bh,(%rax)
  402902:	38 38                	cmp    %bh,(%rax)
  402904:	38 38                	cmp    %bh,(%rax)
  402906:	38 38                	cmp    %bh,(%rax)
  402908:	38 38                	cmp    %bh,(%rax)
  40290a:	38 38                	cmp    %bh,(%rax)
  40290c:	38 38                	cmp    %bh,(%rax)
  40290e:	38 38                	cmp    %bh,(%rax)
  402910:	38 38                	cmp    %bh,(%rax)
  402912:	38 5a 5a             	cmp    %bl,0x5a(%rdx)
  402915:	5a                   	pop    %rdx
  402916:	5a                   	pop    %rdx
  402917:	5a                   	pop    %rdx
  402918:	5a                   	pop    %rdx
  402919:	5a                   	pop    %rdx
  40291a:	5a                   	pop    %rdx
  40291b:	5a                   	pop    %rdx
  40291c:	5a                   	pop    %rdx
  40291d:	5a                   	pop    %rdx
  40291e:	5a                   	pop    %rdx
  40291f:	5a                   	pop    %rdx
  402920:	5a                   	pop    %rdx
  402921:	38 38                	cmp    %bh,(%rax)
  402923:	38 38                	cmp    %bh,(%rax)
  402925:	38 38                	cmp    %bh,(%rax)
  402927:	38 38                	cmp    %bh,(%rax)
  402929:	38 38                	cmp    %bh,(%rax)
  40292b:	38 38                	cmp    %bh,(%rax)
  40292d:	38 38                	cmp    %bh,(%rax)
  40292f:	38 38                	cmp    %bh,(%rax)
  402931:	38 38                	cmp    %bh,(%rax)
  402933:	38 38                	cmp    %bh,(%rax)
  402935:	38 38                	cmp    %bh,(%rax)
  402937:	38 38                	cmp    %bh,(%rax)
  402939:	38 38                	cmp    %bh,(%rax)
  40293b:	20 20                	and    %ah,(%rax)
  40293d:	38 38                	cmp    %bh,(%rax)
  40293f:	38 38                	cmp    %bh,(%rax)
  402941:	38 38                	cmp    %bh,(%rax)
  402943:	38 38                	cmp    %bh,(%rax)
  402945:	38 38                	cmp    %bh,(%rax)
  402947:	38 38                	cmp    %bh,(%rax)
  402949:	38 38                	cmp    %bh,(%rax)
  40294b:	38 38                	cmp    %bh,(%rax)
  40294d:	38 38                	cmp    %bh,(%rax)
  40294f:	38 38                	cmp    %bh,(%rax)
  402951:	38 38                	cmp    %bh,(%rax)
  402953:	38 38                	cmp    %bh,(%rax)
  402955:	38 38                	cmp    %bh,(%rax)
  402957:	38 38                	cmp    %bh,(%rax)
  402959:	38 38                	cmp    %bh,(%rax)
  40295b:	38 38                	cmp    %bh,(%rax)
  40295d:	38 38                	cmp    %bh,(%rax)
  40295f:	38 5a 5a             	cmp    %bl,0x5a(%rdx)
  402962:	5a                   	pop    %rdx
  402963:	5a                   	pop    %rdx
  402964:	5a                   	pop    %rdx
  402965:	5a                   	pop    %rdx
  402966:	5a                   	pop    %rdx
  402967:	5a                   	pop    %rdx
  402968:	5a                   	pop    %rdx
  402969:	5a                   	pop    %rdx
  40296a:	5a                   	pop    %rdx
  40296b:	5a                   	pop    %rdx
  40296c:	5a                   	pop    %rdx
  40296d:	5a                   	pop    %rdx
  40296e:	38 38                	cmp    %bh,(%rax)
  402970:	38 38                	cmp    %bh,(%rax)
  402972:	38 38                	cmp    %bh,(%rax)
  402974:	38 38                	cmp    %bh,(%rax)
  402976:	38 38                	cmp    %bh,(%rax)
  402978:	38 38                	cmp    %bh,(%rax)
  40297a:	38 38                	cmp    %bh,(%rax)
  40297c:	38 38                	cmp    %bh,(%rax)
  40297e:	38 38                	cmp    %bh,(%rax)
  402980:	38 38                	cmp    %bh,(%rax)
  402982:	38 38                	cmp    %bh,(%rax)
  402984:	38 38                	cmp    %bh,(%rax)
  402986:	38 38                	cmp    %bh,(%rax)
  402988:	38 38                	cmp    %bh,(%rax)
  40298a:	20 20                	and    %ah,(%rax)
  40298c:	38 38                	cmp    %bh,(%rax)
  40298e:	38 38                	cmp    %bh,(%rax)
  402990:	38 38                	cmp    %bh,(%rax)
  402992:	38 38                	cmp    %bh,(%rax)
  402994:	38 38                	cmp    %bh,(%rax)
  402996:	38 38                	cmp    %bh,(%rax)
  402998:	38 38                	cmp    %bh,(%rax)
  40299a:	38 38                	cmp    %bh,(%rax)
  40299c:	38 38                	cmp    %bh,(%rax)
  40299e:	38 38                	cmp    %bh,(%rax)
  4029a0:	38 38                	cmp    %bh,(%rax)
  4029a2:	38 38                	cmp    %bh,(%rax)
  4029a4:	38 38                	cmp    %bh,(%rax)
  4029a6:	38 38                	cmp    %bh,(%rax)
  4029a8:	38 38                	cmp    %bh,(%rax)
  4029aa:	38 38                	cmp    %bh,(%rax)
  4029ac:	38 38                	cmp    %bh,(%rax)
  4029ae:	5a                   	pop    %rdx
  4029af:	5a                   	pop    %rdx
  4029b0:	5a                   	pop    %rdx
  4029b1:	5a                   	pop    %rdx
  4029b2:	5a                   	pop    %rdx
  4029b3:	5a                   	pop    %rdx
  4029b4:	5a                   	pop    %rdx
  4029b5:	5a                   	pop    %rdx
  4029b6:	5a                   	pop    %rdx
  4029b7:	5a                   	pop    %rdx
  4029b8:	5a                   	pop    %rdx
  4029b9:	5a                   	pop    %rdx
  4029ba:	5a                   	pop    %rdx
  4029bb:	5a                   	pop    %rdx
  4029bc:	38 38                	cmp    %bh,(%rax)
  4029be:	38 38                	cmp    %bh,(%rax)
  4029c0:	38 38                	cmp    %bh,(%rax)
  4029c2:	38 38                	cmp    %bh,(%rax)
  4029c4:	38 38                	cmp    %bh,(%rax)
  4029c6:	38 38                	cmp    %bh,(%rax)
  4029c8:	38 38                	cmp    %bh,(%rax)
  4029ca:	38 38                	cmp    %bh,(%rax)
  4029cc:	38 38                	cmp    %bh,(%rax)
  4029ce:	38 38                	cmp    %bh,(%rax)
  4029d0:	38 38                	cmp    %bh,(%rax)
  4029d2:	38 38                	cmp    %bh,(%rax)
  4029d4:	38 38                	cmp    %bh,(%rax)
  4029d6:	38 38                	cmp    %bh,(%rax)
  4029d8:	38 20                	cmp    %ah,(%rax)
  4029da:	20 38                	and    %bh,(%rax)
  4029dc:	38 38                	cmp    %bh,(%rax)
  4029de:	38 38                	cmp    %bh,(%rax)
  4029e0:	38 38                	cmp    %bh,(%rax)
  4029e2:	38 38                	cmp    %bh,(%rax)
  4029e4:	38 38                	cmp    %bh,(%rax)
  4029e6:	38 38                	cmp    %bh,(%rax)
  4029e8:	38 38                	cmp    %bh,(%rax)
  4029ea:	38 38                	cmp    %bh,(%rax)
  4029ec:	38 38                	cmp    %bh,(%rax)
  4029ee:	38 38                	cmp    %bh,(%rax)
  4029f0:	38 38                	cmp    %bh,(%rax)
  4029f2:	38 38                	cmp    %bh,(%rax)
  4029f4:	38 38                	cmp    %bh,(%rax)
  4029f6:	38 38                	cmp    %bh,(%rax)
  4029f8:	38 38                	cmp    %bh,(%rax)
  4029fa:	38 5a 5a             	cmp    %bl,0x5a(%rdx)
  4029fd:	5a                   	pop    %rdx
  4029fe:	5a                   	pop    %rdx
  4029ff:	5a                   	pop    %rdx
  402a00:	5a                   	pop    %rdx
  402a01:	5a                   	pop    %rdx
  402a02:	5a                   	pop    %rdx
  402a03:	5a                   	pop    %rdx
  402a04:	5a                   	pop    %rdx
  402a05:	5a                   	pop    %rdx
  402a06:	5a                   	pop    %rdx
  402a07:	5a                   	pop    %rdx
  402a08:	5a                   	pop    %rdx
  402a09:	38 38                	cmp    %bh,(%rax)
  402a0b:	38 38                	cmp    %bh,(%rax)
  402a0d:	38 38                	cmp    %bh,(%rax)
  402a0f:	38 38                	cmp    %bh,(%rax)
  402a11:	38 38                	cmp    %bh,(%rax)
  402a13:	38 38                	cmp    %bh,(%rax)
  402a15:	38 38                	cmp    %bh,(%rax)
  402a17:	38 38                	cmp    %bh,(%rax)
  402a19:	38 38                	cmp    %bh,(%rax)
  402a1b:	38 38                	cmp    %bh,(%rax)
  402a1d:	38 38                	cmp    %bh,(%rax)
  402a1f:	38 38                	cmp    %bh,(%rax)
  402a21:	38 38                	cmp    %bh,(%rax)
  402a23:	38 38                	cmp    %bh,(%rax)
  402a25:	38 38                	cmp    %bh,(%rax)
  402a27:	38 20                	cmp    %ah,(%rax)
  402a29:	20 38                	and    %bh,(%rax)
  402a2b:	38 38                	cmp    %bh,(%rax)
  402a2d:	38 38                	cmp    %bh,(%rax)
  402a2f:	38 38                	cmp    %bh,(%rax)
  402a31:	38 38                	cmp    %bh,(%rax)
  402a33:	38 38                	cmp    %bh,(%rax)
  402a35:	38 38                	cmp    %bh,(%rax)
  402a37:	38 38                	cmp    %bh,(%rax)
  402a39:	38 38                	cmp    %bh,(%rax)
  402a3b:	38 38                	cmp    %bh,(%rax)
  402a3d:	38 38                	cmp    %bh,(%rax)
  402a3f:	38 38                	cmp    %bh,(%rax)
  402a41:	38 38                	cmp    %bh,(%rax)
  402a43:	38 38                	cmp    %bh,(%rax)
  402a45:	38 38                	cmp    %bh,(%rax)
  402a47:	38 38                	cmp    %bh,(%rax)
  402a49:	5a                   	pop    %rdx
  402a4a:	5a                   	pop    %rdx
  402a4b:	5a                   	pop    %rdx
  402a4c:	5a                   	pop    %rdx
  402a4d:	5a                   	pop    %rdx
  402a4e:	5a                   	pop    %rdx
  402a4f:	5a                   	pop    %rdx
  402a50:	5a                   	pop    %rdx
  402a51:	5a                   	pop    %rdx
  402a52:	5a                   	pop    %rdx
  402a53:	5a                   	pop    %rdx
  402a54:	5a                   	pop    %rdx
  402a55:	5a                   	pop    %rdx
  402a56:	5a                   	pop    %rdx
  402a57:	38 38                	cmp    %bh,(%rax)
  402a59:	38 38                	cmp    %bh,(%rax)
  402a5b:	38 38                	cmp    %bh,(%rax)
  402a5d:	38 38                	cmp    %bh,(%rax)
  402a5f:	38 38                	cmp    %bh,(%rax)
  402a61:	38 38                	cmp    %bh,(%rax)
  402a63:	38 38                	cmp    %bh,(%rax)
  402a65:	38 38                	cmp    %bh,(%rax)
  402a67:	38 38                	cmp    %bh,(%rax)
  402a69:	38 38                	cmp    %bh,(%rax)
  402a6b:	38 38                	cmp    %bh,(%rax)
  402a6d:	38 38                	cmp    %bh,(%rax)
  402a6f:	38 38                	cmp    %bh,(%rax)
  402a71:	38 38                	cmp    %bh,(%rax)
  402a73:	38 38                	cmp    %bh,(%rax)
  402a75:	38 38                	cmp    %bh,(%rax)
  402a77:	00 67 63             	add    %ah,0x63(%rdi)
  402a7a:	63 20                	movslq (%rax),%esp
  402a7c:	71 75                	jno    402af3 <_IO_stdin_used+0x1373>
  402a7e:	69 6e 65 2e 63 20 2d 	imul   $0x2d20632e,0x65(%rsi),%ebp
  402a85:	6f                   	outsl  %ds:(%rsi),(%dx)
  402a86:	20 71 75             	and    %dh,0x75(%rcx)
  402a89:	69 6e 65 00 25 73 00 	imul   $0x732500,0x65(%rsi),%ebp
  402a90:	2e 2f                	cs (bad) 
  402a92:	71 75                	jno    402b09 <_IO_stdin_used+0x1389>
  402a94:	69 6e 65 20 7c 20 64 	imul   $0x64207c20,0x65(%rsi),%ebp
  402a9b:	69 66 66 20 2d 20 71 	imul   $0x71202d20,0x66(%rsi),%esp
  402aa2:	75 69                	jne    402b0d <_IO_stdin_used+0x138d>
  402aa4:	6e                   	outsb  %ds:(%rsi),(%dx)
  402aa5:	65 2e 63 00          	gs movslq %cs:(%rax),%eax
  402aa9:	64 69 66 66 20 72 65 	imul   $0x74657220,%fs:0x66(%rsi),%esp
  402ab0:	74 
  402ab1:	75 72                	jne    402b25 <_IO_stdin_used+0x13a5>
  402ab3:	6e                   	outsb  %ds:(%rsi),(%dx)
  402ab4:	65 64 3a 20          	gs cmp %fs:(%rax),%ah
  402ab8:	25 64 0a 00 00       	and    $0xa64,%eax
  402abd:	00 00                	add    %al,(%rax)
  402abf:	00 16                	add    %dl,(%rsi)
  402ac1:	1b 04 00             	sbb    (%rax,%rax,1),%eax
  402ac4:	4b 68 03 00 ad 80    	rex.WXB pushq $0xffffffff80ad0003
  402aca:	01 00                	add    %eax,(%rax)
  402acc:	37                   	(bad)  
  402acd:	23 02                	and    (%rdx),%eax
  402acf:	00 fa                	add    %bh,%dl
  402ad1:	53                   	push   %rbx
  402ad2:	02 00                	add    (%rax),%al
  402ad4:	e3 38                	jrcxz  402b0e <_IO_stdin_used+0x138e>
  402ad6:	02 00                	add    (%rax),%al
  402ad8:	8b 0d 02 00 24 49    	mov    0x49240002(%rip),%ecx        # 49642ae0 <_end+0x4902e348>
  402ade:	02 00                	add    (%rax),%al
  402ae0:	cb                   	lret   
  402ae1:	b2 00                	mov    $0x0,%dl
  402ae3:	00 64 ee 00          	add    %ah,0x0(%rsi,%rbp,8)
  402ae7:	00 60 ad             	add    %ah,-0x53(%rax)
  402aea:	00 00                	add    %al,(%rax)
  402aec:	93                   	xchg   %eax,%ebx
  402aed:	8f 02                	popq   (%rdx)
  402aef:	00 8b 0d 02 00 60    	add    %cl,0x6000020d(%rbx)
  402af5:	ad                   	lods   %ds:(%rsi),%eax
  402af6:	00 00                	add    %al,(%rax)
  402af8:	24 49                	and    $0x49,%al
  402afa:	02 00                	add    (%rax),%al
  402afc:	65 59                	gs pop %rcx
  402afe:	02 00                	add    (%rax),%al
  402b00:	0d 2e 02 00 a6       	or     $0xa600022e,%eax
  402b05:	69 02 00 8b 0d 02    	imul   $0x20d8b00,(%rdx),%eax
  402b0b:	00 a6 69 02 00 65    	add    %ah,0x65000269(%rsi)
  402b11:	59                   	pop    %rcx
  402b12:	02 00                	add    (%rax),%al
  402b14:	fa                   	cli    
  402b15:	53                   	push   %rbx
  402b16:	02 00                	add    (%rax),%al
  402b18:	60                   	(bad)  
  402b19:	ad                   	lods   %ds:(%rsi),%eax
  402b1a:	00 00                	add    %al,(%rax)
  402b1c:	8f                   	(bad)  
  402b1d:	4e 02 00             	rex.WRX add (%rax),%r8b
  402b20:	37                   	(bad)  
  402b21:	23 02                	and    (%rdx),%eax
  402b23:	00 7c 74 02          	add    %bh,0x2(%rsp,%rsi,2)
  402b27:	00 37                	add    %dh,(%rdi)
  402b29:	23 02                	and    (%rdx),%eax
  402b2b:	00 a6 69 02 00 60    	add    %ah,0x60000269(%rsi)
  402b31:	ad                   	lods   %ds:(%rsi),%eax
  402b32:	00 00                	add    %al,(%rax)
  402b34:	e7 79                	out    %eax,$0x79
  402b36:	02 00                	add    (%rax),%al
  402b38:	fa                   	cli    
  402b39:	53                   	push   %rbx
  402b3a:	02 00                	add    (%rax),%al
  402b3c:	60                   	(bad)  
  402b3d:	ad                   	lods   %ds:(%rsi),%eax
  402b3e:	00 00                	add    %al,(%rax)
  402b40:	d0 5e 02             	rcrb   0x2(%rsi)
  402b43:	00 a6 69 02 00 65    	add    %ah,0x65000269(%rsi)
  402b49:	59                   	pop    %rcx
  402b4a:	02 00                	add    (%rax),%al
  402b4c:	0d 2e 02 00 a6       	or     $0xa600022e,%eax
  402b51:	69 02 00 8b 0d 02    	imul   $0x20d8b00,(%rdx),%eax
  402b57:	00 8f 4e 02 00 8b    	add    %cl,-0x74fffdb2(%rdi)
  402b5d:	0d 02 00 60 ad       	or     $0xad600002,%eax
  402b62:	00 00                	add    %al,(%rax)
  402b64:	37                   	(bad)  
  402b65:	23 02                	and    (%rdx),%eax
  402b67:	00 fa                	add    %bh,%dl
  402b69:	53                   	push   %rbx
  402b6a:	02 00                	add    (%rax),%al
  402b6c:	60                   	(bad)  
  402b6d:	ad                   	lods   %ds:(%rsi),%eax
  402b6e:	00 00                	add    %al,(%rax)
  402b70:	3b 64 02 00          	cmp    0x0(%rdx,%rax,1),%esp
  402b74:	e7 79                	out    %eax,$0x79
  402b76:	02 00                	add    (%rax),%al
  402b78:	e3 38                	jrcxz  402bb2 <_IO_stdin_used+0x1432>
  402b7a:	02 00                	add    (%rax),%al
  402b7c:	fa                   	cli    
  402b7d:	53                   	push   %rbx
  402b7e:	02 00                	add    (%rax),%al
  402b80:	37                   	(bad)  
  402b81:	23 02                	and    (%rdx),%eax
  402b83:	00 3a                	add    %bh,(%rdx)
  402b85:	f9                   	stc    
  402b86:	00 00                	add    %al,(%rax)
  402b88:	61                   	(bad)  
  402b89:	18 02                	sbb    %al,(%rdx)
  402b8b:	00 64 ee 00          	add    %ah,0x0(%rsi,%rbp,8)
  402b8f:	00 60 ad             	add    %ah,-0x53(%rax)
  402b92:	00 00                	add    %al,(%rax)
  402b94:	52                   	push   %rdx
  402b95:	7f 02                	jg     402b99 <_IO_stdin_used+0x1419>
  402b97:	00 37                	add    %dh,(%rdi)
  402b99:	23 02                	and    (%rdx),%eax
  402b9b:	00 8b 0d 02 00 8f    	add    %cl,-0x70fffdf3(%rbx)
  402ba1:	4e 02 00             	rex.WRX add (%rax),%r8b
  402ba4:	65 59                	gs pop %rcx
  402ba6:	02 00                	add    (%rax),%al
  402ba8:	11 6f 02             	adc    %ebp,0x2(%rdi)
  402bab:	00 60 ad             	add    %ah,-0x53(%rax)
  402bae:	00 00                	add    %al,(%rax)
  402bb0:	11 6f 02             	adc    %ebp,0x2(%rdi)
  402bb3:	00 e3                	add    %ah,%bl
  402bb5:	38 02                	cmp    %al,(%rdx)
  402bb7:	00 60 ad             	add    %ah,-0x53(%rax)
  402bba:	00 00                	add    %al,(%rax)
  402bbc:	78 33                	js     402bf1 <_IO_stdin_used+0x1471>
  402bbe:	02 00                	add    (%rax),%al
  402bc0:	8b 0d 02 00 61 18    	mov    0x18610002(%rip),%ecx        # 18a12bc8 <_end+0x183fe430>
  402bc6:	02 00                	add    (%rax),%al
  402bc8:	37                   	(bad)  
  402bc9:	23 02                	and    (%rdx),%eax
  402bcb:	00 60 ad             	add    %ah,-0x53(%rax)
  402bce:	00 00                	add    %al,(%rax)
  402bd0:	24 49                	and    $0x49,%al
  402bd2:	02 00                	add    (%rax),%al
  402bd4:	65 59                	gs pop %rcx
  402bd6:	02 00                	add    (%rax),%al
  402bd8:	60                   	(bad)  
  402bd9:	ad                   	lods   %ds:(%rsi),%eax
  402bda:	00 00                	add    %al,(%rax)
  402bdc:	3b 64 02 00          	cmp    0x0(%rdx,%rax,1),%esp
  402be0:	e7 79                	out    %eax,$0x79
  402be2:	02 00                	add    (%rax),%al
  402be4:	37                   	(bad)  
  402be5:	23 02                	and    (%rdx),%eax
  402be7:	00 60 ad             	add    %ah,-0x53(%rax)
  402bea:	00 00                	add    %al,(%rax)
  402bec:	61                   	(bad)  
  402bed:	18 02                	sbb    %al,(%rdx)
  402bef:	00 65 59             	add    %ah,0x59(%rbp)
  402bf2:	02 00                	add    (%rax),%al
  402bf4:	a6                   	cmpsb  %es:(%rdi),%ds:(%rsi)
  402bf5:	69 02 00 a6 69 02    	imul   $0x269a600,(%rdx),%eax
  402bfb:	00 37                	add    %dh,(%rdi)
  402bfd:	23 02                	and    (%rdx),%eax
  402bff:	00 11                	add    %dl,(%rcx)
  402c01:	6f                   	outsl  %ds:(%rsi),(%dx)
  402c02:	02 00                	add    (%rax),%al
  402c04:	d0 5e 02             	rcrb   0x2(%rsi)
  402c07:	00 65 59             	add    %ah,0x59(%rbp)
  402c0a:	02 00                	add    (%rax),%al
  402c0c:	fa                   	cli    
  402c0d:	53                   	push   %rbx
  402c0e:	02 00                	add    (%rax),%al
  402c10:	cc                   	int3   
  402c11:	1d 02 00 37 23       	sbb    $0x23370002,%eax
  402c16:	02 00                	add    (%rax),%al
  402c18:	3e 3a 01             	cmp    %ds:(%rcx),%al
  402c1b:	00 2e                	add    %ch,(%rsi)
  402c1d:	36 00 00             	add    %al,%ss:(%rax)
	...
  402c40:	16                   	(bad)  
  402c41:	1b 04 00             	sbb    (%rax,%rax,1),%eax
  402c44:	4b 68 03 00 ad 80    	rex.WXB pushq $0xffffffff80ad0003
  402c4a:	01 00                	add    %eax,(%rax)
  402c4c:	37                   	(bad)  
  402c4d:	23 02                	and    (%rdx),%eax
  402c4f:	00 fa                	add    %bh,%dl
  402c51:	53                   	push   %rbx
  402c52:	02 00                	add    (%rax),%al
  402c54:	e3 38                	jrcxz  402c8e <_IO_stdin_used+0x150e>
  402c56:	02 00                	add    (%rax),%al
  402c58:	8b 0d 02 00 24 49    	mov    0x49240002(%rip),%ecx        # 49642c60 <_end+0x4902e4c8>
  402c5e:	02 00                	add    (%rax),%al
  402c60:	cb                   	lret   
  402c61:	b2 00                	mov    $0x0,%dl
  402c63:	00 60 ad             	add    %ah,-0x53(%rax)
  402c66:	00 00                	add    %al,(%rax)
  402c68:	24 49                	and    $0x49,%al
  402c6a:	02 00                	add    (%rax),%al
  402c6c:	8b 0d 02 00 60 ad    	mov    -0x529ffffe(%rip),%ecx        # ffffffffada02c74 <_end+0xffffffffad3ee4dc>
  402c72:	00 00                	add    %al,(%rax)
  402c74:	a6                   	cmpsb  %es:(%rdi),%ds:(%rsi)
  402c75:	69 02 00 37 23 02    	imul   $0x2233700,(%rdx),%eax
  402c7b:	00 11                	add    %dl,(%rcx)
  402c7d:	6f                   	outsl  %ds:(%rsi),(%dx)
  402c7e:	02 00                	add    (%rax),%al
  402c80:	d0 5e 02             	rcrb   0x2(%rsi)
  402c83:	00 e7                	add    %ah,%bh
  402c85:	79 02                	jns    402c89 <_IO_stdin_used+0x1509>
  402c87:	00 37                	add    %dh,(%rdi)
  402c89:	23 02                	and    (%rdx),%eax
  402c8b:	00 11                	add    %dl,(%rcx)
  402c8d:	6f                   	outsl  %ds:(%rsi),(%dx)
  402c8e:	02 00                	add    (%rax),%al
  402c90:	7c 74                	jl     402d06 <_IO_stdin_used+0x1586>
  402c92:	02 00                	add    (%rax),%al
  402c94:	8b 0d 02 00 60 ad    	mov    -0x529ffffe(%rip),%ecx        # ffffffffada02c9c <_end+0xffffffffad3ee504>
  402c9a:	00 00                	add    %al,(%rax)
  402c9c:	8b 0d 02 00 60 ad    	mov    -0x529ffffe(%rip),%ecx        # ffffffffada02ca4 <_end+0xffffffffad3ee50c>
  402ca2:	00 00                	add    %al,(%rax)
  402ca4:	37                   	(bad)  
  402ca5:	23 02                	and    (%rdx),%eax
  402ca7:	00 11                	add    %dl,(%rcx)
  402ca9:	6f                   	outsl  %ds:(%rsi),(%dx)
  402caa:	02 00                	add    (%rax),%al
  402cac:	7c 74                	jl     402d22 <_IO_stdin_used+0x15a2>
  402cae:	02 00                	add    (%rax),%al
  402cb0:	37                   	(bad)  
  402cb1:	23 02                	and    (%rdx),%eax
  402cb3:	00 60 ad             	add    %ah,-0x53(%rax)
  402cb6:	00 00                	add    %al,(%rax)
  402cb8:	8b 0d 02 00 61 18    	mov    0x18610002(%rip),%ecx        # 18a12cc0 <_end+0x183fe528>
  402cbe:	02 00                	add    (%rax),%al
  402cc0:	37                   	(bad)  
  402cc1:	23 02                	and    (%rdx),%eax
  402cc3:	00 a6 69 02 00 7c    	add    %ah,0x7c000269(%rsi)
  402cc9:	74 02                	je     402ccd <_IO_stdin_used+0x154d>
  402ccb:	00 e3                	add    %ah,%bl
  402ccd:	38 02                	cmp    %al,(%rdx)
  402ccf:	00 4e 3e             	add    %cl,0x3e(%rsi)
  402cd2:	02 00                	add    (%rax),%al
  402cd4:	65 59                	gs pop %rcx
  402cd6:	02 00                	add    (%rax),%al
  402cd8:	60                   	(bad)  
  402cd9:	ad                   	lods   %ds:(%rsi),%eax
  402cda:	00 00                	add    %al,(%rax)
  402cdc:	37                   	(bad)  
  402cdd:	23 02                	and    (%rdx),%eax
  402cdf:	00 11                	add    %dl,(%rcx)
  402ce1:	6f                   	outsl  %ds:(%rsi),(%dx)
  402ce2:	02 00                	add    (%rax),%al
  402ce4:	60                   	(bad)  
  402ce5:	ad                   	lods   %ds:(%rsi),%eax
  402ce6:	00 00                	add    %al,(%rax)
  402ce8:	8b 0d 02 00 f6 12    	mov    0x12f60002(%rip),%ecx        # 13362cf0 <_end+0x12d4e558>
  402cee:	02 00                	add    (%rax),%al
  402cf0:	8b 0d 02 00 24 49    	mov    0x49240002(%rip),%ecx        # 49642cf8 <_end+0x4902e560>
  402cf6:	02 00                	add    (%rax),%al
  402cf8:	8b 0d 02 00 11 6f    	mov    0x6f110002(%rip),%ecx        # 6f512d00 <_end+0x6eefe568>
  402cfe:	02 00                	add    (%rax),%al
  402d00:	7c 74                	jl     402d76 <_IO_stdin_used+0x15f6>
  402d02:	02 00                	add    (%rax),%al
  402d04:	a6                   	cmpsb  %es:(%rdi),%ds:(%rsi)
  402d05:	69 02 00 65 59 02    	imul   $0x2596500,(%rdx),%eax
  402d0b:	00 2e                	add    %ch,(%rsi)
  402d0d:	36 00 00             	add    %al,%ss:(%rax)
  402d10:	00 00                	add    %al,(%rax)
  402d12:	00 00                	add    %al,(%rax)
  402d14:	74 72                	je     402d88 <_IO_stdin_used+0x1608>
  402d16:	79 20                	jns    402d38 <_IO_stdin_used+0x15b8>
  402d18:	61                   	(bad)  
  402d19:	67 61                	addr32 (bad) 
  402d1b:	69 6e 00 00 00 00 00 	imul   $0x0,0x0(%rsi),%ebp
	...
  402d3e:	00 00                	add    %al,(%rax)
  402d40:	24 49                	and    $0x49,%al
  402d42:	02 00                	add    (%rax),%al
  402d44:	8b 0d 02 00 60 ad    	mov    -0x529ffffe(%rip),%ecx        # ffffffffada02d4c <_end+0xffffffffad3ee5b4>
  402d4a:	00 00                	add    %al,(%rax)
  402d4c:	a6                   	cmpsb  %es:(%rdi),%ds:(%rsi)
  402d4d:	69 02 00 37 23 02    	imul   $0x2233700,(%rdx),%eax
  402d53:	00 11                	add    %dl,(%rcx)
  402d55:	6f                   	outsl  %ds:(%rsi),(%dx)
  402d56:	02 00                	add    (%rax),%al
  402d58:	d0 5e 02             	rcrb   0x2(%rsi)
  402d5b:	00 e7                	add    %ah,%bh
  402d5d:	79 02                	jns    402d61 <_IO_stdin_used+0x15e1>
  402d5f:	00 37                	add    %dh,(%rdi)
  402d61:	23 02                	and    (%rdx),%eax
  402d63:	00 11                	add    %dl,(%rcx)
  402d65:	6f                   	outsl  %ds:(%rsi),(%dx)
  402d66:	02 00                	add    (%rax),%al
  402d68:	7c 74                	jl     402dde <_IO_stdin_used+0x165e>
  402d6a:	02 00                	add    (%rax),%al
  402d6c:	8b 0d 02 00 60 ad    	mov    -0x529ffffe(%rip),%ecx        # ffffffffada02d74 <_end+0xffffffffad3ee5dc>
  402d72:	00 00                	add    %al,(%rax)
  402d74:	8b 0d 02 00 60 ad    	mov    -0x529ffffe(%rip),%ecx        # ffffffffada02d7c <_end+0xffffffffad3ee5e4>
  402d7a:	00 00                	add    %al,(%rax)
  402d7c:	37                   	(bad)  
  402d7d:	23 02                	and    (%rdx),%eax
  402d7f:	00 11                	add    %dl,(%rcx)
  402d81:	6f                   	outsl  %ds:(%rsi),(%dx)
  402d82:	02 00                	add    (%rax),%al
  402d84:	7c 74                	jl     402dfa <_IO_stdin_used+0x167a>
  402d86:	02 00                	add    (%rax),%al
  402d88:	37                   	(bad)  
  402d89:	23 02                	and    (%rdx),%eax
  402d8b:	00 60 ad             	add    %ah,-0x53(%rax)
  402d8e:	00 00                	add    %al,(%rax)
  402d90:	8b 0d 02 00 61 18    	mov    0x18610002(%rip),%ecx        # 18a12d98 <_end+0x183fe600>
  402d96:	02 00                	add    (%rax),%al
  402d98:	37                   	(bad)  
  402d99:	23 02                	and    (%rdx),%eax
  402d9b:	00 a6 69 02 00 7c    	add    %ah,0x7c000269(%rsi)
  402da1:	74 02                	je     402da5 <_IO_stdin_used+0x1625>
  402da3:	00 e3                	add    %ah,%bl
  402da5:	38 02                	cmp    %al,(%rdx)
  402da7:	00 4e 3e             	add    %cl,0x3e(%rsi)
  402daa:	02 00                	add    (%rax),%al
  402dac:	65 59                	gs pop %rcx
  402dae:	02 00                	add    (%rax),%al
  402db0:	60                   	(bad)  
  402db1:	ad                   	lods   %ds:(%rsi),%eax
  402db2:	00 00                	add    %al,(%rax)
  402db4:	37                   	(bad)  
  402db5:	23 02                	and    (%rdx),%eax
  402db7:	00 11                	add    %dl,(%rcx)
  402db9:	6f                   	outsl  %ds:(%rsi),(%dx)
  402dba:	02 00                	add    (%rax),%al
  402dbc:	60                   	(bad)  
  402dbd:	ad                   	lods   %ds:(%rsi),%eax
  402dbe:	00 00                	add    %al,(%rax)
  402dc0:	0d 2e 02 00 cc       	or     $0xcc00022e,%eax
  402dc5:	1d 02 00 f6 12       	sbb    $0x12f60002,%eax
  402dca:	02 00                	add    (%rax),%al
  402dcc:	60                   	(bad)  
  402dcd:	ad                   	lods   %ds:(%rsi),%eax
  402dce:	00 00                	add    %al,(%rax)
  402dd0:	37                   	(bad)  
  402dd1:	23 02                	and    (%rdx),%eax
  402dd3:	00 11                	add    %dl,(%rcx)
  402dd5:	6f                   	outsl  %ds:(%rsi),(%dx)
  402dd6:	02 00                	add    (%rax),%al
  402dd8:	60                   	(bad)  
  402dd9:	ad                   	lods   %ds:(%rsi),%eax
  402dda:	00 00                	add    %al,(%rax)
  402ddc:	24 49                	and    $0x49,%al
  402dde:	02 00                	add    (%rax),%al
  402de0:	8b 0d 02 00 60 ad    	mov    -0x529ffffe(%rip),%ecx        # ffffffffada02de8 <_end+0xffffffffad3ee650>
  402de6:	00 00                	add    %al,(%rax)
  402de8:	78 33                	js     402e1d <_IO_stdin_used+0x169d>
  402dea:	02 00                	add    (%rax),%al
  402dec:	65 59                	gs pop %rcx
  402dee:	02 00                	add    (%rax),%al
  402df0:	11 6f 02             	adc    %ebp,0x2(%rdi)
  402df3:	00 7c 74 02          	add    %bh,0x2(%rsp,%rsi,2)
  402df7:	00 e3                	add    %ah,%bl
  402df9:	38 02                	cmp    %al,(%rdx)
  402dfb:	00 8b 0d 02 00 2e    	add    %cl,0x2e00020d(%rbx)
  402e01:	36 00 00             	add    %al,%ss:(%rax)
  402e04:	00 00                	add    %al,(%rax)
  402e06:	00 00                	add    %al,(%rax)
  402e08:	77 00                	ja     402e0a <_IO_stdin_used+0x168a>
  402e0a:	2f                   	(bad)  
  402e0b:	74 6d                	je     402e7a <_IO_stdin_used+0x16fa>
  402e0d:	70 2f                	jo     402e3e <_IO_stdin_used+0x16be>
  402e0f:	61                   	(bad)  
  402e10:	73 64                	jae    402e76 <_IO_stdin_used+0x16f6>
  402e12:	66 00 00             	data16 add %al,(%rax)
	...
  402e3d:	00 00                	add    %al,(%rax)
  402e3f:	00 16                	add    %dl,(%rsi)
  402e41:	1b 04 00             	sbb    (%rax,%rax,1),%eax
  402e44:	4b 68 03 00 3b 64    	rex.WXB pushq $0x643b0003
  402e4a:	02 00                	add    (%rax),%al
  402e4c:	e7 79                	out    %eax,$0x79
  402e4e:	02 00                	add    (%rax),%al
  402e50:	37                   	(bad)  
  402e51:	23 02                	and    (%rdx),%eax
  402e53:	00 60 ad             	add    %ah,-0x53(%rax)
  402e56:	00 00                	add    %al,(%rax)
  402e58:	61                   	(bad)  
  402e59:	18 02                	sbb    %al,(%rdx)
  402e5b:	00 e7                	add    %ah,%bh
  402e5d:	79 02                	jns    402e61 <_IO_stdin_used+0x16e1>
  402e5f:	00 a6 69 02 00 e3    	add    %ah,-0x1cfffd97(%rsi)
  402e65:	38 02                	cmp    %al,(%rdx)
  402e67:	00 65 59             	add    %ah,0x59(%rbp)
  402e6a:	02 00                	add    (%rax),%al
  402e6c:	11 6f 02             	adc    %ebp,0x2(%rdi)
  402e6f:	00 65 59             	add    %ah,0x59(%rbp)
  402e72:	02 00                	add    (%rax),%al
  402e74:	cb                   	lret   
  402e75:	b2 00                	mov    $0x0,%dl
  402e77:	00 60 ad             	add    %ah,-0x53(%rax)
  402e7a:	00 00                	add    %al,(%rax)
  402e7c:	37                   	(bad)  
  402e7d:	23 02                	and    (%rdx),%eax
  402e7f:	00 fa                	add    %bh,%dl
  402e81:	53                   	push   %rbx
  402e82:	02 00                	add    (%rax),%al
  402e84:	60                   	(bad)  
  402e85:	ad                   	lods   %ds:(%rsi),%eax
  402e86:	00 00                	add    %al,(%rax)
  402e88:	24 49                	and    $0x49,%al
  402e8a:	02 00                	add    (%rax),%al
  402e8c:	8b 0d 02 00 60 ad    	mov    -0x529ffffe(%rip),%ecx        # ffffffffada02e94 <_end+0xffffffffad3ee6fc>
  402e92:	00 00                	add    %al,(%rax)
  402e94:	cc                   	int3   
  402e95:	1d 02 00 37 23       	sbb    $0x23370002,%eax
  402e9a:	02 00                	add    (%rax),%al
  402e9c:	a2 28 02 00 37 23 02 	movabs %al,0xfa00022337000228
  402ea3:	00 fa 
  402ea5:	53                   	push   %rbx
  402ea6:	02 00                	add    (%rax),%al
  402ea8:	11 6f 02             	adc    %ebp,0x2(%rdi)
  402eab:	00 8b 0d 02 00 60    	add    %cl,0x6000020d(%rbx)
  402eb1:	ad                   	lods   %ds:(%rsi),%eax
  402eb2:	00 00                	add    %al,(%rax)
  402eb4:	61                   	(bad)  
  402eb5:	18 02                	sbb    %al,(%rdx)
  402eb7:	00 8b 0d 02 00 cc    	add    %cl,-0x33fffdf3(%rbx)
  402ebd:	1d 02 00 8b 0d       	sbb    $0xd8b0002,%eax
  402ec2:	02 00                	add    (%rax),%al
  402ec4:	60                   	(bad)  
  402ec5:	ad                   	lods   %ds:(%rsi),%eax
  402ec6:	00 00                	add    %al,(%rax)
  402ec8:	8f                   	(bad)  
  402ec9:	4e 02 00             	rex.WRX add (%rax),%r8b
  402ecc:	e3 38                	jrcxz  402f06 <_IO_stdin_used+0x1786>
  402ece:	02 00                	add    (%rax),%al
  402ed0:	37                   	(bad)  
  402ed1:	23 02                	and    (%rdx),%eax
  402ed3:	00 8f 4e 02 00 f6    	add    %cl,-0x9fffdb2(%rdi)
  402ed9:	12 02                	adc    (%rdx),%al
  402edb:	00 a6 69 02 00 65    	add    %ah,0x65000269(%rsi)
  402ee1:	59                   	pop    %rcx
  402ee2:	02 00                	add    (%rax),%al
  402ee4:	60                   	(bad)  
  402ee5:	ad                   	lods   %ds:(%rsi),%eax
  402ee6:	00 00                	add    %al,(%rax)
  402ee8:	cc                   	int3   
  402ee9:	1d 02 00 37 23       	sbb    $0x23370002,%eax
  402eee:	02 00                	add    (%rax),%al
  402ef0:	24 49                	and    $0x49,%al
  402ef2:	02 00                	add    (%rax),%al
  402ef4:	60                   	(bad)  
  402ef5:	ad                   	lods   %ds:(%rsi),%eax
  402ef6:	00 00                	add    %al,(%rax)
  402ef8:	0d 2e 02 00 a6       	or     $0xa600022e,%eax
  402efd:	69 02 00 e7 79 02    	imul   $0x279e700,(%rdx),%eax
  402f03:	00 d0                	add    %dl,%al
  402f05:	5e                   	pop    %rsi
  402f06:	02 00                	add    (%rax),%al
  402f08:	65 59                	gs pop %rcx
  402f0a:	02 00                	add    (%rax),%al
  402f0c:	60                   	(bad)  
  402f0d:	ad                   	lods   %ds:(%rsi),%eax
  402f0e:	00 00                	add    %al,(%rax)
  402f10:	cc                   	int3   
  402f11:	1d 02 00 37 23       	sbb    $0x23370002,%eax
  402f16:	02 00                	add    (%rax),%al
  402f18:	f6 12                	notb   (%rdx)
  402f1a:	02 00                	add    (%rax),%al
  402f1c:	37                   	(bad)  
  402f1d:	23 02                	and    (%rdx),%eax
  402f1f:	00 a6 69 02 00 81    	add    %ah,-0x7efffd97(%rsi)
  402f25:	20 04 00             	and    %al,(%rax,%rax,1)
  402f28:	4b 68 03 00 60 ad    	rex.WXB pushq $0xffffffffad600003
  402f2e:	00 00                	add    %al,(%rax)
  402f30:	cc                   	int3   
  402f31:	1d 02 00 37 23       	sbb    $0x23370002,%eax
  402f36:	02 00                	add    (%rax),%al
  402f38:	61                   	(bad)  
  402f39:	18 02                	sbb    %al,(%rdx)
  402f3b:	00 e3                	add    %ah,%bl
  402f3d:	38 02                	cmp    %al,(%rdx)
  402f3f:	00 a6 69 02 00 60    	add    %ah,0x60000269(%rsi)
  402f45:	ad                   	lods   %ds:(%rsi),%eax
  402f46:	00 00                	add    %al,(%rax)
  402f48:	e7 79                	out    %eax,$0x79
  402f4a:	02 00                	add    (%rax),%al
  402f4c:	fa                   	cli    
  402f4d:	53                   	push   %rbx
  402f4e:	02 00                	add    (%rax),%al
  402f50:	60                   	(bad)  
  402f51:	ad                   	lods   %ds:(%rsi),%eax
  402f52:	00 00                	add    %al,(%rax)
  402f54:	7c 74                	jl     402fca <_IO_stdin_used+0x184a>
  402f56:	02 00                	add    (%rax),%al
  402f58:	a6                   	cmpsb  %es:(%rdi),%ds:(%rsi)
  402f59:	69 02 00 8b 0d 02    	imul   $0x20d8b00,(%rdx),%eax
  402f5f:	00 f6                	add    %dh,%dh
  402f61:	12 02                	adc    (%rdx),%al
  402f63:	00 8b 0d 02 00 24    	add    %cl,0x2400020d(%rbx)
  402f69:	49 02 00             	rex.WB add (%r8),%al
  402f6c:	37                   	(bad)  
  402f6d:	23 02                	and    (%rdx),%eax
  402f6f:	00 fa                	add    %bh,%dl
  402f71:	53                   	push   %rbx
  402f72:	02 00                	add    (%rax),%al
  402f74:	0d 2e 02 00 e7       	or     $0xe700022e,%eax
  402f79:	79 02                	jns    402f7d <_IO_stdin_used+0x17fd>
  402f7b:	00 8b 0d 02 00 11    	add    %cl,0x1100020d(%rbx)
  402f81:	6f                   	outsl  %ds:(%rsi),(%dx)
  402f82:	02 00                	add    (%rax),%al
  402f84:	60                   	(bad)  
  402f85:	ad                   	lods   %ds:(%rsi),%eax
  402f86:	00 00                	add    %al,(%rax)
  402f88:	cc                   	int3   
  402f89:	1d 02 00 e3 38       	sbb    $0x38e30002,%eax
  402f8e:	02 00                	add    (%rax),%al
  402f90:	a2 28 02 00 37 23 02 	movabs %al,0xa600022337000228
  402f97:	00 a6 
  402f99:	69 02 00 37 23 02    	imul   $0x2233700,(%rdx),%eax
  402f9f:	00 fa                	add    %bh,%dl
  402fa1:	53                   	push   %rbx
  402fa2:	02 00                	add    (%rax),%al
  402fa4:	7c 74                	jl     40301a <_IO_stdin_used+0x189a>
  402fa6:	02 00                	add    (%rax),%al
  402fa8:	37                   	(bad)  
  402fa9:	23 02                	and    (%rdx),%eax
  402fab:	00 60 ad             	add    %ah,-0x53(%rax)
  402fae:	00 00                	add    %al,(%rax)
  402fb0:	d0 5e 02             	rcrb   0x2(%rsi)
  402fb3:	00 65 59             	add    %ah,0x59(%rbp)
  402fb6:	02 00                	add    (%rax),%al
  402fb8:	a6                   	cmpsb  %es:(%rdi),%ds:(%rsi)
  402fb9:	69 02 00 60 ad 00    	imul   $0xad6000,(%rdx),%eax
  402fbf:	00 e7                	add    %ah,%bh
  402fc1:	79 02                	jns    402fc5 <_IO_stdin_used+0x1845>
  402fc3:	00 fa                	add    %bh,%dl
  402fc5:	53                   	push   %rbx
  402fc6:	02 00                	add    (%rax),%al
  402fc8:	60                   	(bad)  
  402fc9:	ad                   	lods   %ds:(%rsi),%eax
  402fca:	00 00                	add    %al,(%rax)
  402fcc:	d0 5e 02             	rcrb   0x2(%rsi)
  402fcf:	00 a6 69 02 00 37    	add    %ah,0x37000269(%rsi)
  402fd5:	23 02                	and    (%rdx),%eax
  402fd7:	00 8f 4e 02 00 e3    	add    %cl,-0x1cfffdb2(%rdi)
  402fdd:	38 02                	cmp    %al,(%rdx)
  402fdf:	00 65 59             	add    %ah,0x59(%rbp)
  402fe2:	02 00                	add    (%rax),%al
  402fe4:	60                   	(bad)  
  402fe5:	ad                   	lods   %ds:(%rsi),%eax
  402fe6:	00 00                	add    %al,(%rax)
  402fe8:	8f                   	(bad)  
  402fe9:	4e 02 00             	rex.WRX add (%rax),%r8b
  402fec:	e7 79                	out    %eax,$0x79
  402fee:	02 00                	add    (%rax),%al
  402ff0:	93                   	xchg   %eax,%ebx
  402ff1:	8f 02                	popq   (%rdx)
  402ff3:	00 60 ad             	add    %ah,-0x53(%rax)
  402ff6:	00 00                	add    %al,(%rax)
  402ff8:	37                   	(bad)  
  402ff9:	23 02                	and    (%rdx),%eax
  402ffb:	00 11                	add    %dl,(%rcx)
  402ffd:	6f                   	outsl  %ds:(%rsi),(%dx)
  402ffe:	02 00                	add    (%rax),%al
  403000:	d0 5e 02             	rcrb   0x2(%rsi)
  403003:	00 37                	add    %dh,(%rdi)
  403005:	23 02                	and    (%rdx),%eax
  403007:	00 61 18             	add    %ah,0x18(%rcx)
  40300a:	02 00                	add    (%rax),%al
  40300c:	e3 38                	jrcxz  403046 <_IO_stdin_used+0x18c6>
  40300e:	02 00                	add    (%rax),%al
  403010:	8b 0d 02 00 24 49    	mov    0x49240002(%rip),%ecx        # 49643018 <_end+0x4902e880>
  403016:	02 00                	add    (%rax),%al
  403018:	2e 36 00 00          	cs add %al,%ss:(%rax)
  40301c:	00 00                	add    %al,(%rax)
  40301e:	00 00                	add    %al,(%rax)
  403020:	65 63 68 6f          	movslq %gs:0x6f(%rax),%ebp
  403024:	20 2d 6e 20 22 25    	and    %ch,0x2522206e(%rip)        # 25625098 <_end+0x25010900>
  40302a:	73 22                	jae    40304e <_IO_stdin_used+0x18ce>
  40302c:	20 7c 20 6d          	and    %bh,0x6d(%rax,%riz,1)
  403030:	64 35 73 75 6d 20    	fs xor $0x206d7573,%eax
  403036:	7c 20                	jl     403058 <_IO_stdin_used+0x18d8>
  403038:	63 75 74             	movslq 0x74(%rbp),%esi
  40303b:	20 2d 64 20 27 20    	and    %ch,0x20272064(%rip)        # 206750a5 <_end+0x2006090d>
  403041:	27                   	(bad)  
  403042:	20 2d 66 20 31 00    	and    %ch,0x312066(%rip)        # 7150ae <_end+0x100916>
  403048:	72 00                	jb     40304a <_IO_stdin_used+0x18ca>
  40304a:	70 6f                	jo     4030bb <q+0x3b>
  40304c:	70 65                	jo     4030b3 <q+0x33>
  40304e:	6e                   	outsb  %ds:(%rsi),(%dx)
  40304f:	20 65 72             	and    %ah,0x72(%rbp)
  403052:	72 6f                	jb     4030c3 <q+0x43>
  403054:	72 00                	jb     403056 <_IO_stdin_used+0x18d6>
	...

0000000000403080 <q>:
  403080:	96                   	xchg   %eax,%esi
  403081:	65 01 00             	add    %eax,%gs:(%rax)
  403084:	e3 38                	jrcxz  4030be <q+0x3e>
  403086:	02 00                	add    (%rax),%al
  403088:	37                   	(bad)  
  403089:	23 02                	and    (%rdx),%eax
  40308b:	00 fa                	add    %bh,%dl
  40308d:	53                   	push   %rbx
  40308e:	02 00                	add    (%rax),%al
  403090:	52                   	push   %rdx
  403091:	7f 02                	jg     403095 <q+0x15>
  403093:	00 37                	add    %dh,(%rdi)
  403095:	23 02                	and    (%rdx),%eax
  403097:	00 fa                	add    %bh,%dl
  403099:	53                   	push   %rbx
  40309a:	02 00                	add    (%rax),%al
  40309c:	e3 38                	jrcxz  4030d6 <q+0x56>
  40309e:	02 00                	add    (%rax),%al
  4030a0:	cc                   	int3   
  4030a1:	1d 02 00 65 59       	sbb    $0x59650002,%eax
  4030a6:	02 00                	add    (%rax),%al
  4030a8:	11 6f 02             	adc    %ebp,0x2(%rdi)
  4030ab:	00 60 ad             	add    %ah,-0x53(%rax)
  4030ae:	00 00                	add    %al,(%rax)
  4030b0:	8b 0d 02 00 24 49    	mov    0x49240002(%rip),%ecx        # 496430b8 <_end+0x4902e920>
  4030b6:	02 00                	add    (%rax),%al
  4030b8:	60                   	(bad)  
  4030b9:	ad                   	lods   %ds:(%rsi),%eax
  4030ba:	00 00                	add    %al,(%rax)
  4030bc:	1c c7                	sbb    $0xc7,%al
  4030be:	01 00                	add    %eax,(%rax)
  4030c0:	70 b1                	jo     403073 <_IO_stdin_used+0x18f3>
  4030c2:	01 00                	add    %eax,(%rax)
  4030c4:	51                   	push   %rcx
  4030c5:	14 01                	adc    $0x1,%al
  4030c7:	00 60 ad             	add    %ah,-0x53(%rax)
  4030ca:	00 00                	add    %al,(%rax)
  4030cc:	93                   	xchg   %eax,%ebx
  4030cd:	8f 02                	popq   (%rdx)
  4030cf:	00 60 ad             	add    %ah,-0x53(%rax)
  4030d2:	00 00                	add    %al,(%rax)
  4030d4:	a2 28 02 00 37 23 02 	movabs %al,0x2400022337000228
  4030db:	00 24 
  4030dd:	49 02 00             	rex.WB add (%r8),%al
  4030e0:	e3 38                	jrcxz  40311a <q+0x9a>
  4030e2:	02 00                	add    (%rax),%al
  4030e4:	61                   	(bad)  
  4030e5:	18 02                	sbb    %al,(%rdx)
  4030e7:	00 e3                	add    %ah,%bl
  4030e9:	38 02                	cmp    %al,(%rdx)
  4030eb:	00 7c 74 02          	add    %bh,0x2(%rsp,%rsi,2)
  4030ef:	00 8b 0d 02 00 61    	add    %cl,0x6100020d(%rbx)
  4030f5:	18 02                	sbb    %al,(%rdx)
  4030f7:	00 e3                	add    %ah,%bl
  4030f9:	38 02                	cmp    %al,(%rdx)
  4030fb:	00 65 59             	add    %ah,0x59(%rbp)
  4030fe:	02 00                	add    (%rax),%al
  403100:	fa                   	cli    
  403101:	53                   	push   %rbx
  403102:	02 00                	add    (%rax),%al
  403104:	37                   	(bad)  
  403105:	23 02                	and    (%rdx),%eax
  403107:	00 11                	add    %dl,(%rcx)
  403109:	6f                   	outsl  %ds:(%rsi),(%dx)
  40310a:	02 00                	add    (%rax),%al
  40310c:	64 ee                	fs out %al,(%dx)
  40310e:	00 00                	add    %al,(%rax)
  403110:	60                   	(bad)  
  403111:	ad                   	lods   %ds:(%rsi),%eax
  403112:	00 00                	add    %al,(%rax)
  403114:	93                   	xchg   %eax,%ebx
  403115:	8f 02                	popq   (%rdx)
  403117:	00 8b 0d 02 00 60    	add    %cl,0x6000020d(%rbx)
  40311d:	ad                   	lods   %ds:(%rsi),%eax
  40311e:	00 00                	add    %al,(%rax)
  403120:	a6                   	cmpsb  %es:(%rdi),%ds:(%rsi)
  403121:	69 02 00 37 23 02    	imul   $0x2233700,(%rdx),%eax
  403127:	00 11                	add    %dl,(%rcx)
  403129:	6f                   	outsl  %ds:(%rsi),(%dx)
  40312a:	02 00                	add    (%rax),%al
  40312c:	65 59                	gs pop %rcx
  40312e:	02 00                	add    (%rax),%al
  403130:	24 49                	and    $0x49,%al
  403132:	02 00                	add    (%rax),%al
  403134:	52                   	push   %rdx
  403135:	7f 02                	jg     403139 <q+0xb9>
  403137:	00 e3                	add    %ah,%bl
  403139:	38 02                	cmp    %al,(%rdx)
  40313b:	00 37                	add    %dh,(%rdi)
  40313d:	23 02                	and    (%rdx),%eax
  40313f:	00 a6 69 02 00 65    	add    %ah,0x65000269(%rsi)
  403145:	59                   	pop    %rcx
  403146:	02 00                	add    (%rax),%al
  403148:	fa                   	cli    
  403149:	53                   	push   %rbx
  40314a:	02 00                	add    (%rax),%al
  40314c:	60                   	(bad)  
  40314d:	ad                   	lods   %ds:(%rsi),%eax
  40314e:	00 00                	add    %al,(%rax)
  403150:	37                   	(bad)  
  403151:	23 02                	and    (%rdx),%eax
  403153:	00 24 49             	add    %ah,(%rcx,%rcx,2)
  403156:	02 00                	add    (%rax),%al
  403158:	60                   	(bad)  
  403159:	ad                   	lods   %ds:(%rsi),%eax
  40315a:	00 00                	add    %al,(%rax)
  40315c:	d0 5e 02             	rcrb   0x2(%rsi)
  40315f:	00 a6 69 02 00 e3    	add    %ah,-0x1cfffd97(%rsi)
  403165:	38 02                	cmp    %al,(%rdx)
  403167:	00 8f 4e 02 00 37    	add    %cl,0x3700024e(%rdi)
  40316d:	23 02                	and    (%rdx),%eax
  40316f:	00 a6 69 02 00 60    	add    %ah,0x60000269(%rsi)
  403175:	ad                   	lods   %ds:(%rsi),%eax
  403176:	00 00                	add    %al,(%rax)
  403178:	8b 0d 02 00 61 18    	mov    0x18610002(%rip),%ecx        # 18a13180 <_end+0x183fe9e8>
  40317e:	02 00                	add    (%rax),%al
  403180:	37                   	(bad)  
  403181:	23 02                	and    (%rdx),%eax
  403183:	00 a6 69 02 00 7c    	add    %ah,0x7c000269(%rsi)
  403189:	74 02                	je     40318d <q+0x10d>
  40318b:	00 e3                	add    %ah,%bl
  40318d:	38 02                	cmp    %al,(%rdx)
  40318f:	00 4e 3e             	add    %cl,0x3e(%rsi)
  403192:	02 00                	add    (%rax),%al
  403194:	65 59                	gs pop %rcx
  403196:	02 00                	add    (%rax),%al
  403198:	3a f9                	cmp    %cl,%bh
  40319a:	00 00                	add    %al,(%rax)
  40319c:	2e 36 00 00          	cs add %al,%ss:(%rax)
  4031a0:	2e 36 00 00          	cs add %al,%ss:(%rax)
  4031a4:	d7                   	xlat   %ds:(%rbx)
  4031a5:	75 01                	jne    4031a8 <q+0x128>
  4031a7:	00 fa                	add    %bh,%dl
  4031a9:	53                   	push   %rbx
  4031aa:	02 00                	add    (%rax),%al
  4031ac:	60                   	(bad)  
  4031ad:	ad                   	lods   %ds:(%rsi),%eax
  4031ae:	00 00                	add    %al,(%rax)
  4031b0:	37                   	(bad)  
  4031b1:	23 02                	and    (%rdx),%eax
  4031b3:	00 11                	add    %dl,(%rcx)
  4031b5:	6f                   	outsl  %ds:(%rsi),(%dx)
  4031b6:	02 00                	add    (%rax),%al
  4031b8:	7c 74                	jl     40322e <q+0x1ae>
  4031ba:	02 00                	add    (%rax),%al
  4031bc:	37                   	(bad)  
  4031bd:	23 02                	and    (%rdx),%eax
  4031bf:	00 60 ad             	add    %ah,-0x53(%rax)
  4031c2:	00 00                	add    %al,(%rax)
  4031c4:	1c c7                	sbb    $0xc7,%al
  4031c6:	01 00                	add    %eax,(%rax)
  4031c8:	70 b1                	jo     40317b <q+0xfb>
  4031ca:	01 00                	add    %eax,(%rax)
  4031cc:	60                   	(bad)  
  4031cd:	ad                   	lods   %ds:(%rsi),%eax
  4031ce:	00 00                	add    %al,(%rax)
  4031d0:	cc                   	int3   
  4031d1:	1d 02 00 37 23       	sbb    $0x23370002,%eax
  4031d6:	02 00                	add    (%rax),%al
  4031d8:	f6 12                	notb   (%rdx)
  4031da:	02 00                	add    (%rax),%al
  4031dc:	37                   	(bad)  
  4031dd:	23 02                	and    (%rdx),%eax
  4031df:	00 a6 69 02 00 81    	add    %ah,-0x7efffd97(%rsi)
  4031e5:	20 04 00             	and    %al,(%rax,%rax,1)
  4031e8:	4b 68 03 00 fa 53    	rex.WXB pushq $0x53fa0003
  4031ee:	02 00                	add    (%rax),%al
  4031f0:	60                   	(bad)  
  4031f1:	ad                   	lods   %ds:(%rsi),%eax
  4031f2:	00 00                	add    %al,(%rax)
  4031f4:	a2 28 02 00 e3 38 02 	movabs %al,0xfa000238e3000228
  4031fb:	00 fa 
  4031fd:	53                   	push   %rbx
  4031fe:	02 00                	add    (%rax),%al
  403200:	8b 0d 02 00 24 49    	mov    0x49240002(%rip),%ecx        # 49643208 <_end+0x4902ea70>
  403206:	02 00                	add    (%rax),%al
  403208:	e3 38                	jrcxz  403242 <q+0x1c2>
  40320a:	02 00                	add    (%rax),%al
  40320c:	fe                   	(bad)  
  40320d:	94                   	xchg   %eax,%esp
  40320e:	02 00                	add    (%rax),%al
  403210:	8b 0d 02 00 a6 69    	mov    0x69a60002(%rip),%ecx        # 69e63218 <_end+0x6984ea80>
  403216:	02 00                	add    (%rax),%al
  403218:	60                   	(bad)  
  403219:	ad                   	lods   %ds:(%rsi),%eax
  40321a:	00 00                	add    %al,(%rax)
  40321c:	37                   	(bad)  
  40321d:	23 02                	and    (%rdx),%eax
  40321f:	00 24 49             	add    %ah,(%rcx,%rcx,2)
  403222:	02 00                	add    (%rax),%al
  403224:	60                   	(bad)  
  403225:	ad                   	lods   %ds:(%rsi),%eax
  403226:	00 00                	add    %al,(%rax)
  403228:	4e                   	rex.WRX
  403229:	3e 02 00             	add    %ds:(%rax),%al
  40322c:	e7 79                	out    %eax,$0x79
  40322e:	02 00                	add    (%rax),%al
  403230:	37                   	(bad)  
  403231:	23 02                	and    (%rdx),%eax
  403233:	00 0d 2e 02 00 65    	add    %cl,0x6500022e(%rip)        # 65403467 <_end+0x64deeccf>
  403239:	59                   	pop    %rcx
  40323a:	02 00                	add    (%rax),%al
  40323c:	60                   	(bad)  
  40323d:	ad                   	lods   %ds:(%rsi),%eax
  40323e:	00 00                	add    %al,(%rax)
  403240:	3b 64 02 00          	cmp    0x0(%rdx,%rax,1),%esp
  403244:	e7 79                	out    %eax,$0x79
  403246:	02 00                	add    (%rax),%al
  403248:	37                   	(bad)  
  403249:	23 02                	and    (%rdx),%eax
  40324b:	00 60 ad             	add    %ah,-0x53(%rax)
  40324e:	00 00                	add    %al,(%rax)
  403250:	93                   	xchg   %eax,%ebx
  403251:	8f 02                	popq   (%rdx)
  403253:	00 8b 0d 02 00 60    	add    %cl,0x6000020d(%rbx)
  403259:	ad                   	lods   %ds:(%rsi),%eax
  40325a:	00 00                	add    %al,(%rax)
  40325c:	61                   	(bad)  
  40325d:	18 02                	sbb    %al,(%rdx)
  40325f:	00 65 59             	add    %ah,0x59(%rbp)
  403262:	02 00                	add    (%rax),%al
  403264:	8f                   	(bad)  
  403265:	4e 02 00             	rex.WRX add (%rax),%r8b
  403268:	37                   	(bad)  
  403269:	23 02                	and    (%rdx),%eax
  40326b:	00 fa                	add    %bh,%dl
  40326d:	53                   	push   %rbx
  40326e:	02 00                	add    (%rax),%al
  403270:	fe                   	(bad)  
  403271:	94                   	xchg   %eax,%esp
  403272:	02 00                	add    (%rax),%al
  403274:	8b 0d 02 00 a6 69    	mov    0x69a60002(%rip),%ecx        # 69e6327c <_end+0x6984eae4>
  40327a:	02 00                	add    (%rax),%al
  40327c:	65 59                	gs pop %rcx
  40327e:	02 00                	add    (%rax),%al
  403280:	fa                   	cli    
  403281:	53                   	push   %rbx
  403282:	02 00                	add    (%rax),%al
  403284:	60                   	(bad)  
  403285:	ad                   	lods   %ds:(%rsi),%eax
  403286:	00 00                	add    %al,(%rax)
  403288:	a6                   	cmpsb  %es:(%rdi),%ds:(%rsi)
  403289:	69 02 00 37 23 02    	imul   $0x2233700,(%rdx),%eax
  40328f:	00 11                	add    %dl,(%rcx)
  403291:	6f                   	outsl  %ds:(%rsi),(%dx)
  403292:	02 00                	add    (%rax),%al
  403294:	65 59                	gs pop %rcx
  403296:	02 00                	add    (%rax),%al
  403298:	24 49                	and    $0x49,%al
  40329a:	02 00                	add    (%rax),%al
  40329c:	52                   	push   %rdx
  40329d:	7f 02                	jg     4032a1 <q+0x221>
  40329f:	00 e3                	add    %ah,%bl
  4032a1:	38 02                	cmp    %al,(%rdx)
  4032a3:	00 37                	add    %dh,(%rdi)
  4032a5:	23 02                	and    (%rdx),%eax
  4032a7:	00 fa                	add    %bh,%dl
  4032a9:	53                   	push   %rbx
  4032aa:	02 00                	add    (%rax),%al
  4032ac:	cc                   	int3   
  4032ad:	1d 02 00 65 59       	sbb    $0x59650002,%eax
  4032b2:	02 00                	add    (%rax),%al
  4032b4:	60                   	(bad)  
  4032b5:	ad                   	lods   %ds:(%rsi),%eax
  4032b6:	00 00                	add    %al,(%rax)
  4032b8:	24 49                	and    $0x49,%al
  4032ba:	02 00                	add    (%rax),%al
  4032bc:	65 59                	gs pop %rcx
  4032be:	02 00                	add    (%rax),%al
  4032c0:	11 6f 02             	adc    %ebp,0x2(%rdi)
  4032c3:	00 60 ad             	add    %ah,-0x53(%rax)
  4032c6:	00 00                	add    %al,(%rax)
  4032c8:	cc                   	int3   
  4032c9:	1d 02 00 37 23       	sbb    $0x23370002,%eax
  4032ce:	02 00                	add    (%rax),%al
  4032d0:	11 6f 02             	adc    %ebp,0x2(%rdi)
  4032d3:	00 8b 0d 02 00 a2    	add    %cl,-0x5dfffdf3(%rbx)
  4032d9:	28 02                	sub    %al,(%rdx)
  4032db:	00 81 20 04 00 4f    	add    %al,0x4f000420(%rcx)
  4032e1:	a9 03 00 65 59       	test   $0x59650003,%eax
  4032e6:	02 00                	add    (%rax),%al
  4032e8:	11 6f 02             	adc    %ebp,0x2(%rdi)
  4032eb:	00 60 ad             	add    %ah,-0x53(%rax)
  4032ee:	00 00                	add    %al,(%rax)
  4032f0:	cc                   	int3   
  4032f1:	1d 02 00 37 23       	sbb    $0x23370002,%eax
  4032f6:	02 00                	add    (%rax),%al
  4032f8:	60                   	(bad)  
  4032f9:	ad                   	lods   %ds:(%rsi),%eax
  4032fa:	00 00                	add    %al,(%rax)
  4032fc:	61                   	(bad)  
  4032fd:	18 02                	sbb    %al,(%rdx)
  4032ff:	00 8b 0d 02 00 cc    	add    %cl,-0x33fffdf3(%rbx)
  403305:	1d 02 00 8b 0d       	sbb    $0xd8b0002,%eax
  40330a:	02 00                	add    (%rax),%al
  40330c:	60                   	(bad)  
  40330d:	ad                   	lods   %ds:(%rsi),%eax
  40330e:	00 00                	add    %al,(%rax)
  403310:	fa                   	cli    
  403311:	53                   	push   %rbx
  403312:	02 00                	add    (%rax),%al
  403314:	e3 38                	jrcxz  40334e <q+0x2ce>
  403316:	02 00                	add    (%rax),%al
  403318:	52                   	push   %rdx
  403319:	7f 02                	jg     40331d <q+0x29d>
  40331b:	00 37                	add    %dh,(%rdi)
  40331d:	23 02                	and    (%rdx),%eax
  40331f:	00 24 49             	add    %ah,(%rcx,%rcx,2)
  403322:	02 00                	add    (%rax),%al
  403324:	3a f9                	cmp    %cl,%bh
  403326:	00 00                	add    %al,(%rax)
  403328:	2e 36 00 00          	cs add %al,%ss:(%rax)
  40332c:	2b 60 01             	sub    0x1(%rax),%esp
  40332f:	00 cc                	add    %cl,%ah
  403331:	1d 02 00 37 23       	sbb    $0x23370002,%eax
  403336:	02 00                	add    (%rax),%al
  403338:	8f                   	(bad)  
  403339:	4e 02 00             	rex.WRX add (%rax),%r8b
  40333c:	81 20 04 00 4b 68    	andl   $0x684b0004,(%rax)
  403342:	03 00                	add    (%rax),%eax
  403344:	11 6f 02             	adc    %ebp,0x2(%rdi)
  403347:	00 60 ad             	add    %ah,-0x53(%rax)
  40334a:	00 00                	add    %al,(%rax)
  40334c:	7c 74                	jl     4033c2 <q+0x342>
  40334e:	02 00                	add    (%rax),%al
  403350:	37                   	(bad)  
  403351:	23 02                	and    (%rdx),%eax
  403353:	00 fa                	add    %bh,%dl
  403355:	53                   	push   %rbx
  403356:	02 00                	add    (%rax),%al
  403358:	cc                   	int3   
  403359:	1d 02 00 a6 69       	sbb    $0x69a60002,%eax
  40335e:	02 00                	add    (%rax),%al
  403360:	81 20 04 00 4b 68    	andl   $0x684b0004,(%rax)
  403366:	03 00                	add    (%rax),%eax
  403368:	fa                   	cli    
  403369:	53                   	push   %rbx
  40336a:	02 00                	add    (%rax),%al
  40336c:	60                   	(bad)  
  40336d:	ad                   	lods   %ds:(%rsi),%eax
  40336e:	00 00                	add    %al,(%rax)
  403370:	3b 64 02 00          	cmp    0x0(%rdx,%rax,1),%esp
  403374:	e7 79                	out    %eax,$0x79
  403376:	02 00                	add    (%rax),%al
  403378:	37                   	(bad)  
  403379:	23 02                	and    (%rdx),%eax
  40337b:	00 60 ad             	add    %ah,-0x53(%rax)
  40337e:	00 00                	add    %al,(%rax)
  403380:	e3 38                	jrcxz  4033ba <q+0x33a>
  403382:	02 00                	add    (%rax),%al
  403384:	fa                   	cli    
  403385:	53                   	push   %rbx
  403386:	02 00                	add    (%rax),%al
  403388:	52                   	push   %rdx
  403389:	7f 02                	jg     40338d <q+0x30d>
  40338b:	00 37                	add    %dh,(%rdi)
  40338d:	23 02                	and    (%rdx),%eax
  40338f:	00 11                	add    %dl,(%rcx)
  403391:	6f                   	outsl  %ds:(%rsi),(%dx)
  403392:	02 00                	add    (%rax),%al
  403394:	7c 74                	jl     40340a <q+0x38a>
  403396:	02 00                	add    (%rax),%al
  403398:	e3 38                	jrcxz  4033d2 <q+0x352>
  40339a:	02 00                	add    (%rax),%al
  40339c:	0d 2e 02 00 8b       	or     $0x8b00022e,%eax
  4033a1:	0d 02 00 a6 69       	or     $0x69a60002,%eax
  4033a6:	02 00                	add    (%rax),%al
  4033a8:	60                   	(bad)  
  4033a9:	ad                   	lods   %ds:(%rsi),%eax
  4033aa:	00 00                	add    %al,(%rax)
  4033ac:	65 59                	gs pop %rcx
  4033ae:	02 00                	add    (%rax),%al
  4033b0:	7c 74                	jl     403426 <q+0x3a6>
  4033b2:	02 00                	add    (%rax),%al
  4033b4:	a6                   	cmpsb  %es:(%rdi),%ds:(%rsi)
  4033b5:	69 02 00 8b 0d 02    	imul   $0x20d8b00,(%rdx),%eax
  4033bb:	00 11                	add    %dl,(%rcx)
  4033bd:	6f                   	outsl  %ds:(%rsi),(%dx)
  4033be:	02 00                	add    (%rax),%al
  4033c0:	60                   	(bad)  
  4033c1:	ad                   	lods   %ds:(%rsi),%eax
  4033c2:	00 00                	add    %al,(%rax)
  4033c4:	d0 5e 02             	rcrb   0x2(%rsi)
  4033c7:	00 a6 69 02 00 37    	add    %ah,0x37000269(%rsi)
  4033cd:	23 02                	and    (%rdx),%eax
  4033cf:	00 0d 2e 02 00 e7    	add    %cl,-0x18fffdd2(%rip)        # ffffffffe7403603 <_end+0xffffffffe6deee6b>
  4033d5:	79 02                	jns    4033d9 <q+0x359>
  4033d7:	00 fa                	add    %bh,%dl
  4033d9:	53                   	push   %rbx
  4033da:	02 00                	add    (%rax),%al
  4033dc:	7c 74                	jl     403452 <q+0x3d2>
  4033de:	02 00                	add    (%rax),%al
  4033e0:	8b 0d 02 00 11 6f    	mov    0x6f110002(%rip),%ecx        # 6f5133e8 <_end+0x6eefec50>
  4033e6:	02 00                	add    (%rax),%al
  4033e8:	60                   	(bad)  
  4033e9:	ad                   	lods   %ds:(%rsi),%eax
  4033ea:	00 00                	add    %al,(%rax)
  4033ec:	d0 5e 02             	rcrb   0x2(%rsi)
  4033ef:	00 8b 0d 02 00 a6    	add    %cl,-0x59fffdf3(%rbx)
  4033f5:	69 02 00 8b 0d 02    	imul   $0x20d8b00,(%rdx),%eax
  4033fb:	00 60 ad             	add    %ah,-0x53(%rax)
  4033fe:	00 00                	add    %al,(%rax)
  403400:	a6                   	cmpsb  %es:(%rdi),%ds:(%rsi)
  403401:	69 02 00 37 23 02    	imul   $0x2233700,(%rdx),%eax
  403407:	00 11                	add    %dl,(%rcx)
  403409:	6f                   	outsl  %ds:(%rsi),(%dx)
  40340a:	02 00                	add    (%rax),%al
  40340c:	d0 5e 02             	rcrb   0x2(%rsi)
  40340f:	00 65 59             	add    %ah,0x59(%rbp)
  403412:	02 00                	add    (%rax),%al
  403414:	fa                   	cli    
  403415:	53                   	push   %rbx
  403416:	02 00                	add    (%rax),%al
  403418:	cc                   	int3   
  403419:	1d 02 00 37 23       	sbb    $0x23370002,%eax
  40341e:	02 00                	add    (%rax),%al
  403420:	a6                   	cmpsb  %es:(%rdi),%ds:(%rsi)
  403421:	69 02 00 60 ad 00    	imul   $0xad6000,(%rdx),%eax
  403427:	00 cc                	add    %cl,%ah
  403429:	1d 02 00 e7 79       	sbb    $0x79e70002,%eax
  40342e:	02 00                	add    (%rax),%al
  403430:	a6                   	cmpsb  %es:(%rdi),%ds:(%rsi)
  403431:	69 02 00 8b 0d 02    	imul   $0x20d8b00,(%rdx),%eax
  403437:	00 fa                	add    %bh,%dl
  403439:	53                   	push   %rbx
  40343a:	02 00                	add    (%rax),%al
  40343c:	7c 74                	jl     4034b2 <q+0x432>
  40343e:	02 00                	add    (%rax),%al
  403440:	37                   	(bad)  
  403441:	23 02                	and    (%rdx),%eax
  403443:	00 60 ad             	add    %ah,-0x53(%rax)
  403446:	00 00                	add    %al,(%rax)
  403448:	24 49                	and    $0x49,%al
  40344a:	02 00                	add    (%rax),%al
  40344c:	8b 0d 02 00 60 ad    	mov    -0x529ffffe(%rip),%ecx        # ffffffffada03454 <_end+0xffffffffad3eecbc>
  403452:	00 00                	add    %al,(%rax)
  403454:	cc                   	int3   
  403455:	1d 02 00 37 23       	sbb    $0x23370002,%eax
  40345a:	02 00                	add    (%rax),%al
  40345c:	a2 28 02 00 37 23 02 	movabs %al,0xfa00022337000228
  403463:	00 fa 
  403465:	53                   	push   %rbx
  403466:	02 00                	add    (%rax),%al
  403468:	11 6f 02             	adc    %ebp,0x2(%rdi)
  40346b:	00 8b 0d 02 00 3a    	add    %cl,0x3a00020d(%rbx)
  403471:	f9                   	stc    
  403472:	00 00                	add    %al,(%rax)
  403474:	2e 36 00 00          	cs add %al,%ss:(%rax)
  403478:	d7                   	xlat   %ds:(%rbx)
  403479:	75 01                	jne    40347c <q+0x3fc>
  40347b:	00 24 49             	add    %ah,(%rcx,%rcx,2)
  40347e:	02 00                	add    (%rax),%al
  403480:	60                   	(bad)  
  403481:	ad                   	lods   %ds:(%rsi),%eax
  403482:	00 00                	add    %al,(%rax)
  403484:	cc                   	int3   
  403485:	1d 02 00 37 23       	sbb    $0x23370002,%eax
  40348a:	02 00                	add    (%rax),%al
  40348c:	11 6f 02             	adc    %ebp,0x2(%rdi)
  40348f:	00 8b 0d 02 00 a2    	add    %cl,-0x5dfffdf3(%rbx)
  403495:	28 02                	sub    %al,(%rdx)
  403497:	00 81 20 04 00 4f    	add    %al,0x4f000420(%rcx)
  40349d:	a9 03 00 65 59       	test   $0x59650003,%eax
  4034a2:	02 00                	add    (%rax),%al
  4034a4:	60                   	(bad)  
  4034a5:	ad                   	lods   %ds:(%rsi),%eax
  4034a6:	00 00                	add    %al,(%rax)
  4034a8:	a2 28 02 00 e3 38 02 	movabs %al,0xfa000238e3000228
  4034af:	00 fa 
  4034b1:	53                   	push   %rbx
  4034b2:	02 00                	add    (%rax),%al
  4034b4:	8b 0d 02 00 24 49    	mov    0x49240002(%rip),%ecx        # 496434bc <_end+0x4902ed24>
  4034ba:	02 00                	add    (%rax),%al
  4034bc:	60                   	(bad)  
  4034bd:	ad                   	lods   %ds:(%rsi),%eax
  4034be:	00 00                	add    %al,(%rax)
  4034c0:	61                   	(bad)  
  4034c1:	18 02                	sbb    %al,(%rdx)
  4034c3:	00 65 59             	add    %ah,0x59(%rbp)
  4034c6:	02 00                	add    (%rax),%al
  4034c8:	fa                   	cli    
  4034c9:	53                   	push   %rbx
  4034ca:	02 00                	add    (%rax),%al
  4034cc:	11 6f 02             	adc    %ebp,0x2(%rdi)
  4034cf:	00 e3                	add    %ah,%bl
  4034d1:	38 02                	cmp    %al,(%rdx)
  4034d3:	00 11                	add    %dl,(%rcx)
  4034d5:	6f                   	outsl  %ds:(%rsi),(%dx)
  4034d6:	02 00                	add    (%rax),%al
  4034d8:	7c 74                	jl     40354e <q+0x4ce>
  4034da:	02 00                	add    (%rax),%al
  4034dc:	37                   	(bad)  
  4034dd:	23 02                	and    (%rdx),%eax
  4034df:	00 60 ad             	add    %ah,-0x53(%rax)
  4034e2:	00 00                	add    %al,(%rax)
  4034e4:	37                   	(bad)  
  4034e5:	23 02                	and    (%rdx),%eax
  4034e7:	00 fa                	add    %bh,%dl
  4034e9:	53                   	push   %rbx
  4034ea:	02 00                	add    (%rax),%al
  4034ec:	60                   	(bad)  
  4034ed:	ad                   	lods   %ds:(%rsi),%eax
  4034ee:	00 00                	add    %al,(%rax)
  4034f0:	61                   	(bad)  
  4034f1:	18 02                	sbb    %al,(%rdx)
  4034f3:	00 a6 69 02 00 37    	add    %ah,0x37000269(%rsi)
  4034f9:	23 02                	and    (%rdx),%eax
  4034fb:	00 8b 0d 02 00 a6    	add    %cl,-0x59fffdf3(%rbx)
  403501:	69 02 00 60 ad 00    	imul   $0xad6000,(%rdx),%eax
  403507:	00 e7                	add    %ah,%bh
  403509:	79 02                	jns    40350d <q+0x48d>
  40350b:	00 fa                	add    %bh,%dl
  40350d:	53                   	push   %rbx
  40350e:	02 00                	add    (%rax),%al
  403510:	60                   	(bad)  
  403511:	ad                   	lods   %ds:(%rsi),%eax
  403512:	00 00                	add    %al,(%rax)
  403514:	11 6f 02             	adc    %ebp,0x2(%rdi)
  403517:	00 37                	add    %dh,(%rdi)
  403519:	23 02                	and    (%rdx),%eax
  40351b:	00 a6 69 02 00 52    	add    %ah,0x52000269(%rsi)
  403521:	7f 02                	jg     403525 <q+0x4a5>
  403523:	00 e3                	add    %ah,%bl
  403525:	38 02                	cmp    %al,(%rdx)
  403527:	00 cc                	add    %cl,%ah
  403529:	1d 02 00 65 59       	sbb    $0x59650002,%eax
  40352e:	02 00                	add    (%rax),%al
  403530:	a6                   	cmpsb  %es:(%rdi),%ds:(%rsi)
  403531:	69 02 00 60 ad 00    	imul   $0xad6000,(%rdx),%eax
  403537:	00 3b                	add    %bh,(%rbx)
  403539:	64 02 00             	add    %fs:(%rax),%al
  40353c:	e7 79                	out    %eax,$0x79
  40353e:	02 00                	add    (%rax),%al
  403540:	37                   	(bad)  
  403541:	23 02                	and    (%rdx),%eax
  403543:	00 60 ad             	add    %ah,-0x53(%rax)
  403546:	00 00                	add    %al,(%rax)
  403548:	11 6f 02             	adc    %ebp,0x2(%rdi)
  40354b:	00 37                	add    %dh,(%rdi)
  40354d:	23 02                	and    (%rdx),%eax
  40354f:	00 60 ad             	add    %ah,-0x53(%rax)
  403552:	00 00                	add    %al,(%rax)
  403554:	61                   	(bad)  
  403555:	18 02                	sbb    %al,(%rdx)
  403557:	00 65 59             	add    %ah,0x59(%rbp)
  40355a:	02 00                	add    (%rax),%al
  40355c:	8f                   	(bad)  
  40355d:	4e 02 00             	rex.WRX add (%rax),%r8b
  403560:	d0 5e 02             	rcrb   0x2(%rsi)
  403563:	00 65 59             	add    %ah,0x59(%rbp)
  403566:	02 00                	add    (%rax),%al
  403568:	a6                   	cmpsb  %es:(%rdi),%ds:(%rsi)
  403569:	69 02 00 7c 74 02    	imul   $0x2747c00,(%rdx),%eax
  40356f:	00 37                	add    %dh,(%rdi)
  403571:	23 02                	and    (%rdx),%eax
  403573:	00 60 ad             	add    %ah,-0x53(%rax)
  403576:	00 00                	add    %al,(%rax)
  403578:	e3 38                	jrcxz  4035b2 <q+0x532>
  40357a:	02 00                	add    (%rax),%al
  40357c:	0d 2e 02 00 e7       	or     $0xe700022e,%eax
  403581:	79 02                	jns    403585 <q+0x505>
  403583:	00 8b 0d 02 00 24    	add    %cl,0x2400020d(%rbx)
  403589:	49 02 00             	rex.WB add (%r8),%al
  40358c:	60                   	(bad)  
  40358d:	ad                   	lods   %ds:(%rsi),%eax
  40358e:	00 00                	add    %al,(%rax)
  403590:	3b 64 02 00          	cmp    0x0(%rdx,%rax,1),%esp
  403594:	e7 79                	out    %eax,$0x79
  403596:	02 00                	add    (%rax),%al
  403598:	37                   	(bad)  
  403599:	23 02                	and    (%rdx),%eax
  40359b:	00 60 ad             	add    %ah,-0x53(%rax)
  40359e:	00 00                	add    %al,(%rax)
  4035a0:	93                   	xchg   %eax,%ebx
  4035a1:	8f 02                	popq   (%rdx)
  4035a3:	00 65 59             	add    %ah,0x59(%rbp)
  4035a6:	02 00                	add    (%rax),%al
  4035a8:	64 ee                	fs out %al,(%dx)
  4035aa:	00 00                	add    %al,(%rax)
  4035ac:	60                   	(bad)  
  4035ad:	ad                   	lods   %ds:(%rsi),%eax
  4035ae:	00 00                	add    %al,(%rax)
  4035b0:	37                   	(bad)  
  4035b1:	23 02                	and    (%rdx),%eax
  4035b3:	00 11                	add    %dl,(%rcx)
  4035b5:	6f                   	outsl  %ds:(%rsi),(%dx)
  4035b6:	02 00                	add    (%rax),%al
  4035b8:	60                   	(bad)  
  4035b9:	ad                   	lods   %ds:(%rsi),%eax
  4035ba:	00 00                	add    %al,(%rax)
  4035bc:	cc                   	int3   
  4035bd:	1d 02 00 37 23       	sbb    $0x23370002,%eax
  4035c2:	02 00                	add    (%rax),%al
  4035c4:	61                   	(bad)  
  4035c5:	18 02                	sbb    %al,(%rdx)
  4035c7:	00 e3                	add    %ah,%bl
  4035c9:	38 02                	cmp    %al,(%rdx)
  4035cb:	00 a6 69 02 00 64    	add    %ah,0x64000269(%rsi)
  4035d1:	ee                   	out    %al,(%dx)
  4035d2:	00 00                	add    %al,(%rax)
  4035d4:	60                   	(bad)  
  4035d5:	ad                   	lods   %ds:(%rsi),%eax
  4035d6:	00 00                	add    %al,(%rax)
  4035d8:	3b 64 02 00          	cmp    0x0(%rdx,%rax,1),%esp
  4035dc:	e7 79                	out    %eax,$0x79
  4035de:	02 00                	add    (%rax),%al
  4035e0:	37                   	(bad)  
  4035e1:	23 02                	and    (%rdx),%eax
  4035e3:	00 60 ad             	add    %ah,-0x53(%rax)
  4035e6:	00 00                	add    %al,(%rax)
  4035e8:	d0 5e 02             	rcrb   0x2(%rsi)
  4035eb:	00 a6 69 02 00 65    	add    %ah,0x65000269(%rsi)
  4035f1:	59                   	pop    %rcx
  4035f2:	02 00                	add    (%rax),%al
  4035f4:	52                   	push   %rdx
  4035f5:	7f 02                	jg     4035f9 <q+0x579>
  4035f7:	00 37                	add    %dh,(%rdi)
  4035f9:	23 02                	and    (%rdx),%eax
  4035fb:	00 8b 0d 02 00 60    	add    %cl,0x6000020d(%rbx)
  403601:	ad                   	lods   %ds:(%rsi),%eax
  403602:	00 00                	add    %al,(%rax)
  403604:	24 49                	and    $0x49,%al
  403606:	02 00                	add    (%rax),%al
  403608:	65 59                	gs pop %rcx
  40360a:	02 00                	add    (%rax),%al
  40360c:	11 6f 02             	adc    %ebp,0x2(%rdi)
  40360f:	00 60 ad             	add    %ah,-0x53(%rax)
  403612:	00 00                	add    %al,(%rax)
  403614:	8f                   	(bad)  
  403615:	4e 02 00             	rex.WRX add (%rax),%r8b
  403618:	e3 38                	jrcxz  403652 <q+0x5d2>
  40361a:	02 00                	add    (%rax),%al
  40361c:	11 6f 02             	adc    %ebp,0x2(%rdi)
  40361f:	00 8f 4e 02 00 65    	add    %cl,0x6500024e(%rdi)
  403625:	59                   	pop    %rcx
  403626:	02 00                	add    (%rax),%al
  403628:	11 6f 02             	adc    %ebp,0x2(%rdi)
  40362b:	00 60 ad             	add    %ah,-0x53(%rax)
  40362e:	00 00                	add    %al,(%rax)
  403630:	cc                   	int3   
  403631:	1d 02 00 37 23       	sbb    $0x23370002,%eax
  403636:	02 00                	add    (%rax),%al
  403638:	11 6f 02             	adc    %ebp,0x2(%rdi)
  40363b:	00 8b 0d 02 00 a2    	add    %cl,-0x5dfffdf3(%rbx)
  403641:	28 02                	sub    %al,(%rdx)
  403643:	00 81 20 04 00 4f    	add    %al,0x4f000420(%rcx)
  403649:	a9 03 00 65 59       	test   $0x59650003,%eax
  40364e:	02 00                	add    (%rax),%al
  403650:	11 6f 02             	adc    %ebp,0x2(%rdi)
  403653:	00 60 ad             	add    %ah,-0x53(%rax)
  403656:	00 00                	add    %al,(%rax)
  403658:	93                   	xchg   %eax,%ebx
  403659:	8f 02                	popq   (%rdx)
  40365b:	00 60 ad             	add    %ah,-0x53(%rax)
  40365e:	00 00                	add    %al,(%rax)
  403660:	3b 64 02 00          	cmp    0x0(%rdx,%rax,1),%esp
  403664:	e7 79                	out    %eax,$0x79
  403666:	02 00                	add    (%rax),%al
  403668:	37                   	(bad)  
  403669:	23 02                	and    (%rdx),%eax
  40366b:	00 60 ad             	add    %ah,-0x53(%rax)
  40366e:	00 00                	add    %al,(%rax)
  403670:	11 6f 02             	adc    %ebp,0x2(%rdi)
  403673:	00 37                	add    %dh,(%rdi)
  403675:	23 02                	and    (%rdx),%eax
  403677:	00 8b 0d 02 00 60    	add    %cl,0x6000020d(%rbx)
  40367d:	ad                   	lods   %ds:(%rsi),%eax
  40367e:	00 00                	add    %al,(%rax)
  403680:	fa                   	cli    
  403681:	53                   	push   %rbx
  403682:	02 00                	add    (%rax),%al
  403684:	37                   	(bad)  
  403685:	23 02                	and    (%rdx),%eax
  403687:	00 61 18             	add    %ah,0x18(%rcx)
  40368a:	02 00                	add    (%rax),%al
  40368c:	37                   	(bad)  
  40368d:	23 02                	and    (%rdx),%eax
  40368f:	00 11                	add    %dl,(%rcx)
  403691:	6f                   	outsl  %ds:(%rsi),(%dx)
  403692:	02 00                	add    (%rax),%al
  403694:	8b 0d 02 00 a6 69    	mov    0x69a60002(%rip),%ecx        # 69e6369c <_end+0x6984ef04>
  40369a:	02 00                	add    (%rax),%al
  40369c:	e3 38                	jrcxz  4036d6 <q+0x656>
  40369e:	02 00                	add    (%rax),%al
  4036a0:	65 59                	gs pop %rcx
  4036a2:	02 00                	add    (%rax),%al
  4036a4:	60                   	(bad)  
  4036a5:	ad                   	lods   %ds:(%rsi),%eax
  4036a6:	00 00                	add    %al,(%rax)
  4036a8:	78 33                	js     4036dd <q+0x65d>
  4036aa:	02 00                	add    (%rax),%al
  4036ac:	8b 0d 02 00 61 18    	mov    0x18610002(%rip),%ecx        # 18a136b4 <_end+0x183fef1c>
  4036b2:	02 00                	add    (%rax),%al
  4036b4:	37                   	(bad)  
  4036b5:	23 02                	and    (%rdx),%eax
  4036b7:	00 a6 69 02 00 60    	add    %ah,0x60000269(%rsi)
  4036bd:	ad                   	lods   %ds:(%rsi),%eax
  4036be:	00 00                	add    %al,(%rax)
  4036c0:	24 49                	and    $0x49,%al
  4036c2:	02 00                	add    (%rax),%al
  4036c4:	65 59                	gs pop %rcx
  4036c6:	02 00                	add    (%rax),%al
  4036c8:	60                   	(bad)  
  4036c9:	ad                   	lods   %ds:(%rsi),%eax
  4036ca:	00 00                	add    %al,(%rax)
  4036cc:	8f                   	(bad)  
  4036cd:	4e 02 00             	rex.WRX add (%rax),%r8b
  4036d0:	e3 38                	jrcxz  40370a <q+0x68a>
  4036d2:	02 00                	add    (%rax),%al
  4036d4:	11 6f 02             	adc    %ebp,0x2(%rdi)
  4036d7:	00 8f 4e 02 00 65    	add    %cl,0x6500024e(%rdi)
  4036dd:	59                   	pop    %rcx
  4036de:	02 00                	add    (%rax),%al
  4036e0:	60                   	(bad)  
  4036e1:	ad                   	lods   %ds:(%rsi),%eax
  4036e2:	00 00                	add    %al,(%rax)
  4036e4:	d0 5e 02             	rcrb   0x2(%rsi)
  4036e7:	00 8b 0d 02 00 a6    	add    %cl,-0x59fffdf3(%rbx)
  4036ed:	69 02 00 8b 0d 02    	imul   $0x20d8b00,(%rdx),%eax
  4036f3:	00 60 ad             	add    %ah,-0x53(%rax)
  4036f6:	00 00                	add    %al,(%rax)
  4036f8:	a6                   	cmpsb  %es:(%rdi),%ds:(%rsi)
  4036f9:	69 02 00 37 23 02    	imul   $0x2233700,(%rdx),%eax
  4036ff:	00 11                	add    %dl,(%rcx)
  403701:	6f                   	outsl  %ds:(%rsi),(%dx)
  403702:	02 00                	add    (%rax),%al
  403704:	65 59                	gs pop %rcx
  403706:	02 00                	add    (%rax),%al
  403708:	24 49                	and    $0x49,%al
  40370a:	02 00                	add    (%rax),%al
  40370c:	52                   	push   %rdx
  40370d:	7f 02                	jg     403711 <q+0x691>
  40370f:	00 37                	add    %dh,(%rdi)
  403711:	23 02                	and    (%rdx),%eax
  403713:	00 a6 69 02 00 24    	add    %ah,0x24000269(%rsi)
  403719:	49 02 00             	rex.WB add (%r8),%al
  40371c:	65 59                	gs pop %rcx
  40371e:	02 00                	add    (%rax),%al
  403720:	11 6f 02             	adc    %ebp,0x2(%rdi)
  403723:	00 3a                	add    %bh,(%rdx)
  403725:	f9                   	stc    
  403726:	00 00                	add    %al,(%rax)
  403728:	60                   	(bad)  
  403729:	ad                   	lods   %ds:(%rsi),%eax
  40372a:	00 00                	add    %al,(%rax)
  40372c:	9a                   	(bad)  
  40372d:	a6                   	cmpsb  %es:(%rdi),%ds:(%rsi)
  40372e:	01 00                	add    %eax,(%rax)
  403730:	65 59                	gs pop %rcx
  403732:	02 00                	add    (%rax),%al
  403734:	60                   	(bad)  
  403735:	ad                   	lods   %ds:(%rsi),%eax
  403736:	00 00                	add    %al,(%rax)
  403738:	f6 12                	notb   (%rdx)
  40373a:	02 00                	add    (%rax),%al
  40373c:	8b 0d 02 00 11 6f    	mov    0x6f110002(%rip),%ecx        # 6f513744 <_end+0x6eefefac>
  403742:	02 00                	add    (%rax),%al
  403744:	7c 74                	jl     4037ba <q+0x73a>
  403746:	02 00                	add    (%rax),%al
  403748:	8b 0d 02 00 60 ad    	mov    -0x529ffffe(%rip),%ecx        # ffffffffada03750 <_end+0xffffffffad3eefb8>
  40374e:	00 00                	add    %al,(%rax)
  403750:	61                   	(bad)  
  403751:	18 02                	sbb    %al,(%rdx)
  403753:	00 65 59             	add    %ah,0x59(%rbp)
  403756:	02 00                	add    (%rax),%al
  403758:	fa                   	cli    
  403759:	53                   	push   %rbx
  40375a:	02 00                	add    (%rax),%al
  40375c:	60                   	(bad)  
  40375d:	ad                   	lods   %ds:(%rsi),%eax
  40375e:	00 00                	add    %al,(%rax)
  403760:	37                   	(bad)  
  403761:	23 02                	and    (%rdx),%eax
  403763:	00 11                	add    %dl,(%rcx)
  403765:	6f                   	outsl  %ds:(%rsi),(%dx)
  403766:	02 00                	add    (%rax),%al
  403768:	d0 5e 02             	rcrb   0x2(%rsi)
  40376b:	00 37                	add    %dh,(%rdi)
  40376d:	23 02                	and    (%rdx),%eax
  40376f:	00 a6 69 02 00 8b    	add    %ah,-0x74fffd97(%rsi)
  403775:	0d 02 00 a6 69       	or     $0x69a60002,%eax
  40377a:	02 00                	add    (%rax),%al
  40377c:	60                   	(bad)  
  40377d:	ad                   	lods   %ds:(%rsi),%eax
  40377e:	00 00                	add    %al,(%rax)
  403780:	24 49                	and    $0x49,%al
  403782:	02 00                	add    (%rax),%al
  403784:	8b 0d 02 00 60 ad    	mov    -0x529ffffe(%rip),%ecx        # ffffffffada0378c <_end+0xffffffffad3eeff4>
  40378a:	00 00                	add    %al,(%rax)
  40378c:	a6                   	cmpsb  %es:(%rdi),%ds:(%rsi)
  40378d:	69 02 00 37 23 02    	imul   $0x2233700,(%rdx),%eax
  403793:	00 11                	add    %dl,(%rcx)
  403795:	6f                   	outsl  %ds:(%rsi),(%dx)
  403796:	02 00                	add    (%rax),%al
  403798:	d0 5e 02             	rcrb   0x2(%rsi)
  40379b:	00 e7                	add    %ah,%bh
  40379d:	79 02                	jns    4037a1 <q+0x721>
  40379f:	00 37                	add    %dh,(%rdi)
  4037a1:	23 02                	and    (%rdx),%eax
  4037a3:	00 11                	add    %dl,(%rcx)
  4037a5:	6f                   	outsl  %ds:(%rsi),(%dx)
  4037a6:	02 00                	add    (%rax),%al
  4037a8:	7c 74                	jl     40381e <q+0x79e>
  4037aa:	02 00                	add    (%rax),%al
  4037ac:	8b 0d 02 00 60 ad    	mov    -0x529ffffe(%rip),%ecx        # ffffffffada037b4 <_end+0xffffffffad3ef01c>
  4037b2:	00 00                	add    %al,(%rax)
  4037b4:	61                   	(bad)  
  4037b5:	18 02                	sbb    %al,(%rdx)
  4037b7:	00 65 59             	add    %ah,0x59(%rbp)
  4037ba:	02 00                	add    (%rax),%al
  4037bc:	a6                   	cmpsb  %es:(%rdi),%ds:(%rsi)
  4037bd:	69 02 00 a6 69 02    	imul   $0x269a600,(%rdx),%eax
  4037c3:	00 37                	add    %dh,(%rdi)
  4037c5:	23 02                	and    (%rdx),%eax
  4037c7:	00 61 18             	add    %ah,0x18(%rcx)
  4037ca:	02 00                	add    (%rax),%al
  4037cc:	7c 74                	jl     403842 <q+0x7c2>
  4037ce:	02 00                	add    (%rax),%al
  4037d0:	8b 0d 02 00 3a f9    	mov    -0x6c5fffe(%rip),%ecx        # fffffffff97a37d8 <_end+0xfffffffff918f040>
  4037d6:	00 00                	add    %al,(%rax)
  4037d8:	2e 36 00 00          	cs add %al,%ss:(%rax)
  4037dc:	2b 60 01             	sub    0x1(%rax),%esp
  4037df:	00 cc                	add    %cl,%ah
  4037e1:	1d 02 00 37 23       	sbb    $0x23370002,%eax
  4037e6:	02 00                	add    (%rax),%al
  4037e8:	8f                   	(bad)  
  4037e9:	4e 02 00             	rex.WRX add (%rax),%r8b
  4037ec:	81 20 04 00 4b 68    	andl   $0x684b0004,(%rax)
  4037f2:	03 00                	add    (%rax),%eax
  4037f4:	11 6f 02             	adc    %ebp,0x2(%rdi)
  4037f7:	00 60 ad             	add    %ah,-0x53(%rax)
  4037fa:	00 00                	add    %al,(%rax)
  4037fc:	cc                   	int3   
  4037fd:	1d 02 00 37 23       	sbb    $0x23370002,%eax
  403802:	02 00                	add    (%rax),%al
  403804:	f6 12                	notb   (%rdx)
  403806:	02 00                	add    (%rax),%al
  403808:	37                   	(bad)  
  403809:	23 02                	and    (%rdx),%eax
  40380b:	00 a6 69 02 00 81    	add    %ah,-0x7efffd97(%rsi)
  403811:	20 04 00             	and    %al,(%rax,%rax,1)
  403814:	4b 68 03 00 fa 53    	rex.WXB pushq $0x53fa0003
  40381a:	02 00                	add    (%rax),%al
  40381c:	60                   	(bad)  
  40381d:	ad                   	lods   %ds:(%rsi),%eax
  40381e:	00 00                	add    %al,(%rax)
  403820:	e3 38                	jrcxz  40385a <q+0x7da>
  403822:	02 00                	add    (%rax),%al
  403824:	8f                   	(bad)  
  403825:	4e 02 00             	rex.WRX add (%rax),%r8b
  403828:	d0 5e 02             	rcrb   0x2(%rsi)
  40382b:	00 24 49             	add    %ah,(%rcx,%rcx,2)
  40382e:	02 00                	add    (%rax),%al
  403830:	37                   	(bad)  
  403831:	23 02                	and    (%rdx),%eax
  403833:	00 8f 4e 02 00 37    	add    %cl,0x3700024e(%rdi)
  403839:	23 02                	and    (%rdx),%eax
  40383b:	00 fa                	add    %bh,%dl
  40383d:	53                   	push   %rbx
  40383e:	02 00                	add    (%rax),%al
  403840:	7c 74                	jl     4038b6 <q+0x836>
  403842:	02 00                	add    (%rax),%al
  403844:	8b 0d 02 00 a6 69    	mov    0x69a60002(%rip),%ecx        # 69e6384c <_end+0x6984f0b4>
  40384a:	02 00                	add    (%rax),%al
  40384c:	60                   	(bad)  
  40384d:	ad                   	lods   %ds:(%rsi),%eax
  40384e:	00 00                	add    %al,(%rax)
  403850:	37                   	(bad)  
  403851:	23 02                	and    (%rdx),%eax
  403853:	00 24 49             	add    %ah,(%rcx,%rcx,2)
  403856:	02 00                	add    (%rax),%al
  403858:	60                   	(bad)  
  403859:	ad                   	lods   %ds:(%rsi),%eax
  40385a:	00 00                	add    %al,(%rax)
  40385c:	61                   	(bad)  
  40385d:	18 02                	sbb    %al,(%rdx)
  40385f:	00 24 49             	add    %ah,(%rcx,%rcx,2)
  403862:	02 00                	add    (%rax),%al
  403864:	e3 38                	jrcxz  40389e <q+0x81e>
  403866:	02 00                	add    (%rax),%al
  403868:	37                   	(bad)  
  403869:	23 02                	and    (%rdx),%eax
  40386b:	00 fa                	add    %bh,%dl
  40386d:	53                   	push   %rbx
  40386e:	02 00                	add    (%rax),%al
  403870:	7c 74                	jl     4038e6 <q+0x866>
  403872:	02 00                	add    (%rax),%al
  403874:	37                   	(bad)  
  403875:	23 02                	and    (%rdx),%eax
  403877:	00 60 ad             	add    %ah,-0x53(%rax)
  40387a:	00 00                	add    %al,(%rax)
  40387c:	d0 5e 02             	rcrb   0x2(%rsi)
  40387f:	00 8b 0d 02 00 a6    	add    %cl,-0x59fffdf3(%rbx)
  403885:	69 02 00 8b 0d 02    	imul   $0x20d8b00,(%rdx),%eax
  40388b:	00 60 ad             	add    %ah,-0x53(%rax)
  40388e:	00 00                	add    %al,(%rax)
  403890:	61                   	(bad)  
  403891:	18 02                	sbb    %al,(%rdx)
  403893:	00 65 59             	add    %ah,0x59(%rbp)
  403896:	02 00                	add    (%rax),%al
  403898:	8f                   	(bad)  
  403899:	4e 02 00             	rex.WRX add (%rax),%r8b
  40389c:	e7 79                	out    %eax,$0x79
  40389e:	02 00                	add    (%rax),%al
  4038a0:	fa                   	cli    
  4038a1:	53                   	push   %rbx
  4038a2:	02 00                	add    (%rax),%al
  4038a4:	e3 38                	jrcxz  4038de <q+0x85e>
  4038a6:	02 00                	add    (%rax),%al
  4038a8:	61                   	(bad)  
  4038a9:	18 02                	sbb    %al,(%rdx)
  4038ab:	00 8b 0d 02 00 a6    	add    %cl,-0x59fffdf3(%rbx)
  4038b1:	69 02 00 11 6f 02    	imul   $0x26f1100,(%rdx),%eax
  4038b7:	00 37                	add    %dh,(%rdi)
  4038b9:	23 02                	and    (%rdx),%eax
  4038bb:	00 60 ad             	add    %ah,-0x53(%rax)
  4038be:	00 00                	add    %al,(%rax)
  4038c0:	61                   	(bad)  
  4038c1:	18 02                	sbb    %al,(%rdx)
  4038c3:	00 65 59             	add    %ah,0x59(%rbp)
  4038c6:	02 00                	add    (%rax),%al
  4038c8:	fa                   	cli    
  4038c9:	53                   	push   %rbx
  4038ca:	02 00                	add    (%rax),%al
  4038cc:	60                   	(bad)  
  4038cd:	ad                   	lods   %ds:(%rsi),%eax
  4038ce:	00 00                	add    %al,(%rax)
  4038d0:	37                   	(bad)  
  4038d1:	23 02                	and    (%rdx),%eax
  4038d3:	00 11                	add    %dl,(%rcx)
  4038d5:	6f                   	outsl  %ds:(%rsi),(%dx)
  4038d6:	02 00                	add    (%rax),%al
  4038d8:	7c 74                	jl     40394e <q+0x8ce>
  4038da:	02 00                	add    (%rax),%al
  4038dc:	37                   	(bad)  
  4038dd:	23 02                	and    (%rdx),%eax
  4038df:	00 60 ad             	add    %ah,-0x53(%rax)
  4038e2:	00 00                	add    %al,(%rax)
  4038e4:	11 6f 02             	adc    %ebp,0x2(%rdi)
  4038e7:	00 37                	add    %dh,(%rdi)
  4038e9:	23 02                	and    (%rdx),%eax
  4038eb:	00 a6 69 02 00 52    	add    %ah,0x52000269(%rsi)
  4038f1:	7f 02                	jg     4038f5 <q+0x875>
  4038f3:	00 e3                	add    %ah,%bl
  4038f5:	38 02                	cmp    %al,(%rdx)
  4038f7:	00 cc                	add    %cl,%ah
  4038f9:	1d 02 00 65 59       	sbb    $0x59650002,%eax
  4038fe:	02 00                	add    (%rax),%al
  403900:	a6                   	cmpsb  %es:(%rdi),%ds:(%rsi)
  403901:	69 02 00 3a f9 00    	imul   $0xf93a00,(%rdx),%eax
  403907:	00 2e                	add    %ch,(%rsi)
  403909:	36 00 00             	add    %al,%ss:(%rax)
	...
  403b98:	a1 bd 00 00 60 ad 00 	movabs 0x740000ad600000bd,%eax
  403b9f:	00 74 
  403ba1:	f2 01 00             	repnz add %eax,(%rax)
  403ba4:	10 04 01             	adc    %al,(%rcx,%rax,1)
  403ba7:	00 51 14             	add    %dl,0x14(%rcx)
  403baa:	01 00                	add    %eax,(%rax)
  403bac:	51                   	push   %rcx
  403bad:	14 01                	adc    $0x1,%al
  403baf:	00 09                	add    %cl,(%rcx)
  403bb1:	ed                   	in     (%dx),%eax
  403bb2:	01 00                	add    %eax,(%rax)
  403bb4:	6c                   	insb   (%dx),%es:(%rdi)
  403bb5:	70 01                	jo     403bb8 <q+0xb38>
  403bb7:	00 60 ad             	add    %ah,-0x53(%rax)
  403bba:	00 00                	add    %al,(%rax)
  403bbc:	74 f2                	je     403bb0 <q+0xb30>
  403bbe:	01 00                	add    %eax,(%rax)
  403bc0:	10 04 01             	adc    %al,(%rcx,%rax,1)
  403bc3:	00 51 14             	add    %dl,0x14(%rcx)
  403bc6:	01 00                	add    %eax,(%rax)
  403bc8:	51                   	push   %rcx
  403bc9:	14 01                	adc    $0x1,%al
  403bcb:	00 09                	add    %cl,(%rcx)
  403bcd:	ed                   	in     (%dx),%eax
  403bce:	01 00                	add    %eax,(%rax)
  403bd0:	2b 60 01             	sub    0x1(%rax),%esp
  403bd3:	00 60 ad             	add    %ah,-0x53(%rax)
  403bd6:	00 00                	add    %al,(%rax)
  403bd8:	74 f2                	je     403bcc <q+0xb4c>
  403bda:	01 00                	add    %eax,(%rax)
  403bdc:	10 04 01             	adc    %al,(%rcx,%rax,1)
  403bdf:	00 51 14             	add    %dl,0x14(%rcx)
  403be2:	01 00                	add    %eax,(%rax)
  403be4:	51                   	push   %rcx
  403be5:	14 01                	adc    $0x1,%al
  403be7:	00 09                	add    %cl,(%rcx)
  403be9:	ed                   	in     (%dx),%eax
  403bea:	01 00                	add    %eax,(%rax)
  403bec:	2b 60 01             	sub    0x1(%rax),%esp
  403bef:	00 60 ad             	add    %ah,-0x53(%rax)
  403bf2:	00 00                	add    %al,(%rax)
  403bf4:	74 f2                	je     403be8 <q+0xb68>
  403bf6:	01 00                	add    %eax,(%rax)
  403bf8:	10 04 01             	adc    %al,(%rcx,%rax,1)
  403bfb:	00 51 14             	add    %dl,0x14(%rcx)
  403bfe:	01 00                	add    %eax,(%rax)
  403c00:	51                   	push   %rcx
  403c01:	14 01                	adc    $0x1,%al
  403c03:	00 09                	add    %cl,(%rcx)
  403c05:	ed                   	in     (%dx),%eax
  403c06:	01 00                	add    %eax,(%rax)
  403c08:	6c                   	insb   (%dx),%es:(%rdi)
  403c09:	70 01                	jo     403c0c <q+0xb8c>
  403c0b:	00 60 ad             	add    %ah,-0x53(%rax)
  403c0e:	00 00                	add    %al,(%rax)
  403c10:	74 f2                	je     403c04 <q+0xb84>
  403c12:	01 00                	add    %eax,(%rax)
  403c14:	10 04 01             	adc    %al,(%rcx,%rax,1)
  403c17:	00 51 14             	add    %dl,0x14(%rcx)
  403c1a:	01 00                	add    %eax,(%rax)
  403c1c:	51                   	push   %rcx
  403c1d:	14 01                	adc    $0x1,%al
  403c1f:	00 09                	add    %cl,(%rcx)
  403c21:	ed                   	in     (%dx),%eax
  403c22:	01 00                	add    %eax,(%rax)
  403c24:	96                   	xchg   %eax,%esi
  403c25:	65 01 00             	add    %eax,%gs:(%rax)
  403c28:	60                   	(bad)  
  403c29:	ad                   	lods   %ds:(%rsi),%eax
  403c2a:	00 00                	add    %al,(%rax)
  403c2c:	74 f2                	je     403c20 <q+0xba0>
  403c2e:	01 00                	add    %eax,(%rax)
  403c30:	10 04 01             	adc    %al,(%rcx,%rax,1)
  403c33:	00 51 14             	add    %dl,0x14(%rcx)
  403c36:	01 00                	add    %eax,(%rax)
  403c38:	51                   	push   %rcx
  403c39:	14 01                	adc    $0x1,%al
  403c3b:	00 09                	add    %cl,(%rcx)
  403c3d:	ed                   	in     (%dx),%eax
  403c3e:	01 00                	add    %eax,(%rax)
  403c40:	01 6b 01             	add    %ebp,0x1(%rbx)
  403c43:	00 60 ad             	add    %ah,-0x53(%rax)
  403c46:	00 00                	add    %al,(%rax)
  403c48:	74 f2                	je     403c3c <q+0xbbc>
  403c4a:	01 00                	add    %eax,(%rax)
  403c4c:	10 04 01             	adc    %al,(%rcx,%rax,1)
  403c4f:	00 51 14             	add    %dl,0x14(%rcx)
  403c52:	01 00                	add    %eax,(%rax)
  403c54:	51                   	push   %rcx
  403c55:	14 01                	adc    $0x1,%al
  403c57:	00 09                	add    %cl,(%rcx)
  403c59:	ed                   	in     (%dx),%eax
  403c5a:	01 00                	add    %eax,(%rax)
  403c5c:	96                   	xchg   %eax,%esi
  403c5d:	65 01 00             	add    %eax,%gs:(%rax)
  403c60:	60                   	(bad)  
  403c61:	ad                   	lods   %ds:(%rsi),%eax
  403c62:	00 00                	add    %al,(%rax)
  403c64:	74 f2                	je     403c58 <q+0xbd8>
  403c66:	01 00                	add    %eax,(%rax)
  403c68:	10 04 01             	adc    %al,(%rcx,%rax,1)
  403c6b:	00 51 14             	add    %dl,0x14(%rcx)
  403c6e:	01 00                	add    %eax,(%rax)
  403c70:	51                   	push   %rcx
  403c71:	14 01                	adc    $0x1,%al
  403c73:	00 09                	add    %cl,(%rcx)
  403c75:	ed                   	in     (%dx),%eax
  403c76:	01 00                	add    %eax,(%rax)
  403c78:	6c                   	insb   (%dx),%es:(%rdi)
  403c79:	70 01                	jo     403c7c <q+0xbfc>
  403c7b:	00 60 ad             	add    %ah,-0x53(%rax)
  403c7e:	00 00                	add    %al,(%rax)
  403c80:	8e e3                	mov    %ebx,%fs
  403c82:	00 00                	add    %al,(%rax)
  403c84:	2e 36 00 00          	cs add %al,%ss:(%rax)
	...
  4046b0:	78 33                	js     4046e5 <q+0x1665>
  4046b2:	02 00                	add    (%rax),%al
  4046b4:	7c 74                	jl     40472a <q+0x16aa>
  4046b6:	02 00                	add    (%rax),%al
  4046b8:	7c 74                	jl     40472e <q+0x16ae>
  4046ba:	02 00                	add    (%rax),%al
  4046bc:	d0 5e 02             	rcrb   0x2(%rsi)
  4046bf:	00 11                	add    %dl,(%rcx)
  4046c1:	6f                   	outsl  %ds:(%rsi),(%dx)
  4046c2:	02 00                	add    (%rax),%al
  4046c4:	3e 3a 01             	cmp    %ds:(%rcx),%al
  4046c7:	00 a5 fe 00 00 a5    	add    %ah,-0x5affff02(%rbp)
  4046cd:	fe 00                	incb   (%rax)
  4046cf:	00 52 7f             	add    %dl,0x7f(%rdx)
  4046d2:	02 00                	add    (%rax),%al
  4046d4:	65 59                	gs pop %rcx
  4046d6:	02 00                	add    (%rax),%al
  4046d8:	61                   	(bad)  
  4046d9:	18 02                	sbb    %al,(%rdx)
  4046db:	00 8b 0d 02 00 a6    	add    %cl,-0x59fffdf3(%rbx)
  4046e1:	69 02 00 65 59 02    	imul   $0x2596500,(%rdx),%eax
  4046e7:	00 65 59             	add    %ah,0x59(%rbp)
  4046ea:	02 00                	add    (%rax),%al
  4046ec:	3a f9                	cmp    %cl,%bh
  4046ee:	00 00                	add    %al,(%rax)
  4046f0:	61                   	(bad)  
  4046f1:	18 02                	sbb    %al,(%rdx)
  4046f3:	00 65 59             	add    %ah,0x59(%rbp)
  4046f6:	02 00                	add    (%rax),%al
  4046f8:	8f                   	(bad)  
  4046f9:	4e 02 00             	rex.WRX add (%rax),%r8b
  4046fc:	a5                   	movsl  %ds:(%rsi),%es:(%rdi)
  4046fd:	fe 00                	incb   (%rax)
  4046ff:	00 e3                	add    %ah,%bl
  404701:	38 02                	cmp    %al,(%rdx)
  404703:	00 a5 fe 00 00 11    	add    %ah,0x110000fe(%rbp)
  404709:	6f                   	outsl  %ds:(%rsi),(%dx)
  40470a:	02 00                	add    (%rax),%al
  40470c:	7b 09                	jnp    404717 <q+0x1697>
  40470e:	01 00                	add    %eax,(%rax)
  404710:	d3                   	(bad)  
  404711:	34 01                	xor    $0x1,%al
  404713:	00 10                	add    %dl,(%rax)
  404715:	04 01                	add    $0x1,%al
  404717:	00 7b 09             	add    %bh,0x9(%rbx)
  40471a:	01 00                	add    %eax,(%rax)
  40471c:	27                   	(bad)  
  40471d:	1f                   	(bad)  
  40471e:	01 00                	add    %eax,(%rax)
  404720:	fe                   	(bad)  
  404721:	94                   	xchg   %eax,%esp
  404722:	02 00                	add    (%rax),%al
  404724:	8f                   	(bad)  
  404725:	4e 02 00             	rex.WRX add (%rax),%r8b
  404728:	46 bc 01 00 bc 19    	rex.RX mov $0x19bc0001,%esp
  40472e:	01 00                	add    %eax,(%rax)
  404730:	7c 74                	jl     4047a6 <q+0x1726>
  404732:	02 00                	add    (%rax),%al
  404734:	68 2f 01 00 2e       	pushq  $0x2e00012f
  404739:	36 00 00             	add    %al,%ss:(%rax)
	...
  4051c8:	d7                   	xlat   %ds:(%rbx)
  4051c9:	75 01                	jne    4051cc <q+0x214c>
  4051cb:	00 96 65 01 00 2b    	add    %dl,0x2b000165(%rsi)
  4051d1:	60                   	(bad)  
  4051d2:	01 00                	add    %eax,(%rax)
  4051d4:	6c                   	insb   (%dx),%es:(%rdi)
  4051d5:	70 01                	jo     4051d8 <q+0x2158>
  4051d7:	00 42 7b             	add    %al,0x7b(%rdx)
  4051da:	01 00                	add    %eax,(%rax)
  4051dc:	3a f9                	cmp    %cl,%bh
  4051de:	00 00                	add    %al,(%rax)
  4051e0:	3a f9                	cmp    %cl,%bh
  4051e2:	00 00                	add    %al,(%rax)
  4051e4:	3a f9                	cmp    %cl,%bh
  4051e6:	00 00                	add    %al,(%rax)
  4051e8:	60                   	(bad)  
  4051e9:	ad                   	lods   %ds:(%rsi),%eax
  4051ea:	00 00                	add    %al,(%rax)
  4051ec:	8b 0d 02 00 f6 12    	mov    0x12f60002(%rip),%ecx        # 133651f4 <_end+0x12d50a5c>
  4051f2:	02 00                	add    (%rax),%al
  4051f4:	a6                   	cmpsb  %es:(%rdi),%ds:(%rsi)
  4051f5:	69 02 00 e3 38 02    	imul   $0x238e300,(%rdx),%eax
  4051fb:	00 24 49             	add    %ah,(%rcx,%rcx,2)
  4051fe:	02 00                	add    (%rax),%al
  405200:	65 59                	gs pop %rcx
  405202:	02 00                	add    (%rax),%al
  405204:	60                   	(bad)  
  405205:	ad                   	lods   %ds:(%rsi),%eax
  405206:	00 00                	add    %al,(%rax)
  405208:	93                   	xchg   %eax,%ebx
  405209:	8f 02                	popq   (%rdx)
  40520b:	00 60 ad             	add    %ah,-0x53(%rax)
  40520e:	00 00                	add    %al,(%rax)
  405210:	52                   	push   %rdx
  405211:	7f 02                	jg     405215 <q+0x2195>
  405213:	00 37                	add    %dh,(%rdi)
  405215:	23 02                	and    (%rdx),%eax
  405217:	00 a6 69 02 00 81    	add    %ah,-0x7efffd97(%rsi)
  40521d:	20 04 00             	and    %al,(%rax,%rax,1)
  405220:	4b 68 03 00 11 6f    	rex.WXB pushq $0x6f110003
  405226:	02 00                	add    (%rax),%al
  405228:	60                   	(bad)  
  405229:	ad                   	lods   %ds:(%rsi),%eax
  40522a:	00 00                	add    %al,(%rax)
  40522c:	65 59                	gs pop %rcx
  40522e:	02 00                	add    (%rax),%al
  405230:	60                   	(bad)  
  405231:	ad                   	lods   %ds:(%rsi),%eax
  405232:	00 00                	add    %al,(%rax)
  405234:	a6                   	cmpsb  %es:(%rdi),%ds:(%rsi)
  405235:	69 02 00 37 23 02    	imul   $0x2233700,(%rdx),%eax
  40523b:	00 cc                	add    %cl,%ah
  40523d:	1d 02 00 e3 38       	sbb    $0x38e30002,%eax
  405242:	02 00                	add    (%rax),%al
  405244:	a6                   	cmpsb  %es:(%rdi),%ds:(%rsi)
  405245:	69 02 00 e3 38 02    	imul   $0x238e300,(%rdx),%eax
  40524b:	00 4e 3e             	add    %cl,0x3e(%rsi)
  40524e:	02 00                	add    (%rax),%al
  405250:	e3 38                	jrcxz  40528a <q+0x220a>
  405252:	02 00                	add    (%rax),%al
  405254:	24 49                	and    $0x49,%al
  405256:	02 00                	add    (%rax),%al
  405258:	65 59                	gs pop %rcx
  40525a:	02 00                	add    (%rax),%al
  40525c:	60                   	(bad)  
  40525d:	ad                   	lods   %ds:(%rsi),%eax
  40525e:	00 00                	add    %al,(%rax)
  405260:	a9 3f 01 00 23       	test   $0x2300013f,%eax
  405265:	de 00                	fiadd  (%rax)
  405267:	00 2e                	add    %ch,(%rsi)
  405269:	36 00 00             	add    %al,%ss:(%rax)
	...
  405ce0:	a6                   	cmpsb  %es:(%rdi),%ds:(%rsi)
  405ce1:	69 02 00 37 23 02    	imul   $0x2233700,(%rdx),%eax
  405ce7:	00 11                	add    %dl,(%rcx)
  405ce9:	6f                   	outsl  %ds:(%rsi),(%dx)
  405cea:	02 00                	add    (%rax),%al
  405cec:	d0 5e 02             	rcrb   0x2(%rsi)
  405cef:	00 e7                	add    %ah,%bh
  405cf1:	79 02                	jns    405cf5 <q+0x2c75>
  405cf3:	00 37                	add    %dh,(%rdi)
  405cf5:	23 02                	and    (%rdx),%eax
  405cf7:	00 11                	add    %dl,(%rcx)
  405cf9:	6f                   	outsl  %ds:(%rsi),(%dx)
  405cfa:	02 00                	add    (%rax),%al
  405cfc:	7c 74                	jl     405d72 <q+0x2cf2>
  405cfe:	02 00                	add    (%rax),%al
  405d00:	8b 0d 02 00 7f 4a    	mov    0x4a7f0002(%rip),%ecx        # 4abf5d08 <_end+0x4a5e1570>
  405d06:	01 00                	add    %eax,(%rax)
  405d08:	11 6f 02             	adc    %ebp,0x2(%rdi)
  405d0b:	00 7c 74 02          	add    %bh,0x2(%rsp,%rsi,2)
  405d0f:	00 a6 69 02 00 e3    	add    %ah,-0x1cfffd97(%rsi)
  405d15:	38 02                	cmp    %al,(%rdx)
  405d17:	00 fa                	add    %bh,%dl
  405d19:	53                   	push   %rbx
  405d1a:	02 00                	add    (%rax),%al
  405d1c:	0d 2e 02 00 11       	or     $0x1100022e,%eax
  405d21:	6f                   	outsl  %ds:(%rsi),(%dx)
  405d22:	02 00                	add    (%rax),%al
  405d24:	09 ed                	or     %ebp,%ebp
  405d26:	01 00                	add    %eax,(%rax)
  405d28:	e6 0e                	out    %al,$0xe
  405d2a:	01 00                	add    %eax,(%rax)
  405d2c:	27                   	(bad)  
  405d2d:	1f                   	(bad)  
  405d2e:	01 00                	add    %eax,(%rax)
  405d30:	10 04 01             	adc    %al,(%rcx,%rax,1)
  405d33:	00 df                	add    %bl,%bh
  405d35:	f7 01 00 2e 36 00    	testl  $0x362e00,(%rcx)
	...
  4067f7:	00 3a                	add    %bh,(%rdx)
  4067f9:	f9                   	stc    
  4067fa:	00 00                	add    %al,(%rax)
  4067fc:	cc                   	int3   
  4067fd:	1d 02 00 8b 0d       	sbb    $0xd8b0002,%eax
  406802:	02 00                	add    (%rax),%al
  406804:	7c 74                	jl     40687a <q+0x37fa>
  406806:	02 00                	add    (%rax),%al
  406808:	8b 0d 02 00 60 ad    	mov    -0x529ffffe(%rip),%ecx        # ffffffffada06810 <_end+0xffffffffad3f2078>
  40680e:	00 00                	add    %al,(%rax)
  406810:	3a f9                	cmp    %cl,%bh
  406812:	00 00                	add    %al,(%rax)
  406814:	f6 12                	notb   (%rdx)
  406816:	02 00                	add    (%rax),%al
  406818:	11 6f 02             	adc    %ebp,0x2(%rdi)
  40681b:	00 11                	add    %dl,(%rcx)
  40681d:	6f                   	outsl  %ds:(%rsi),(%dx)
  40681e:	02 00                	add    (%rax),%al
  406820:	60                   	(bad)  
  406821:	ad                   	lods   %ds:(%rsi),%eax
  406822:	00 00                	add    %al,(%rax)
  406824:	3a f9                	cmp    %cl,%bh
  406826:	00 00                	add    %al,(%rax)
  406828:	61                   	(bad)  
  406829:	18 02                	sbb    %al,(%rdx)
  40682b:	00 65 59             	add    %ah,0x59(%rbp)
  40682e:	02 00                	add    (%rax),%al
  406830:	8f                   	(bad)  
  406831:	4e 02 00             	rex.WRX add (%rax),%r8b
  406834:	8f                   	(bad)  
  406835:	4e 02 00             	rex.WRX add (%rax),%r8b
  406838:	37                   	(bad)  
  406839:	23 02                	and    (%rdx),%eax
  40683b:	00 fa                	add    %bh,%dl
  40683d:	53                   	push   %rbx
  40683e:	02 00                	add    (%rax),%al
  406840:	7c 74                	jl     4068b6 <q+0x3836>
  406842:	02 00                	add    (%rax),%al
  406844:	60                   	(bad)  
  406845:	ad                   	lods   %ds:(%rsi),%eax
  406846:	00 00                	add    %al,(%rax)
  406848:	55                   	push   %rbp
  406849:	55                   	push   %rbp
  40684a:	01 00                	add    %eax,(%rax)
  40684c:	60                   	(bad)  
  40684d:	ad                   	lods   %ds:(%rsi),%eax
  40684e:	00 00                	add    %al,(%rax)
  406850:	3a f9                	cmp    %cl,%bh
  406852:	00 00                	add    %al,(%rax)
  406854:	11 6f 02             	adc    %ebp,0x2(%rdi)
  406857:	00 78 33             	add    %bh,0x33(%rax)
  40685a:	02 00                	add    (%rax),%al
  40685c:	11 6f 02             	adc    %ebp,0x2(%rdi)
  40685f:	00 7c 74 02          	add    %bh,0x2(%rsp,%rsi,2)
  406863:	00 a6 69 02 00 7c    	add    %ah,0x7c000269(%rsi)
  406869:	74 02                	je     40686d <q+0x37ed>
  40686b:	00 8b 0d 02 00 f6    	add    %cl,-0x9fffdf3(%rbx)
  406871:	12 02                	adc    (%rdx),%al
  406873:	00 60 ad             	add    %ah,-0x53(%rax)
  406876:	00 00                	add    %al,(%rax)
  406878:	3a f9                	cmp    %cl,%bh
  40687a:	00 00                	add    %al,(%rax)
  40687c:	11 6f 02             	adc    %ebp,0x2(%rdi)
  40687f:	00 93 8f 02 00 8f    	add    %dl,-0x70fffd71(%rbx)
  406885:	4e 02 00             	rex.WRX add (%rax),%r8b
  406888:	7c 74                	jl     4068fe <q+0x387e>
  40688a:	02 00                	add    (%rax),%al
  40688c:	8b 0d 02 00 f6 12    	mov    0x12f60002(%rip),%ecx        # 13366894 <_end+0x12d520fc>
  406892:	02 00                	add    (%rax),%al
  406894:	60                   	(bad)  
  406895:	ad                   	lods   %ds:(%rsi),%eax
  406896:	00 00                	add    %al,(%rax)
  406898:	3a f9                	cmp    %cl,%bh
  40689a:	00 00                	add    %al,(%rax)
  40689c:	11 6f 02             	adc    %ebp,0x2(%rdi)
  40689f:	00 7c 74 02          	add    %bh,0x2(%rsp,%rsi,2)
  4068a3:	00 a6 69 02 00 7c    	add    %ah,0x7c000269(%rsi)
  4068a9:	74 02                	je     4068ad <q+0x382d>
  4068ab:	00 8b 0d 02 00 f6    	add    %cl,-0x9fffdf3(%rbx)
  4068b1:	12 02                	adc    (%rdx),%al
  4068b3:	00 2e                	add    %ch,(%rsi)
  4068b5:	36 00 00             	add    %al,%ss:(%rax)
	...
  407310:	8f                   	(bad)  
  407311:	4e 02 00             	rex.WRX add (%rax),%r8b
  407314:	e3 38                	jrcxz  40734e <q+0x42ce>
  407316:	02 00                	add    (%rax),%al
  407318:	28 8a 02 00 37 23    	sub    %cl,0x23370002(%rdx)
  40731e:	02 00                	add    (%rax),%al
  407320:	cc                   	int3   
  407321:	1d 02 00 60 ad       	sbb    $0xad600002,%eax
  407326:	00 00                	add    %al,(%rax)
  407328:	a2 28 02 00 cc 1d 02 	movabs %al,0x1100021dcc000228
  40732f:	00 11 
  407331:	6f                   	outsl  %ds:(%rsi),(%dx)
  407332:	02 00                	add    (%rax),%al
  407334:	2e 36 00 00          	cs add %al,%ss:(%rax)
	...
  407e28:	70 b1                	jo     407ddb <q+0x4d5b>
  407e2a:	01 00                	add    %eax,(%rax)
  407e2c:	65 59                	gs pop %rcx
  407e2e:	02 00                	add    (%rax),%al
  407e30:	a6                   	cmpsb  %es:(%rdi),%ds:(%rsi)
  407e31:	69 02 00 7c 74 02    	imul   $0x2747c00,(%rdx),%eax
  407e37:	00 a6 69 02 00 8b    	add    %ah,-0x74fffd97(%rsi)
  407e3d:	0d 02 00 e3 38       	or     $0x38e30002,%eax
  407e42:	02 00                	add    (%rax),%al
  407e44:	7c 74                	jl     407eba <q+0x4e3a>
  407e46:	02 00                	add    (%rax),%al
  407e48:	2e 36 00 00          	cs add %al,%ss:(%rax)
	...
  408940:	1c c7                	sbb    $0xc7,%al
  408942:	01 00                	add    %eax,(%rax)
  408944:	8b 0d 02 00 fa 53    	mov    0x53fa0002(%rip),%ecx        # 543a894c <_end+0x53d941b4>
  40894a:	02 00                	add    (%rax),%al
  40894c:	0d 2e 02 00 65       	or     $0x6500022e,%eax
  408951:	59                   	pop    %rcx
  408952:	02 00                	add    (%rax),%al
  408954:	60                   	(bad)  
  408955:	ad                   	lods   %ds:(%rsi),%eax
  408956:	00 00                	add    %al,(%rax)
  408958:	18 86 01 00 65 59    	sbb    %al,0x59650001(%rsi)
  40895e:	02 00                	add    (%rax),%al
  408960:	7c 74                	jl     4089d6 <q+0x5956>
  408962:	02 00                	add    (%rax),%al
  408964:	37                   	(bad)  
  408965:	23 02                	and    (%rdx),%eax
  408967:	00 24 49             	add    %ah,(%rcx,%rcx,2)
  40896a:	02 00                	add    (%rax),%al
  40896c:	60                   	(bad)  
  40896d:	ad                   	lods   %ds:(%rsi),%eax
  40896e:	00 00                	add    %al,(%rax)
  408970:	83 8b 01 00 fa 53 02 	orl    $0x2,0x53fa0001(%rbx)
  408977:	00 cc                	add    %cl,%ah
  408979:	1d 02 00 e3 38       	sbb    $0x38e30002,%eax
  40897e:	02 00                	add    (%rax),%al
  408980:	8b 0d 02 00 60 ad    	mov    -0x529ffffe(%rip),%ecx        # ffffffffada08988 <_end+0xffffffffad3f41f0>
  408986:	00 00                	add    %al,(%rax)
  408988:	b1 c1                	mov    $0xc1,%cl
  40898a:	01 00                	add    %eax,(%rax)
  40898c:	e3 38                	jrcxz  4089c6 <q+0x5946>
  40898e:	02 00                	add    (%rax),%al
  408990:	37                   	(bad)  
  408991:	23 02                	and    (%rdx),%eax
  408993:	00 a6 69 02 00 a6    	add    %ah,-0x59fffd97(%rsi)
  408999:	69 02 00 8b 0d 02    	imul   $0x20d8b00,(%rdx),%eax
  40899f:	00 60 ad             	add    %ah,-0x53(%rax)
  4089a2:	00 00                	add    %al,(%rax)
  4089a4:	83 8b 01 00 fa 53 02 	orl    $0x2,0x53fa0001(%rbx)
  4089ab:	00 cc                	add    %cl,%ah
  4089ad:	1d 02 00 e3 38       	sbb    $0x38e30002,%eax
  4089b2:	02 00                	add    (%rax),%al
  4089b4:	8b 0d 02 00 60 ad    	mov    -0x529ffffe(%rip),%ecx        # ffffffffada089bc <_end+0xffffffffad3f4224>
  4089ba:	00 00                	add    %al,(%rax)
  4089bc:	b1 c1                	mov    $0xc1,%cl
  4089be:	01 00                	add    %eax,(%rax)
  4089c0:	e3 38                	jrcxz  4089fa <q+0x597a>
  4089c2:	02 00                	add    (%rax),%al
  4089c4:	37                   	(bad)  
  4089c5:	23 02                	and    (%rdx),%eax
  4089c7:	00 a6 69 02 00 a6    	add    %ah,-0x59fffd97(%rsi)
  4089cd:	69 02 00 8b 0d 02    	imul   $0x20d8b00,(%rdx),%eax
  4089d3:	00 60 ad             	add    %ah,-0x53(%rax)
  4089d6:	00 00                	add    %al,(%rax)
  4089d8:	2b 60 01             	sub    0x1(%rax),%esp
  4089db:	00 24 49             	add    %ah,(%rcx,%rcx,2)
  4089de:	02 00                	add    (%rax),%al
  4089e0:	a2 28 02 00 8b 0d 02 	movabs %al,0x6000020d8b000228
  4089e7:	00 60 
  4089e9:	ad                   	lods   %ds:(%rsi),%eax
  4089ea:	00 00                	add    %al,(%rax)
  4089ec:	5d                   	pop    %rbp
  4089ed:	d7                   	xlat   %ds:(%rbx)
  4089ee:	01 00                	add    %eax,(%rax)
  4089f0:	78 33                	js     408a25 <q+0x59a5>
  4089f2:	02 00                	add    (%rax),%al
  4089f4:	e3 38                	jrcxz  408a2e <q+0x59ae>
  4089f6:	02 00                	add    (%rax),%al
  4089f8:	11 6f 02             	adc    %ebp,0x2(%rdi)
  4089fb:	00 b9 43 02 00 37    	add    %bh,0x37000243(%rcx)
  408a01:	23 02                	and    (%rdx),%eax
  408a03:	00 93 8f 02 00 60    	add    %dl,0x6000028f(%rbx)
  408a09:	ad                   	lods   %ds:(%rsi),%eax
  408a0a:	00 00                	add    %al,(%rax)
  408a0c:	d7                   	xlat   %ds:(%rbx)
  408a0d:	75 01                	jne    408a10 <q+0x5990>
  408a0f:	00 61 18             	add    %ah,0x18(%rcx)
  408a12:	02 00                	add    (%rax),%al
  408a14:	78 33                	js     408a49 <q+0x59c9>
  408a16:	02 00                	add    (%rax),%al
  408a18:	65 59                	gs pop %rcx
  408a1a:	02 00                	add    (%rax),%al
  408a1c:	60                   	(bad)  
  408a1d:	ad                   	lods   %ds:(%rsi),%eax
  408a1e:	00 00                	add    %al,(%rax)
  408a20:	b1 c1                	mov    $0xc1,%cl
  408a22:	01 00                	add    %eax,(%rax)
  408a24:	e3 38                	jrcxz  408a5e <q+0x59de>
  408a26:	02 00                	add    (%rax),%al
  408a28:	37                   	(bad)  
  408a29:	23 02                	and    (%rdx),%eax
  408a2b:	00 a6 69 02 00 a6    	add    %ah,-0x59fffd97(%rsi)
  408a31:	69 02 00 8b 0d 02    	imul   $0x20d8b00,(%rdx),%eax
  408a37:	00 60 ad             	add    %ah,-0x53(%rax)
  408a3a:	00 00                	add    %al,(%rax)
  408a3c:	05 ac 01 00 11       	add    $0x110001ac,%eax
  408a41:	6f                   	outsl  %ds:(%rsi),(%dx)
  408a42:	02 00                	add    (%rax),%al
  408a44:	61                   	(bad)  
  408a45:	18 02                	sbb    %al,(%rdx)
  408a47:	00 8b 0d 02 00 a6    	add    %cl,-0x59fffdf3(%rbx)
  408a4d:	69 02 00 60 ad 00    	imul   $0xad6000,(%rdx),%eax
  408a53:	00 2f                	add    %ch,(%rdi)
  408a55:	a1 01 00 e3 38 02 00 	movabs 0x43b9000238e30001,%eax
  408a5c:	b9 43 
  408a5e:	02 00                	add    (%rax),%al
  408a60:	37                   	(bad)  
  408a61:	23 02                	and    (%rdx),%eax
  408a63:	00 60 ad             	add    %ah,-0x53(%rax)
  408a66:	00 00                	add    %al,(%rax)
  408a68:	d7                   	xlat   %ds:(%rbx)
  408a69:	75 01                	jne    408a6c <q+0x59ec>
  408a6b:	00 61 18             	add    %ah,0x18(%rcx)
  408a6e:	02 00                	add    (%rax),%al
  408a70:	78 33                	js     408aa5 <q+0x5a25>
  408a72:	02 00                	add    (%rax),%al
  408a74:	65 59                	gs pop %rcx
  408a76:	02 00                	add    (%rax),%al
  408a78:	2e 36 00 00          	cs add %al,%ss:(%rax)
	...
  409458:	3b 64 02 00          	cmp    0x0(%rdx,%rax,1),%esp
  40945c:	e7 79                	out    %eax,$0x79
  40945e:	02 00                	add    (%rax),%al
  409460:	e3 38                	jrcxz  40949a <q+0x641a>
  409462:	02 00                	add    (%rax),%al
  409464:	fa                   	cli    
  409465:	53                   	push   %rbx
  409466:	02 00                	add    (%rax),%al
  409468:	37                   	(bad)  
  409469:	23 02                	and    (%rdx),%eax
  40946b:	00 2e                	add    %ch,(%rsi)
  40946d:	36 00 00             	add    %al,%ss:(%rax)
	...
  409f70:	f6 12                	notb   (%rdx)
  409f72:	02 00                	add    (%rax),%al
  409f74:	60                   	(bad)  
  409f75:	ad                   	lods   %ds:(%rsi),%eax
  409f76:	00 00                	add    %al,(%rax)
  409f78:	0d 2e 02 00 cc       	or     $0xcc00022e,%eax
  409f7d:	1d 02 00 f6 12       	sbb    $0x12f60002,%eax
  409f82:	02 00                	add    (%rax),%al
  409f84:	8f                   	(bad)  
  409f85:	4e 02 00             	rex.WRX add (%rax),%r8b
  409f88:	37                   	(bad)  
  409f89:	23 02                	and    (%rdx),%eax
  409f8b:	00 60 ad             	add    %ah,-0x53(%rax)
  409f8e:	00 00                	add    %al,(%rax)
  409f90:	93                   	xchg   %eax,%ebx
  409f91:	8f 02                	popq   (%rdx)
  409f93:	00 60 ad             	add    %ah,-0x53(%rax)
  409f96:	00 00                	add    %al,(%rax)
  409f98:	37                   	(bad)  
  409f99:	23 02                	and    (%rdx),%eax
  409f9b:	00 fa                	add    %bh,%dl
  409f9d:	53                   	push   %rbx
  409f9e:	02 00                	add    (%rax),%al
  409fa0:	61                   	(bad)  
  409fa1:	18 02                	sbb    %al,(%rdx)
  409fa3:	00 65 59             	add    %ah,0x59(%rbp)
  409fa6:	02 00                	add    (%rax),%al
  409fa8:	fa                   	cli    
  409fa9:	53                   	push   %rbx
  409faa:	02 00                	add    (%rax),%al
  409fac:	7c 74                	jl     40a022 <q+0x6fa2>
  409fae:	02 00                	add    (%rax),%al
  409fb0:	a6                   	cmpsb  %es:(%rdi),%ds:(%rsi)
  409fb1:	69 02 00 81 20 04    	imul   $0x4208100,(%rdx),%eax
  409fb7:	00 4b 68             	add    %cl,0x68(%rbx)
  409fba:	03 00                	add    (%rax),%eax
  409fbc:	60                   	(bad)  
  409fbd:	ad                   	lods   %ds:(%rsi),%eax
  409fbe:	00 00                	add    %al,(%rax)
  409fc0:	37                   	(bad)  
  409fc1:	23 02                	and    (%rdx),%eax
  409fc3:	00 24 49             	add    %ah,(%rcx,%rcx,2)
  409fc6:	02 00                	add    (%rax),%al
  409fc8:	60                   	(bad)  
  409fc9:	ad                   	lods   %ds:(%rsi),%eax
  409fca:	00 00                	add    %al,(%rax)
  409fcc:	52                   	push   %rdx
  409fcd:	7f 02                	jg     409fd1 <q+0x6f51>
  409fcf:	00 8b 0d 02 00 24    	add    %cl,0x2400020d(%rbx)
  409fd5:	49 02 00             	rex.WB add (%r8),%al
  409fd8:	65 59                	gs pop %rcx
  409fda:	02 00                	add    (%rax),%al
  409fdc:	a6                   	cmpsb  %es:(%rdi),%ds:(%rsi)
  409fdd:	69 02 00 60 ad 00    	imul   $0xad6000,(%rdx),%eax
  409fe3:	00 8f 4e 02 00 81    	add    %cl,-0x7efffdb2(%rdi)
  409fe9:	20 04 00             	and    %al,(%rax,%rax,1)
  409fec:	4b 68 03 00 0d 2e    	rex.WXB pushq $0x2e0d0003
  409ff2:	02 00                	add    (%rax),%al
  409ff4:	e3 38                	jrcxz  40a02e <q+0x6fae>
  409ff6:	02 00                	add    (%rax),%al
  409ff8:	61                   	(bad)  
  409ff9:	18 02                	sbb    %al,(%rdx)
  409ffb:	00 65 59             	add    %ah,0x59(%rbp)
  409ffe:	02 00                	add    (%rax),%al
  40a000:	2e 36 00 00          	cs add %al,%ss:(%rax)
	...
  40aa88:	42 7b 01             	rex.X jnp 40aa8c <q+0x7a0c>
  40aa8b:	00 37                	add    %dh,(%rdi)
  40aa8d:	23 02                	and    (%rdx),%eax
  40aa8f:	00 24 49             	add    %ah,(%rcx,%rcx,2)
  40aa92:	02 00                	add    (%rax),%al
  40aa94:	e3 38                	jrcxz  40aace <q+0x7a4e>
  40aa96:	02 00                	add    (%rax),%al
  40aa98:	61                   	(bad)  
  40aa99:	18 02                	sbb    %al,(%rdx)
  40aa9b:	00 e3                	add    %ah,%bl
  40aa9d:	38 02                	cmp    %al,(%rdx)
  40aa9f:	00 7c 74 02          	add    %bh,0x2(%rsp,%rsi,2)
  40aaa3:	00 8b 0d 02 00 61    	add    %cl,0x6100020d(%rbx)
  40aaa9:	18 02                	sbb    %al,(%rdx)
  40aaab:	00 e3                	add    %ah,%bl
  40aaad:	38 02                	cmp    %al,(%rdx)
  40aaaf:	00 65 59             	add    %ah,0x59(%rbp)
  40aab2:	02 00                	add    (%rax),%al
  40aab4:	fa                   	cli    
  40aab5:	53                   	push   %rbx
  40aab6:	02 00                	add    (%rax),%al
  40aab8:	37                   	(bad)  
  40aab9:	23 02                	and    (%rdx),%eax
  40aabb:	00 11                	add    %dl,(%rcx)
  40aabd:	6f                   	outsl  %ds:(%rsi),(%dx)
  40aabe:	02 00                	add    (%rax),%al
  40aac0:	64 ee                	fs out %al,(%dx)
  40aac2:	00 00                	add    %al,(%rax)
  40aac4:	60                   	(bad)  
  40aac5:	ad                   	lods   %ds:(%rsi),%eax
  40aac6:	00 00                	add    %al,(%rax)
  40aac8:	a2 28 02 00 e3 38 02 	movabs %al,0xfa000238e3000228
  40aacf:	00 fa 
  40aad1:	53                   	push   %rbx
  40aad2:	02 00                	add    (%rax),%al
  40aad4:	8b 0d 02 00 24 49    	mov    0x49240002(%rip),%ecx        # 4964aadc <_end+0x49036344>
  40aada:	02 00                	add    (%rax),%al
  40aadc:	e3 38                	jrcxz  40ab16 <q+0x7a96>
  40aade:	02 00                	add    (%rax),%al
  40aae0:	fe                   	(bad)  
  40aae1:	94                   	xchg   %eax,%esp
  40aae2:	02 00                	add    (%rax),%al
  40aae4:	8b 0d 02 00 a6 69    	mov    0x69a60002(%rip),%ecx        # 69e6aaec <_end+0x69856354>
  40aaea:	02 00                	add    (%rax),%al
  40aaec:	65 59                	gs pop %rcx
  40aaee:	02 00                	add    (%rax),%al
  40aaf0:	fa                   	cli    
  40aaf1:	53                   	push   %rbx
  40aaf2:	02 00                	add    (%rax),%al
  40aaf4:	60                   	(bad)  
  40aaf5:	ad                   	lods   %ds:(%rsi),%eax
  40aaf6:	00 00                	add    %al,(%rax)
  40aaf8:	37                   	(bad)  
  40aaf9:	23 02                	and    (%rdx),%eax
  40aafb:	00 24 49             	add    %ah,(%rcx,%rcx,2)
  40aafe:	02 00                	add    (%rax),%al
  40ab00:	60                   	(bad)  
  40ab01:	ad                   	lods   %ds:(%rsi),%eax
  40ab02:	00 00                	add    %al,(%rax)
  40ab04:	4e                   	rex.WRX
  40ab05:	3e 02 00             	add    %ds:(%rax),%al
  40ab08:	e7 79                	out    %eax,$0x79
  40ab0a:	02 00                	add    (%rax),%al
  40ab0c:	37                   	(bad)  
  40ab0d:	23 02                	and    (%rdx),%eax
  40ab0f:	00 0d 2e 02 00 65    	add    %cl,0x6500022e(%rip)        # 6540ad43 <_end+0x64df65ab>
  40ab15:	59                   	pop    %rcx
  40ab16:	02 00                	add    (%rax),%al
  40ab18:	3a f9                	cmp    %cl,%bh
  40ab1a:	00 00                	add    %al,(%rax)
  40ab1c:	60                   	(bad)  
  40ab1d:	ad                   	lods   %ds:(%rsi),%eax
  40ab1e:	00 00                	add    %al,(%rax)
  40ab20:	2b 60 01             	sub    0x1(%rax),%esp
  40ab23:	00 78 33             	add    %bh,0x33(%rax)
  40ab26:	02 00                	add    (%rax),%al
  40ab28:	65 59                	gs pop %rcx
  40ab2a:	02 00                	add    (%rax),%al
  40ab2c:	a6                   	cmpsb  %es:(%rdi),%ds:(%rsi)
  40ab2d:	69 02 00 8b 0d 02    	imul   $0x20d8b00,(%rdx),%eax
  40ab33:	00 60 ad             	add    %ah,-0x53(%rax)
  40ab36:	00 00                	add    %al,(%rax)
  40ab38:	cc                   	int3   
  40ab39:	1d 02 00 37 23       	sbb    $0x23370002,%eax
  40ab3e:	02 00                	add    (%rax),%al
  40ab40:	f6 12                	notb   (%rdx)
  40ab42:	02 00                	add    (%rax),%al
  40ab44:	37                   	(bad)  
  40ab45:	23 02                	and    (%rdx),%eax
  40ab47:	00 a6 69 02 00 81    	add    %ah,-0x7efffd97(%rsi)
  40ab4d:	20 04 00             	and    %al,(%rax,%rax,1)
  40ab50:	4b 68 03 00 fa 53    	rex.WXB pushq $0x53fa0003
  40ab56:	02 00                	add    (%rax),%al
  40ab58:	60                   	(bad)  
  40ab59:	ad                   	lods   %ds:(%rsi),%eax
  40ab5a:	00 00                	add    %al,(%rax)
  40ab5c:	e3 38                	jrcxz  40ab96 <q+0x7b16>
  40ab5e:	02 00                	add    (%rax),%al
  40ab60:	8f                   	(bad)  
  40ab61:	4e 02 00             	rex.WRX add (%rax),%r8b
  40ab64:	d0 5e 02             	rcrb   0x2(%rsi)
  40ab67:	00 24 49             	add    %ah,(%rcx,%rcx,2)
  40ab6a:	02 00                	add    (%rax),%al
  40ab6c:	37                   	(bad)  
  40ab6d:	23 02                	and    (%rdx),%eax
  40ab6f:	00 8f 4e 02 00 37    	add    %cl,0x3700024e(%rdi)
  40ab75:	23 02                	and    (%rdx),%eax
  40ab77:	00 fa                	add    %bh,%dl
  40ab79:	53                   	push   %rbx
  40ab7a:	02 00                	add    (%rax),%al
  40ab7c:	7c 74                	jl     40abf2 <q+0x7b72>
  40ab7e:	02 00                	add    (%rax),%al
  40ab80:	8b 0d 02 00 a6 69    	mov    0x69a60002(%rip),%ecx        # 69e6ab88 <_end+0x698563f0>
  40ab86:	02 00                	add    (%rax),%al
  40ab88:	60                   	(bad)  
  40ab89:	ad                   	lods   %ds:(%rsi),%eax
  40ab8a:	00 00                	add    %al,(%rax)
  40ab8c:	37                   	(bad)  
  40ab8d:	23 02                	and    (%rdx),%eax
  40ab8f:	00 24 49             	add    %ah,(%rcx,%rcx,2)
  40ab92:	02 00                	add    (%rax),%al
  40ab94:	60                   	(bad)  
  40ab95:	ad                   	lods   %ds:(%rsi),%eax
  40ab96:	00 00                	add    %al,(%rax)
  40ab98:	11 6f 02             	adc    %ebp,0x2(%rdi)
  40ab9b:	00 37                	add    %dh,(%rdi)
  40ab9d:	23 02                	and    (%rdx),%eax
  40ab9f:	00 a6 69 02 00 52    	add    %ah,0x52000269(%rsi)
  40aba5:	7f 02                	jg     40aba9 <q+0x7b29>
  40aba7:	00 e3                	add    %ah,%bl
  40aba9:	38 02                	cmp    %al,(%rdx)
  40abab:	00 cc                	add    %cl,%ah
  40abad:	1d 02 00 65 59       	sbb    $0x59650002,%eax
  40abb2:	02 00                	add    (%rax),%al
  40abb4:	a6                   	cmpsb  %es:(%rdi),%ds:(%rsi)
  40abb5:	69 02 00 60 ad 00    	imul   $0xad6000,(%rdx),%eax
  40abbb:	00 3b                	add    %bh,(%rbx)
  40abbd:	64 02 00             	add    %fs:(%rax),%al
  40abc0:	e7 79                	out    %eax,$0x79
  40abc2:	02 00                	add    (%rax),%al
  40abc4:	37                   	(bad)  
  40abc5:	23 02                	and    (%rdx),%eax
  40abc7:	00 60 ad             	add    %ah,-0x53(%rax)
  40abca:	00 00                	add    %al,(%rax)
  40abcc:	11 6f 02             	adc    %ebp,0x2(%rdi)
  40abcf:	00 37                	add    %dh,(%rdi)
  40abd1:	23 02                	and    (%rdx),%eax
  40abd3:	00 60 ad             	add    %ah,-0x53(%rax)
  40abd6:	00 00                	add    %al,(%rax)
  40abd8:	61                   	(bad)  
  40abd9:	18 02                	sbb    %al,(%rdx)
  40abdb:	00 65 59             	add    %ah,0x59(%rbp)
  40abde:	02 00                	add    (%rax),%al
  40abe0:	8f                   	(bad)  
  40abe1:	4e 02 00             	rex.WRX add (%rax),%r8b
  40abe4:	d0 5e 02             	rcrb   0x2(%rsi)
  40abe7:	00 65 59             	add    %ah,0x59(%rbp)
  40abea:	02 00                	add    (%rax),%al
  40abec:	a6                   	cmpsb  %es:(%rdi),%ds:(%rsi)
  40abed:	69 02 00 7c 74 02    	imul   $0x2747c00,(%rdx),%eax
  40abf3:	00 37                	add    %dh,(%rdi)
  40abf5:	23 02                	and    (%rdx),%eax
  40abf7:	00 60 ad             	add    %ah,-0x53(%rax)
  40abfa:	00 00                	add    %al,(%rax)
  40abfc:	61                   	(bad)  
  40abfd:	18 02                	sbb    %al,(%rdx)
  40abff:	00 65 59             	add    %ah,0x59(%rbp)
  40ac02:	02 00                	add    (%rax),%al
  40ac04:	8f                   	(bad)  
  40ac05:	4e 02 00             	rex.WRX add (%rax),%r8b
  40ac08:	65 59                	gs pop %rcx
  40ac0a:	02 00                	add    (%rax),%al
  40ac0c:	60                   	(bad)  
  40ac0d:	ad                   	lods   %ds:(%rsi),%eax
  40ac0e:	00 00                	add    %al,(%rax)
  40ac10:	37                   	(bad)  
  40ac11:	23 02                	and    (%rdx),%eax
  40ac13:	00 24 49             	add    %ah,(%rcx,%rcx,2)
  40ac16:	02 00                	add    (%rax),%al
  40ac18:	60                   	(bad)  
  40ac19:	ad                   	lods   %ds:(%rsi),%eax
  40ac1a:	00 00                	add    %al,(%rax)
  40ac1c:	11 6f 02             	adc    %ebp,0x2(%rdi)
  40ac1f:	00 37                	add    %dh,(%rdi)
  40ac21:	23 02                	and    (%rdx),%eax
  40ac23:	00 a6 69 02 00 52    	add    %ah,0x52000269(%rsi)
  40ac29:	7f 02                	jg     40ac2d <q+0x7bad>
  40ac2b:	00 e3                	add    %ah,%bl
  40ac2d:	38 02                	cmp    %al,(%rdx)
  40ac2f:	00 cc                	add    %cl,%ah
  40ac31:	1d 02 00 65 59       	sbb    $0x59650002,%eax
  40ac36:	02 00                	add    (%rax),%al
  40ac38:	a6                   	cmpsb  %es:(%rdi),%ds:(%rsi)
  40ac39:	69 02 00 60 ad 00    	imul   $0xad6000,(%rdx),%eax
  40ac3f:	00 d0                	add    %dl,%al
  40ac41:	5e                   	pop    %rsi
  40ac42:	02 00                	add    (%rax),%al
  40ac44:	a6                   	cmpsb  %es:(%rdi),%ds:(%rsi)
  40ac45:	69 02 00 65 59 02    	imul   $0x2596500,(%rdx),%eax
  40ac4b:	00 52 7f             	add    %dl,0x7f(%rdx)
  40ac4e:	02 00                	add    (%rax),%al
  40ac50:	e3 38                	jrcxz  40ac8a <q+0x7c0a>
  40ac52:	02 00                	add    (%rax),%al
  40ac54:	11 6f 02             	adc    %ebp,0x2(%rdi)
  40ac57:	00 7c 74 02          	add    %bh,0x2(%rsp,%rsi,2)
  40ac5b:	00 65 59             	add    %ah,0x59(%rbp)
  40ac5e:	02 00                	add    (%rax),%al
  40ac60:	2e 36 00 00          	cs add %al,%ss:(%rax)
	...
  40b5a0:	65 62 31             	gs (bad) {%k7}
  40b5a3:	31 32                	xor    %esi,(%rdx)
  40b5a5:	64 61                	fs (bad) 
  40b5a7:	66 38 35 62 30 65 30 	data16 cmp %dh,0x30653062(%rip)        # 30a5e610 <_end+0x30449e78>
  40b5ae:	66 64 37             	data16 fs (bad) 
  40b5b1:	63 36                	movslq (%rsi),%esi
  40b5b3:	36 32 61 32          	xor    %ss:0x32(%rcx),%ah
  40b5b7:	33 65 35             	xor    0x35(%rbp),%esp
  40b5ba:	33 63 64             	xor    0x64(%rbx),%esp
  40b5bd:	37                   	(bad)  
  40b5be:	62 33                	(bad)  {%k7}
  40b5c0:	0a 00                	or     (%rax),%al
  40b5c2:	00 00                	add    %al,(%rax)
  40b5c4:	00 00                	add    %al,(%rax)
  40b5c6:	00 00                	add    %al,(%rax)
  40b5c8:	35 37 35 38 62       	xor    $0x62383537,%eax
  40b5cd:	34 62                	xor    $0x62,%al
  40b5cf:	66 38 34 30          	data16 cmp %dh,(%rax,%rsi,1)
  40b5d3:	63 35 61 63 65 32    	movslq 0x32656361(%rip),%esi        # 32a6193a <_end+0x3244d1a2>
  40b5d9:	30 64 39 39          	xor    %ah,0x39(%rcx,%rdi,1)
  40b5dd:	65 62                	gs (bad) {%k7}
  40b5df:	35 33 32 63 37       	xor    $0x37633233,%eax
  40b5e4:	31 64 66 37          	xor    %esp,0x37(%rsi,%riz,2)
  40b5e8:	0a 00                	or     (%rax),%al
  40b5ea:	00 00                	add    %al,(%rax)
  40b5ec:	00 00                	add    %al,(%rax)
  40b5ee:	00 00                	add    %al,(%rax)
  40b5f0:	30 32                	xor    %dh,(%rdx)
  40b5f2:	39 66 38             	cmp    %esp,0x38(%rsi)
  40b5f5:	65 62 32             	gs (bad) {%k7}
  40b5f8:	31 33                	xor    %esi,(%rbx)
  40b5fa:	39 34 34             	cmp    %esi,(%rsp,%rsi,1)
  40b5fd:	63 34 30             	movslq (%rax,%rsi,1),%esi
  40b600:	36 38 33             	cmp    %dh,%ss:(%rbx)
  40b603:	64 62                	fs (bad) {%k7}
  40b605:	66 36 33 62 31       	xor    %ss:0x31(%rdx),%sp
  40b60a:	30 63 35             	xor    %ah,0x35(%rbx)
  40b60d:	32 39                	xor    (%rcx),%bh
  40b60f:	62                   	(bad)  {%k7}
  40b610:	0a 00                	or     (%rax),%al
  40b612:	00 00                	add    %al,(%rax)
  40b614:	00 00                	add    %al,(%rax)
  40b616:	00 00                	add    %al,(%rax)
  40b618:	34 62                	xor    $0x62,%al
  40b61a:	36 38 36             	cmp    %dh,%ss:(%rsi)
  40b61d:	61                   	(bad)  
  40b61e:	61                   	(bad)  
  40b61f:	65 36 38 66 31       	gs cmp %ah,%ss:0x31(%rsi)
  40b624:	63 63 39             	movslq 0x39(%rbx),%esp
  40b627:	35 65 65 61 33       	xor    $0x33616565,%eax
  40b62c:	31 62 38             	xor    %esp,0x38(%rdx)
  40b62f:	37                   	(bad)  
  40b630:	63 37                	movslq (%rdi),%esi
  40b632:	39 33                	cmp    %esi,(%rbx)
  40b634:	39 63 62             	cmp    %esp,0x62(%rbx)
  40b637:	31 0a                	xor    %ecx,(%rdx)
  40b639:	00 00                	add    %al,(%rax)
  40b63b:	00 00                	add    %al,(%rax)
  40b63d:	00 00                	add    %al,(%rax)
  40b63f:	00 34 64             	add    %dh,(%rsp,%riz,2)
  40b642:	66 37                	data16 (bad) 
  40b644:	31 38                	xor    %edi,(%rax)
  40b646:	34 61                	xor    $0x61,%al
  40b648:	66 64 32 33          	data16 xor %fs:(%rbx),%dh
  40b64c:	35 39 36 37 62       	xor    $0x62373639,%eax
  40b651:	39 33                	cmp    %esi,(%rbx)
  40b653:	36 37                	ss (bad) 
  40b655:	30 33                	xor    %dh,(%rbx)
  40b657:	38 36                	cmp    %dh,(%rsi)
  40b659:	37                   	(bad)  
  40b65a:	38 33                	cmp    %dh,(%rbx)
  40b65c:	37                   	(bad)  
  40b65d:	30 31                	xor    %dh,(%rcx)
  40b65f:	64 0a 00             	or     %fs:(%rax),%al
  40b662:	00 00                	add    %al,(%rax)
  40b664:	00 00                	add    %al,(%rax)
  40b666:	00 00                	add    %al,(%rax)
  40b668:	31 61 34             	xor    %esp,0x34(%rcx)
  40b66b:	38 32                	cmp    %dh,(%rdx)
  40b66d:	32 37                	xor    (%rdi),%dh
  40b66f:	66 36 34 37          	data16 ss xor $0x37,%al
  40b673:	30 36                	xor    %dh,(%rsi)
  40b675:	35 61 36 32 38       	xor    $0x38323661,%eax
  40b67a:	33 39                	xor    (%rcx),%edi
  40b67c:	34 35                	xor    $0x35,%al
  40b67e:	31 31                	xor    %esi,(%rcx)
  40b680:	64 38 61 33          	cmp    %ah,%fs:0x33(%rcx)
  40b684:	64 37                	fs (bad) 
  40b686:	36 61                	ss (bad) 
  40b688:	0a 00                	or     (%rax),%al
  40b68a:	00 00                	add    %al,(%rax)
  40b68c:	00 00                	add    %al,(%rax)
  40b68e:	00 00                	add    %al,(%rax)
  40b690:	34 39                	xor    $0x39,%al
  40b692:	35 32 31 33 62       	xor    $0x62333132,%eax
  40b697:	61                   	(bad)  
  40b698:	30 35 65 38 30 36    	xor    %dh,0x36303865(%rip)        # 3670ef03 <_end+0x360fa76b>
  40b69e:	65 36 39 38          	gs cmp %edi,%ss:(%rax)
  40b6a2:	65 35 39 36 62 39    	gs xor $0x39623639,%eax
  40b6a8:	64 38 32             	cmp    %dh,%fs:(%rdx)
  40b6ab:	36 61                	ss (bad) 
  40b6ad:	65 39 39             	cmp    %edi,%gs:(%rcx)
  40b6b0:	0a 00                	or     (%rax),%al
  40b6b2:	00 00                	add    %al,(%rax)
  40b6b4:	00 00                	add    %al,(%rax)
  40b6b6:	00 00                	add    %al,(%rax)
  40b6b8:	65 63 35 65 31 61 65 	movslq %gs:0x65613165(%rip),%esi        # 65a1e824 <_end+0x6540a08c>
  40b6bf:	36 36 32 39          	ss xor %ss:(%rcx),%bh
  40b6c3:	63 65 33             	movslq 0x33(%rbp),%esp
  40b6c6:	63 39                	movslq (%rcx),%edi
  40b6c8:	63 62 63             	movslq 0x63(%rdx),%esp
  40b6cb:	38 36                	cmp    %dh,(%rsi)
  40b6cd:	39 65 34             	cmp    %esp,0x34(%rbp)
  40b6d0:	66 64 65 63 37       	fs movslq %gs:(%rdi),%si
  40b6d5:	38 31                	cmp    %dh,(%rcx)
  40b6d7:	34 0a                	xor    $0xa,%al
  40b6d9:	00 00                	add    %al,(%rax)
  40b6db:	00 00                	add    %al,(%rax)
  40b6dd:	00 00                	add    %al,(%rax)
  40b6df:	00 39                	add    %bh,(%rcx)
  40b6e1:	37                   	(bad)  
  40b6e2:	39 34 38             	cmp    %esi,(%rax,%rdi,1)
  40b6e5:	66 37                	data16 (bad) 
  40b6e7:	61                   	(bad)  
  40b6e8:	35 66 66 38 62       	xor    $0x62386666,%eax
  40b6ed:	37                   	(bad)  
  40b6ee:	66 66 34 35          	data16 data16 xor $0x35,%al
  40b6f2:	65 64 38 61 39       	gs cmp %ah,%fs:0x39(%rcx)
  40b6f7:	33 38                	xor    (%rax),%edi
  40b6f9:	38 66 31             	cmp    %ah,0x31(%rsi)
  40b6fc:	62 33                	(bad)  {%k7}
  40b6fe:	39 36                	cmp    %esi,(%rsi)
  40b700:	0a 00                	or     (%rax),%al
  40b702:	00 00                	add    %al,(%rax)
  40b704:	00 00                	add    %al,(%rax)
  40b706:	00 00                	add    %al,(%rax)
  40b708:	30 36                	xor    %dh,(%rsi)
  40b70a:	32 62 63             	xor    0x63(%rdx),%ah
  40b70d:	61                   	(bad)  
  40b70e:	37                   	(bad)  
  40b70f:	62 62 37 33 36       	(bad)  {%k3}
  40b714:	61                   	(bad)  
  40b715:	32 31                	xor    (%rcx),%dh
  40b717:	37                   	(bad)  
  40b718:	61                   	(bad)  
  40b719:	38 35 33 66 37 61    	cmp    %dh,0x61376633(%rip)        # 61781d52 <_end+0x6116d5ba>
  40b71f:	36 61                	ss (bad) 
  40b721:	64 39 38             	cmp    %edi,%fs:(%rax)
  40b724:	32 31                	xor    (%rcx),%dh
  40b726:	61                   	(bad)  
  40b727:	61                   	(bad)  
  40b728:	0a 00                	or     (%rax),%al
  40b72a:	00 00                	add    %al,(%rax)
  40b72c:	00 00                	add    %al,(%rax)
  40b72e:	00 00                	add    %al,(%rax)
  40b730:	34 36                	xor    $0x36,%al
  40b732:	39 63 65             	cmp    %esp,0x65(%rbx)
  40b735:	35 32 39 62 62       	xor    $0x62623932,%eax
  40b73a:	65 38 35 38 36 65 35 	cmp    %dh,%gs:0x35653638(%rip)        # 35a5ed79 <_end+0x3544a5e1>
  40b741:	35 34 65 31 31       	xor    $0x31316534,%eax
  40b746:	61                   	(bad)  
  40b747:	32 39                	xor    (%rcx),%bh
  40b749:	37                   	(bad)  
  40b74a:	61                   	(bad)  
  40b74b:	38 33                	cmp    %dh,(%rbx)
  40b74d:	32 34 31             	xor    (%rcx,%rsi,1),%dh
  40b750:	0a 00                	or     (%rax),%al
  40b752:	00 00                	add    %al,(%rax)
  40b754:	00 00                	add    %al,(%rax)
  40b756:	00 00                	add    %al,(%rax)
  40b758:	36 36 38 64 34 65    	ss cmp %ah,%ss:0x65(%rsp,%rsi,1)
  40b75e:	33 62 39             	xor    0x39(%rdx),%esp
  40b761:	33 66 63             	xor    0x63(%rsi),%esp
  40b764:	64 32 61 65          	xor    %fs:0x65(%rcx),%ah
  40b768:	62                   	(bad)  {%k3}
  40b769:	66 37                	data16 (bad) 
  40b76b:	32 39                	xor    (%rcx),%bh
  40b76d:	63 36                	movslq (%rsi),%esi
  40b76f:	32 65 31             	xor    0x31(%rbp),%ah
  40b772:	31 35 66 37 34 33    	xor    %esi,0x33343766(%rip)        # 3374eede <_end+0x3313a746>
  40b778:	0a 00                	or     (%rax),%al
  40b77a:	00 00                	add    %al,(%rax)
  40b77c:	00 00                	add    %al,(%rax)
	...

000000000040b780 <inv>:
  40b780:	16                   	(bad)  
  40b781:	1b 04 00             	sbb    (%rax,%rax,1),%eax
  40b784:	d5                   	(bad)  
  40b785:	0a 04 00             	or     (%rax,%rax,1),%al
  40b788:	01 6b 01             	add    %ebp,0x1(%rbx)
  40b78b:	00 81 20 04 00 d1    	add    %al,-0x2efffbe0(%rcx)
  40b791:	c9                   	leaveq 
  40b792:	03 00                	add    (%rax),%eax
  40b794:	8f                   	(bad)  
  40b795:	4e 02 00             	rex.WRX add (%rax),%r8b
  40b798:	65 59                	gs pop %rcx
  40b79a:	02 00                	add    (%rax),%al
  40b79c:	60                   	(bad)  
  40b79d:	ad                   	lods   %ds:(%rsi),%eax
  40b79e:	00 00                	add    %al,(%rax)
  40b7a0:	cc                   	int3   
  40b7a1:	1d 02 00 37 23       	sbb    $0x23370002,%eax
  40b7a6:	02 00                	add    (%rax),%al
  40b7a8:	11 6f 02             	adc    %ebp,0x2(%rdi)
  40b7ab:	00 61 18             	add    %ah,0x18(%rcx)
  40b7ae:	02 00                	add    (%rax),%al
  40b7b0:	e7 79                	out    %eax,$0x79
  40b7b2:	02 00                	add    (%rax),%al
  40b7b4:	f6 12                	notb   (%rdx)
  40b7b6:	02 00                	add    (%rax),%al
  40b7b8:	a6                   	cmpsb  %es:(%rdi),%ds:(%rsi)
  40b7b9:	69 02 00 e3 38 02    	imul   $0x238e300,(%rdx),%eax
  40b7bf:	00 37                	add    %dh,(%rdi)
  40b7c1:	23 02                	and    (%rdx),%eax
  40b7c3:	00 a6 69 02 00 65    	add    %ah,0x65000269(%rsi)
  40b7c9:	59                   	pop    %rcx
  40b7ca:	02 00                	add    (%rax),%al
  40b7cc:	fa                   	cli    
  40b7cd:	53                   	push   %rbx
  40b7ce:	02 00                	add    (%rax),%al
  40b7d0:	60                   	(bad)  
  40b7d1:	ad                   	lods   %ds:(%rsi),%eax
  40b7d2:	00 00                	add    %al,(%rax)
  40b7d4:	37                   	(bad)  
  40b7d5:	23 02                	and    (%rdx),%eax
  40b7d7:	00 24 49             	add    %ah,(%rcx,%rcx,2)
  40b7da:	02 00                	add    (%rax),%al
  40b7dc:	60                   	(bad)  
  40b7dd:	ad                   	lods   %ds:(%rsi),%eax
  40b7de:	00 00                	add    %al,(%rax)
  40b7e0:	d0 5e 02             	rcrb   0x2(%rsi)
  40b7e3:	00 a6 69 02 00 65    	add    %ah,0x65000269(%rsi)
  40b7e9:	59                   	pop    %rcx
  40b7ea:	02 00                	add    (%rax),%al
  40b7ec:	7c 74                	jl     40b862 <inv+0xe2>
  40b7ee:	02 00                	add    (%rax),%al
  40b7f0:	65 59                	gs pop %rcx
  40b7f2:	02 00                	add    (%rax),%al
  40b7f4:	61                   	(bad)  
  40b7f5:	18 02                	sbb    %al,(%rdx)
  40b7f7:	00 65 59             	add    %ah,0x59(%rbp)
  40b7fa:	02 00                	add    (%rax),%al
  40b7fc:	24 49                	and    $0x49,%al
  40b7fe:	02 00                	add    (%rax),%al
  40b800:	65 59                	gs pop %rcx
  40b802:	02 00                	add    (%rax),%al
  40b804:	64 ee                	fs out %al,(%dx)
  40b806:	00 00                	add    %al,(%rax)
  40b808:	60                   	(bad)  
  40b809:	ad                   	lods   %ds:(%rsi),%eax
  40b80a:	00 00                	add    %al,(%rax)
  40b80c:	24 49                	and    $0x49,%al
  40b80e:	02 00                	add    (%rax),%al
  40b810:	8b 0d 02 00 60 ad    	mov    -0x529ffffe(%rip),%ecx        # ffffffffada0b818 <_end+0xffffffffad3f7080>
  40b816:	00 00                	add    %al,(%rax)
  40b818:	cc                   	int3   
  40b819:	1d 02 00 e3 38       	sbb    $0x38e30002,%eax
  40b81e:	02 00                	add    (%rax),%al
  40b820:	a6                   	cmpsb  %es:(%rdi),%ds:(%rsi)
  40b821:	69 02 00 37 23 02    	imul   $0x2233700,(%rdx),%eax
  40b827:	00 61 18             	add    %ah,0x18(%rcx)
  40b82a:	02 00                	add    (%rax),%al
  40b82c:	61                   	(bad)  
  40b82d:	18 02                	sbb    %al,(%rdx)
  40b82f:	00 e3                	add    %ah,%bl
  40b831:	38 02                	cmp    %al,(%rdx)
  40b833:	00 81 20 04 00 d1    	add    %al,-0x2efffbe0(%rcx)
  40b839:	c9                   	leaveq 
  40b83a:	03 00                	add    (%rax),%eax
  40b83c:	fa                   	cli    
  40b83d:	53                   	push   %rbx
  40b83e:	02 00                	add    (%rax),%al
  40b840:	60                   	(bad)  
  40b841:	ad                   	lods   %ds:(%rsi),%eax
  40b842:	00 00                	add    %al,(%rax)
  40b844:	93                   	xchg   %eax,%ebx
  40b845:	8f 02                	popq   (%rdx)
  40b847:	00 60 ad             	add    %ah,-0x53(%rax)
  40b84a:	00 00                	add    %al,(%rax)
  40b84c:	37                   	(bad)  
  40b84d:	23 02                	and    (%rdx),%eax
  40b84f:	00 24 49             	add    %ah,(%rcx,%rcx,2)
  40b852:	02 00                	add    (%rax),%al
  40b854:	60                   	(bad)  
  40b855:	ad                   	lods   %ds:(%rsi),%eax
  40b856:	00 00                	add    %al,(%rax)
  40b858:	d0 5e 02             	rcrb   0x2(%rsi)
  40b85b:	00 e7                	add    %ah,%bh
  40b85d:	79 02                	jns    40b861 <inv+0xe1>
  40b85f:	00 37                	add    %dh,(%rdi)
  40b861:	23 02                	and    (%rdx),%eax
  40b863:	00 a6 69 02 00 7c    	add    %ah,0x7c000269(%rsi)
  40b869:	74 02                	je     40b86d <inv+0xed>
  40b86b:	00 65 59             	add    %ah,0x59(%rbp)
  40b86e:	02 00                	add    (%rax),%al
  40b870:	60                   	(bad)  
  40b871:	ad                   	lods   %ds:(%rsi),%eax
  40b872:	00 00                	add    %al,(%rax)
  40b874:	d0 5e 02             	rcrb   0x2(%rsi)
  40b877:	00 8b 0d 02 00 a6    	add    %cl,-0x59fffdf3(%rbx)
  40b87d:	69 02 00 8b 0d 02    	imul   $0x20d8b00,(%rdx),%eax
  40b883:	00 60 ad             	add    %ah,-0x53(%rax)
  40b886:	00 00                	add    %al,(%rax)
  40b888:	61                   	(bad)  
  40b889:	18 02                	sbb    %al,(%rdx)
  40b88b:	00 65 59             	add    %ah,0x59(%rbp)
  40b88e:	02 00                	add    (%rax),%al
  40b890:	fa                   	cli    
  40b891:	53                   	push   %rbx
  40b892:	02 00                	add    (%rax),%al
  40b894:	37                   	(bad)  
  40b895:	23 02                	and    (%rdx),%eax
  40b897:	00 61 18             	add    %ah,0x18(%rcx)
  40b89a:	02 00                	add    (%rax),%al
  40b89c:	7c 74                	jl     40b912 <inv+0x192>
  40b89e:	02 00                	add    (%rax),%al
  40b8a0:	8b 0d 02 00 a6 69    	mov    0x69a60002(%rip),%ecx        # 69e6b8a8 <_end+0x69857110>
  40b8a6:	02 00                	add    (%rax),%al
  40b8a8:	11 6f 02             	adc    %ebp,0x2(%rdi)
  40b8ab:	00 37                	add    %dh,(%rdi)
  40b8ad:	23 02                	and    (%rdx),%eax
  40b8af:	00 55 55             	add    %dl,0x55(%rbp)
  40b8b2:	01 00                	add    %eax,(%rax)
  40b8b4:	2e 36 00 00          	cs add %al,%ss:(%rax)
	...
  40c298:	16                   	(bad)  
  40c299:	1b 04 00             	sbb    (%rax,%rax,1),%eax
  40c29c:	d5                   	(bad)  
  40c29d:	0a 04 00             	or     (%rax,%rax,1),%al
  40c2a0:	db b6 01 00 e7 79    	(bad)  0x79e70001(%rsi)
  40c2a6:	02 00                	add    (%rax),%al
  40c2a8:	81 20 04 00 a3 93    	andl   $0x93a30004,(%rax)
  40c2ae:	03 00                	add    (%rax),%eax
  40c2b0:	60                   	(bad)  
  40c2b1:	ad                   	lods   %ds:(%rsi),%eax
  40c2b2:	00 00                	add    %al,(%rax)
  40c2b4:	cc                   	int3   
  40c2b5:	1d 02 00 e3 38       	sbb    $0x38e30002,%eax
  40c2ba:	02 00                	add    (%rax),%al
  40c2bc:	a2 28 02 00 37 23 02 	movabs %al,0xa600022337000228
  40c2c3:	00 a6 
  40c2c5:	69 02 00 37 23 02    	imul   $0x2233700,(%rdx),%eax
  40c2cb:	00 fa                	add    %bh,%dl
  40c2cd:	53                   	push   %rbx
  40c2ce:	02 00                	add    (%rax),%al
  40c2d0:	61                   	(bad)  
  40c2d1:	18 02                	sbb    %al,(%rdx)
  40c2d3:	00 e3                	add    %ah,%bl
  40c2d5:	38 02                	cmp    %al,(%rdx)
  40c2d7:	00 8b 0d 02 00 11    	add    %cl,0x1100020d(%rbx)
  40c2dd:	6f                   	outsl  %ds:(%rsi),(%dx)
  40c2de:	02 00                	add    (%rax),%al
  40c2e0:	60                   	(bad)  
  40c2e1:	ad                   	lods   %ds:(%rsi),%eax
  40c2e2:	00 00                	add    %al,(%rax)
  40c2e4:	78 33                	js     40c319 <inv+0xb99>
  40c2e6:	02 00                	add    (%rax),%al
  40c2e8:	8b 0d 02 00 93 8f    	mov    -0x706cfffe(%rip),%ecx        # ffffffff8fd3c2f0 <_end+0xffffffff8f727b58>
  40c2ee:	02 00                	add    (%rax),%al
  40c2f0:	60                   	(bad)  
  40c2f1:	ad                   	lods   %ds:(%rsi),%eax
  40c2f2:	00 00                	add    %al,(%rax)
  40c2f4:	37                   	(bad)  
  40c2f5:	23 02                	and    (%rdx),%eax
  40c2f7:	00 fa                	add    %bh,%dl
  40c2f9:	53                   	push   %rbx
  40c2fa:	02 00                	add    (%rax),%al
  40c2fc:	7c 74                	jl     40c372 <inv+0xbf2>
  40c2fe:	02 00                	add    (%rax),%al
  40c300:	a6                   	cmpsb  %es:(%rdi),%ds:(%rsi)
  40c301:	69 02 00 37 23 02    	imul   $0x2233700,(%rdx),%eax
  40c307:	00 60 ad             	add    %ah,-0x53(%rax)
  40c30a:	00 00                	add    %al,(%rax)
  40c30c:	1c c7                	sbb    $0xc7,%al
  40c30e:	01 00                	add    %eax,(%rax)
  40c310:	01 6b 01             	add    %ebp,0x1(%rbx)
  40c313:	00 70 b1             	add    %dh,-0x4f(%rax)
  40c316:	01 00                	add    %eax,(%rax)
  40c318:	60                   	(bad)  
  40c319:	ad                   	lods   %ds:(%rsi),%eax
  40c31a:	00 00                	add    %al,(%rax)
  40c31c:	93                   	xchg   %eax,%ebx
  40c31d:	8f 02                	popq   (%rdx)
  40c31f:	00 60 ad             	add    %ah,-0x53(%rax)
  40c322:	00 00                	add    %al,(%rax)
  40c324:	87 cc                	xchg   %ecx,%esp
  40c326:	01 00                	add    %eax,(%rax)
  40c328:	6c                   	insb   (%dx),%es:(%rdi)
  40c329:	70 01                	jo     40c32c <inv+0xbac>
  40c32b:	00 70 b1             	add    %dh,-0x4f(%rax)
  40c32e:	01 00                	add    %eax,(%rax)
  40c330:	60                   	(bad)  
  40c331:	ad                   	lods   %ds:(%rsi),%eax
  40c332:	00 00                	add    %al,(%rax)
  40c334:	93                   	xchg   %eax,%ebx
  40c335:	8f 02                	popq   (%rdx)
  40c337:	00 60 ad             	add    %ah,-0x53(%rax)
  40c33a:	00 00                	add    %al,(%rax)
  40c33c:	37                   	(bad)  
  40c33d:	23 02                	and    (%rdx),%eax
  40c33f:	00 fa                	add    %bh,%dl
  40c341:	53                   	push   %rbx
  40c342:	02 00                	add    (%rax),%al
  40c344:	60                   	(bad)  
  40c345:	ad                   	lods   %ds:(%rsi),%eax
  40c346:	00 00                	add    %al,(%rax)
  40c348:	3b 64 02 00          	cmp    0x0(%rdx,%rax,1),%esp
  40c34c:	e7 79                	out    %eax,$0x79
  40c34e:	02 00                	add    (%rax),%al
  40c350:	81 20 04 00 a3 93    	andl   $0x93a30004,(%rax)
  40c356:	03 00                	add    (%rax),%eax
  40c358:	60                   	(bad)  
  40c359:	ad                   	lods   %ds:(%rsi),%eax
  40c35a:	00 00                	add    %al,(%rax)
  40c35c:	61                   	(bad)  
  40c35d:	18 02                	sbb    %al,(%rdx)
  40c35f:	00 8b 0d 02 00 11    	add    %cl,0x1100020d(%rbx)
  40c365:	6f                   	outsl  %ds:(%rsi),(%dx)
  40c366:	02 00                	add    (%rax),%al
  40c368:	65 59                	gs pop %rcx
  40c36a:	02 00                	add    (%rax),%al
  40c36c:	11 6f 02             	adc    %ebp,0x2(%rdi)
  40c36f:	00 60 ad             	add    %ah,-0x53(%rax)
  40c372:	00 00                	add    %al,(%rax)
  40c374:	61                   	(bad)  
  40c375:	18 02                	sbb    %al,(%rdx)
  40c377:	00 65 59             	add    %ah,0x59(%rbp)
  40c37a:	02 00                	add    (%rax),%al
  40c37c:	fa                   	cli    
  40c37d:	53                   	push   %rbx
  40c37e:	02 00                	add    (%rax),%al
  40c380:	52                   	push   %rdx
  40c381:	7f 02                	jg     40c385 <inv+0xc05>
  40c383:	00 e3                	add    %ah,%bl
  40c385:	38 02                	cmp    %al,(%rdx)
  40c387:	00 37                	add    %dh,(%rdi)
  40c389:	23 02                	and    (%rdx),%eax
  40c38b:	00 fa                	add    %bh,%dl
  40c38d:	53                   	push   %rbx
  40c38e:	02 00                	add    (%rax),%al
  40c390:	37                   	(bad)  
  40c391:	23 02                	and    (%rdx),%eax
  40c393:	00 60 ad             	add    %ah,-0x53(%rax)
  40c396:	00 00                	add    %al,(%rax)
  40c398:	e7 79                	out    %eax,$0x79
  40c39a:	02 00                	add    (%rax),%al
  40c39c:	11 6f 02             	adc    %ebp,0x2(%rdi)
  40c39f:	00 8b 0d 02 00 a6    	add    %cl,-0x59fffdf3(%rbx)
  40c3a5:	69 02 00 60 ad 00    	imul   $0xad6000,(%rdx),%eax
  40c3ab:	00 61 18             	add    %ah,0x18(%rcx)
  40c3ae:	02 00                	add    (%rax),%al
  40c3b0:	8b 0d 02 00 cc 1d    	mov    0x1dcc0002(%rip),%ecx        # 1e0cc3b8 <_end+0x1dab7c20>
  40c3b6:	02 00                	add    (%rax),%al
  40c3b8:	8b 0d 02 00 60 ad    	mov    -0x529ffffe(%rip),%ecx        # ffffffffada0c3c0 <_end+0xffffffffad3f7c28>
  40c3be:	00 00                	add    %al,(%rax)
  40c3c0:	e7 79                	out    %eax,$0x79
  40c3c2:	02 00                	add    (%rax),%al
  40c3c4:	fa                   	cli    
  40c3c5:	53                   	push   %rbx
  40c3c6:	02 00                	add    (%rax),%al
  40c3c8:	65 59                	gs pop %rcx
  40c3ca:	02 00                	add    (%rax),%al
  40c3cc:	55                   	push   %rbp
  40c3cd:	55                   	push   %rbp
  40c3ce:	01 00                	add    %eax,(%rax)
  40c3d0:	2e 36 00 00          	cs add %al,%ss:(%rax)
	...
  40cdb0:	16                   	(bad)  
  40cdb1:	1b 04 00             	sbb    (%rax,%rax,1),%eax
  40cdb4:	d5                   	(bad)  
  40cdb5:	0a 04 00             	or     (%rax,%rax,1),%al
  40cdb8:	d7                   	xlat   %ds:(%rbx)
  40cdb9:	75 01                	jne    40cdbc <inv+0x163c>
  40cdbb:	00 24 49             	add    %ah,(%rcx,%rcx,2)
  40cdbe:	02 00                	add    (%rax),%al
  40cdc0:	60                   	(bad)  
  40cdc1:	ad                   	lods   %ds:(%rsi),%eax
  40cdc2:	00 00                	add    %al,(%rax)
  40cdc4:	d0 5e 02             	rcrb   0x2(%rsi)
  40cdc7:	00 e7                	add    %ah,%bh
  40cdc9:	79 02                	jns    40cdcd <inv+0x164d>
  40cdcb:	00 37                	add    %dh,(%rdi)
  40cdcd:	23 02                	and    (%rdx),%eax
  40cdcf:	00 a6 69 02 00 7c    	add    %ah,0x7c000269(%rsi)
  40cdd5:	74 02                	je     40cdd9 <inv+0x1659>
  40cdd7:	00 65 59             	add    %ah,0x59(%rbp)
  40cdda:	02 00                	add    (%rax),%al
  40cddc:	60                   	(bad)  
  40cddd:	ad                   	lods   %ds:(%rsi),%eax
  40cdde:	00 00                	add    %al,(%rax)
  40cde0:	3b 64 02 00          	cmp    0x0(%rdx,%rax,1),%esp
  40cde4:	e7 79                	out    %eax,$0x79
  40cde6:	02 00                	add    (%rax),%al
  40cde8:	37                   	(bad)  
  40cde9:	23 02                	and    (%rdx),%eax
  40cdeb:	00 60 ad             	add    %ah,-0x53(%rax)
  40cdee:	00 00                	add    %al,(%rax)
  40cdf0:	e7 79                	out    %eax,$0x79
  40cdf2:	02 00                	add    (%rax),%al
  40cdf4:	11 6f 02             	adc    %ebp,0x2(%rdi)
  40cdf7:	00 8b 0d 02 00 a6    	add    %cl,-0x59fffdf3(%rbx)
  40cdfd:	69 02 00 65 59 02    	imul   $0x2596500,(%rdx),%eax
  40ce03:	00 fa                	add    %bh,%dl
  40ce05:	53                   	push   %rbx
  40ce06:	02 00                	add    (%rax),%al
  40ce08:	60                   	(bad)  
  40ce09:	ad                   	lods   %ds:(%rsi),%eax
  40ce0a:	00 00                	add    %al,(%rax)
  40ce0c:	d0 5e 02             	rcrb   0x2(%rsi)
  40ce0f:	00 8b 0d 02 00 a6    	add    %cl,-0x59fffdf3(%rbx)
  40ce15:	69 02 00 8b 0d 02    	imul   $0x20d8b00,(%rdx),%eax
  40ce1b:	00 60 ad             	add    %ah,-0x53(%rax)
  40ce1e:	00 00                	add    %al,(%rax)
  40ce20:	61                   	(bad)  
  40ce21:	18 02                	sbb    %al,(%rdx)
  40ce23:	00 65 59             	add    %ah,0x59(%rbp)
  40ce26:	02 00                	add    (%rax),%al
  40ce28:	fa                   	cli    
  40ce29:	53                   	push   %rbx
  40ce2a:	02 00                	add    (%rax),%al
  40ce2c:	37                   	(bad)  
  40ce2d:	23 02                	and    (%rdx),%eax
  40ce2f:	00 61 18             	add    %ah,0x18(%rcx)
  40ce32:	02 00                	add    (%rax),%al
  40ce34:	7c 74                	jl     40ceaa <inv+0x172a>
  40ce36:	02 00                	add    (%rax),%al
  40ce38:	8b 0d 02 00 a6 69    	mov    0x69a60002(%rip),%ecx        # 69e6ce40 <_end+0x698586a8>
  40ce3e:	02 00                	add    (%rax),%al
  40ce40:	11 6f 02             	adc    %ebp,0x2(%rdi)
  40ce43:	00 37                	add    %dh,(%rdi)
  40ce45:	23 02                	and    (%rdx),%eax
  40ce47:	00 60 ad             	add    %ah,-0x53(%rax)
  40ce4a:	00 00                	add    %al,(%rax)
  40ce4c:	8b 0d 02 00 24 49    	mov    0x49240002(%rip),%ecx        # 4964ce54 <_end+0x490386bc>
  40ce52:	02 00                	add    (%rax),%al
  40ce54:	60                   	(bad)  
  40ce55:	ad                   	lods   %ds:(%rsi),%eax
  40ce56:	00 00                	add    %al,(%rax)
  40ce58:	11 6f 02             	adc    %ebp,0x2(%rdi)
  40ce5b:	00 37                	add    %dh,(%rdi)
  40ce5d:	23 02                	and    (%rdx),%eax
  40ce5f:	00 a6 69 02 00 52    	add    %ah,0x52000269(%rsi)
  40ce65:	7f 02                	jg     40ce69 <inv+0x16e9>
  40ce67:	00 37                	add    %dh,(%rdi)
  40ce69:	23 02                	and    (%rdx),%eax
  40ce6b:	00 a6 69 02 00 60    	add    %ah,0x60000269(%rsi)
  40ce71:	ad                   	lods   %ds:(%rsi),%eax
  40ce72:	00 00                	add    %al,(%rax)
  40ce74:	37                   	(bad)  
  40ce75:	23 02                	and    (%rdx),%eax
  40ce77:	00 11                	add    %dl,(%rcx)
  40ce79:	6f                   	outsl  %ds:(%rsi),(%dx)
  40ce7a:	02 00                	add    (%rax),%al
  40ce7c:	60                   	(bad)  
  40ce7d:	ad                   	lods   %ds:(%rsi),%eax
  40ce7e:	00 00                	add    %al,(%rax)
  40ce80:	37                   	(bad)  
  40ce81:	23 02                	and    (%rdx),%eax
  40ce83:	00 24 49             	add    %ah,(%rcx,%rcx,2)
  40ce86:	02 00                	add    (%rax),%al
  40ce88:	60                   	(bad)  
  40ce89:	ad                   	lods   %ds:(%rsi),%eax
  40ce8a:	00 00                	add    %al,(%rax)
  40ce8c:	8f                   	(bad)  
  40ce8d:	4e 02 00             	rex.WRX add (%rax),%r8b
  40ce90:	e3 38                	jrcxz  40ceca <inv+0x174a>
  40ce92:	02 00                	add    (%rax),%al
  40ce94:	11 6f 02             	adc    %ebp,0x2(%rdi)
  40ce97:	00 8f 4e 02 00 65    	add    %cl,0x6500024e(%rdi)
  40ce9d:	59                   	pop    %rcx
  40ce9e:	02 00                	add    (%rax),%al
  40cea0:	60                   	(bad)  
  40cea1:	ad                   	lods   %ds:(%rsi),%eax
  40cea2:	00 00                	add    %al,(%rax)
  40cea4:	3b 64 02 00          	cmp    0x0(%rdx,%rax,1),%esp
  40cea8:	e7 79                	out    %eax,$0x79
  40ceaa:	02 00                	add    (%rax),%al
  40ceac:	37                   	(bad)  
  40cead:	23 02                	and    (%rdx),%eax
  40ceaf:	00 60 ad             	add    %ah,-0x53(%rax)
  40ceb2:	00 00                	add    %al,(%rax)
  40ceb4:	e7 79                	out    %eax,$0x79
  40ceb6:	02 00                	add    (%rax),%al
  40ceb8:	11 6f 02             	adc    %ebp,0x2(%rdi)
  40cebb:	00 8b 0d 02 00 fa    	add    %cl,-0x5fffdf3(%rbx)
  40cec1:	53                   	push   %rbx
  40cec2:	02 00                	add    (%rax),%al
  40cec4:	60                   	(bad)  
  40cec5:	ad                   	lods   %ds:(%rsi),%eax
  40cec6:	00 00                	add    %al,(%rax)
  40cec8:	d0 5e 02             	rcrb   0x2(%rsi)
  40cecb:	00 8b 0d 02 00 a6    	add    %cl,-0x59fffdf3(%rbx)
  40ced1:	69 02 00 8b 0d 02    	imul   $0x20d8b00,(%rdx),%eax
  40ced7:	00 60 ad             	add    %ah,-0x53(%rax)
  40ceda:	00 00                	add    %al,(%rax)
  40cedc:	8f                   	(bad)  
  40cedd:	4e 02 00             	rex.WRX add (%rax),%r8b
  40cee0:	8b 0d 02 00 fa 53    	mov    0x53fa0002(%rip),%ecx        # 543acee8 <_end+0x53d98750>
  40cee6:	02 00                	add    (%rax),%al
  40cee8:	cc                   	int3   
  40cee9:	1d 02 00 8b 0d       	sbb    $0xd8b0002,%eax
  40ceee:	02 00                	add    (%rax),%al
  40cef0:	a6                   	cmpsb  %es:(%rdi),%ds:(%rsi)
  40cef1:	69 02 00 60 ad 00    	imul   $0xad6000,(%rdx),%eax
  40cef7:	00 24 49             	add    %ah,(%rcx,%rcx,2)
  40cefa:	02 00                	add    (%rax),%al
  40cefc:	8b 0d 02 00 11 6f    	mov    0x6f110002(%rip),%ecx        # 6f51cf04 <_end+0x6ef0876c>
  40cf02:	02 00                	add    (%rax),%al
  40cf04:	60                   	(bad)  
  40cf05:	ad                   	lods   %ds:(%rsi),%eax
  40cf06:	00 00                	add    %al,(%rax)
  40cf08:	a6                   	cmpsb  %es:(%rdi),%ds:(%rsi)
  40cf09:	69 02 00 37 23 02    	imul   $0x2233700,(%rdx),%eax
  40cf0f:	00 11                	add    %dl,(%rcx)
  40cf11:	6f                   	outsl  %ds:(%rsi),(%dx)
  40cf12:	02 00                	add    (%rax),%al
  40cf14:	d0 5e 02             	rcrb   0x2(%rsi)
  40cf17:	00 e7                	add    %ah,%bh
  40cf19:	79 02                	jns    40cf1d <inv+0x179d>
  40cf1b:	00 37                	add    %dh,(%rdi)
  40cf1d:	23 02                	and    (%rdx),%eax
  40cf1f:	00 11                	add    %dl,(%rcx)
  40cf21:	6f                   	outsl  %ds:(%rsi),(%dx)
  40cf22:	02 00                	add    (%rax),%al
  40cf24:	7c 74                	jl     40cf9a <inv+0x181a>
  40cf26:	02 00                	add    (%rax),%al
  40cf28:	8b 0d 02 00 11 6f    	mov    0x6f110002(%rip),%ecx        # 6f51cf30 <_end+0x6ef08798>
  40cf2e:	02 00                	add    (%rax),%al
  40cf30:	55                   	push   %rbp
  40cf31:	55                   	push   %rbp
  40cf32:	01 00                	add    %eax,(%rax)
  40cf34:	60                   	(bad)  
  40cf35:	ad                   	lods   %ds:(%rsi),%eax
  40cf36:	00 00                	add    %al,(%rax)
  40cf38:	16                   	(bad)  
  40cf39:	1b 04 00             	sbb    (%rax,%rax,1),%eax
  40cf3c:	d5                   	(bad)  
  40cf3d:	0a 04 00             	or     (%rax,%rax,1),%al
  40cf40:	70 b1                	jo     40cef3 <inv+0x1773>
  40cf42:	01 00                	add    %eax,(%rax)
  40cf44:	65 59                	gs pop %rcx
  40cf46:	02 00                	add    (%rax),%al
  40cf48:	a6                   	cmpsb  %es:(%rdi),%ds:(%rsi)
  40cf49:	69 02 00 60 ad 00    	imul   $0xad6000,(%rdx),%eax
  40cf4f:	00 3b                	add    %bh,(%rbx)
  40cf51:	64 02 00             	add    %fs:(%rax),%al
  40cf54:	e7 79                	out    %eax,$0x79
  40cf56:	02 00                	add    (%rax),%al
  40cf58:	81 20 04 00 a3 93    	andl   $0x93a30004,(%rax)
  40cf5e:	03 00                	add    (%rax),%eax
  40cf60:	55                   	push   %rbp
  40cf61:	55                   	push   %rbp
  40cf62:	01 00                	add    %eax,(%rax)
  40cf64:	2e 36 00 00          	cs add %al,%ss:(%rax)
	...
  40d8c8:	16                   	(bad)  
  40d8c9:	1b 04 00             	sbb    (%rax,%rax,1),%eax
  40d8cc:	d5                   	(bad)  
  40d8cd:	0a 04 00             	or     (%rax,%rax,1),%al
  40d8d0:	db b6 01 00 e7 79    	(bad)  0x79e70001(%rsi)
  40d8d6:	02 00                	add    (%rax),%al
  40d8d8:	81 20 04 00 a3 93    	andl   $0x93a30004,(%rax)
  40d8de:	03 00                	add    (%rax),%eax
  40d8e0:	60                   	(bad)  
  40d8e1:	ad                   	lods   %ds:(%rsi),%eax
  40d8e2:	00 00                	add    %al,(%rax)
  40d8e4:	81 20 04 00 be ef    	andl   $0xefbe0004,(%rax)
  40d8ea:	03 00                	add    (%rax),%eax
  40d8ec:	7c 74                	jl     40d962 <inv+0x21e2>
  40d8ee:	02 00                	add    (%rax),%al
  40d8f0:	e3 38                	jrcxz  40d92a <inv+0x21aa>
  40d8f2:	02 00                	add    (%rax),%al
  40d8f4:	24 49                	and    $0x49,%al
  40d8f6:	02 00                	add    (%rax),%al
  40d8f8:	60                   	(bad)  
  40d8f9:	ad                   	lods   %ds:(%rsi),%eax
  40d8fa:	00 00                	add    %al,(%rax)
  40d8fc:	8b 0d 02 00 f6 12    	mov    0x12f60002(%rip),%ecx        # 1336d904 <_end+0x12d5916c>
  40d902:	02 00                	add    (%rax),%al
  40d904:	11 6f 02             	adc    %ebp,0x2(%rdi)
  40d907:	00 7c 74 02          	add    %bh,0x2(%rsp,%rsi,2)
  40d90b:	00 a6 69 02 00 8b    	add    %ah,-0x74fffd97(%rsi)
  40d911:	0d 02 00 61 18       	or     $0x18610002,%eax
  40d916:	02 00                	add    (%rax),%al
  40d918:	61                   	(bad)  
  40d919:	18 02                	sbb    %al,(%rdx)
  40d91b:	00 e3                	add    %ah,%bl
  40d91d:	38 02                	cmp    %al,(%rdx)
  40d91f:	00 81 20 04 00 d1    	add    %al,-0x2efffbe0(%rcx)
  40d925:	c9                   	leaveq 
  40d926:	03 00                	add    (%rax),%eax
  40d928:	fa                   	cli    
  40d929:	53                   	push   %rbx
  40d92a:	02 00                	add    (%rax),%al
  40d92c:	60                   	(bad)  
  40d92d:	ad                   	lods   %ds:(%rsi),%eax
  40d92e:	00 00                	add    %al,(%rax)
  40d930:	37                   	(bad)  
  40d931:	23 02                	and    (%rdx),%eax
  40d933:	00 11                	add    %dl,(%rcx)
  40d935:	6f                   	outsl  %ds:(%rsi),(%dx)
  40d936:	02 00                	add    (%rax),%al
  40d938:	60                   	(bad)  
  40d939:	ad                   	lods   %ds:(%rsi),%eax
  40d93a:	00 00                	add    %al,(%rax)
  40d93c:	e7 79                	out    %eax,$0x79
  40d93e:	02 00                	add    (%rax),%al
  40d940:	7c 74                	jl     40d9b6 <inv+0x2236>
  40d942:	02 00                	add    (%rax),%al
  40d944:	e3 38                	jrcxz  40d97e <inv+0x21fe>
  40d946:	02 00                	add    (%rax),%al
  40d948:	24 49                	and    $0x49,%al
  40d94a:	02 00                	add    (%rax),%al
  40d94c:	e3 38                	jrcxz  40d986 <inv+0x2206>
  40d94e:	02 00                	add    (%rax),%al
  40d950:	fe                   	(bad)  
  40d951:	94                   	xchg   %eax,%esp
  40d952:	02 00                	add    (%rax),%al
  40d954:	8b 0d 02 00 cc 1d    	mov    0x1dcc0002(%rip),%ecx        # 1e0cd95c <_end+0x1dab91c4>
  40d95a:	02 00                	add    (%rax),%al
  40d95c:	8b 0d 02 00 60 ad    	mov    -0x529ffffe(%rip),%ecx        # ffffffffada0d964 <_end+0xffffffffad3f91cc>
  40d962:	00 00                	add    %al,(%rax)
  40d964:	d0 5e 02             	rcrb   0x2(%rsi)
  40d967:	00 8b 0d 02 00 a6    	add    %cl,-0x59fffdf3(%rbx)
  40d96d:	69 02 00 8b 0d 02    	imul   $0x20d8b00,(%rdx),%eax
  40d973:	00 60 ad             	add    %ah,-0x53(%rax)
  40d976:	00 00                	add    %al,(%rax)
  40d978:	61                   	(bad)  
  40d979:	18 02                	sbb    %al,(%rdx)
  40d97b:	00 65 59             	add    %ah,0x59(%rbp)
  40d97e:	02 00                	add    (%rax),%al
  40d980:	8f                   	(bad)  
  40d981:	4e 02 00             	rex.WRX add (%rax),%r8b
  40d984:	e7 79                	out    %eax,$0x79
  40d986:	02 00                	add    (%rax),%al
  40d988:	fa                   	cli    
  40d989:	53                   	push   %rbx
  40d98a:	02 00                	add    (%rax),%al
  40d98c:	e3 38                	jrcxz  40d9c6 <inv+0x2246>
  40d98e:	02 00                	add    (%rax),%al
  40d990:	61                   	(bad)  
  40d991:	18 02                	sbb    %al,(%rdx)
  40d993:	00 8b 0d 02 00 a6    	add    %cl,-0x59fffdf3(%rbx)
  40d999:	69 02 00 11 6f 02    	imul   $0x26f1100,(%rdx),%eax
  40d99f:	00 37                	add    %dh,(%rdi)
  40d9a1:	23 02                	and    (%rdx),%eax
  40d9a3:	00 60 ad             	add    %ah,-0x53(%rax)
  40d9a6:	00 00                	add    %al,(%rax)
  40d9a8:	61                   	(bad)  
  40d9a9:	18 02                	sbb    %al,(%rdx)
  40d9ab:	00 65 59             	add    %ah,0x59(%rbp)
  40d9ae:	02 00                	add    (%rax),%al
  40d9b0:	fa                   	cli    
  40d9b1:	53                   	push   %rbx
  40d9b2:	02 00                	add    (%rax),%al
  40d9b4:	60                   	(bad)  
  40d9b5:	ad                   	lods   %ds:(%rsi),%eax
  40d9b6:	00 00                	add    %al,(%rax)
  40d9b8:	11 6f 02             	adc    %ebp,0x2(%rdi)
  40d9bb:	00 65 59             	add    %ah,0x59(%rbp)
  40d9be:	02 00                	add    (%rax),%al
  40d9c0:	61                   	(bad)  
  40d9c1:	18 02                	sbb    %al,(%rdx)
  40d9c3:	00 b9 43 02 00 37    	add    %bh,0x37000243(%rcx)
  40d9c9:	23 02                	and    (%rdx),%eax
  40d9cb:	00 7c 74 02          	add    %bh,0x2(%rsp,%rsi,2)
  40d9cf:	00 11                	add    %dl,(%rcx)
  40d9d1:	6f                   	outsl  %ds:(%rsi),(%dx)
  40d9d2:	02 00                	add    (%rax),%al
  40d9d4:	55                   	push   %rbp
  40d9d5:	55                   	push   %rbp
  40d9d6:	01 00                	add    %eax,(%rax)
  40d9d8:	60                   	(bad)  
  40d9d9:	ad                   	lods   %ds:(%rsi),%eax
  40d9da:	00 00                	add    %al,(%rax)
  40d9dc:	16                   	(bad)  
  40d9dd:	1b 04 00             	sbb    (%rax,%rax,1),%eax
  40d9e0:	d5                   	(bad)  
  40d9e1:	0a 04 00             	or     (%rax,%rax,1),%al
  40d9e4:	11 6f 02             	adc    %ebp,0x2(%rdi)
  40d9e7:	00 37                	add    %dh,(%rdi)
  40d9e9:	23 02                	and    (%rdx),%eax
  40d9eb:	00 60 ad             	add    %ah,-0x53(%rax)
  40d9ee:	00 00                	add    %al,(%rax)
  40d9f0:	d0 5e 02             	rcrb   0x2(%rsi)
  40d9f3:	00 e7                	add    %ah,%bh
  40d9f5:	79 02                	jns    40d9f9 <inv+0x2279>
  40d9f7:	00 37                	add    %dh,(%rdi)
  40d9f9:	23 02                	and    (%rdx),%eax
  40d9fb:	00 cc                	add    %cl,%ah
  40d9fd:	1d 02 00 37 23       	sbb    $0x23370002,%eax
  40da02:	02 00                	add    (%rax),%al
  40da04:	60                   	(bad)  
  40da05:	ad                   	lods   %ds:(%rsi),%eax
  40da06:	00 00                	add    %al,(%rax)
  40da08:	e7 79                	out    %eax,$0x79
  40da0a:	02 00                	add    (%rax),%al
  40da0c:	7c 74                	jl     40da82 <inv+0x2302>
  40da0e:	02 00                	add    (%rax),%al
  40da10:	e3 38                	jrcxz  40da4a <inv+0x22ca>
  40da12:	02 00                	add    (%rax),%al
  40da14:	24 49                	and    $0x49,%al
  40da16:	02 00                	add    (%rax),%al
  40da18:	e3 38                	jrcxz  40da52 <inv+0x22d2>
  40da1a:	02 00                	add    (%rax),%al
  40da1c:	fe                   	(bad)  
  40da1d:	94                   	xchg   %eax,%esp
  40da1e:	02 00                	add    (%rax),%al
  40da20:	8b 0d 02 00 a6 69    	mov    0x69a60002(%rip),%ecx        # 69e6da28 <_end+0x69859290>
  40da26:	02 00                	add    (%rax),%al
  40da28:	60                   	(bad)  
  40da29:	ad                   	lods   %ds:(%rsi),%eax
  40da2a:	00 00                	add    %al,(%rax)
  40da2c:	a6                   	cmpsb  %es:(%rdi),%ds:(%rsi)
  40da2d:	69 02 00 37 23 02    	imul   $0x2233700,(%rdx),%eax
  40da33:	00 8b 0d 02 00 cc    	add    %cl,-0x33fffdf3(%rbx)
  40da39:	1d 02 00 b8 d8       	sbb    $0xd8b80002,%eax
  40da3e:	00 00                	add    %al,(%rax)
  40da40:	e6 0e                	out    %al,$0xe
  40da42:	01 00                	add    %eax,(%rax)
  40da44:	23 de                	and    %esi,%ebx
  40da46:	00 00                	add    %al,(%rax)
  40da48:	60                   	(bad)  
  40da49:	ad                   	lods   %ds:(%rsi),%eax
  40da4a:	00 00                	add    %al,(%rax)
  40da4c:	93                   	xchg   %eax,%ebx
  40da4d:	8f 02                	popq   (%rdx)
  40da4f:	00 60 ad             	add    %ah,-0x53(%rax)
  40da52:	00 00                	add    %al,(%rax)
  40da54:	bd 84 02 00 a6       	mov    $0xa6000284,%ebp
  40da59:	69 02 00 e3 38 02    	imul   $0x238e300,(%rdx),%eax
  40da5f:	00 7c 74 02          	add    %bh,0x2(%rsp,%rsi,2)
  40da63:	00 37                	add    %dh,(%rdi)
  40da65:	23 02                	and    (%rdx),%eax
  40da67:	00 b8 d8 00 00 e6    	add    %bh,-0x19ffff28(%rax)
  40da6d:	0e                   	(bad)  
  40da6e:	01 00                	add    %eax,(%rax)
  40da70:	23 de                	and    %esi,%ebx
  40da72:	00 00                	add    %al,(%rax)
  40da74:	60                   	(bad)  
  40da75:	ad                   	lods   %ds:(%rsi),%eax
  40da76:	00 00                	add    %al,(%rax)
  40da78:	d0 5e 02             	rcrb   0x2(%rsi)
  40da7b:	00 8b 0d 02 00 a6    	add    %cl,-0x59fffdf3(%rbx)
  40da81:	69 02 00 8b 0d 02    	imul   $0x20d8b00,(%rdx),%eax
  40da87:	00 60 ad             	add    %ah,-0x53(%rax)
  40da8a:	00 00                	add    %al,(%rax)
  40da8c:	65 59                	gs pop %rcx
  40da8e:	02 00                	add    (%rax),%al
  40da90:	d0 5e 02             	rcrb   0x2(%rsi)
  40da93:	00 37                	add    %dh,(%rdi)
  40da95:	23 02                	and    (%rdx),%eax
  40da97:	00 a6 69 02 00 8b    	add    %ah,-0x74fffd97(%rsi)
  40da9d:	0d 02 00 a6 69       	or     $0x69a60002,%eax
  40daa2:	02 00                	add    (%rax),%al
  40daa4:	55                   	push   %rbp
  40daa5:	55                   	push   %rbp
  40daa6:	01 00                	add    %eax,(%rax)
  40daa8:	2e 36 00 00          	cs add %al,%ss:(%rax)
	...
  40e3e0:	16                   	(bad)  
  40e3e1:	1b 04 00             	sbb    (%rax,%rax,1),%eax
  40e3e4:	d5                   	(bad)  
  40e3e5:	0a 04 00             	or     (%rax,%rax,1),%al
  40e3e8:	01 6b 01             	add    %ebp,0x1(%rbx)
  40e3eb:	00 81 20 04 00 d1    	add    %al,-0x2efffbe0(%rcx)
  40e3f1:	c9                   	leaveq 
  40e3f2:	03 00                	add    (%rax),%eax
  40e3f4:	8f                   	(bad)  
  40e3f5:	4e 02 00             	rex.WRX add (%rax),%r8b
  40e3f8:	65 59                	gs pop %rcx
  40e3fa:	02 00                	add    (%rax),%al
  40e3fc:	60                   	(bad)  
  40e3fd:	ad                   	lods   %ds:(%rsi),%eax
  40e3fe:	00 00                	add    %al,(%rax)
  40e400:	0d 2e 02 00 8b       	or     $0x8b00022e,%eax
  40e405:	0d 02 00 a6 69       	or     $0x69a60002,%eax
  40e40a:	02 00                	add    (%rax),%al
  40e40c:	8b 0d 02 00 fa 53    	mov    0x53fa0002(%rip),%ecx        # 543ae414 <_end+0x53d99c7c>
  40e412:	02 00                	add    (%rax),%al
  40e414:	7c 74                	jl     40e48a <inv+0x2d0a>
  40e416:	02 00                	add    (%rax),%al
  40e418:	e3 38                	jrcxz  40e452 <inv+0x2cd2>
  40e41a:	02 00                	add    (%rax),%al
  40e41c:	fe                   	(bad)  
  40e41d:	94                   	xchg   %eax,%esp
  40e41e:	02 00                	add    (%rax),%al
  40e420:	8b 0d 02 00 60 ad    	mov    -0x529ffffe(%rip),%ecx        # ffffffffada0e428 <_end+0xffffffffad3f9c90>
  40e426:	00 00                	add    %al,(%rax)
  40e428:	1c c7                	sbb    $0xc7,%al
  40e42a:	01 00                	add    %eax,(%rax)
  40e42c:	01 6b 01             	add    %ebp,0x1(%rbx)
  40e42f:	00 70 b1             	add    %dh,-0x4f(%rax)
  40e432:	01 00                	add    %eax,(%rax)
  40e434:	60                   	(bad)  
  40e435:	ad                   	lods   %ds:(%rsi),%eax
  40e436:	00 00                	add    %al,(%rax)
  40e438:	3b 64 02 00          	cmp    0x0(%rdx,%rax,1),%esp
  40e43c:	e7 79                	out    %eax,$0x79
  40e43e:	02 00                	add    (%rax),%al
  40e440:	37                   	(bad)  
  40e441:	23 02                	and    (%rdx),%eax
  40e443:	00 60 ad             	add    %ah,-0x53(%rax)
  40e446:	00 00                	add    %al,(%rax)
  40e448:	24 49                	and    $0x49,%al
  40e44a:	02 00                	add    (%rax),%al
  40e44c:	65 59                	gs pop %rcx
  40e44e:	02 00                	add    (%rax),%al
  40e450:	11 6f 02             	adc    %ebp,0x2(%rdi)
  40e453:	00 60 ad             	add    %ah,-0x53(%rax)
  40e456:	00 00                	add    %al,(%rax)
  40e458:	d0 5e 02             	rcrb   0x2(%rsi)
  40e45b:	00 8b 0d 02 00 3b    	add    %cl,0x3b00020d(%rbx)
  40e461:	64 02 00             	add    %fs:(%rax),%al
  40e464:	e7 79                	out    %eax,$0x79
  40e466:	02 00                	add    (%rax),%al
  40e468:	37                   	(bad)  
  40e469:	23 02                	and    (%rdx),%eax
  40e46b:	00 7c 74 02          	add    %bh,0x2(%rsp,%rsi,2)
  40e46f:	00 37                	add    %dh,(%rdi)
  40e471:	23 02                	and    (%rdx),%eax
  40e473:	00 11                	add    %dl,(%rcx)
  40e475:	6f                   	outsl  %ds:(%rsi),(%dx)
  40e476:	02 00                	add    (%rax),%al
  40e478:	60                   	(bad)  
  40e479:	ad                   	lods   %ds:(%rsi),%eax
  40e47a:	00 00                	add    %al,(%rax)
  40e47c:	24 49                	and    $0x49,%al
  40e47e:	02 00                	add    (%rax),%al
  40e480:	24 49                	and    $0x49,%al
  40e482:	02 00                	add    (%rax),%al
  40e484:	37                   	(bad)  
  40e485:	23 02                	and    (%rdx),%eax
  40e487:	00 0d 2e 02 00 8b    	add    %cl,-0x74fffdd2(%rip)        # ffffffff8b40e6bb <_end+0xffffffff8adf9f23>
  40e48d:	0d 02 00 fa 53       	or     $0x53fa0002,%eax
  40e492:	02 00                	add    (%rax),%al
  40e494:	60                   	(bad)  
  40e495:	ad                   	lods   %ds:(%rsi),%eax
  40e496:	00 00                	add    %al,(%rax)
  40e498:	37                   	(bad)  
  40e499:	23 02                	and    (%rdx),%eax
  40e49b:	00 fa                	add    %bh,%dl
  40e49d:	53                   	push   %rbx
  40e49e:	02 00                	add    (%rax),%al
  40e4a0:	60                   	(bad)  
  40e4a1:	ad                   	lods   %ds:(%rsi),%eax
  40e4a2:	00 00                	add    %al,(%rax)
  40e4a4:	65 59                	gs pop %rcx
  40e4a6:	02 00                	add    (%rax),%al
  40e4a8:	a6                   	cmpsb  %es:(%rdi),%ds:(%rsi)
  40e4a9:	69 02 00 cc 1d 02    	imul   $0x21dcc00,(%rdx),%eax
  40e4af:	00 37                	add    %dh,(%rdi)
  40e4b1:	23 02                	and    (%rdx),%eax
  40e4b3:	00 fa                	add    %bh,%dl
  40e4b5:	53                   	push   %rbx
  40e4b6:	02 00                	add    (%rax),%al
  40e4b8:	60                   	(bad)  
  40e4b9:	ad                   	lods   %ds:(%rsi),%eax
  40e4ba:	00 00                	add    %al,(%rax)
  40e4bc:	93                   	xchg   %eax,%ebx
  40e4bd:	8f 02                	popq   (%rdx)
  40e4bf:	00 60 ad             	add    %ah,-0x53(%rax)
  40e4c2:	00 00                	add    %al,(%rax)
  40e4c4:	fa                   	cli    
  40e4c5:	53                   	push   %rbx
  40e4c6:	02 00                	add    (%rax),%al
  40e4c8:	65 59                	gs pop %rcx
  40e4ca:	02 00                	add    (%rax),%al
  40e4cc:	60                   	(bad)  
  40e4cd:	ad                   	lods   %ds:(%rsi),%eax
  40e4ce:	00 00                	add    %al,(%rax)
  40e4d0:	11 6f 02             	adc    %ebp,0x2(%rdi)
  40e4d3:	00 37                	add    %dh,(%rdi)
  40e4d5:	23 02                	and    (%rdx),%eax
  40e4d7:	00 60 ad             	add    %ah,-0x53(%rax)
  40e4da:	00 00                	add    %al,(%rax)
  40e4dc:	d0 5e 02             	rcrb   0x2(%rsi)
  40e4df:	00 e3                	add    %ah,%bl
  40e4e1:	38 02                	cmp    %al,(%rdx)
  40e4e3:	00 37                	add    %dh,(%rdi)
  40e4e5:	23 02                	and    (%rdx),%eax
  40e4e7:	00 a6 69 02 00 cc    	add    %ah,-0x33fffd97(%rsi)
  40e4ed:	1d 02 00 37 23       	sbb    $0x23370002,%eax
  40e4f2:	02 00                	add    (%rax),%al
  40e4f4:	fa                   	cli    
  40e4f5:	53                   	push   %rbx
  40e4f6:	02 00                	add    (%rax),%al
  40e4f8:	55                   	push   %rbp
  40e4f9:	55                   	push   %rbp
  40e4fa:	01 00                	add    %eax,(%rax)
  40e4fc:	2e 36 00 00          	cs add %al,%ss:(%rax)
	...
  40eef8:	87 cc                	xchg   %ecx,%esp
  40eefa:	01 00                	add    %eax,(%rax)
  40eefc:	fa                   	cli    
  40eefd:	53                   	push   %rbx
  40eefe:	02 00                	add    (%rax),%al
  40ef00:	60                   	(bad)  
  40ef01:	ad                   	lods   %ds:(%rsi),%eax
  40ef02:	00 00                	add    %al,(%rax)
  40ef04:	11 6f 02             	adc    %ebp,0x2(%rdi)
  40ef07:	00 37                	add    %dh,(%rdi)
  40ef09:	23 02                	and    (%rdx),%eax
  40ef0b:	00 a6 69 02 00 52    	add    %ah,0x52000269(%rsi)
  40ef11:	7f 02                	jg     40ef15 <inv+0x3795>
  40ef13:	00 e3                	add    %ah,%bl
  40ef15:	38 02                	cmp    %al,(%rdx)
  40ef17:	00 cc                	add    %cl,%ah
  40ef19:	1d 02 00 65 59       	sbb    $0x59650002,%eax
  40ef1e:	02 00                	add    (%rax),%al
  40ef20:	a6                   	cmpsb  %es:(%rdi),%ds:(%rsi)
  40ef21:	69 02 00 60 ad 00    	imul   $0xad6000,(%rdx),%eax
  40ef27:	00 11                	add    %dl,(%rcx)
  40ef29:	6f                   	outsl  %ds:(%rsi),(%dx)
  40ef2a:	02 00                	add    (%rax),%al
  40ef2c:	e7 79                	out    %eax,$0x79
  40ef2e:	02 00                	add    (%rax),%al
  40ef30:	37                   	(bad)  
  40ef31:	23 02                	and    (%rdx),%eax
  40ef33:	00 24 49             	add    %ah,(%rcx,%rcx,2)
  40ef36:	02 00                	add    (%rax),%al
  40ef38:	37                   	(bad)  
  40ef39:	23 02                	and    (%rdx),%eax
  40ef3b:	00 60 ad             	add    %ah,-0x53(%rax)
  40ef3e:	00 00                	add    %al,(%rax)
  40ef40:	61                   	(bad)  
  40ef41:	18 02                	sbb    %al,(%rdx)
  40ef43:	00 a6 69 02 00 37    	add    %ah,0x37000269(%rsi)
  40ef49:	23 02                	and    (%rdx),%eax
  40ef4b:	00 8b 0d 02 00 a6    	add    %cl,-0x59fffdf3(%rbx)
  40ef51:	69 02 00 60 ad 00    	imul   $0xad6000,(%rdx),%eax
  40ef57:	00 e7                	add    %ah,%bh
  40ef59:	79 02                	jns    40ef5d <inv+0x37dd>
  40ef5b:	00 fa                	add    %bh,%dl
  40ef5d:	53                   	push   %rbx
  40ef5e:	02 00                	add    (%rax),%al
  40ef60:	60                   	(bad)  
  40ef61:	ad                   	lods   %ds:(%rsi),%eax
  40ef62:	00 00                	add    %al,(%rax)
  40ef64:	fa                   	cli    
  40ef65:	53                   	push   %rbx
  40ef66:	02 00                	add    (%rax),%al
  40ef68:	e7 79                	out    %eax,$0x79
  40ef6a:	02 00                	add    (%rax),%al
  40ef6c:	37                   	(bad)  
  40ef6d:	23 02                	and    (%rdx),%eax
  40ef6f:	00 52 7f             	add    %dl,0x7f(%rdx)
  40ef72:	02 00                	add    (%rax),%al
  40ef74:	65 59                	gs pop %rcx
  40ef76:	02 00                	add    (%rax),%al
  40ef78:	60                   	(bad)  
  40ef79:	ad                   	lods   %ds:(%rsi),%eax
  40ef7a:	00 00                	add    %al,(%rax)
  40ef7c:	d0 5e 02             	rcrb   0x2(%rsi)
  40ef7f:	00 a6 69 02 00 65    	add    %ah,0x65000269(%rsi)
  40ef85:	59                   	pop    %rcx
  40ef86:	02 00                	add    (%rax),%al
  40ef88:	61                   	(bad)  
  40ef89:	18 02                	sbb    %al,(%rdx)
  40ef8b:	00 37                	add    %dh,(%rdi)
  40ef8d:	23 02                	and    (%rdx),%eax
  40ef8f:	00 11                	add    %dl,(%rcx)
  40ef91:	6f                   	outsl  %ds:(%rsi),(%dx)
  40ef92:	02 00                	add    (%rax),%al
  40ef94:	65 59                	gs pop %rcx
  40ef96:	02 00                	add    (%rax),%al
  40ef98:	60                   	(bad)  
  40ef99:	ad                   	lods   %ds:(%rsi),%eax
  40ef9a:	00 00                	add    %al,(%rax)
  40ef9c:	65 59                	gs pop %rcx
  40ef9e:	02 00                	add    (%rax),%al
  40efa0:	60                   	(bad)  
  40efa1:	ad                   	lods   %ds:(%rsi),%eax
  40efa2:	00 00                	add    %al,(%rax)
  40efa4:	7c 74                	jl     40f01a <inv+0x389a>
  40efa6:	02 00                	add    (%rax),%al
  40efa8:	78 33                	js     40efdd <inv+0x385d>
  40efaa:	02 00                	add    (%rax),%al
  40efac:	a6                   	cmpsb  %es:(%rdi),%ds:(%rsi)
  40efad:	69 02 00 37 23 02    	imul   $0x2233700,(%rdx),%eax
  40efb3:	00 8b 0d 02 00 cc    	add    %cl,-0x33fffdf3(%rbx)
  40efb9:	1d 02 00 60 ad       	sbb    $0xad600002,%eax
  40efbe:	00 00                	add    %al,(%rax)
  40efc0:	d0 5e 02             	rcrb   0x2(%rsi)
  40efc3:	00 8b 0d 02 00 a6    	add    %cl,-0x59fffdf3(%rbx)
  40efc9:	69 02 00 8b 0d 02    	imul   $0x20d8b00,(%rdx),%eax
  40efcf:	00 60 ad             	add    %ah,-0x53(%rax)
  40efd2:	00 00                	add    %al,(%rax)
  40efd4:	8b 0d 02 00 7c 74    	mov    0x747c0002(%rip),%ecx        # 74bcefdc <_end+0x745ba844>
  40efda:	02 00                	add    (%rax),%al
  40efdc:	37                   	(bad)  
  40efdd:	23 02                	and    (%rdx),%eax
  40efdf:	00 fa                	add    %bh,%dl
  40efe1:	53                   	push   %rbx
  40efe2:	02 00                	add    (%rax),%al
  40efe4:	cc                   	int3   
  40efe5:	1d 02 00 37 23       	sbb    $0x23370002,%eax
  40efea:	02 00                	add    (%rax),%al
  40efec:	a6                   	cmpsb  %es:(%rdi),%ds:(%rsi)
  40efed:	69 02 00 60 ad 00    	imul   $0xad6000,(%rdx),%eax
  40eff3:	00 24 49             	add    %ah,(%rcx,%rcx,2)
  40eff6:	02 00                	add    (%rax),%al
  40eff8:	8b 0d 02 00 11 6f    	mov    0x6f110002(%rip),%ecx        # 6f51f000 <_end+0x6ef0a868>
  40effe:	02 00                	add    (%rax),%al
  40f000:	60                   	(bad)  
  40f001:	ad                   	lods   %ds:(%rsi),%eax
  40f002:	00 00                	add    %al,(%rax)
  40f004:	61                   	(bad)  
  40f005:	18 02                	sbb    %al,(%rdx)
  40f007:	00 65 59             	add    %ah,0x59(%rbp)
  40f00a:	02 00                	add    (%rax),%al
  40f00c:	fa                   	cli    
  40f00d:	53                   	push   %rbx
  40f00e:	02 00                	add    (%rax),%al
  40f010:	37                   	(bad)  
  40f011:	23 02                	and    (%rdx),%eax
  40f013:	00 28                	add    %ch,(%rax)
  40f015:	8a 02                	mov    (%rdx),%al
  40f017:	00 e3                	add    %ah,%bl
  40f019:	38 02                	cmp    %al,(%rdx)
  40f01b:	00 65 59             	add    %ah,0x59(%rbp)
  40f01e:	02 00                	add    (%rax),%al
  40f020:	fa                   	cli    
  40f021:	53                   	push   %rbx
  40f022:	02 00                	add    (%rax),%al
  40f024:	37                   	(bad)  
  40f025:	23 02                	and    (%rdx),%eax
  40f027:	00 11                	add    %dl,(%rcx)
  40f029:	6f                   	outsl  %ds:(%rsi),(%dx)
  40f02a:	02 00                	add    (%rax),%al
  40f02c:	60                   	(bad)  
  40f02d:	ad                   	lods   %ds:(%rsi),%eax
  40f02e:	00 00                	add    %al,(%rax)
  40f030:	37                   	(bad)  
  40f031:	23 02                	and    (%rdx),%eax
  40f033:	00 fa                	add    %bh,%dl
  40f035:	53                   	push   %rbx
  40f036:	02 00                	add    (%rax),%al
  40f038:	7c 74                	jl     40f0ae <inv+0x392e>
  40f03a:	02 00                	add    (%rax),%al
  40f03c:	a6                   	cmpsb  %es:(%rdi),%ds:(%rsi)
  40f03d:	69 02 00 8b 0d 02    	imul   $0x20d8b00,(%rdx),%eax
  40f043:	00 fa                	add    %bh,%dl
  40f045:	53                   	push   %rbx
  40f046:	02 00                	add    (%rax),%al
  40f048:	7c 74                	jl     40f0be <inv+0x393e>
  40f04a:	02 00                	add    (%rax),%al
  40f04c:	37                   	(bad)  
  40f04d:	23 02                	and    (%rdx),%eax
  40f04f:	00 11                	add    %dl,(%rcx)
  40f051:	6f                   	outsl  %ds:(%rsi),(%dx)
  40f052:	02 00                	add    (%rax),%al
  40f054:	3a f9                	cmp    %cl,%bh
  40f056:	00 00                	add    %al,(%rax)
  40f058:	60                   	(bad)  
  40f059:	ad                   	lods   %ds:(%rsi),%eax
  40f05a:	00 00                	add    %al,(%rax)
  40f05c:	16                   	(bad)  
  40f05d:	1b 04 00             	sbb    (%rax,%rax,1),%eax
  40f060:	d5                   	(bad)  
  40f061:	0a 04 00             	or     (%rax,%rax,1),%al
  40f064:	db b6 01 00 e7 79    	(bad)  0x79e70001(%rsi)
  40f06a:	02 00                	add    (%rax),%al
  40f06c:	81 20 04 00 a3 93    	andl   $0x93a30004,(%rax)
  40f072:	03 00                	add    (%rax),%eax
  40f074:	60                   	(bad)  
  40f075:	ad                   	lods   %ds:(%rsi),%eax
  40f076:	00 00                	add    %al,(%rax)
  40f078:	61                   	(bad)  
  40f079:	18 02                	sbb    %al,(%rdx)
  40f07b:	00 65 59             	add    %ah,0x59(%rbp)
  40f07e:	02 00                	add    (%rax),%al
  40f080:	fa                   	cli    
  40f081:	53                   	push   %rbx
  40f082:	02 00                	add    (%rax),%al
  40f084:	52                   	push   %rdx
  40f085:	7f 02                	jg     40f089 <inv+0x3909>
  40f087:	00 e3                	add    %ah,%bl
  40f089:	38 02                	cmp    %al,(%rdx)
  40f08b:	00 37                	add    %dh,(%rdi)
  40f08d:	23 02                	and    (%rdx),%eax
  40f08f:	00 fa                	add    %bh,%dl
  40f091:	53                   	push   %rbx
  40f092:	02 00                	add    (%rax),%al
  40f094:	37                   	(bad)  
  40f095:	23 02                	and    (%rdx),%eax
  40f097:	00 60 ad             	add    %ah,-0x53(%rax)
  40f09a:	00 00                	add    %al,(%rax)
  40f09c:	8f                   	(bad)  
  40f09d:	4e 02 00             	rex.WRX add (%rax),%r8b
  40f0a0:	81 20 04 00 4b 68    	andl   $0x684b0004,(%rax)
  40f0a6:	03 00                	add    (%rax),%eax
  40f0a8:	11 6f 02             	adc    %ebp,0x2(%rdi)
  40f0ab:	00 55 55             	add    %dl,0x55(%rbp)
  40f0ae:	01 00                	add    %eax,(%rax)
  40f0b0:	2e 36 00 00          	cs add %al,%ss:(%rax)
	...
  40fa10:	16                   	(bad)  
  40fa11:	1b 04 00             	sbb    (%rax,%rax,1),%eax
  40fa14:	d5                   	(bad)  
  40fa15:	0a 04 00             	or     (%rax,%rax,1),%al
  40fa18:	01 6b 01             	add    %ebp,0x1(%rbx)
  40fa1b:	00 81 20 04 00 d1    	add    %al,-0x2efffbe0(%rcx)
  40fa21:	c9                   	leaveq 
  40fa22:	03 00                	add    (%rax),%eax
  40fa24:	8f                   	(bad)  
  40fa25:	4e 02 00             	rex.WRX add (%rax),%r8b
  40fa28:	65 59                	gs pop %rcx
  40fa2a:	02 00                	add    (%rax),%al
  40fa2c:	60                   	(bad)  
  40fa2d:	ad                   	lods   %ds:(%rsi),%eax
  40fa2e:	00 00                	add    %al,(%rax)
  40fa30:	11 6f 02             	adc    %ebp,0x2(%rdi)
  40fa33:	00 37                	add    %dh,(%rdi)
  40fa35:	23 02                	and    (%rdx),%eax
  40fa37:	00 60 ad             	add    %ah,-0x53(%rax)
  40fa3a:	00 00                	add    %al,(%rax)
  40fa3c:	d0 5e 02             	rcrb   0x2(%rsi)
  40fa3f:	00 e7                	add    %ah,%bh
  40fa41:	79 02                	jns    40fa45 <inv+0x42c5>
  40fa43:	00 37                	add    %dh,(%rdi)
  40fa45:	23 02                	and    (%rdx),%eax
  40fa47:	00 cc                	add    %cl,%ah
  40fa49:	1d 02 00 37 23       	sbb    $0x23370002,%eax
  40fa4e:	02 00                	add    (%rax),%al
  40fa50:	60                   	(bad)  
  40fa51:	ad                   	lods   %ds:(%rsi),%eax
  40fa52:	00 00                	add    %al,(%rax)
  40fa54:	e3 38                	jrcxz  40fa8e <inv+0x430e>
  40fa56:	02 00                	add    (%rax),%al
  40fa58:	8f                   	(bad)  
  40fa59:	4e 02 00             	rex.WRX add (%rax),%r8b
  40fa5c:	d0 5e 02             	rcrb   0x2(%rsi)
  40fa5f:	00 24 49             	add    %ah,(%rcx,%rcx,2)
  40fa62:	02 00                	add    (%rax),%al
  40fa64:	37                   	(bad)  
  40fa65:	23 02                	and    (%rdx),%eax
  40fa67:	00 8f 4e 02 00 37    	add    %cl,0x3700024e(%rdi)
  40fa6d:	23 02                	and    (%rdx),%eax
  40fa6f:	00 fa                	add    %bh,%dl
  40fa71:	53                   	push   %rbx
  40fa72:	02 00                	add    (%rax),%al
  40fa74:	7c 74                	jl     40faea <inv+0x436a>
  40fa76:	02 00                	add    (%rax),%al
  40fa78:	8b 0d 02 00 a6 69    	mov    0x69a60002(%rip),%ecx        # 69e6fa80 <_end+0x6985b2e8>
  40fa7e:	02 00                	add    (%rax),%al
  40fa80:	60                   	(bad)  
  40fa81:	ad                   	lods   %ds:(%rsi),%eax
  40fa82:	00 00                	add    %al,(%rax)
  40fa84:	e7 79                	out    %eax,$0x79
  40fa86:	02 00                	add    (%rax),%al
  40fa88:	fa                   	cli    
  40fa89:	53                   	push   %rbx
  40fa8a:	02 00                	add    (%rax),%al
  40fa8c:	60                   	(bad)  
  40fa8d:	ad                   	lods   %ds:(%rsi),%eax
  40fa8e:	00 00                	add    %al,(%rax)
  40fa90:	11 6f 02             	adc    %ebp,0x2(%rdi)
  40fa93:	00 37                	add    %dh,(%rdi)
  40fa95:	23 02                	and    (%rdx),%eax
  40fa97:	00 a6 69 02 00 52    	add    %ah,0x52000269(%rsi)
  40fa9d:	7f 02                	jg     40faa1 <inv+0x4321>
  40fa9f:	00 e3                	add    %ah,%bl
  40faa1:	38 02                	cmp    %al,(%rdx)
  40faa3:	00 cc                	add    %cl,%ah
  40faa5:	1d 02 00 65 59       	sbb    $0x59650002,%eax
  40faaa:	02 00                	add    (%rax),%al
  40faac:	a6                   	cmpsb  %es:(%rdi),%ds:(%rsi)
  40faad:	69 02 00 60 ad 00    	imul   $0xad6000,(%rdx),%eax
  40fab3:	00 3b                	add    %bh,(%rbx)
  40fab5:	64 02 00             	add    %fs:(%rax),%al
  40fab8:	e7 79                	out    %eax,$0x79
  40faba:	02 00                	add    (%rax),%al
  40fabc:	37                   	(bad)  
  40fabd:	23 02                	and    (%rdx),%eax
  40fabf:	00 60 ad             	add    %ah,-0x53(%rax)
  40fac2:	00 00                	add    %al,(%rax)
  40fac4:	8b 0d 02 00 7c 74    	mov    0x747c0002(%rip),%ecx        # 74bcfacc <_end+0x745bb334>
  40faca:	02 00                	add    (%rax),%al
  40facc:	e3 38                	jrcxz  40fb06 <inv+0x4386>
  40face:	02 00                	add    (%rax),%al
  40fad0:	37                   	(bad)  
  40fad1:	23 02                	and    (%rdx),%eax
  40fad3:	00 fa                	add    %bh,%dl
  40fad5:	53                   	push   %rbx
  40fad6:	02 00                	add    (%rax),%al
  40fad8:	cc                   	int3   
  40fad9:	1d 02 00 8b 0d       	sbb    $0xd8b0002,%eax
  40fade:	02 00                	add    (%rax),%al
  40fae0:	60                   	(bad)  
  40fae1:	ad                   	lods   %ds:(%rsi),%eax
  40fae2:	00 00                	add    %al,(%rax)
  40fae4:	8f                   	(bad)  
  40fae5:	4e 02 00             	rex.WRX add (%rax),%r8b
  40fae8:	e7 79                	out    %eax,$0x79
  40faea:	02 00                	add    (%rax),%al
  40faec:	61                   	(bad)  
  40faed:	18 02                	sbb    %al,(%rdx)
  40faef:	00 78 33             	add    %bh,0x33(%rax)
  40faf2:	02 00                	add    (%rax),%al
  40faf4:	8b 0d 02 00 11 6f    	mov    0x6f110002(%rip),%ecx        # 6f51fafc <_end+0x6ef0b364>
  40fafa:	02 00                	add    (%rax),%al
  40fafc:	60                   	(bad)  
  40fafd:	ad                   	lods   %ds:(%rsi),%eax
  40fafe:	00 00                	add    %al,(%rax)
  40fb00:	61                   	(bad)  
  40fb01:	18 02                	sbb    %al,(%rdx)
  40fb03:	00 65 59             	add    %ah,0x59(%rbp)
  40fb06:	02 00                	add    (%rax),%al
  40fb08:	fa                   	cli    
  40fb09:	53                   	push   %rbx
  40fb0a:	02 00                	add    (%rax),%al
  40fb0c:	37                   	(bad)  
  40fb0d:	23 02                	and    (%rdx),%eax
  40fb0f:	00 28                	add    %ch,(%rax)
  40fb11:	8a 02                	mov    (%rdx),%al
  40fb13:	00 e3                	add    %ah,%bl
  40fb15:	38 02                	cmp    %al,(%rdx)
  40fb17:	00 65 59             	add    %ah,0x59(%rbp)
  40fb1a:	02 00                	add    (%rax),%al
  40fb1c:	fa                   	cli    
  40fb1d:	53                   	push   %rbx
  40fb1e:	02 00                	add    (%rax),%al
  40fb20:	37                   	(bad)  
  40fb21:	23 02                	and    (%rdx),%eax
  40fb23:	00 11                	add    %dl,(%rcx)
  40fb25:	6f                   	outsl  %ds:(%rsi),(%dx)
  40fb26:	02 00                	add    (%rax),%al
  40fb28:	60                   	(bad)  
  40fb29:	ad                   	lods   %ds:(%rsi),%eax
  40fb2a:	00 00                	add    %al,(%rax)
  40fb2c:	11 6f 02             	adc    %ebp,0x2(%rdi)
  40fb2f:	00 e3                	add    %ah,%bl
  40fb31:	38 02                	cmp    %al,(%rdx)
  40fb33:	00 fa                	add    %bh,%dl
  40fb35:	53                   	push   %rbx
  40fb36:	02 00                	add    (%rax),%al
  40fb38:	60                   	(bad)  
  40fb39:	ad                   	lods   %ds:(%rsi),%eax
  40fb3a:	00 00                	add    %al,(%rax)
  40fb3c:	e7 79                	out    %eax,$0x79
  40fb3e:	02 00                	add    (%rax),%al
  40fb40:	11 6f 02             	adc    %ebp,0x2(%rdi)
  40fb43:	00 8b 0d 02 00 a6    	add    %cl,-0x59fffdf3(%rbx)
  40fb49:	69 02 00 60 ad 00    	imul   $0xad6000,(%rdx),%eax
  40fb4f:	00 d0                	add    %dl,%al
  40fb51:	5e                   	pop    %rsi
  40fb52:	02 00                	add    (%rax),%al
  40fb54:	a6                   	cmpsb  %es:(%rdi),%ds:(%rsi)
  40fb55:	69 02 00 65 59 02    	imul   $0x2596500,(%rdx),%eax
  40fb5b:	00 61 18             	add    %ah,0x18(%rcx)
  40fb5e:	02 00                	add    (%rax),%al
  40fb60:	37                   	(bad)  
  40fb61:	23 02                	and    (%rdx),%eax
  40fb63:	00 11                	add    %dl,(%rcx)
  40fb65:	6f                   	outsl  %ds:(%rsi),(%dx)
  40fb66:	02 00                	add    (%rax),%al
  40fb68:	65 59                	gs pop %rcx
  40fb6a:	02 00                	add    (%rax),%al
  40fb6c:	11 6f 02             	adc    %ebp,0x2(%rdi)
  40fb6f:	00 60 ad             	add    %ah,-0x53(%rax)
  40fb72:	00 00                	add    %al,(%rax)
  40fb74:	fa                   	cli    
  40fb75:	53                   	push   %rbx
  40fb76:	02 00                	add    (%rax),%al
  40fb78:	e3 38                	jrcxz  40fbb2 <inv+0x4432>
  40fb7a:	02 00                	add    (%rax),%al
  40fb7c:	60                   	(bad)  
  40fb7d:	ad                   	lods   %ds:(%rsi),%eax
  40fb7e:	00 00                	add    %al,(%rax)
  40fb80:	7c 74                	jl     40fbf6 <inv+0x4476>
  40fb82:	02 00                	add    (%rax),%al
  40fb84:	78 33                	js     40fbb9 <inv+0x4439>
  40fb86:	02 00                	add    (%rax),%al
  40fb88:	a6                   	cmpsb  %es:(%rdi),%ds:(%rsi)
  40fb89:	69 02 00 37 23 02    	imul   $0x2233700,(%rdx),%eax
  40fb8f:	00 8b 0d 02 00 cc    	add    %cl,-0x33fffdf3(%rbx)
  40fb95:	1d 02 00 11 6f       	sbb    $0x6f110002,%eax
  40fb9a:	02 00                	add    (%rax),%al
  40fb9c:	55                   	push   %rbp
  40fb9d:	55                   	push   %rbp
  40fb9e:	01 00                	add    %eax,(%rax)
  40fba0:	2e 36 00 00          	cs add %al,%ss:(%rax)
	...
  410528:	16                   	(bad)  
  410529:	1b 04 00             	sbb    (%rax,%rax,1),%eax
  41052c:	d5                   	(bad)  
  41052d:	0a 04 00             	or     (%rax,%rax,1),%al
  410530:	db b6 01 00 e7 79    	(bad)  0x79e70001(%rsi)
  410536:	02 00                	add    (%rax),%al
  410538:	81 20 04 00 a3 93    	andl   $0x93a30004,(%rax)
  41053e:	03 00                	add    (%rax),%eax
  410540:	60                   	(bad)  
  410541:	ad                   	lods   %ds:(%rsi),%eax
  410542:	00 00                	add    %al,(%rax)
  410544:	8b 0d 02 00 d0 5e    	mov    0x5ed00002(%rip),%ecx        # 5f11054c <_end+0x5eafbdb4>
  41054a:	02 00                	add    (%rax),%al
  41054c:	24 49                	and    $0x49,%al
  41054e:	02 00                	add    (%rax),%al
  410550:	e3 38                	jrcxz  41058a <inv+0x4e0a>
  410552:	02 00                	add    (%rax),%al
  410554:	61                   	(bad)  
  410555:	18 02                	sbb    %al,(%rdx)
  410557:	00 8b 0d 02 00 61    	add    %cl,0x6100020d(%rbx)
  41055d:	18 02                	sbb    %al,(%rdx)
  41055f:	00 e3                	add    %ah,%bl
  410561:	38 02                	cmp    %al,(%rdx)
  410563:	00 65 59             	add    %ah,0x59(%rbp)
  410566:	02 00                	add    (%rax),%al
  410568:	fa                   	cli    
  410569:	53                   	push   %rbx
  41056a:	02 00                	add    (%rax),%al
  41056c:	37                   	(bad)  
  41056d:	23 02                	and    (%rdx),%eax
  41056f:	00 11                	add    %dl,(%rcx)
  410571:	6f                   	outsl  %ds:(%rsi),(%dx)
  410572:	02 00                	add    (%rax),%al
  410574:	60                   	(bad)  
  410575:	ad                   	lods   %ds:(%rsi),%eax
  410576:	00 00                	add    %al,(%rax)
  410578:	11 6f 02             	adc    %ebp,0x2(%rdi)
  41057b:	00 37                	add    %dh,(%rdi)
  41057d:	23 02                	and    (%rdx),%eax
  41057f:	00 60 ad             	add    %ah,-0x53(%rax)
  410582:	00 00                	add    %al,(%rax)
  410584:	d0 5e 02             	rcrb   0x2(%rsi)
  410587:	00 e7                	add    %ah,%bh
  410589:	79 02                	jns    41058d <inv+0x4e0d>
  41058b:	00 37                	add    %dh,(%rdi)
  41058d:	23 02                	and    (%rdx),%eax
  41058f:	00 cc                	add    %cl,%ah
  410591:	1d 02 00 37 23       	sbb    $0x23370002,%eax
  410596:	02 00                	add    (%rax),%al
  410598:	fa                   	cli    
  410599:	53                   	push   %rbx
  41059a:	02 00                	add    (%rax),%al
  41059c:	60                   	(bad)  
  41059d:	ad                   	lods   %ds:(%rsi),%eax
  41059e:	00 00                	add    %al,(%rax)
  4105a0:	e7 79                	out    %eax,$0x79
  4105a2:	02 00                	add    (%rax),%al
  4105a4:	7c 74                	jl     41061a <inv+0x4e9a>
  4105a6:	02 00                	add    (%rax),%al
  4105a8:	e3 38                	jrcxz  4105e2 <inv+0x4e62>
  4105aa:	02 00                	add    (%rax),%al
  4105ac:	24 49                	and    $0x49,%al
  4105ae:	02 00                	add    (%rax),%al
  4105b0:	e3 38                	jrcxz  4105ea <inv+0x4e6a>
  4105b2:	02 00                	add    (%rax),%al
  4105b4:	fe                   	(bad)  
  4105b5:	94                   	xchg   %eax,%esp
  4105b6:	02 00                	add    (%rax),%al
  4105b8:	8b 0d 02 00 a6 69    	mov    0x69a60002(%rip),%ecx        # 69e705c0 <_end+0x6985be28>
  4105be:	02 00                	add    (%rax),%al
  4105c0:	60                   	(bad)  
  4105c1:	ad                   	lods   %ds:(%rsi),%eax
  4105c2:	00 00                	add    %al,(%rax)
  4105c4:	d0 5e 02             	rcrb   0x2(%rsi)
  4105c7:	00 8b 0d 02 00 a6    	add    %cl,-0x59fffdf3(%rbx)
  4105cd:	69 02 00 8b 0d 02    	imul   $0x20d8b00,(%rdx),%eax
  4105d3:	00 60 ad             	add    %ah,-0x53(%rax)
  4105d6:	00 00                	add    %al,(%rax)
  4105d8:	52                   	push   %rdx
  4105d9:	7f 02                	jg     4105dd <inv+0x4e5d>
  4105db:	00 37                	add    %dh,(%rdi)
  4105dd:	23 02                	and    (%rdx),%eax
  4105df:	00 a6 69 02 00 60    	add    %ah,0x60000269(%rsi)
  4105e5:	ad                   	lods   %ds:(%rsi),%eax
  4105e6:	00 00                	add    %al,(%rax)
  4105e8:	37                   	(bad)  
  4105e9:	23 02                	and    (%rdx),%eax
  4105eb:	00 24 49             	add    %ah,(%rcx,%rcx,2)
  4105ee:	02 00                	add    (%rax),%al
  4105f0:	60                   	(bad)  
  4105f1:	ad                   	lods   %ds:(%rsi),%eax
  4105f2:	00 00                	add    %al,(%rax)
  4105f4:	7c 74                	jl     41066a <inv+0x4eea>
  4105f6:	02 00                	add    (%rax),%al
  4105f8:	a6                   	cmpsb  %es:(%rdi),%ds:(%rsi)
  4105f9:	69 02 00 81 20 04    	imul   $0x4208100,(%rdx),%eax
  4105ff:	00 4b 68             	add    %cl,0x68(%rbx)
  410602:	03 00                	add    (%rax),%eax
  410604:	a2 28 02 00 e3 38 02 	movabs %al,0x61000238e3000228
  41060b:	00 61 
  41060d:	18 02                	sbb    %al,(%rdx)
  41060f:	00 65 59             	add    %ah,0x59(%rbp)
  410612:	02 00                	add    (%rax),%al
  410614:	60                   	(bad)  
  410615:	ad                   	lods   %ds:(%rsi),%eax
  410616:	00 00                	add    %al,(%rax)
  410618:	d0 5e 02             	rcrb   0x2(%rsi)
  41061b:	00 65 59             	add    %ah,0x59(%rbp)
  41061e:	02 00                	add    (%rax),%al
  410620:	a6                   	cmpsb  %es:(%rdi),%ds:(%rsi)
  410621:	69 02 00 60 ad 00    	imul   $0xad6000,(%rdx),%eax
  410627:	00 24 49             	add    %ah,(%rcx,%rcx,2)
  41062a:	02 00                	add    (%rax),%al
  41062c:	8b 0d 02 00 60 ad    	mov    -0x529ffffe(%rip),%ecx        # ffffffffada10634 <_end+0xffffffffad3fbe9c>
  410632:	00 00                	add    %al,(%rax)
  410634:	a6                   	cmpsb  %es:(%rdi),%ds:(%rsi)
  410635:	69 02 00 37 23 02    	imul   $0x2233700,(%rdx),%eax
  41063b:	00 cc                	add    %cl,%ah
  41063d:	1d 02 00 55 55       	sbb    $0x55550002,%eax
  410642:	01 00                	add    %eax,(%rax)
  410644:	2e 36 00 00          	cs add %al,%ss:(%rax)
	...
  411040:	11 6f 02             	adc    %ebp,0x2(%rdi)
  411043:	00 65 59             	add    %ah,0x59(%rbp)
  411046:	02 00                	add    (%rax),%al
  411048:	61                   	(bad)  
  411049:	18 02                	sbb    %al,(%rdx)
  41104b:	00 b9 43 02 00 37    	add    %bh,0x37000243(%rcx)
  411051:	23 02                	and    (%rdx),%eax
  411053:	00 7c 74 02          	add    %bh,0x2(%rsp,%rsi,2)
  411057:	00 11                	add    %dl,(%rcx)
  411059:	6f                   	outsl  %ds:(%rsi),(%dx)
  41105a:	02 00                	add    (%rax),%al
  41105c:	60                   	(bad)  
  41105d:	ad                   	lods   %ds:(%rsi),%eax
  41105e:	00 00                	add    %al,(%rax)
  411060:	37                   	(bad)  
  411061:	23 02                	and    (%rdx),%eax
  411063:	00 11                	add    %dl,(%rcx)
  411065:	6f                   	outsl  %ds:(%rsi),(%dx)
  411066:	02 00                	add    (%rax),%al
  411068:	60                   	(bad)  
  411069:	ad                   	lods   %ds:(%rsi),%eax
  41106a:	00 00                	add    %al,(%rax)
  41106c:	e7 79                	out    %eax,$0x79
  41106e:	02 00                	add    (%rax),%al
  411070:	fa                   	cli    
  411071:	53                   	push   %rbx
  411072:	02 00                	add    (%rax),%al
  411074:	60                   	(bad)  
  411075:	ad                   	lods   %ds:(%rsi),%eax
  411076:	00 00                	add    %al,(%rax)
  411078:	8f                   	(bad)  
  411079:	4e 02 00             	rex.WRX add (%rax),%r8b
  41107c:	37                   	(bad)  
  41107d:	23 02                	and    (%rdx),%eax
  41107f:	00 61 18             	add    %ah,0x18(%rcx)
  411082:	02 00                	add    (%rax),%al
  411084:	8b 0d 02 00 fa 53    	mov    0x53fa0002(%rip),%ecx        # 543b108c <_end+0x53d9c8f4>
  41108a:	02 00                	add    (%rax),%al
  41108c:	e3 38                	jrcxz  4110c6 <inv+0x5946>
  41108e:	02 00                	add    (%rax),%al
  411090:	11 6f 02             	adc    %ebp,0x2(%rdi)
  411093:	00 8f 4e 02 00 65    	add    %cl,0x6500024e(%rdi)
  411099:	59                   	pop    %rcx
  41109a:	02 00                	add    (%rax),%al
  41109c:	60                   	(bad)  
  41109d:	ad                   	lods   %ds:(%rsi),%eax
  41109e:	00 00                	add    %al,(%rax)
  4110a0:	cc                   	int3   
  4110a1:	1d 02 00 37 23       	sbb    $0x23370002,%eax
  4110a6:	02 00                	add    (%rax),%al
  4110a8:	60                   	(bad)  
  4110a9:	ad                   	lods   %ds:(%rsi),%eax
  4110aa:	00 00                	add    %al,(%rax)
  4110ac:	83 8b 01 00 70 b1 01 	orl    $0x1,-0x4e8fffff(%rbx)
  4110b3:	00 01                	add    %al,(%rcx)
  4110b5:	6b 01 00             	imul   $0x0,(%rcx),%eax
  4110b8:	3a f9                	cmp    %cl,%bh
  4110ba:	00 00                	add    %al,(%rax)
  4110bc:	60                   	(bad)  
  4110bd:	ad                   	lods   %ds:(%rsi),%eax
  4110be:	00 00                	add    %al,(%rax)
  4110c0:	16                   	(bad)  
  4110c1:	1b 04 00             	sbb    (%rax,%rax,1),%eax
  4110c4:	d5                   	(bad)  
  4110c5:	0a 04 00             	or     (%rax,%rax,1),%al
  4110c8:	db b6 01 00 e7 79    	(bad)  0x79e70001(%rsi)
  4110ce:	02 00                	add    (%rax),%al
  4110d0:	81 20 04 00 a3 93    	andl   $0x93a30004,(%rax)
  4110d6:	03 00                	add    (%rax),%eax
  4110d8:	60                   	(bad)  
  4110d9:	ad                   	lods   %ds:(%rsi),%eax
  4110da:	00 00                	add    %al,(%rax)
  4110dc:	37                   	(bad)  
  4110dd:	23 02                	and    (%rdx),%eax
  4110df:	00 11                	add    %dl,(%rcx)
  4110e1:	6f                   	outsl  %ds:(%rsi),(%dx)
  4110e2:	02 00                	add    (%rax),%al
  4110e4:	60                   	(bad)  
  4110e5:	ad                   	lods   %ds:(%rsi),%eax
  4110e6:	00 00                	add    %al,(%rax)
  4110e8:	8f                   	(bad)  
  4110e9:	4e 02 00             	rex.WRX add (%rax),%r8b
  4110ec:	81 20 04 00 4b 68    	andl   $0x684b0004,(%rax)
  4110f2:	03 00                	add    (%rax),%eax
  4110f4:	11 6f 02             	adc    %ebp,0x2(%rdi)
  4110f7:	00 60 ad             	add    %ah,-0x53(%rax)
  4110fa:	00 00                	add    %al,(%rax)
  4110fc:	37                   	(bad)  
  4110fd:	23 02                	and    (%rdx),%eax
  4110ff:	00 a2 28 02 00 e3    	add    %ah,-0x1cfffdd8(%rdx)
  411105:	38 02                	cmp    %al,(%rdx)
  411107:	00 61 18             	add    %ah,0x18(%rcx)
  41110a:	02 00                	add    (%rax),%al
  41110c:	e3 38                	jrcxz  411146 <inv+0x59c6>
  41110e:	02 00                	add    (%rax),%al
  411110:	37                   	(bad)  
  411111:	23 02                	and    (%rdx),%eax
  411113:	00 fa                	add    %bh,%dl
  411115:	53                   	push   %rbx
  411116:	02 00                	add    (%rax),%al
  411118:	7c 74                	jl     41118e <inv+0x5a0e>
  41111a:	02 00                	add    (%rax),%al
  41111c:	37                   	(bad)  
  41111d:	23 02                	and    (%rdx),%eax
  41111f:	00 60 ad             	add    %ah,-0x53(%rax)
  411122:	00 00                	add    %al,(%rax)
  411124:	37                   	(bad)  
  411125:	23 02                	and    (%rdx),%eax
  411127:	00 fa                	add    %bh,%dl
  411129:	53                   	push   %rbx
  41112a:	02 00                	add    (%rax),%al
  41112c:	7c 74                	jl     4111a2 <inv+0x5a22>
  41112e:	02 00                	add    (%rax),%al
  411130:	a6                   	cmpsb  %es:(%rdi),%ds:(%rsi)
  411131:	69 02 00 37 23 02    	imul   $0x2233700,(%rdx),%eax
  411137:	00 60 ad             	add    %ah,-0x53(%rax)
  41113a:	00 00                	add    %al,(%rax)
  41113c:	11 6f 02             	adc    %ebp,0x2(%rdi)
  41113f:	00 65 59             	add    %ah,0x59(%rbp)
  411142:	02 00                	add    (%rax),%al
  411144:	61                   	(bad)  
  411145:	18 02                	sbb    %al,(%rdx)
  411147:	00 b9 43 02 00 37    	add    %bh,0x37000243(%rcx)
  41114d:	23 02                	and    (%rdx),%eax
  41114f:	00 7c 74 02          	add    %bh,0x2(%rsp,%rsi,2)
  411153:	00 11                	add    %dl,(%rcx)
  411155:	6f                   	outsl  %ds:(%rsi),(%dx)
  411156:	02 00                	add    (%rax),%al
  411158:	60                   	(bad)  
  411159:	ad                   	lods   %ds:(%rsi),%eax
  41115a:	00 00                	add    %al,(%rax)
  41115c:	93                   	xchg   %eax,%ebx
  41115d:	8f 02                	popq   (%rdx)
  41115f:	00 60 ad             	add    %ah,-0x53(%rax)
  411162:	00 00                	add    %al,(%rax)
  411164:	d0 5e 02             	rcrb   0x2(%rsi)
  411167:	00 e3                	add    %ah,%bl
  411169:	38 02                	cmp    %al,(%rdx)
  41116b:	00 d0                	add    %dl,%al
  41116d:	5e                   	pop    %rsi
  41116e:	02 00                	add    (%rax),%al
  411170:	37                   	(bad)  
  411171:	23 02                	and    (%rdx),%eax
  411173:	00 11                	add    %dl,(%rcx)
  411175:	6f                   	outsl  %ds:(%rsi),(%dx)
  411176:	02 00                	add    (%rax),%al
  411178:	55                   	push   %rbp
  411179:	55                   	push   %rbp
  41117a:	01 00                	add    %eax,(%rax)
  41117c:	2e 36 00 00          	cs add %al,%ss:(%rax)
	...
  411b58:	16                   	(bad)  
  411b59:	1b 04 00             	sbb    (%rax,%rax,1),%eax
  411b5c:	d5                   	(bad)  
  411b5d:	0a 04 00             	or     (%rax,%rax,1),%al
  411b60:	01 6b 01             	add    %ebp,0x1(%rbx)
  411b63:	00 e7                	add    %ah,%bh
  411b65:	79 02                	jns    411b69 <inv+0x63e9>
  411b67:	00 81 20 04 00 4b    	add    %al,0x4b000420(%rcx)
  411b6d:	68 03 00 24 49       	pushq  $0x49240003
  411b72:	02 00                	add    (%rax),%al
  411b74:	37                   	(bad)  
  411b75:	23 02                	and    (%rdx),%eax
  411b77:	00 11                	add    %dl,(%rcx)
  411b79:	6f                   	outsl  %ds:(%rsi),(%dx)
  411b7a:	02 00                	add    (%rax),%al
  411b7c:	60                   	(bad)  
  411b7d:	ad                   	lods   %ds:(%rsi),%eax
  411b7e:	00 00                	add    %al,(%rax)
  411b80:	11 6f 02             	adc    %ebp,0x2(%rdi)
  411b83:	00 65 59             	add    %ah,0x59(%rbp)
  411b86:	02 00                	add    (%rax),%al
  411b88:	fa                   	cli    
  411b89:	53                   	push   %rbx
  411b8a:	02 00                	add    (%rax),%al
  411b8c:	60                   	(bad)  
  411b8d:	ad                   	lods   %ds:(%rsi),%eax
  411b8e:	00 00                	add    %al,(%rax)
  411b90:	24 49                	and    $0x49,%al
  411b92:	02 00                	add    (%rax),%al
  411b94:	8b 0d 02 00 11 6f    	mov    0x6f110002(%rip),%ecx        # 6f521b9c <_end+0x6ef0d404>
  411b9a:	02 00                	add    (%rax),%al
  411b9c:	60                   	(bad)  
  411b9d:	ad                   	lods   %ds:(%rsi),%eax
  411b9e:	00 00                	add    %al,(%rax)
  411ba0:	61                   	(bad)  
  411ba1:	18 02                	sbb    %al,(%rdx)
  411ba3:	00 8b 0d 02 00 a6    	add    %cl,-0x59fffdf3(%rbx)
  411ba9:	69 02 00 8b 0d 02    	imul   $0x20d8b00,(%rdx),%eax
  411baf:	00 61 18             	add    %ah,0x18(%rcx)
  411bb2:	02 00                	add    (%rax),%al
  411bb4:	7c 74                	jl     411c2a <inv+0x64aa>
  411bb6:	02 00                	add    (%rax),%al
  411bb8:	37                   	(bad)  
  411bb9:	23 02                	and    (%rdx),%eax
  411bbb:	00 a6 69 02 00 81    	add    %ah,-0x7efffd97(%rsi)
  411bc1:	20 04 00             	and    %al,(%rax,%rax,1)
  411bc4:	4f a9 03 00 11 6f    	rex.WRXB test $0x6f110003,%rax
  411bca:	02 00                	add    (%rax),%al
  411bcc:	7c 74                	jl     411c42 <inv+0x64c2>
  411bce:	02 00                	add    (%rax),%al
  411bd0:	e3 38                	jrcxz  411c0a <inv+0x648a>
  411bd2:	02 00                	add    (%rax),%al
  411bd4:	61                   	(bad)  
  411bd5:	18 02                	sbb    %al,(%rdx)
  411bd7:	00 8b 0d 02 00 11    	add    %cl,0x1100020d(%rbx)
  411bdd:	6f                   	outsl  %ds:(%rsi),(%dx)
  411bde:	02 00                	add    (%rax),%al
  411be0:	60                   	(bad)  
  411be1:	ad                   	lods   %ds:(%rsi),%eax
  411be2:	00 00                	add    %al,(%rax)
  411be4:	cc                   	int3   
  411be5:	1d 02 00 37 23       	sbb    $0x23370002,%eax
  411bea:	02 00                	add    (%rax),%al
  411bec:	24 49                	and    $0x49,%al
  411bee:	02 00                	add    (%rax),%al
  411bf0:	60                   	(bad)  
  411bf1:	ad                   	lods   %ds:(%rsi),%eax
  411bf2:	00 00                	add    %al,(%rax)
  411bf4:	d0 5e 02             	rcrb   0x2(%rsi)
  411bf7:	00 a6 69 02 00 65    	add    %ah,0x65000269(%rsi)
  411bfd:	59                   	pop    %rcx
  411bfe:	02 00                	add    (%rax),%al
  411c00:	7c 74                	jl     411c76 <inv+0x64f6>
  411c02:	02 00                	add    (%rax),%al
  411c04:	65 59                	gs pop %rcx
  411c06:	02 00                	add    (%rax),%al
  411c08:	61                   	(bad)  
  411c09:	18 02                	sbb    %al,(%rdx)
  411c0b:	00 65 59             	add    %ah,0x59(%rbp)
  411c0e:	02 00                	add    (%rax),%al
  411c10:	24 49                	and    $0x49,%al
  411c12:	02 00                	add    (%rax),%al
  411c14:	65 59                	gs pop %rcx
  411c16:	02 00                	add    (%rax),%al
  411c18:	60                   	(bad)  
  411c19:	ad                   	lods   %ds:(%rsi),%eax
  411c1a:	00 00                	add    %al,(%rax)
  411c1c:	b1 c1                	mov    $0xc1,%cl
  411c1e:	01 00                	add    %eax,(%rax)
  411c20:	01 6b 01             	add    %ebp,0x1(%rbx)
  411c23:	00 1c c7             	add    %bl,(%rdi,%rax,8)
  411c26:	01 00                	add    %eax,(%rax)
  411c28:	70 b1                	jo     411bdb <inv+0x645b>
  411c2a:	01 00                	add    %eax,(%rax)
  411c2c:	55                   	push   %rbp
  411c2d:	55                   	push   %rbp
  411c2e:	01 00                	add    %eax,(%rax)
  411c30:	2e 36 00 00          	cs add %al,%ss:(%rax)
	...
  412670:	16                   	(bad)  
  412671:	1b 04 00             	sbb    (%rax,%rax,1),%eax
  412674:	d5                   	(bad)  
  412675:	0a 04 00             	or     (%rax,%rax,1),%al
  412678:	db b6 01 00 e7 79    	(bad)  0x79e70001(%rsi)
  41267e:	02 00                	add    (%rax),%al
  412680:	81 20 04 00 a3 93    	andl   $0x93a30004,(%rax)
  412686:	03 00                	add    (%rax),%eax
  412688:	60                   	(bad)  
  412689:	ad                   	lods   %ds:(%rsi),%eax
  41268a:	00 00                	add    %al,(%rax)
  41268c:	37                   	(bad)  
  41268d:	23 02                	and    (%rdx),%eax
  41268f:	00 11                	add    %dl,(%rcx)
  412691:	6f                   	outsl  %ds:(%rsi),(%dx)
  412692:	02 00                	add    (%rax),%al
  412694:	60                   	(bad)  
  412695:	ad                   	lods   %ds:(%rsi),%eax
  412696:	00 00                	add    %al,(%rax)
  412698:	e7 79                	out    %eax,$0x79
  41269a:	02 00                	add    (%rax),%al
  41269c:	fa                   	cli    
  41269d:	53                   	push   %rbx
  41269e:	02 00                	add    (%rax),%al
  4126a0:	60                   	(bad)  
  4126a1:	ad                   	lods   %ds:(%rsi),%eax
  4126a2:	00 00                	add    %al,(%rax)
  4126a4:	46 bc 01 00 42 7b    	rex.RX mov $0x7b420001,%esp
  4126aa:	01 00                	add    %eax,(%rax)
  4126ac:	01 6b 01             	add    %ebp,0x1(%rbx)
  4126af:	00 55 55             	add    %dl,0x55(%rbp)
  4126b2:	01 00                	add    %eax,(%rax)
  4126b4:	2e 36 00 00          	cs add %al,%ss:(%rax)
	...
  413188:	2e 36 00 00          	cs add %al,%ss:(%rax)
	...
  413ca0:	63 6c 65 61          	movslq 0x61(%rbp,%riz,2),%ebp
  413ca4:	72 00                	jb     413ca6 <inv+0x8526>
  413ca6:	00 00                	add    %al,(%rax)
  413ca8:	2d 2d 2d 2d 2d       	sub    $0x2d2d2d2d,%eax
  413cad:	2d 2d 2d 2d 2d       	sub    $0x2d2d2d2d,%eax
  413cb2:	2d 2d 2d 20 44       	sub    $0x44202d2d,%eax
  413cb7:	45 53                	rex.RB push %r11
  413cb9:	41                   	rex.B
  413cba:	46                   	rex.RX
  413cbb:	49                   	rex.WB
  413cbc:	4f 20 2d 2d 2d 2d 2d 	rex.WRXB and %r13b,0x2d2d2d2d(%rip)        # 2d6e69f0 <_end+0x2d0d2258>
  413cc3:	2d 2d 2d 2d 2d       	sub    $0x2d2d2d2d,%eax
  413cc8:	2d 2d 2d 00 25       	sub    $0x25002d2d,%eax
  413ccd:	73 00                	jae    413ccf <inv+0x854f>
  413ccf:	00 0a                	add    %cl,(%rdx)
  413cd1:	2d 2d 2d 2d 2d       	sub    $0x2d2d2d2d,%eax
  413cd6:	20 50 52             	and    %dl,0x52(%rax)
  413cd9:	45                   	rex.RB
  413cda:	47 55                	rex.RXB push %r13
  413cdc:	4e 54                	rex.WRX push %rsp
  413cde:	41 20 50 41          	and    %dl,0x41(%r8)
  413ce2:	52                   	push   %rdx
  413ce3:	41 20 49 4e          	and    %cl,0x4e(%r9)
  413ce7:	56                   	push   %rsi
  413ce8:	45 53                	rex.RB push %r11
  413cea:	54                   	push   %rsp
  413ceb:	49                   	rex.WB
  413cec:	47                   	rex.RXB
  413ced:	41 52                	push   %r10
  413cef:	20 2d 2d 2d 2d 2d    	and    %ch,0x2d2d2d2d(%rip)        # 2d6e6a22 <_end+0x2d0d228a>
  413cf5:	00 52 65             	add    %dl,0x65(%rdx)
  413cf8:	73 70                	jae    413d6a <inv+0x85ea>
  413cfa:	75 65                	jne    413d61 <inv+0x85e1>
  413cfc:	73 74                	jae    413d72 <inv+0x85f2>
  413cfe:	61                   	(bad)  
  413cff:	20 63 6f             	and    %ah,0x6f(%rbx)
  413d02:	72 72                	jb     413d76 <inv+0x85f6>
  413d04:	65 63 74 61 00       	movslq %gs:0x0(%rcx,%riz,2),%esi
  413d09:	52                   	push   %rdx
  413d0a:	65 73 70             	gs jae 413d7d <inv+0x85fd>
  413d0d:	75 65                	jne    413d74 <inv+0x85f4>
  413d0f:	73 74                	jae    413d85 <inv+0x8605>
  413d11:	61                   	(bad)  
  413d12:	20 69 6e             	and    %ch,0x6e(%rcx)
  413d15:	63 6f 72             	movslq 0x72(%rdi),%ebp
  413d18:	72 65                	jb     413d7f <inv+0x85ff>
  413d1a:	63 74 61 3a          	movslq 0x3a(%rcx,%riz,2),%esi
  413d1e:	20                   	.byte 0x20
  413d1f:	25                   	.byte 0x25
  413d20:	73 00                	jae    413d22 <inv+0x85a2>

Disassembly of section .eh_frame_hdr:

0000000000413d24 <.eh_frame_hdr>:
  413d24:	01 1b                	add    %ebx,(%rbx)
  413d26:	03 3b                	add    (%rbx),%edi
  413d28:	b8 00 00 00 16       	mov    $0x16000000,%eax
  413d2d:	00 00                	add    %al,(%rax)
  413d2f:	00 7c cd fe          	add    %bh,-0x2(%rbp,%rcx,8)
  413d33:	ff 04 01             	incl   (%rcx,%rax,1)
  413d36:	00 00                	add    %al,(%rax)
  413d38:	8c cf                	mov    %cs,%edi
  413d3a:	fe                   	(bad)  
  413d3b:	ff d4                	callq  *%rsp
  413d3d:	00 00                	add    %al,(%rax)
  413d3f:	00 82 d0 fe ff 2c    	add    %al,0x2cfffed0(%rdx)
  413d45:	01 00                	add    %eax,(%rax)
  413d47:	00 c0                	add    %al,%al
  413d49:	d1 fe                	sar    %esi
  413d4b:	ff 4c 01 00          	decl   0x0(%rcx,%rax,1)
  413d4f:	00 32                	add    %dh,(%rdx)
  413d51:	d2 fe                	sar    %cl,%dh
  413d53:	ff 6c 01 00          	ljmpq  *0x0(%rcx,%rax,1)
  413d57:	00 aa d2 fe ff 8c    	add    %ch,-0x7300012e(%rdx)
  413d5d:	01 00                	add    %eax,(%rax)
  413d5f:	00 f1                	add    %dh,%cl
  413d61:	d3 fe                	sar    %cl,%esi
  413d63:	ff b4 01 00 00 06 d4 	pushq  -0x2bfa0000(%rcx,%rax,1)
  413d6a:	fe                   	(bad)  
  413d6b:	ff d4                	callq  *%rsp
  413d6d:	01 00                	add    %eax,(%rax)
  413d6f:	00 0f                	add    %cl,(%rdi)
  413d71:	d5                   	(bad)  
  413d72:	fe                   	(bad)  
  413d73:	ff f4                	push   %rsp
  413d75:	01 00                	add    %eax,(%rax)
  413d77:	00 84 d5 fe ff 14 02 	add    %al,0x214fffe(%rbp,%rdx,8)
  413d7e:	00 00                	add    %al,(%rax)
  413d80:	9d                   	popfq  
  413d81:	d5                   	(bad)  
  413d82:	fe                   	(bad)  
  413d83:	ff 34 02             	pushq  (%rdx,%rax,1)
  413d86:	00 00                	add    %al,(%rax)
  413d88:	ad                   	lods   %ds:(%rsi),%eax
  413d89:	d5                   	(bad)  
  413d8a:	fe                   	(bad)  
  413d8b:	ff 54 02 00          	callq  *0x0(%rdx,%rax,1)
  413d8f:	00 bd d5 fe ff 74    	add    %bh,0x74fffed5(%rbp)
  413d95:	02 00                	add    (%rax),%al
  413d97:	00 cd                	add    %cl,%ch
  413d99:	d5                   	(bad)  
  413d9a:	fe                   	(bad)  
  413d9b:	ff 94 02 00 00 49 d6 	callq  *-0x29b70000(%rdx,%rax,1)
  413da2:	fe                   	(bad)  
  413da3:	ff b4 02 00 00 9c d6 	pushq  -0x29640000(%rdx,%rax,1)
  413daa:	fe                   	(bad)  
  413dab:	ff d4                	callq  *%rsp
  413dad:	02 00                	add    (%rax),%al
  413daf:	00 e1                	add    %ah,%cl
  413db1:	d6                   	(bad)  
  413db2:	fe                   	(bad)  
  413db3:	ff f4                	push   %rsp
  413db5:	02 00                	add    (%rax),%al
  413db7:	00 6f d7             	add    %ch,-0x29(%rdi)
  413dba:	fe                   	(bad)  
  413dbb:	ff 14 03             	callq  *(%rbx,%rax,1)
  413dbe:	00 00                	add    %al,(%rax)
  413dc0:	c8 d7 fe ff          	enterq $0xfed7,$0xff
  413dc4:	34 03                	xor    $0x3,%al
  413dc6:	00 00                	add    %al,(%rax)
  413dc8:	52                   	push   %rdx
  413dc9:	d9 fe                	fsin   
  413dcb:	ff 54 03 00          	callq  *0x0(%rbx,%rax,1)
  413dcf:	00 ac d9 fe ff 74 03 	add    %ch,0x374fffe(%rcx,%rbx,8)
  413dd6:	00 00                	add    %al,(%rax)
  413dd8:	1c da                	sbb    $0xda,%al
  413dda:	fe                   	(bad)  
  413ddb:	ff                   	(bad)  
  413ddc:	bc                   	.byte 0xbc
  413ddd:	03 00                	add    (%rax),%eax
	...

Disassembly of section .eh_frame:

0000000000413de0 <__FRAME_END__-0x318>:
  413de0:	14 00                	adc    $0x0,%al
  413de2:	00 00                	add    %al,(%rax)
  413de4:	00 00                	add    %al,(%rax)
  413de6:	00 00                	add    %al,(%rax)
  413de8:	01 7a 52             	add    %edi,0x52(%rdx)
  413deb:	00 01                	add    %al,(%rcx)
  413ded:	78 10                	js     413dff <inv+0x867f>
  413def:	01 1b                	add    %ebx,(%rbx)
  413df1:	0c 07                	or     $0x7,%al
  413df3:	08 90 01 07 10 14    	or     %dl,0x14100701(%rax)
  413df9:	00 00                	add    %al,(%rax)
  413dfb:	00 1c 00             	add    %bl,(%rax,%rax,1)
  413dfe:	00 00                	add    %al,(%rax)
  413e00:	b0 ce                	mov    $0xce,%al
  413e02:	fe                   	(bad)  
  413e03:	ff 2a                	ljmpq  *(%rdx)
	...
  413e0d:	00 00                	add    %al,(%rax)
  413e0f:	00 14 00             	add    %dl,(%rax,%rax,1)
  413e12:	00 00                	add    %al,(%rax)
  413e14:	00 00                	add    %al,(%rax)
  413e16:	00 00                	add    %al,(%rax)
  413e18:	01 7a 52             	add    %edi,0x52(%rdx)
  413e1b:	00 01                	add    %al,(%rcx)
  413e1d:	78 10                	js     413e2f <inv+0x86af>
  413e1f:	01 1b                	add    %ebx,(%rbx)
  413e21:	0c 07                	or     $0x7,%al
  413e23:	08 90 01 00 00 24    	or     %dl,0x24000001(%rax)
  413e29:	00 00                	add    %al,(%rax)
  413e2b:	00 1c 00             	add    %bl,(%rax,%rax,1)
  413e2e:	00 00                	add    %al,(%rax)
  413e30:	70 cc                	jo     413dfe <inv+0x867e>
  413e32:	fe                   	(bad)  
  413e33:	ff 10                	callq  *(%rax)
  413e35:	02 00                	add    (%rax),%al
  413e37:	00 00                	add    %al,(%rax)
  413e39:	0e                   	(bad)  
  413e3a:	10 46 0e             	adc    %al,0xe(%rsi)
  413e3d:	18 4a 0f             	sbb    %cl,0xf(%rdx)
  413e40:	0b 77 08             	or     0x8(%rdi),%esi
  413e43:	80 00 3f             	addb   $0x3f,(%rax)
  413e46:	1a 3b                	sbb    (%rbx),%bh
  413e48:	2a 33                	sub    (%rbx),%dh
  413e4a:	24 22                	and    $0x22,%al
  413e4c:	00 00                	add    %al,(%rax)
  413e4e:	00 00                	add    %al,(%rax)
  413e50:	1c 00                	sbb    $0x0,%al
  413e52:	00 00                	add    %al,(%rax)
  413e54:	44 00 00             	add    %r8b,(%rax)
  413e57:	00 4e cf             	add    %cl,-0x31(%rsi)
  413e5a:	fe                   	(bad)  
  413e5b:	ff                   	(bad)  
  413e5c:	3e 01 00             	add    %eax,%ds:(%rax)
  413e5f:	00 00                	add    %al,(%rax)
  413e61:	41 0e                	rex.B (bad) 
  413e63:	10 86 02 43 0d 06    	adc    %al,0x60d4302(%rsi)
  413e69:	03 39                	add    (%rcx),%edi
  413e6b:	01 0c 07             	add    %ecx,(%rdi,%rax,1)
  413e6e:	08 00                	or     %al,(%rax)
  413e70:	1c 00                	sbb    $0x0,%al
  413e72:	00 00                	add    %al,(%rax)
  413e74:	64 00 00             	add    %al,%fs:(%rax)
  413e77:	00 6c d0 fe          	add    %ch,-0x2(%rax,%rdx,8)
  413e7b:	ff 72 00             	pushq  0x0(%rdx)
  413e7e:	00 00                	add    %al,(%rax)
  413e80:	00 41 0e             	add    %al,0xe(%rcx)
  413e83:	10 86 02 43 0d 06    	adc    %al,0x60d4302(%rsi)
  413e89:	02 6d 0c             	add    0xc(%rbp),%ch
  413e8c:	07                   	(bad)  
  413e8d:	08 00                	or     %al,(%rax)
  413e8f:	00 1c 00             	add    %bl,(%rax,%rax,1)
  413e92:	00 00                	add    %al,(%rax)
  413e94:	84 00                	test   %al,(%rax)
  413e96:	00 00                	add    %al,(%rax)
  413e98:	be d0 fe ff 78       	mov    $0x78fffed0,%esi
  413e9d:	00 00                	add    %al,(%rax)
  413e9f:	00 00                	add    %al,(%rax)
  413ea1:	41 0e                	rex.B (bad) 
  413ea3:	10 86 02 43 0d 06    	adc    %al,0x60d4302(%rsi)
  413ea9:	02 73 0c             	add    0xc(%rbx),%dh
  413eac:	07                   	(bad)  
  413ead:	08 00                	or     %al,(%rax)
  413eaf:	00 24 00             	add    %ah,(%rax,%rax,1)
  413eb2:	00 00                	add    %al,(%rax)
  413eb4:	a4                   	movsb  %ds:(%rsi),%es:(%rdi)
  413eb5:	00 00                	add    %al,(%rax)
  413eb7:	00 16                	add    %dl,(%rsi)
  413eb9:	d1 fe                	sar    %esi
  413ebb:	ff 47 01             	incl   0x1(%rdi)
  413ebe:	00 00                	add    %al,(%rax)
  413ec0:	00 41 0e             	add    %al,0xe(%rcx)
  413ec3:	10 86 02 43 0d 06    	adc    %al,0x60d4302(%rsi)
  413ec9:	48 83 03 03          	addq   $0x3,(%rbx)
  413ecd:	3a 01                	cmp    (%rcx),%al
  413ecf:	0c 07                	or     $0x7,%al
  413ed1:	08 00                	or     %al,(%rax)
  413ed3:	00 00                	add    %al,(%rax)
  413ed5:	00 00                	add    %al,(%rax)
  413ed7:	00 1c 00             	add    %bl,(%rax,%rax,1)
  413eda:	00 00                	add    %al,(%rax)
  413edc:	cc                   	int3   
  413edd:	00 00                	add    %al,(%rax)
  413edf:	00 35 d2 fe ff 15    	add    %dh,0x15fffed2(%rip)        # 16413db7 <_end+0x15dff61f>
  413ee5:	00 00                	add    %al,(%rax)
  413ee7:	00 00                	add    %al,(%rax)
  413ee9:	41 0e                	rex.B (bad) 
  413eeb:	10 86 02 43 0d 06    	adc    %al,0x60d4302(%rsi)
  413ef1:	50                   	push   %rax
  413ef2:	0c 07                	or     $0x7,%al
  413ef4:	08 00                	or     %al,(%rax)
  413ef6:	00 00                	add    %al,(%rax)
  413ef8:	1c 00                	sbb    $0x0,%al
  413efa:	00 00                	add    %al,(%rax)
  413efc:	ec                   	in     (%dx),%al
  413efd:	00 00                	add    %al,(%rax)
  413eff:	00 2a                	add    %ch,(%rdx)
  413f01:	d2 fe                	sar    %cl,%dh
  413f03:	ff 09                	decl   (%rcx)
  413f05:	01 00                	add    %eax,(%rax)
  413f07:	00 00                	add    %al,(%rax)
  413f09:	41 0e                	rex.B (bad) 
  413f0b:	10 86 02 43 0d 06    	adc    %al,0x60d4302(%rsi)
  413f11:	03 04 01             	add    (%rcx,%rax,1),%eax
  413f14:	0c 07                	or     $0x7,%al
  413f16:	08 00                	or     %al,(%rax)
  413f18:	1c 00                	sbb    $0x0,%al
  413f1a:	00 00                	add    %al,(%rax)
  413f1c:	0c 01                	or     $0x1,%al
  413f1e:	00 00                	add    %al,(%rax)
  413f20:	13 d3                	adc    %ebx,%edx
  413f22:	fe                   	(bad)  
  413f23:	ff 75 00             	pushq  0x0(%rbp)
  413f26:	00 00                	add    %al,(%rax)
  413f28:	00 41 0e             	add    %al,0xe(%rcx)
  413f2b:	10 86 02 43 0d 06    	adc    %al,0x60d4302(%rsi)
  413f31:	02 70 0c             	add    0xc(%rax),%dh
  413f34:	07                   	(bad)  
  413f35:	08 00                	or     %al,(%rax)
  413f37:	00 1c 00             	add    %bl,(%rax,%rax,1)
  413f3a:	00 00                	add    %al,(%rax)
  413f3c:	2c 01                	sub    $0x1,%al
  413f3e:	00 00                	add    %al,(%rax)
  413f40:	68 d3 fe ff 19       	pushq  $0x19fffed3
  413f45:	00 00                	add    %al,(%rax)
  413f47:	00 00                	add    %al,(%rax)
  413f49:	41 0e                	rex.B (bad) 
  413f4b:	10 86 02 43 0d 06    	adc    %al,0x60d4302(%rsi)
  413f51:	54                   	push   %rsp
  413f52:	0c 07                	or     $0x7,%al
  413f54:	08 00                	or     %al,(%rax)
  413f56:	00 00                	add    %al,(%rax)
  413f58:	1c 00                	sbb    $0x0,%al
  413f5a:	00 00                	add    %al,(%rax)
  413f5c:	4c 01 00             	add    %r8,(%rax)
  413f5f:	00 61 d3             	add    %ah,-0x2d(%rcx)
  413f62:	fe                   	(bad)  
  413f63:	ff 10                	callq  *(%rax)
  413f65:	00 00                	add    %al,(%rax)
  413f67:	00 00                	add    %al,(%rax)
  413f69:	41 0e                	rex.B (bad) 
  413f6b:	10 86 02 43 0d 06    	adc    %al,0x60d4302(%rsi)
  413f71:	4b 0c 07             	rex.WXB or $0x7,%al
  413f74:	08 00                	or     %al,(%rax)
  413f76:	00 00                	add    %al,(%rax)
  413f78:	1c 00                	sbb    $0x0,%al
  413f7a:	00 00                	add    %al,(%rax)
  413f7c:	6c                   	insb   (%dx),%es:(%rdi)
  413f7d:	01 00                	add    %eax,(%rax)
  413f7f:	00 51 d3             	add    %dl,-0x2d(%rcx)
  413f82:	fe                   	(bad)  
  413f83:	ff 10                	callq  *(%rax)
  413f85:	00 00                	add    %al,(%rax)
  413f87:	00 00                	add    %al,(%rax)
  413f89:	41 0e                	rex.B (bad) 
  413f8b:	10 86 02 43 0d 06    	adc    %al,0x60d4302(%rsi)
  413f91:	4b 0c 07             	rex.WXB or $0x7,%al
  413f94:	08 00                	or     %al,(%rax)
  413f96:	00 00                	add    %al,(%rax)
  413f98:	1c 00                	sbb    $0x0,%al
  413f9a:	00 00                	add    %al,(%rax)
  413f9c:	8c 01                	mov    %es,(%rcx)
  413f9e:	00 00                	add    %al,(%rax)
  413fa0:	41 d3 fe             	sar    %cl,%r14d
  413fa3:	ff 10                	callq  *(%rax)
  413fa5:	00 00                	add    %al,(%rax)
  413fa7:	00 00                	add    %al,(%rax)
  413fa9:	41 0e                	rex.B (bad) 
  413fab:	10 86 02 43 0d 06    	adc    %al,0x60d4302(%rsi)
  413fb1:	4b 0c 07             	rex.WXB or $0x7,%al
  413fb4:	08 00                	or     %al,(%rax)
  413fb6:	00 00                	add    %al,(%rax)
  413fb8:	1c 00                	sbb    $0x0,%al
  413fba:	00 00                	add    %al,(%rax)
  413fbc:	ac                   	lods   %ds:(%rsi),%al
  413fbd:	01 00                	add    %eax,(%rax)
  413fbf:	00 31                	add    %dh,(%rcx)
  413fc1:	d3 fe                	sar    %cl,%esi
  413fc3:	ff                   	(bad)  
  413fc4:	7c 00                	jl     413fc6 <inv+0x8846>
  413fc6:	00 00                	add    %al,(%rax)
  413fc8:	00 41 0e             	add    %al,0xe(%rcx)
  413fcb:	10 86 02 43 0d 06    	adc    %al,0x60d4302(%rsi)
  413fd1:	02 77 0c             	add    0xc(%rdi),%dh
  413fd4:	07                   	(bad)  
  413fd5:	08 00                	or     %al,(%rax)
  413fd7:	00 1c 00             	add    %bl,(%rax,%rax,1)
  413fda:	00 00                	add    %al,(%rax)
  413fdc:	cc                   	int3   
  413fdd:	01 00                	add    %eax,(%rax)
  413fdf:	00 8d d3 fe ff 53    	add    %cl,0x53fffed3(%rbp)
  413fe5:	00 00                	add    %al,(%rax)
  413fe7:	00 00                	add    %al,(%rax)
  413fe9:	41 0e                	rex.B (bad) 
  413feb:	10 86 02 43 0d 06    	adc    %al,0x60d4302(%rsi)
  413ff1:	02 4e 0c             	add    0xc(%rsi),%cl
  413ff4:	07                   	(bad)  
  413ff5:	08 00                	or     %al,(%rax)
  413ff7:	00 1c 00             	add    %bl,(%rax,%rax,1)
  413ffa:	00 00                	add    %al,(%rax)
  413ffc:	ec                   	in     (%dx),%al
  413ffd:	01 00                	add    %eax,(%rax)
  413fff:	00 c0                	add    %al,%al
  414001:	d3 fe                	sar    %cl,%esi
  414003:	ff 45 00             	incl   0x0(%rbp)
  414006:	00 00                	add    %al,(%rax)
  414008:	00 41 0e             	add    %al,0xe(%rcx)
  41400b:	10 86 02 43 0d 06    	adc    %al,0x60d4302(%rsi)
  414011:	02 40 0c             	add    0xc(%rax),%al
  414014:	07                   	(bad)  
  414015:	08 00                	or     %al,(%rax)
  414017:	00 1c 00             	add    %bl,(%rax,%rax,1)
  41401a:	00 00                	add    %al,(%rax)
  41401c:	0c 02                	or     $0x2,%al
  41401e:	00 00                	add    %al,(%rax)
  414020:	e5 d3                	in     $0xd3,%eax
  414022:	fe                   	(bad)  
  414023:	ff 8e 00 00 00 00    	decl   0x0(%rsi)
  414029:	41 0e                	rex.B (bad) 
  41402b:	10 86 02 43 0d 06    	adc    %al,0x60d4302(%rsi)
  414031:	02 89 0c 07 08 00    	add    0x8070c(%rcx),%cl
  414037:	00 1c 00             	add    %bl,(%rax,%rax,1)
  41403a:	00 00                	add    %al,(%rax)
  41403c:	2c 02                	sub    $0x2,%al
  41403e:	00 00                	add    %al,(%rax)
  414040:	53                   	push   %rbx
  414041:	d4                   	(bad)  
  414042:	fe                   	(bad)  
  414043:	ff 59 00             	lcallq *0x0(%rcx)
  414046:	00 00                	add    %al,(%rax)
  414048:	00 41 0e             	add    %al,0xe(%rcx)
  41404b:	10 86 02 43 0d 06    	adc    %al,0x60d4302(%rsi)
  414051:	02 54 0c 07          	add    0x7(%rsp,%rcx,1),%dl
  414055:	08 00                	or     %al,(%rax)
  414057:	00 1c 00             	add    %bl,(%rax,%rax,1)
  41405a:	00 00                	add    %al,(%rax)
  41405c:	4c 02 00             	rex.WR add (%rax),%r8b
  41405f:	00 8c d4 fe ff 8a 01 	add    %cl,0x18afffe(%rsp,%rdx,8)
  414066:	00 00                	add    %al,(%rax)
  414068:	00 41 0e             	add    %al,0xe(%rcx)
  41406b:	10 86 02 43 0d 06    	adc    %al,0x60d4302(%rsi)
  414071:	00 00                	add    %al,(%rax)
  414073:	00 00                	add    %al,(%rax)
  414075:	00 00                	add    %al,(%rax)
  414077:	00 1c 00             	add    %bl,(%rax,%rax,1)
  41407a:	00 00                	add    %al,(%rax)
  41407c:	6c                   	insb   (%dx),%es:(%rdi)
  41407d:	02 00                	add    (%rax),%al
  41407f:	00 f6                	add    %dh,%dh
  414081:	d5                   	(bad)  
  414082:	fe                   	(bad)  
  414083:	ff 52 00             	callq  *0x0(%rdx)
  414086:	00 00                	add    %al,(%rax)
  414088:	00 41 0e             	add    %al,0xe(%rcx)
  41408b:	10 86 02 43 0d 06    	adc    %al,0x60d4302(%rsi)
  414091:	02 4d 0c             	add    0xc(%rbp),%cl
  414094:	07                   	(bad)  
  414095:	08 00                	or     %al,(%rax)
  414097:	00 44 00 00          	add    %al,0x0(%rax,%rax,1)
  41409b:	00 8c 02 00 00 30 d6 	add    %cl,-0x29d00000(%rdx,%rax,1)
  4140a2:	fe                   	(bad)  
  4140a3:	ff 65 00             	jmpq   *0x0(%rbp)
  4140a6:	00 00                	add    %al,(%rax)
  4140a8:	00 42 0e             	add    %al,0xe(%rdx)
  4140ab:	10 8f 02 45 0e 18    	adc    %cl,0x180e4502(%rdi)
  4140b1:	8e 03                	mov    (%rbx),%es
  4140b3:	45 0e                	rex.RB (bad) 
  4140b5:	20 8d 04 45 0e 28    	and    %cl,0x280e4504(%rbp)
  4140bb:	8c 05 48 0e 30 86    	mov    %es,-0x79cff1b8(%rip)        # ffffffff86714f09 <_end+0xffffffff86100771>
  4140c1:	06                   	(bad)  
  4140c2:	48 0e                	rex.W (bad) 
  4140c4:	38 83 07 4d 0e 40    	cmp    %al,0x400e4d07(%rbx)
  4140ca:	6c                   	insb   (%dx),%es:(%rdi)
  4140cb:	0e                   	(bad)  
  4140cc:	38 41 0e             	cmp    %al,0xe(%rcx)
  4140cf:	30 41 0e             	xor    %al,0xe(%rcx)
  4140d2:	28 42 0e             	sub    %al,0xe(%rdx)
  4140d5:	20 42 0e             	and    %al,0xe(%rdx)
  4140d8:	18 42 0e             	sbb    %al,0xe(%rdx)
  4140db:	10 42 0e             	adc    %al,0xe(%rdx)
  4140de:	08 00                	or     %al,(%rax)
  4140e0:	14 00                	adc    $0x0,%al
  4140e2:	00 00                	add    %al,(%rax)
  4140e4:	d4                   	(bad)  
  4140e5:	02 00                	add    (%rax),%al
  4140e7:	00 58 d6             	add    %bl,-0x2a(%rax)
  4140ea:	fe                   	(bad)  
  4140eb:	ff 02                	incl   (%rdx)
	...

00000000004140f8 <__FRAME_END__>:
  4140f8:	00 00                	add    %al,(%rax)
	...

Disassembly of section .init_array:

0000000000614100 <__frame_dummy_init_array_entry>:
  614100:	80 0d 40 00 00 00 00 	orb    $0x0,0x40(%rip)        # 614147 <_DYNAMIC+0x2f>
	...

Disassembly of section .fini_array:

0000000000614108 <__do_global_dtors_aux_fini_array_entry>:
  614108:	60                   	(bad)  
  614109:	0d 40 00 00 00       	or     $0x40,%eax
	...

Disassembly of section .jcr:

0000000000614110 <__JCR_END__>:
	...

Disassembly of section .dynamic:

0000000000614118 <_DYNAMIC>:
  614118:	01 00                	add    %eax,(%rax)
  61411a:	00 00                	add    %al,(%rax)
  61411c:	00 00                	add    %al,(%rax)
  61411e:	00 00                	add    %al,(%rax)
  614120:	01 00                	add    %eax,(%rax)
  614122:	00 00                	add    %al,(%rax)
  614124:	00 00                	add    %al,(%rax)
  614126:	00 00                	add    %al,(%rax)
  614128:	0c 00                	or     $0x0,%al
  61412a:	00 00                	add    %al,(%rax)
  61412c:	00 00                	add    %al,(%rax)
  61412e:	00 00                	add    %al,(%rax)
  614130:	78 0a                	js     61413c <_DYNAMIC+0x24>
  614132:	40 00 00             	add    %al,(%rax)
  614135:	00 00                	add    %al,(%rax)
  614137:	00 0d 00 00 00 00    	add    %cl,0x0(%rip)        # 61413d <_DYNAMIC+0x25>
  61413d:	00 00                	add    %al,(%rax)
  61413f:	00 44 17 40          	add    %al,0x40(%rdi,%rdx,1)
  614143:	00 00                	add    %al,(%rax)
  614145:	00 00                	add    %al,(%rax)
  614147:	00 19                	add    %bl,(%rcx)
	...
  614151:	41 61                	rex.B (bad) 
  614153:	00 00                	add    %al,(%rax)
  614155:	00 00                	add    %al,(%rax)
  614157:	00 1b                	add    %bl,(%rbx)
  614159:	00 00                	add    %al,(%rax)
  61415b:	00 00                	add    %al,(%rax)
  61415d:	00 00                	add    %al,(%rax)
  61415f:	00 08                	add    %cl,(%rax)
  614161:	00 00                	add    %al,(%rax)
  614163:	00 00                	add    %al,(%rax)
  614165:	00 00                	add    %al,(%rax)
  614167:	00 1a                	add    %bl,(%rdx)
  614169:	00 00                	add    %al,(%rax)
  61416b:	00 00                	add    %al,(%rax)
  61416d:	00 00                	add    %al,(%rax)
  61416f:	00 08                	add    %cl,(%rax)
  614171:	41 61                	rex.B (bad) 
  614173:	00 00                	add    %al,(%rax)
  614175:	00 00                	add    %al,(%rax)
  614177:	00 1c 00             	add    %bl,(%rax,%rax,1)
  61417a:	00 00                	add    %al,(%rax)
  61417c:	00 00                	add    %al,(%rax)
  61417e:	00 00                	add    %al,(%rax)
  614180:	08 00                	or     %al,(%rax)
  614182:	00 00                	add    %al,(%rax)
  614184:	00 00                	add    %al,(%rax)
  614186:	00 00                	add    %al,(%rax)
  614188:	f5                   	cmc    
  614189:	fe                   	(bad)  
  61418a:	ff 6f 00             	ljmpq  *0x0(%rdi)
  61418d:	00 00                	add    %al,(%rax)
  61418f:	00 60 02             	add    %ah,0x2(%rax)
  614192:	40 00 00             	add    %al,(%rax)
  614195:	00 00                	add    %al,(%rax)
  614197:	00 05 00 00 00 00    	add    %al,0x0(%rip)        # 61419d <_DYNAMIC+0x85>
  61419d:	00 00                	add    %al,(%rax)
  61419f:	00 d0                	add    %dl,%al
  6141a1:	05 40 00 00 00       	add    $0x40,%eax
  6141a6:	00 00                	add    %al,(%rax)
  6141a8:	06                   	(bad)  
  6141a9:	00 00                	add    %al,(%rax)
  6141ab:	00 00                	add    %al,(%rax)
  6141ad:	00 00                	add    %al,(%rax)
  6141af:	00 88 02 40 00 00    	add    %cl,0x4002(%rax)
  6141b5:	00 00                	add    %al,(%rax)
  6141b7:	00 0a                	add    %cl,(%rdx)
  6141b9:	00 00                	add    %al,(%rax)
  6141bb:	00 00                	add    %al,(%rax)
  6141bd:	00 00                	add    %al,(%rax)
  6141bf:	00 f9                	add    %bh,%cl
  6141c1:	00 00                	add    %al,(%rax)
  6141c3:	00 00                	add    %al,(%rax)
  6141c5:	00 00                	add    %al,(%rax)
  6141c7:	00 0b                	add    %cl,(%rbx)
  6141c9:	00 00                	add    %al,(%rax)
  6141cb:	00 00                	add    %al,(%rax)
  6141cd:	00 00                	add    %al,(%rax)
  6141cf:	00 18                	add    %bl,(%rax)
  6141d1:	00 00                	add    %al,(%rax)
  6141d3:	00 00                	add    %al,(%rax)
  6141d5:	00 00                	add    %al,(%rax)
  6141d7:	00 15 00 00 00 00    	add    %dl,0x0(%rip)        # 6141dd <_DYNAMIC+0xc5>
	...
  6141e5:	00 00                	add    %al,(%rax)
  6141e7:	00 03                	add    %al,(%rbx)
  6141e9:	00 00                	add    %al,(%rax)
  6141eb:	00 00                	add    %al,(%rax)
  6141ed:	00 00                	add    %al,(%rax)
  6141ef:	00 f0                	add    %dh,%al
  6141f1:	42 61                	rex.X (bad) 
  6141f3:	00 00                	add    %al,(%rax)
  6141f5:	00 00                	add    %al,(%rax)
  6141f7:	00 02                	add    %al,(%rdx)
	...
  614201:	03 00                	add    (%rax),%eax
  614203:	00 00                	add    %al,(%rax)
  614205:	00 00                	add    %al,(%rax)
  614207:	00 14 00             	add    %dl,(%rax,%rax,1)
  61420a:	00 00                	add    %al,(%rax)
  61420c:	00 00                	add    %al,(%rax)
  61420e:	00 00                	add    %al,(%rax)
  614210:	07                   	(bad)  
  614211:	00 00                	add    %al,(%rax)
  614213:	00 00                	add    %al,(%rax)
  614215:	00 00                	add    %al,(%rax)
  614217:	00 17                	add    %dl,(%rdi)
  614219:	00 00                	add    %al,(%rax)
  61421b:	00 00                	add    %al,(%rax)
  61421d:	00 00                	add    %al,(%rax)
  61421f:	00 78 07             	add    %bh,0x7(%rax)
  614222:	40 00 00             	add    %al,(%rax)
  614225:	00 00                	add    %al,(%rax)
  614227:	00 07                	add    %al,(%rdi)
  614229:	00 00                	add    %al,(%rax)
  61422b:	00 00                	add    %al,(%rax)
  61422d:	00 00                	add    %al,(%rax)
  61422f:	00 30                	add    %dh,(%rax)
  614231:	07                   	(bad)  
  614232:	40 00 00             	add    %al,(%rax)
  614235:	00 00                	add    %al,(%rax)
  614237:	00 08                	add    %cl,(%rax)
  614239:	00 00                	add    %al,(%rax)
  61423b:	00 00                	add    %al,(%rax)
  61423d:	00 00                	add    %al,(%rax)
  61423f:	00 48 00             	add    %cl,0x0(%rax)
  614242:	00 00                	add    %al,(%rax)
  614244:	00 00                	add    %al,(%rax)
  614246:	00 00                	add    %al,(%rax)
  614248:	09 00                	or     %eax,(%rax)
  61424a:	00 00                	add    %al,(%rax)
  61424c:	00 00                	add    %al,(%rax)
  61424e:	00 00                	add    %al,(%rax)
  614250:	18 00                	sbb    %al,(%rax)
  614252:	00 00                	add    %al,(%rax)
  614254:	00 00                	add    %al,(%rax)
  614256:	00 00                	add    %al,(%rax)
  614258:	fe                   	(bad)  
  614259:	ff                   	(bad)  
  61425a:	ff 6f 00             	ljmpq  *0x0(%rdi)
  61425d:	00 00                	add    %al,(%rax)
  61425f:	00 10                	add    %dl,(%rax)
  614261:	07                   	(bad)  
  614262:	40 00 00             	add    %al,(%rax)
  614265:	00 00                	add    %al,(%rax)
  614267:	00 ff                	add    %bh,%bh
  614269:	ff                   	(bad)  
  61426a:	ff 6f 00             	ljmpq  *0x0(%rdi)
  61426d:	00 00                	add    %al,(%rax)
  61426f:	00 01                	add    %al,(%rcx)
  614271:	00 00                	add    %al,(%rax)
  614273:	00 00                	add    %al,(%rax)
  614275:	00 00                	add    %al,(%rax)
  614277:	00 f0                	add    %dh,%al
  614279:	ff                   	(bad)  
  61427a:	ff 6f 00             	ljmpq  *0x0(%rdi)
  61427d:	00 00                	add    %al,(%rax)
  61427f:	00 ca                	add    %cl,%dl
  614281:	06                   	(bad)  
  614282:	40 00 00             	add    %al,(%rax)
	...

Disassembly of section .got:

00000000006142e8 <.got>:
	...

Disassembly of section .got.plt:

00000000006142f0 <_GLOBAL_OFFSET_TABLE_>:
  6142f0:	18 41 61             	sbb    %al,0x61(%rcx)
	...
  614307:	00 b6 0a 40 00 00    	add    %dh,0x400a(%rsi)
  61430d:	00 00                	add    %al,(%rax)
  61430f:	00 c6                	add    %al,%dh
  614311:	0a 40 00             	or     0x0(%rax),%al
  614314:	00 00                	add    %al,(%rax)
  614316:	00 00                	add    %al,(%rax)
  614318:	d6                   	(bad)  
  614319:	0a 40 00             	or     0x0(%rax),%al
  61431c:	00 00                	add    %al,(%rax)
  61431e:	00 00                	add    %al,(%rax)
  614320:	e6 0a                	out    %al,$0xa
  614322:	40 00 00             	add    %al,(%rax)
  614325:	00 00                	add    %al,(%rax)
  614327:	00 f6                	add    %dh,%dh
  614329:	0a 40 00             	or     0x0(%rax),%al
  61432c:	00 00                	add    %al,(%rax)
  61432e:	00 00                	add    %al,(%rax)
  614330:	06                   	(bad)  
  614331:	0b 40 00             	or     0x0(%rax),%eax
  614334:	00 00                	add    %al,(%rax)
  614336:	00 00                	add    %al,(%rax)
  614338:	16                   	(bad)  
  614339:	0b 40 00             	or     0x0(%rax),%eax
  61433c:	00 00                	add    %al,(%rax)
  61433e:	00 00                	add    %al,(%rax)
  614340:	26 0b 40 00          	or     %es:0x0(%rax),%eax
  614344:	00 00                	add    %al,(%rax)
  614346:	00 00                	add    %al,(%rax)
  614348:	36 0b 40 00          	or     %ss:0x0(%rax),%eax
  61434c:	00 00                	add    %al,(%rax)
  61434e:	00 00                	add    %al,(%rax)
  614350:	46 0b 40 00          	rex.RX or 0x0(%rax),%r8d
  614354:	00 00                	add    %al,(%rax)
  614356:	00 00                	add    %al,(%rax)
  614358:	56                   	push   %rsi
  614359:	0b 40 00             	or     0x0(%rax),%eax
  61435c:	00 00                	add    %al,(%rax)
  61435e:	00 00                	add    %al,(%rax)
  614360:	66 0b 40 00          	or     0x0(%rax),%ax
  614364:	00 00                	add    %al,(%rax)
  614366:	00 00                	add    %al,(%rax)
  614368:	76 0b                	jbe    614375 <_GLOBAL_OFFSET_TABLE_+0x85>
  61436a:	40 00 00             	add    %al,(%rax)
  61436d:	00 00                	add    %al,(%rax)
  61436f:	00 86 0b 40 00 00    	add    %al,0x400b(%rsi)
  614375:	00 00                	add    %al,(%rax)
  614377:	00 96 0b 40 00 00    	add    %dl,0x400b(%rsi)
  61437d:	00 00                	add    %al,(%rax)
  61437f:	00 a6 0b 40 00 00    	add    %ah,0x400b(%rsi)
  614385:	00 00                	add    %al,(%rax)
  614387:	00 b6 0b 40 00 00    	add    %dh,0x400b(%rsi)
  61438d:	00 00                	add    %al,(%rax)
  61438f:	00 c6                	add    %al,%dh
  614391:	0b 40 00             	or     0x0(%rax),%eax
  614394:	00 00                	add    %al,(%rax)
  614396:	00 00                	add    %al,(%rax)
  614398:	d6                   	(bad)  
  614399:	0b 40 00             	or     0x0(%rax),%eax
  61439c:	00 00                	add    %al,(%rax)
  61439e:	00 00                	add    %al,(%rax)
  6143a0:	e6 0b                	out    %al,$0xb
  6143a2:	40 00 00             	add    %al,(%rax)
  6143a5:	00 00                	add    %al,(%rax)
  6143a7:	00 f6                	add    %dh,%dh
  6143a9:	0b 40 00             	or     0x0(%rax),%eax
  6143ac:	00 00                	add    %al,(%rax)
  6143ae:	00 00                	add    %al,(%rax)
  6143b0:	06                   	(bad)  
  6143b1:	0c 40                	or     $0x40,%al
  6143b3:	00 00                	add    %al,(%rax)
  6143b5:	00 00                	add    %al,(%rax)
  6143b7:	00 16                	add    %dl,(%rsi)
  6143b9:	0c 40                	or     $0x40,%al
  6143bb:	00 00                	add    %al,(%rax)
  6143bd:	00 00                	add    %al,(%rax)
  6143bf:	00 26                	add    %ah,(%rsi)
  6143c1:	0c 40                	or     $0x40,%al
  6143c3:	00 00                	add    %al,(%rax)
  6143c5:	00 00                	add    %al,(%rax)
  6143c7:	00 36                	add    %dh,(%rsi)
  6143c9:	0c 40                	or     $0x40,%al
  6143cb:	00 00                	add    %al,(%rax)
  6143cd:	00 00                	add    %al,(%rax)
  6143cf:	00 46 0c             	add    %al,0xc(%rsi)
  6143d2:	40 00 00             	add    %al,(%rax)
  6143d5:	00 00                	add    %al,(%rax)
  6143d7:	00 56 0c             	add    %dl,0xc(%rsi)
  6143da:	40 00 00             	add    %al,(%rax)
  6143dd:	00 00                	add    %al,(%rax)
  6143df:	00 66 0c             	add    %ah,0xc(%rsi)
  6143e2:	40 00 00             	add    %al,(%rax)
  6143e5:	00 00                	add    %al,(%rax)
  6143e7:	00 76 0c             	add    %dh,0xc(%rsi)
  6143ea:	40 00 00             	add    %al,(%rax)
  6143ed:	00 00                	add    %al,(%rax)
  6143ef:	00 86 0c 40 00 00    	add    %al,0x400c(%rsi)
  6143f5:	00 00                	add    %al,(%rax)
  6143f7:	00 96 0c 40 00 00    	add    %dl,0x400c(%rsi)
  6143fd:	00 00                	add    %al,(%rax)
  6143ff:	00 a6 0c 40 00 00    	add    %ah,0x400c(%rsi)
  614405:	00 00                	add    %al,(%rax)
	...

Disassembly of section .data:

0000000000614440 <__data_start>:
	...

0000000000614448 <__dso_handle>:
	...

0000000000614480 <a>:
  614480:	a0 b5 40 00 00 00 00 	movabs 0xc8000000000040b5,%al
  614487:	00 c8 
  614489:	b5 40                	mov    $0x40,%ch
  61448b:	00 00                	add    %al,(%rax)
  61448d:	00 00                	add    %al,(%rax)
  61448f:	00 f0                	add    %dh,%al
  614491:	b5 40                	mov    $0x40,%ch
  614493:	00 00                	add    %al,(%rax)
  614495:	00 00                	add    %al,(%rax)
  614497:	00 18                	add    %bl,(%rax)
  614499:	b6 40                	mov    $0x40,%dh
  61449b:	00 00                	add    %al,(%rax)
  61449d:	00 00                	add    %al,(%rax)
  61449f:	00 40 b6             	add    %al,-0x4a(%rax)
  6144a2:	40 00 00             	add    %al,(%rax)
  6144a5:	00 00                	add    %al,(%rax)
  6144a7:	00 68 b6             	add    %ch,-0x4a(%rax)
  6144aa:	40 00 00             	add    %al,(%rax)
  6144ad:	00 00                	add    %al,(%rax)
  6144af:	00 90 b6 40 00 00    	add    %dl,0x40b6(%rax)
  6144b5:	00 00                	add    %al,(%rax)
  6144b7:	00 b8 b6 40 00 00    	add    %bh,0x40b6(%rax)
  6144bd:	00 00                	add    %al,(%rax)
  6144bf:	00 e0                	add    %ah,%al
  6144c1:	b6 40                	mov    $0x40,%dh
  6144c3:	00 00                	add    %al,(%rax)
  6144c5:	00 00                	add    %al,(%rax)
  6144c7:	00 08                	add    %cl,(%rax)
  6144c9:	b7 40                	mov    $0x40,%bh
  6144cb:	00 00                	add    %al,(%rax)
  6144cd:	00 00                	add    %al,(%rax)
  6144cf:	00 30                	add    %dh,(%rax)
  6144d1:	b7 40                	mov    $0x40,%bh
  6144d3:	00 00                	add    %al,(%rax)
  6144d5:	00 00                	add    %al,(%rax)
  6144d7:	00 58 b7             	add    %bl,-0x49(%rax)
  6144da:	40 00 00             	add    %al,(%rax)
	...

0000000000614500 <f_p>:
	...
  614518:	56                   	push   %rsi
  614519:	0f 40 00             	cmovo  (%rax),%eax
	...
  614530:	ce                   	(bad)  
  614531:	0f 40 00             	cmovo  (%rax),%eax
  614534:	00 00                	add    %al,(%rax)
  614536:	00 00                	add    %al,(%rax)
  614538:	15 11 40 00 00       	adc    $0x4011,%eax
	...
  614545:	00 00                	add    %al,(%rax)
  614547:	00 2a                	add    %ch,(%rdx)
  614549:	11 40 00             	adc    %eax,0x0(%rax)
  61454c:	00 00                	add    %al,(%rax)
  61454e:	00 00                	add    %al,(%rax)
  614550:	33 12                	xor    (%rdx),%edx
  614552:	40 00 00             	add    %al,(%rax)
	...

0000000000614580 <easter_egg>:
  614580:	c2 00 00             	retq   $0x0
  614583:	00 a1 00 00 00 71    	add    %ah,0x71000000(%rcx)
  614589:	00 00                	add    %al,(%rax)
  61458b:	00 75 00             	add    %dh,0x0(%rbp)
  61458e:	00 00                	add    %al,(%rax)
  614590:	65 00 00             	add    %al,%gs:(%rax)
  614593:	00 20                	add    %ah,(%rax)
  614595:	00 00                	add    %al,(%rax)
  614597:	00 63 00             	add    %ah,0x0(%rbx)
  61459a:	00 00                	add    %al,(%rax)
  61459c:	75 00                	jne    61459e <easter_egg+0x1e>
  61459e:	00 00                	add    %al,(%rax)
  6145a0:	72 00                	jb     6145a2 <easter_egg+0x22>
  6145a2:	00 00                	add    %al,(%rax)
  6145a4:	69 00 00 00 6f 00    	imul   $0x6f0000,(%rax),%eax
  6145aa:	00 00                	add    %al,(%rax)
  6145ac:	73 00                	jae    6145ae <easter_egg+0x2e>
  6145ae:	00 00                	add    %al,(%rax)
  6145b0:	6f                   	outsl  %ds:(%rsi),(%dx)
  6145b1:	00 00                	add    %al,(%rax)
  6145b3:	00 21                	add    %ah,(%rcx)
  6145b5:	00 00                	add    %al,(%rax)
  6145b7:	00 20                	add    %ah,(%rax)
  6145b9:	00 00                	add    %al,(%rax)
  6145bb:	00 65 00             	add    %ah,0x0(%rbp)
  6145be:	00 00                	add    %al,(%rax)
  6145c0:	6e                   	outsb  %ds:(%rsi),(%dx)
  6145c1:	00 00                	add    %al,(%rax)
  6145c3:	00 20                	add    %ah,(%rax)
  6145c5:	00 00                	add    %al,(%rax)
  6145c7:	00 6c 00 00          	add    %ch,0x0(%rax,%rax,1)
  6145cb:	00 61 00             	add    %ah,0x0(%rcx)
  6145ce:	00 00                	add    %al,(%rax)
  6145d0:	20 00                	and    %al,(%rax)
  6145d2:	00 00                	add    %al,(%rax)
  6145d4:	64 00 00             	add    %al,%fs:(%rax)
  6145d7:	00 65 00             	add    %ah,0x0(%rbp)
  6145da:	00 00                	add    %al,(%rax)
  6145dc:	66 00 00             	data16 add %al,(%rax)
  6145df:	00 65 00             	add    %ah,0x0(%rbp)
  6145e2:	00 00                	add    %al,(%rax)
  6145e4:	6e                   	outsb  %ds:(%rsi),(%dx)
  6145e5:	00 00                	add    %al,(%rax)
  6145e7:	00 73 00             	add    %dh,0x0(%rbx)
  6145ea:	00 00                	add    %al,(%rax)
  6145ec:	61                   	(bad)  
  6145ed:	00 00                	add    %al,(%rax)
  6145ef:	00 20                	add    %ah,(%rax)
  6145f1:	00 00                	add    %al,(%rax)
  6145f3:	00 65 00             	add    %ah,0x0(%rbp)
  6145f6:	00 00                	add    %al,(%rax)
  6145f8:	6c                   	insb   (%dx),%es:(%rdi)
  6145f9:	00 00                	add    %al,(%rax)
  6145fb:	00 20                	add    %ah,(%rax)
  6145fd:	00 00                	add    %al,(%rax)
  6145ff:	00 67 00             	add    %ah,0x0(%rdi)
  614602:	00 00                	add    %al,(%rax)
  614604:	72 00                	jb     614606 <easter_egg+0x86>
  614606:	00 00                	add    %al,(%rax)
  614608:	75 00                	jne    61460a <easter_egg+0x8a>
  61460a:	00 00                	add    %al,(%rax)
  61460c:	70 00                	jo     61460e <easter_egg+0x8e>
  61460e:	00 00                	add    %al,(%rax)
  614610:	6f                   	outsl  %ds:(%rsi),(%dx)
  614611:	00 00                	add    %al,(%rax)
  614613:	00 20                	add    %ah,(%rax)
  614615:	00 00                	add    %al,(%rax)
  614617:	00 64 00 00          	add    %ah,0x0(%rax,%rax,1)
  61461b:	00 65 00             	add    %ah,0x0(%rbp)
  61461e:	00 00                	add    %al,(%rax)
  614620:	62                   	(bad)  {%k3}
  614621:	00 00                	add    %al,(%rax)
  614623:	00 65 00             	add    %ah,0x0(%rbp)
  614626:	00 00                	add    %al,(%rax)
  614628:	72 00                	jb     61462a <easter_egg+0xaa>
  61462a:	00 00                	add    %al,(%rax)
  61462c:	c3                   	retq   
  61462d:	00 00                	add    %al,(%rax)
  61462f:	00 a1 00 00 00 20    	add    %ah,0x20000000(%rcx)
  614635:	00 00                	add    %al,(%rax)
  614637:	00 69 00             	add    %ch,0x0(%rcx)
  61463a:	00 00                	add    %al,(%rax)
  61463c:	6e                   	outsb  %ds:(%rsi),(%dx)
  61463d:	00 00                	add    %al,(%rax)
  61463f:	00 74 00 00          	add    %dh,0x0(%rax,%rax,1)
  614643:	00 65 00             	add    %ah,0x0(%rbp)
  614646:	00 00                	add    %al,(%rax)
  614648:	72 00                	jb     61464a <easter_egg+0xca>
  61464a:	00 00                	add    %al,(%rax)
  61464c:	70 00                	jo     61464e <easter_egg+0xce>
  61464e:	00 00                	add    %al,(%rax)
  614650:	72 00                	jb     614652 <easter_egg+0xd2>
  614652:	00 00                	add    %al,(%rax)
  614654:	65 00 00             	add    %al,%gs:(%rax)
  614657:	00 74 00 00          	add    %dh,0x0(%rax,%rax,1)
  61465b:	00 61 00             	add    %ah,0x0(%rcx)
  61465e:	00 00                	add    %al,(%rax)
  614660:	72 00                	jb     614662 <easter_egg+0xe2>
  614662:	00 00                	add    %al,(%rax)
  614664:	20 00                	and    %al,(%rax)
  614666:	00 00                	add    %al,(%rax)
  614668:	75 00                	jne    61466a <easter_egg+0xea>
  61466a:	00 00                	add    %al,(%rax)
  61466c:	6e                   	outsb  %ds:(%rsi),(%dx)
  61466d:	00 00                	add    %al,(%rax)
  61466f:	00 20                	add    %ah,(%rax)
  614671:	00 00                	add    %al,(%rax)
  614673:	00 66 00             	add    %ah,0x0(%rsi)
  614676:	00 00                	add    %al,(%rax)
  614678:	72 00                	jb     61467a <easter_egg+0xfa>
  61467a:	00 00                	add    %al,(%rax)
  61467c:	61                   	(bad)  
  61467d:	00 00                	add    %al,(%rax)
  61467f:	00 67 00             	add    %ah,0x0(%rdi)
  614682:	00 00                	add    %al,(%rax)
  614684:	6d                   	insl   (%dx),%es:(%rdi)
  614685:	00 00                	add    %al,(%rax)
  614687:	00 65 00             	add    %ah,0x0(%rbp)
  61468a:	00 00                	add    %al,(%rax)
  61468c:	6e                   	outsb  %ds:(%rsi),(%dx)
  61468d:	00 00                	add    %al,(%rax)
  61468f:	00 74 00 00          	add    %dh,0x0(%rax,%rax,1)
  614693:	00 6f 00             	add    %ch,0x0(%rdi)
  614696:	00 00                	add    %al,(%rax)
  614698:	20 00                	and    %al,(%rax)
  61469a:	00 00                	add    %al,(%rax)
  61469c:	64 00 00             	add    %al,%fs:(%rax)
  61469f:	00 65 00             	add    %ah,0x0(%rbp)
  6146a2:	00 00                	add    %al,(%rax)
  6146a4:	20 00                	and    %al,(%rax)
  6146a6:	00 00                	add    %al,(%rax)
  6146a8:	61                   	(bad)  
  6146a9:	00 00                	add    %al,(%rax)
  6146ab:	00 6c 00 00          	add    %ch,0x0(%rax,%rax,1)
  6146af:	00 67 00             	add    %ah,0x0(%rdi)
  6146b2:	00 00                	add    %al,(%rax)
  6146b4:	75 00                	jne    6146b6 <easter_egg+0x136>
  6146b6:	00 00                	add    %al,(%rax)
  6146b8:	6e                   	outsb  %ds:(%rsi),(%dx)
  6146b9:	00 00                	add    %al,(%rax)
  6146bb:	00 20                	add    %ah,(%rax)
  6146bd:	00 00                	add    %al,(%rax)
  6146bf:	00 64 00 00          	add    %ah,0x0(%rax,%rax,1)
  6146c3:	00 69 00             	add    %ch,0x0(%rcx)
  6146c6:	00 00                	add    %al,(%rax)
  6146c8:	61                   	(bad)  
  6146c9:	00 00                	add    %al,(%rax)
  6146cb:	00 6c 00 00          	add    %ch,0x0(%rax,%rax,1)
  6146cf:	00 6f 00             	add    %ch,0x0(%rdi)
  6146d2:	00 00                	add    %al,(%rax)
  6146d4:	67 00 00             	add    %al,(%eax)
  6146d7:	00 6f 00             	add    %ch,0x0(%rdi)
  6146da:	00 00                	add    %al,(%rax)
  6146dc:	20 00                	and    %al,(%rax)
  6146de:	00 00                	add    %al,(%rax)
  6146e0:	64 00 00             	add    %al,%fs:(%rax)
  6146e3:	00 65 00             	add    %ah,0x0(%rbp)
  6146e6:	00 00                	add    %al,(%rax)
  6146e8:	20 00                	and    %al,(%rax)
  6146ea:	00 00                	add    %al,(%rax)
  6146ec:	4c 00 00             	rex.WR add %r8b,(%rax)
  6146ef:	00 65 00             	add    %ah,0x0(%rbp)
  6146f2:	00 00                	add    %al,(%rax)
  6146f4:	73 00                	jae    6146f6 <easter_egg+0x176>
  6146f6:	00 00                	add    %al,(%rax)
  6146f8:	20 00                	and    %al,(%rax)
  6146fa:	00 00                	add    %al,(%rax)
  6146fc:	4c 00 00             	rex.WR add %r8b,(%rax)
  6146ff:	00 75 00             	add    %dh,0x0(%rbp)
  614702:	00 00                	add    %al,(%rax)
  614704:	74 00                	je     614706 <easter_egg+0x186>
  614706:	00 00                	add    %al,(%rax)
  614708:	68 00 00 00 69       	pushq  $0x69000000
  61470d:	00 00                	add    %al,(%rax)
  61470f:	00 65 00             	add    %ah,0x0(%rbp)
  614712:	00 00                	add    %al,(%rax)
  614714:	72 00                	jb     614716 <easter_egg+0x196>
  614716:	00 00                	add    %al,(%rax)
  614718:	73 00                	jae    61471a <easter_egg+0x19a>
  61471a:	00 00                	add    %al,(%rax)
  61471c:	20 00                	and    %al,(%rax)
  61471e:	00 00                	add    %al,(%rax)
  614720:	70 00                	jo     614722 <easter_egg+0x1a2>
  614722:	00 00                	add    %al,(%rax)
  614724:	6f                   	outsl  %ds:(%rsi),(%dx)
  614725:	00 00                	add    %al,(%rax)
  614727:	00 72 00             	add    %dh,0x0(%rdx)
  61472a:	00 00                	add    %al,(%rax)
  61472c:	20 00                	and    %al,(%rax)
  61472e:	00 00                	add    %al,(%rax)
  614730:	75 00                	jne    614732 <easter_egg+0x1b2>
  614732:	00 00                	add    %al,(%rax)
  614734:	6e                   	outsb  %ds:(%rsi),(%dx)
  614735:	00 00                	add    %al,(%rax)
  614737:	00 20                	add    %ah,(%rax)
  614739:	00 00                	add    %al,(%rax)
  61473b:	00 70 00             	add    %dh,0x0(%rax)
  61473e:	00 00                	add    %al,(%rax)
  614740:	72 00                	jb     614742 <easter_egg+0x1c2>
  614742:	00 00                	add    %al,(%rax)
  614744:	65 00 00             	add    %al,%gs:(%rax)
  614747:	00 6d 00             	add    %ch,0x0(%rbp)
  61474a:	00 00                	add    %al,(%rax)
  61474c:	69 00 00 00 6f 00    	imul   $0x6f0000,(%rax),%eax
  614752:	00 00                	add    %al,(%rax)
  614754:	20 00                	and    %al,(%rax)
  614756:	00 00                	add    %al,(%rax)
  614758:	65 00 00             	add    %al,%gs:(%rax)
  61475b:	00 73 00             	add    %dh,0x0(%rbx)
  61475e:	00 00                	add    %al,(%rax)
  614760:	70 00                	jo     614762 <easter_egg+0x1e2>
  614762:	00 00                	add    %al,(%rax)
  614764:	65 00 00             	add    %al,%gs:(%rax)
  614767:	00 63 00             	add    %ah,0x0(%rbx)
  61476a:	00 00                	add    %al,(%rax)
  61476c:	69 00 00 00 61 00    	imul   $0x610000,(%rax),%eax
  614772:	00 00                	add    %al,(%rax)
  614774:	6c                   	insb   (%dx),%es:(%rdi)
  614775:	00 00                	add    %al,(%rax)
	...

Disassembly of section .bss:

0000000000614780 <stdout@@GLIBC_2.2.5>:
	...

0000000000614788 <stderr@@GLIBC_2.2.5>:
	...

0000000000614790 <completed.6670>:
	...

Disassembly of section .comment:

0000000000000000 <.comment>:
   0:	47                   	rex.RXB
   1:	43                   	rex.XB
   2:	43 3a 20             	rex.XB cmp (%r8),%spl
   5:	28 44 65 62          	sub    %al,0x62(%rbp,%riz,2)
   9:	69 61 6e 20 34 2e 39 	imul   $0x392e3420,0x6e(%rcx),%esp
  10:	2e 32 2d 31 30 2b 64 	xor    %cs:0x642b3031(%rip),%ch        # 642b3048 <_end+0x63c9e8b0>
  17:	65 62                	gs (bad) {%k3}
  19:	38 75 31             	cmp    %dh,0x31(%rbp)
  1c:	29 20                	sub    %esp,(%rax)
  1e:	34 2e                	xor    $0x2e,%al
  20:	39 2e                	cmp    %ebp,(%rsi)
  22:	32 00                	xor    (%rax),%al
  24:	47                   	rex.RXB
  25:	43                   	rex.XB
  26:	43 3a 20             	rex.XB cmp (%r8),%spl
  29:	28 44 65 62          	sub    %al,0x62(%rbp,%riz,2)
  2d:	69 61 6e 20 34 2e 38 	imul   $0x382e3420,0x6e(%rcx),%esp
  34:	2e 34 2d             	cs xor $0x2d,%al
  37:	31 29                	xor    %ebp,(%rcx)
  39:	20 34 2e             	and    %dh,(%rsi,%rbp,1)
  3c:	38 2e                	cmp    %ch,(%rsi)
  3e:	34 00                	xor    $0x0,%al

Disassembly of section .whatAmI:

0000000000000000 <.whatAmI>:
       0:	7f 45                	jg     47 <_init-0x400a31>
       2:	4c                   	rex.WR
       3:	46 02 01             	rex.RX add (%rcx),%r8b
       6:	01 00                	add    %eax,(%rax)
	...
      10:	02 00                	add    (%rax),%al
      12:	3e 00 01             	add    %al,%ds:(%rcx)
      15:	00 00                	add    %al,(%rax)
      17:	00 10                	add    %dl,(%rax)
      19:	04 40                	add    $0x40,%al
      1b:	00 00                	add    %al,(%rax)
      1d:	00 00                	add    %al,(%rax)
      1f:	00 40 00             	add    %al,0x0(%rax)
      22:	00 00                	add    %al,(%rax)
      24:	00 00                	add    %al,(%rax)
      26:	00 00                	add    %al,(%rax)
      28:	f8                   	clc    
      29:	14 00                	adc    $0x0,%al
	...
      33:	00 40 00             	add    %al,0x0(%rax)
      36:	38 00                	cmp    %al,(%rax)
      38:	08 00                	or     %al,(%rax)
      3a:	40 00 1e             	add    %bl,(%rsi)
      3d:	00 1b                	add    %bl,(%rbx)
      3f:	00 06                	add    %al,(%rsi)
      41:	00 00                	add    %al,(%rax)
      43:	00 05 00 00 00 40    	add    %al,0x40000000(%rip)        # 40000049 <_end+0x3f9eb8b1>
      49:	00 00                	add    %al,(%rax)
      4b:	00 00                	add    %al,(%rax)
      4d:	00 00                	add    %al,(%rax)
      4f:	00 40 00             	add    %al,0x0(%rax)
      52:	40 00 00             	add    %al,(%rax)
      55:	00 00                	add    %al,(%rax)
      57:	00 40 00             	add    %al,0x0(%rax)
      5a:	40 00 00             	add    %al,(%rax)
      5d:	00 00                	add    %al,(%rax)
      5f:	00 c0                	add    %al,%al
      61:	01 00                	add    %eax,(%rax)
      63:	00 00                	add    %al,(%rax)
      65:	00 00                	add    %al,(%rax)
      67:	00 c0                	add    %al,%al
      69:	01 00                	add    %eax,(%rax)
      6b:	00 00                	add    %al,(%rax)
      6d:	00 00                	add    %al,(%rax)
      6f:	00 08                	add    %cl,(%rax)
      71:	00 00                	add    %al,(%rax)
      73:	00 00                	add    %al,(%rax)
      75:	00 00                	add    %al,(%rax)
      77:	00 03                	add    %al,(%rbx)
      79:	00 00                	add    %al,(%rax)
      7b:	00 04 00             	add    %al,(%rax,%rax,1)
      7e:	00 00                	add    %al,(%rax)
      80:	00 02                	add    %al,(%rdx)
      82:	00 00                	add    %al,(%rax)
      84:	00 00                	add    %al,(%rax)
      86:	00 00                	add    %al,(%rax)
      88:	00 02                	add    %al,(%rdx)
      8a:	40 00 00             	add    %al,(%rax)
      8d:	00 00                	add    %al,(%rax)
      8f:	00 00                	add    %al,(%rax)
      91:	02 40 00             	add    0x0(%rax),%al
      94:	00 00                	add    %al,(%rax)
      96:	00 00                	add    %al,(%rax)
      98:	1c 00                	sbb    $0x0,%al
      9a:	00 00                	add    %al,(%rax)
      9c:	00 00                	add    %al,(%rax)
      9e:	00 00                	add    %al,(%rax)
      a0:	1c 00                	sbb    $0x0,%al
      a2:	00 00                	add    %al,(%rax)
      a4:	00 00                	add    %al,(%rax)
      a6:	00 00                	add    %al,(%rax)
      a8:	01 00                	add    %eax,(%rax)
      aa:	00 00                	add    %al,(%rax)
      ac:	00 00                	add    %al,(%rax)
      ae:	00 00                	add    %al,(%rax)
      b0:	01 00                	add    %eax,(%rax)
      b2:	00 00                	add    %al,(%rax)
      b4:	05 00 00 00 00       	add    $0x0,%eax
	...
      c1:	00 40 00             	add    %al,0x0(%rax)
      c4:	00 00                	add    %al,(%rax)
      c6:	00 00                	add    %al,(%rax)
      c8:	00 00                	add    %al,(%rax)
      ca:	40 00 00             	add    %al,(%rax)
      cd:	00 00                	add    %al,(%rax)
      cf:	00 24 09             	add    %ah,(%rcx,%rcx,1)
      d2:	00 00                	add    %al,(%rax)
      d4:	00 00                	add    %al,(%rax)
      d6:	00 00                	add    %al,(%rax)
      d8:	24 09                	and    $0x9,%al
	...
      e2:	20 00                	and    %al,(%rax)
      e4:	00 00                	add    %al,(%rax)
      e6:	00 00                	add    %al,(%rax)
      e8:	01 00                	add    %eax,(%rax)
      ea:	00 00                	add    %al,(%rax)
      ec:	06                   	(bad)  
      ed:	00 00                	add    %al,(%rax)
      ef:	00 28                	add    %ch,(%rax)
      f1:	09 00                	or     %eax,(%rax)
      f3:	00 00                	add    %al,(%rax)
      f5:	00 00                	add    %al,(%rax)
      f7:	00 28                	add    %ch,(%rax)
      f9:	09 60 00             	or     %esp,0x0(%rax)
      fc:	00 00                	add    %al,(%rax)
      fe:	00 00                	add    %al,(%rax)
     100:	28 09                	sub    %cl,(%rcx)
     102:	60                   	(bad)  
     103:	00 00                	add    %al,(%rax)
     105:	00 00                	add    %al,(%rax)
     107:	00 30                	add    %dh,(%rax)
     109:	02 00                	add    (%rax),%al
     10b:	00 00                	add    %al,(%rax)
     10d:	00 00                	add    %al,(%rax)
     10f:	00 38                	add    %bh,(%rax)
     111:	02 00                	add    (%rax),%al
     113:	00 00                	add    %al,(%rax)
     115:	00 00                	add    %al,(%rax)
     117:	00 00                	add    %al,(%rax)
     119:	00 20                	add    %ah,(%rax)
     11b:	00 00                	add    %al,(%rax)
     11d:	00 00                	add    %al,(%rax)
     11f:	00 02                	add    %al,(%rdx)
     121:	00 00                	add    %al,(%rax)
     123:	00 06                	add    %al,(%rsi)
     125:	00 00                	add    %al,(%rax)
     127:	00 40 09             	add    %al,0x9(%rax)
     12a:	00 00                	add    %al,(%rax)
     12c:	00 00                	add    %al,(%rax)
     12e:	00 00                	add    %al,(%rax)
     130:	40 09 60 00          	rex or %esp,0x0(%rax)
     134:	00 00                	add    %al,(%rax)
     136:	00 00                	add    %al,(%rax)
     138:	40 09 60 00          	rex or %esp,0x0(%rax)
     13c:	00 00                	add    %al,(%rax)
     13e:	00 00                	add    %al,(%rax)
     140:	d0 01                	rolb   (%rcx)
     142:	00 00                	add    %al,(%rax)
     144:	00 00                	add    %al,(%rax)
     146:	00 00                	add    %al,(%rax)
     148:	d0 01                	rolb   (%rcx)
     14a:	00 00                	add    %al,(%rax)
     14c:	00 00                	add    %al,(%rax)
     14e:	00 00                	add    %al,(%rax)
     150:	08 00                	or     %al,(%rax)
     152:	00 00                	add    %al,(%rax)
     154:	00 00                	add    %al,(%rax)
     156:	00 00                	add    %al,(%rax)
     158:	04 00                	add    $0x0,%al
     15a:	00 00                	add    %al,(%rax)
     15c:	04 00                	add    $0x0,%al
     15e:	00 00                	add    %al,(%rax)
     160:	1c 02                	sbb    $0x2,%al
     162:	00 00                	add    %al,(%rax)
     164:	00 00                	add    %al,(%rax)
     166:	00 00                	add    %al,(%rax)
     168:	1c 02                	sbb    $0x2,%al
     16a:	40 00 00             	add    %al,(%rax)
     16d:	00 00                	add    %al,(%rax)
     16f:	00 1c 02             	add    %bl,(%rdx,%rax,1)
     172:	40 00 00             	add    %al,(%rax)
     175:	00 00                	add    %al,(%rax)
     177:	00 44 00 00          	add    %al,0x0(%rax,%rax,1)
     17b:	00 00                	add    %al,(%rax)
     17d:	00 00                	add    %al,(%rax)
     17f:	00 44 00 00          	add    %al,0x0(%rax,%rax,1)
     183:	00 00                	add    %al,(%rax)
     185:	00 00                	add    %al,(%rax)
     187:	00 04 00             	add    %al,(%rax,%rax,1)
     18a:	00 00                	add    %al,(%rax)
     18c:	00 00                	add    %al,(%rax)
     18e:	00 00                	add    %al,(%rax)
     190:	50                   	push   %rax
     191:	e5 74                	in     $0x74,%eax
     193:	64 04 00             	fs add $0x0,%al
     196:	00 00                	add    %al,(%rax)
     198:	fc                   	cld    
     199:	07                   	(bad)  
     19a:	00 00                	add    %al,(%rax)
     19c:	00 00                	add    %al,(%rax)
     19e:	00 00                	add    %al,(%rax)
     1a0:	fc                   	cld    
     1a1:	07                   	(bad)  
     1a2:	40 00 00             	add    %al,(%rax)
     1a5:	00 00                	add    %al,(%rax)
     1a7:	00 fc                	add    %bh,%ah
     1a9:	07                   	(bad)  
     1aa:	40 00 00             	add    %al,(%rax)
     1ad:	00 00                	add    %al,(%rax)
     1af:	00 34 00             	add    %dh,(%rax,%rax,1)
     1b2:	00 00                	add    %al,(%rax)
     1b4:	00 00                	add    %al,(%rax)
     1b6:	00 00                	add    %al,(%rax)
     1b8:	34 00                	xor    $0x0,%al
     1ba:	00 00                	add    %al,(%rax)
     1bc:	00 00                	add    %al,(%rax)
     1be:	00 00                	add    %al,(%rax)
     1c0:	04 00                	add    $0x0,%al
     1c2:	00 00                	add    %al,(%rax)
     1c4:	00 00                	add    %al,(%rax)
     1c6:	00 00                	add    %al,(%rax)
     1c8:	51                   	push   %rcx
     1c9:	e5 74                	in     $0x74,%eax
     1cb:	64 06                	fs (bad) 
	...
     1f5:	00 00                	add    %al,(%rax)
     1f7:	00 10                	add    %dl,(%rax)
     1f9:	00 00                	add    %al,(%rax)
     1fb:	00 00                	add    %al,(%rax)
     1fd:	00 00                	add    %al,(%rax)
     1ff:	00 2f                	add    %ch,(%rdi)
     201:	6c                   	insb   (%dx),%es:(%rdi)
     202:	69 62 36 34 2f 6c 64 	imul   $0x646c2f34,0x36(%rdx),%esp
     209:	2d 6c 69 6e 75       	sub    $0x756e696c,%eax
     20e:	78 2d                	js     23d <_init-0x40083b>
     210:	78 38                	js     24a <_init-0x40082e>
     212:	36 2d 36 34 2e 73    	ss sub $0x732e3436,%eax
     218:	6f                   	outsl  %ds:(%rsi),(%dx)
     219:	2e 32 00             	xor    %cs:(%rax),%al
     21c:	04 00                	add    $0x0,%al
     21e:	00 00                	add    %al,(%rax)
     220:	10 00                	adc    %al,(%rax)
     222:	00 00                	add    %al,(%rax)
     224:	01 00                	add    %eax,(%rax)
     226:	00 00                	add    %al,(%rax)
     228:	47                   	rex.RXB
     229:	4e 55                	rex.WRX push %rbp
     22b:	00 00                	add    %al,(%rax)
     22d:	00 00                	add    %al,(%rax)
     22f:	00 02                	add    %al,(%rdx)
     231:	00 00                	add    %al,(%rax)
     233:	00 06                	add    %al,(%rsi)
     235:	00 00                	add    %al,(%rax)
     237:	00 20                	add    %ah,(%rax)
     239:	00 00                	add    %al,(%rax)
     23b:	00 04 00             	add    %al,(%rax,%rax,1)
     23e:	00 00                	add    %al,(%rax)
     240:	14 00                	adc    $0x0,%al
     242:	00 00                	add    %al,(%rax)
     244:	03 00                	add    (%rax),%eax
     246:	00 00                	add    %al,(%rax)
     248:	47                   	rex.RXB
     249:	4e 55                	rex.WRX push %rbp
     24b:	00 ac a4 5a b6 2e 93 	add    %ch,-0x6cd149a6(%rsp,%riz,4)
     252:	57                   	push   %rdi
     253:	0b 04 ca             	or     (%rdx,%rcx,8),%eax
     256:	1e                   	(bad)  
     257:	89 33                	mov    %esi,(%rbx)
     259:	6c                   	insb   (%dx),%es:(%rdi)
     25a:	af                   	scas   %es:(%rdi),%eax
     25b:	bd 0d 1d 96 24       	mov    $0x24961d0d,%ebp
     260:	01 00                	add    %eax,(%rax)
     262:	00 00                	add    %al,(%rax)
     264:	01 00                	add    %eax,(%rax)
     266:	00 00                	add    %al,(%rax)
     268:	01 00                	add    %eax,(%rax)
	...
     296:	00 00                	add    %al,(%rax)
     298:	0b 00                	or     (%rax),%eax
     29a:	00 00                	add    %al,(%rax)
     29c:	12 00                	adc    (%rax),%al
	...
     2ae:	00 00                	add    %al,(%rax)
     2b0:	13 00                	adc    (%rax),%eax
     2b2:	00 00                	add    %al,(%rax)
     2b4:	12 00                	adc    (%rax),%al
	...
     2c6:	00 00                	add    %al,(%rax)
     2c8:	25 00 00 00 20       	and    $0x20000000,%eax
	...
     2e1:	6c                   	insb   (%dx),%es:(%rdi)
     2e2:	69 62 63 2e 73 6f 2e 	imul   $0x2e6f732e,0x63(%rdx),%esp
     2e9:	36 00 70 75          	add    %dh,%ss:0x75(%rax)
     2ed:	74 63                	je     352 <_init-0x400726>
     2ef:	68 61 72 00 5f       	pushq  $0x5f007261
     2f4:	5f                   	pop    %rdi
     2f5:	6c                   	insb   (%dx),%es:(%rdi)
     2f6:	69 62 63 5f 73 74 61 	imul   $0x6174735f,0x63(%rdx),%esp
     2fd:	72 74                	jb     373 <_init-0x400705>
     2ff:	5f                   	pop    %rdi
     300:	6d                   	insl   (%dx),%es:(%rdi)
     301:	61                   	(bad)  
     302:	69 6e 00 5f 5f 67 6d 	imul   $0x6d675f5f,0x0(%rsi),%ebp
     309:	6f                   	outsl  %ds:(%rsi),(%dx)
     30a:	6e                   	outsb  %ds:(%rsi),(%dx)
     30b:	5f                   	pop    %rdi
     30c:	73 74                	jae    382 <_init-0x4006f6>
     30e:	61                   	(bad)  
     30f:	72 74                	jb     385 <_init-0x4006f3>
     311:	5f                   	pop    %rdi
     312:	5f                   	pop    %rdi
     313:	00 47 4c             	add    %al,0x4c(%rdi)
     316:	49                   	rex.WB
     317:	42                   	rex.X
     318:	43 5f                	rex.XB pop %r15
     31a:	32 2e                	xor    (%rsi),%ch
     31c:	32 2e                	xor    (%rsi),%ch
     31e:	35 00 00 00 02       	xor    $0x2000000,%eax
     323:	00 02                	add    %al,(%rdx)
     325:	00 00                	add    %al,(%rax)
     327:	00 01                	add    %al,(%rcx)
     329:	00 01                	add    %al,(%rcx)
     32b:	00 01                	add    %al,(%rcx)
     32d:	00 00                	add    %al,(%rax)
     32f:	00 10                	add    %dl,(%rax)
     331:	00 00                	add    %al,(%rax)
     333:	00 00                	add    %al,(%rax)
     335:	00 00                	add    %al,(%rax)
     337:	00 75 1a             	add    %dh,0x1a(%rbp)
     33a:	69 09 00 00 02 00    	imul   $0x20000,(%rcx),%ecx
     340:	34 00                	xor    $0x0,%al
     342:	00 00                	add    %al,(%rax)
     344:	00 00                	add    %al,(%rax)
     346:	00 00                	add    %al,(%rax)
     348:	10 0b                	adc    %cl,(%rbx)
     34a:	60                   	(bad)  
     34b:	00 00                	add    %al,(%rax)
     34d:	00 00                	add    %al,(%rax)
     34f:	00 06                	add    %al,(%rsi)
     351:	00 00                	add    %al,(%rax)
     353:	00 03                	add    %al,(%rbx)
	...
     35d:	00 00                	add    %al,(%rax)
     35f:	00 30                	add    %dh,(%rax)
     361:	0b 60 00             	or     0x0(%rax),%esp
     364:	00 00                	add    %al,(%rax)
     366:	00 00                	add    %al,(%rax)
     368:	07                   	(bad)  
     369:	00 00                	add    %al,(%rax)
     36b:	00 01                	add    %al,(%rcx)
	...
     375:	00 00                	add    %al,(%rax)
     377:	00 38                	add    %bh,(%rax)
     379:	0b 60 00             	or     0x0(%rax),%esp
     37c:	00 00                	add    %al,(%rax)
     37e:	00 00                	add    %al,(%rax)
     380:	07                   	(bad)  
     381:	00 00                	add    %al,(%rax)
     383:	00 02                	add    %al,(%rdx)
	...
     38d:	00 00                	add    %al,(%rax)
     38f:	00 40 0b             	add    %al,0xb(%rax)
     392:	60                   	(bad)  
     393:	00 00                	add    %al,(%rax)
     395:	00 00                	add    %al,(%rax)
     397:	00 07                	add    %al,(%rdi)
     399:	00 00                	add    %al,(%rax)
     39b:	00 03                	add    %al,(%rbx)
	...
     3a5:	00 00                	add    %al,(%rax)
     3a7:	00 48 83             	add    %cl,-0x7d(%rax)
     3aa:	ec                   	in     (%dx),%al
     3ab:	08 48 8b             	or     %cl,-0x75(%rax)
     3ae:	05 5d 07 20 00       	add    $0x20075d,%eax
     3b3:	48 85 c0             	test   %rax,%rax
     3b6:	74 05                	je     3bd <_init-0x4006bb>
     3b8:	e8 43 00 00 00       	callq  400 <_init-0x400678>
     3bd:	48 83 c4 08          	add    $0x8,%rsp
     3c1:	c3                   	retq   
	...
     3ce:	00 00                	add    %al,(%rax)
     3d0:	ff 35 4a 07 20 00    	pushq  0x20074a(%rip)        # 200b20 <_init-0x1fff58>
     3d6:	ff 25 4c 07 20 00    	jmpq   *0x20074c(%rip)        # 200b28 <_init-0x1fff50>
     3dc:	0f 1f 40 00          	nopl   0x0(%rax)
     3e0:	ff 25 4a 07 20 00    	jmpq   *0x20074a(%rip)        # 200b30 <_init-0x1fff48>
     3e6:	68 00 00 00 00       	pushq  $0x0
     3eb:	e9 e0 ff ff ff       	jmpq   3d0 <_init-0x4006a8>
     3f0:	ff 25 42 07 20 00    	jmpq   *0x200742(%rip)        # 200b38 <_init-0x1fff40>
     3f6:	68 01 00 00 00       	pushq  $0x1
     3fb:	e9 d0 ff ff ff       	jmpq   3d0 <_init-0x4006a8>
     400:	ff 25 3a 07 20 00    	jmpq   *0x20073a(%rip)        # 200b40 <_init-0x1fff38>
     406:	68 02 00 00 00       	pushq  $0x2
     40b:	e9 c0 ff ff ff       	jmpq   3d0 <_init-0x4006a8>
     410:	31 ed                	xor    %ebp,%ebp
     412:	49 89 d1             	mov    %rdx,%r9
     415:	5e                   	pop    %rsi
     416:	48 89 e2             	mov    %rsp,%rdx
     419:	48 83 e4 f0          	and    $0xfffffffffffffff0,%rsp
     41d:	50                   	push   %rax
     41e:	54                   	push   %rsp
     41f:	49 c7 c0 10 06 40 00 	mov    $0x400610,%r8
     426:	48 c7 c1 a0 05 40 00 	mov    $0x4005a0,%rcx
     42d:	48 c7 c7 06 05 40 00 	mov    $0x400506,%rdi
     434:	e8 b7 ff ff ff       	callq  3f0 <_init-0x400688>
     439:	f4                   	hlt    
     43a:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)
     440:	b8 5f 0b 60 00       	mov    $0x600b5f,%eax
     445:	55                   	push   %rbp
     446:	48 2d 58 0b 60 00    	sub    $0x600b58,%rax
     44c:	48 83 f8 0e          	cmp    $0xe,%rax
     450:	48 89 e5             	mov    %rsp,%rbp
     453:	76 1b                	jbe    470 <_init-0x400608>
     455:	b8 00 00 00 00       	mov    $0x0,%eax
     45a:	48 85 c0             	test   %rax,%rax
     45d:	74 11                	je     470 <_init-0x400608>
     45f:	5d                   	pop    %rbp
     460:	bf 58 0b 60 00       	mov    $0x600b58,%edi
     465:	ff e0                	jmpq   *%rax
     467:	66 0f 1f 84 00 00 00 	nopw   0x0(%rax,%rax,1)
     46e:	00 00 
     470:	5d                   	pop    %rbp
     471:	c3                   	retq   
     472:	66 66 66 66 66 2e 0f 	data16 data16 data16 data16 nopw %cs:0x0(%rax,%rax,1)
     479:	1f 84 00 00 00 00 00 
     480:	be 58 0b 60 00       	mov    $0x600b58,%esi
     485:	55                   	push   %rbp
     486:	48 81 ee 58 0b 60 00 	sub    $0x600b58,%rsi
     48d:	48 c1 fe 03          	sar    $0x3,%rsi
     491:	48 89 e5             	mov    %rsp,%rbp
     494:	48 89 f0             	mov    %rsi,%rax
     497:	48 c1 e8 3f          	shr    $0x3f,%rax
     49b:	48 01 c6             	add    %rax,%rsi
     49e:	48 d1 fe             	sar    %rsi
     4a1:	74 15                	je     4b8 <_init-0x4005c0>
     4a3:	b8 00 00 00 00       	mov    $0x0,%eax
     4a8:	48 85 c0             	test   %rax,%rax
     4ab:	74 0b                	je     4b8 <_init-0x4005c0>
     4ad:	5d                   	pop    %rbp
     4ae:	bf 58 0b 60 00       	mov    $0x600b58,%edi
     4b3:	ff e0                	jmpq   *%rax
     4b5:	0f 1f 00             	nopl   (%rax)
     4b8:	5d                   	pop    %rbp
     4b9:	c3                   	retq   
     4ba:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)
     4c0:	80 3d 91 06 20 00 00 	cmpb   $0x0,0x200691(%rip)        # 200b58 <_init-0x1fff20>
     4c7:	75 11                	jne    4da <_init-0x40059e>
     4c9:	55                   	push   %rbp
     4ca:	48 89 e5             	mov    %rsp,%rbp
     4cd:	e8 6e ff ff ff       	callq  440 <_init-0x400638>
     4d2:	5d                   	pop    %rbp
     4d3:	c6 05 7e 06 20 00 01 	movb   $0x1,0x20067e(%rip)        # 200b58 <_init-0x1fff20>
     4da:	f3 c3                	repz retq 
     4dc:	0f 1f 40 00          	nopl   0x0(%rax)
     4e0:	bf 38 09 60 00       	mov    $0x600938,%edi
     4e5:	48 83 3f 00          	cmpq   $0x0,(%rdi)
     4e9:	75 05                	jne    4f0 <_init-0x400588>
     4eb:	eb 93                	jmp    480 <_init-0x4005f8>
     4ed:	0f 1f 00             	nopl   (%rax)
     4f0:	b8 00 00 00 00       	mov    $0x0,%eax
     4f5:	48 85 c0             	test   %rax,%rax
     4f8:	74 f1                	je     4eb <_init-0x40058d>
     4fa:	55                   	push   %rbp
     4fb:	48 89 e5             	mov    %rsp,%rbp
     4fe:	ff d0                	callq  *%rax
     500:	5d                   	pop    %rbp
     501:	e9 7a ff ff ff       	jmpq   480 <_init-0x4005f8>
     506:	55                   	push   %rbp
     507:	48 89 e5             	mov    %rsp,%rbp
     50a:	48 81 ec 80 01 00 00 	sub    $0x180,%rsp
     511:	48 8d 85 80 fe ff ff 	lea    -0x180(%rbp),%rax
     518:	ba 80 06 40 00       	mov    $0x400680,%edx
     51d:	b9 2f 00 00 00       	mov    $0x2f,%ecx
     522:	48 89 c7             	mov    %rax,%rdi
     525:	48 89 d6             	mov    %rdx,%rsi
     528:	f3 48 a5             	rep movsq %ds:(%rsi),%es:(%rdi)
     52b:	48 89 f2             	mov    %rsi,%rdx
     52e:	48 89 f8             	mov    %rdi,%rax
     531:	8b 0a                	mov    (%rdx),%ecx
     533:	89 08                	mov    %ecx,(%rax)
     535:	48 8d 40 04          	lea    0x4(%rax),%rax
     539:	48 8d 52 04          	lea    0x4(%rdx),%rdx
     53d:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%rbp)
     544:	eb 34                	jmp    57a <_init-0x4004fe>
     546:	8b 45 fc             	mov    -0x4(%rbp),%eax
     549:	48 98                	cltq   
     54b:	8b 8c 85 80 fe ff ff 	mov    -0x180(%rbp,%rax,4),%ecx
     552:	ba 41 2f 00 bd       	mov    $0xbd002f41,%edx
     557:	89 c8                	mov    %ecx,%eax
     559:	f7 ea                	imul   %edx
     55b:	8d 04 0a             	lea    (%rdx,%rcx,1),%eax
     55e:	c1 f8 0a             	sar    $0xa,%eax
     561:	89 c2                	mov    %eax,%edx
     563:	89 c8                	mov    %ecx,%eax
     565:	c1 f8 1f             	sar    $0x1f,%eax
     568:	29 c2                	sub    %eax,%edx
     56a:	89 d0                	mov    %edx,%eax
     56c:	0f be c0             	movsbl %al,%eax
     56f:	89 c7                	mov    %eax,%edi
     571:	e8 6a fe ff ff       	callq  3e0 <_init-0x400698>
     576:	83 45 fc 01          	addl   $0x1,-0x4(%rbp)
     57a:	8b 45 fc             	mov    -0x4(%rbp),%eax
     57d:	48 98                	cltq   
     57f:	8b 84 85 80 fe ff ff 	mov    -0x180(%rbp,%rax,4),%eax
     586:	85 c0                	test   %eax,%eax
     588:	75 bc                	jne    546 <_init-0x400532>
     58a:	b8 00 00 00 00       	mov    $0x0,%eax
     58f:	c9                   	leaveq 
     590:	c3                   	retq   
     591:	66 2e 0f 1f 84 00 00 	nopw   %cs:0x0(%rax,%rax,1)
     598:	00 00 00 
     59b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)
     5a0:	41 57                	push   %r15
     5a2:	41 89 ff             	mov    %edi,%r15d
     5a5:	41 56                	push   %r14
     5a7:	49 89 f6             	mov    %rsi,%r14
     5aa:	41 55                	push   %r13
     5ac:	49 89 d5             	mov    %rdx,%r13
     5af:	41 54                	push   %r12
     5b1:	4c 8d 25 70 03 20 00 	lea    0x200370(%rip),%r12        # 200928 <_init-0x200150>
     5b8:	55                   	push   %rbp
     5b9:	48 8d 2d 70 03 20 00 	lea    0x200370(%rip),%rbp        # 200930 <_init-0x200148>
     5c0:	53                   	push   %rbx
     5c1:	4c 29 e5             	sub    %r12,%rbp
     5c4:	31 db                	xor    %ebx,%ebx
     5c6:	48 c1 fd 03          	sar    $0x3,%rbp
     5ca:	48 83 ec 08          	sub    $0x8,%rsp
     5ce:	e8 d5 fd ff ff       	callq  3a8 <_init-0x4006d0>
     5d3:	48 85 ed             	test   %rbp,%rbp
     5d6:	74 1e                	je     5f6 <_init-0x400482>
     5d8:	0f 1f 84 00 00 00 00 	nopl   0x0(%rax,%rax,1)
     5df:	00 
     5e0:	4c 89 ea             	mov    %r13,%rdx
     5e3:	4c 89 f6             	mov    %r14,%rsi
     5e6:	44 89 ff             	mov    %r15d,%edi
     5e9:	41 ff 14 dc          	callq  *(%r12,%rbx,8)
     5ed:	48 83 c3 01          	add    $0x1,%rbx
     5f1:	48 39 eb             	cmp    %rbp,%rbx
     5f4:	75 ea                	jne    5e0 <_init-0x400498>
     5f6:	48 83 c4 08          	add    $0x8,%rsp
     5fa:	5b                   	pop    %rbx
     5fb:	5d                   	pop    %rbp
     5fc:	41 5c                	pop    %r12
     5fe:	41 5d                	pop    %r13
     600:	41 5e                	pop    %r14
     602:	41 5f                	pop    %r15
     604:	c3                   	retq   
     605:	66 66 2e 0f 1f 84 00 	data16 nopw %cs:0x0(%rax,%rax,1)
     60c:	00 00 00 00 
     610:	f3 c3                	repz retq 
     612:	00 00                	add    %al,(%rax)
     614:	48 83 ec 08          	sub    $0x8,%rsp
     618:	48 83 c4 08          	add    $0x8,%rsp
     61c:	c3                   	retq   
	...
     63d:	00 00                	add    %al,(%rax)
     63f:	00 01                	add    %al,(%rcx)
     641:	00 02                	add    %al,(%rdx)
	...
     67f:	00 16                	add    %dl,(%rsi)
     681:	1b 04 00             	sbb    (%rax,%rax,1),%eax
     684:	4b 68 03 00 d7 75    	rex.WXB pushq $0x75d70003
     68a:	01 00                	add    %eax,(%rax)
     68c:	11 6f 02             	adc    %ebp,0x2(%rdi)
     68f:	00 7c 74 02          	add    %bh,0x2(%rsp,%rsi,2)
     693:	00 65 59             	add    %ah,0x59(%rbp)
     696:	02 00                	add    (%rax),%al
     698:	93                   	xchg   %eax,%ebx
     699:	8f 02                	popq   (%rdx)
     69b:	00 60 ad             	add    %ah,-0x53(%rax)
     69e:	00 00                	add    %al,(%rax)
     6a0:	8f                   	(bad)  
     6a1:	4e 02 00             	rex.WRX add (%rax),%r8b
     6a4:	e7 79                	out    %eax,$0x79
     6a6:	02 00                	add    (%rax),%al
     6a8:	93                   	xchg   %eax,%ebx
     6a9:	8f 02                	popq   (%rdx)
     6ab:	00 60 ad             	add    %ah,-0x53(%rax)
     6ae:	00 00                	add    %al,(%rax)
     6b0:	65 59                	gs pop %rcx
     6b2:	02 00                	add    (%rax),%al
     6b4:	a6                   	cmpsb  %es:(%rdi),%ds:(%rsi)
     6b5:	69 02 00 0d 2e 02    	imul   $0x22e0d00,(%rdx),%eax
     6bb:	00 e7                	add    %ah,%bh
     6bd:	79 02                	jns    6c1 <_init-0x4003b7>
     6bf:	00 24 49             	add    %ah,(%rcx,%rcx,2)
     6c2:	02 00                	add    (%rax),%al
     6c4:	24 49                	and    $0x49,%al
     6c6:	02 00                	add    (%rax),%al
     6c8:	65 59                	gs pop %rcx
     6ca:	02 00                	add    (%rax),%al
     6cc:	11 6f 02             	adc    %ebp,0x2(%rdi)
     6cf:	00 65 59             	add    %ah,0x59(%rbp)
     6d2:	02 00                	add    (%rax),%al
     6d4:	60                   	(bad)  
     6d5:	ad                   	lods   %ds:(%rsi),%eax
     6d6:	00 00                	add    %al,(%rax)
     6d8:	cc                   	int3   
     6d9:	1d 02 00 37 23       	sbb    $0x23370002,%eax
     6de:	02 00                	add    (%rax),%al
     6e0:	60                   	(bad)  
     6e1:	ad                   	lods   %ds:(%rsi),%eax
     6e2:	00 00                	add    %al,(%rax)
     6e4:	3b 64 02 00          	cmp    0x0(%rdx,%rax,1),%esp
     6e8:	e7 79                	out    %eax,$0x79
     6ea:	02 00                	add    (%rax),%al
     6ec:	37                   	(bad)  
     6ed:	23 02                	and    (%rdx),%eax
     6ef:	00 60 ad             	add    %ah,-0x53(%rax)
     6f2:	00 00                	add    %al,(%rax)
     6f4:	78 33                	js     729 <_init-0x40034f>
     6f6:	02 00                	add    (%rax),%al
     6f8:	8b 0d 02 00 93 8f    	mov    -0x706cfffe(%rip),%ecx        # ffffffff8f930700 <_end+0xffffffff8f31bf68>
     6fe:	02 00                	add    (%rax),%al
     700:	8b 0d 02 00 fa 53    	mov    0x53fa0002(%rip),%ecx        # 53fa0708 <_end+0x5398bf70>
     706:	02 00                	add    (%rax),%al
     708:	60                   	(bad)  
     709:	ad                   	lods   %ds:(%rsi),%eax
     70a:	00 00                	add    %al,(%rax)
     70c:	24 49                	and    $0x49,%al
     70e:	02 00                	add    (%rax),%al
     710:	65 59                	gs pop %rcx
     712:	02 00                	add    (%rax),%al
     714:	0d 2e 02 00 a6       	or     $0xa600022e,%eax
     719:	69 02 00 8b 0d 02    	imul   $0x20d8b00,(%rdx),%eax
     71f:	00 cc                	add    %cl,%ah
     721:	1d 02 00 65 59       	sbb    $0x59650002,%eax
     726:	02 00                	add    (%rax),%al
     728:	60                   	(bad)  
     729:	ad                   	lods   %ds:(%rsi),%eax
     72a:	00 00                	add    %al,(%rax)
     72c:	37                   	(bad)  
     72d:	23 02                	and    (%rdx),%eax
     72f:	00 11                	add    %dl,(%rcx)
     731:	6f                   	outsl  %ds:(%rsi),(%dx)
     732:	02 00                	add    (%rax),%al
     734:	7c 74                	jl     7aa <_init-0x4002ce>
     736:	02 00                	add    (%rax),%al
     738:	65 59                	gs pop %rcx
     73a:	02 00                	add    (%rax),%al
     73c:	cb                   	lret   
     73d:	b2 00                	mov    $0x0,%dl
     73f:	00 60 ad             	add    %ah,-0x53(%rax)
     742:	00 00                	add    %al,(%rax)
     744:	c4                   	(bad)  
     745:	9b                   	fwait
     746:	01 00                	add    %eax,(%rax)
     748:	37                   	(bad)  
     749:	23 02                	and    (%rdx),%eax
     74b:	00 11                	add    %dl,(%rcx)
     74d:	6f                   	outsl  %ds:(%rsi),(%dx)
     74e:	02 00                	add    (%rax),%al
     750:	60                   	(bad)  
     751:	ad                   	lods   %ds:(%rsi),%eax
     752:	00 00                	add    %al,(%rax)
     754:	37                   	(bad)  
     755:	23 02                	and    (%rdx),%eax
     757:	00 11                	add    %dl,(%rcx)
     759:	6f                   	outsl  %ds:(%rsi),(%dx)
     75a:	02 00                	add    (%rax),%al
     75c:	d0 5e 02             	rcrb   0x2(%rsi)
     75f:	00 37                	add    %dh,(%rdi)
     761:	23 02                	and    (%rdx),%eax
     763:	00 a6 69 02 00 8b    	add    %ah,-0x74fffd97(%rsi)
     769:	0d 02 00 60 ad       	or     $0xad600002,%eax
     76e:	00 00                	add    %al,(%rax)
     770:	e7 79                	out    %eax,$0x79
     772:	02 00                	add    (%rax),%al
     774:	fa                   	cli    
     775:	53                   	push   %rbx
     776:	02 00                	add    (%rax),%al
     778:	60                   	(bad)  
     779:	ad                   	lods   %ds:(%rsi),%eax
     77a:	00 00                	add    %al,(%rax)
     77c:	d0 5e 02             	rcrb   0x2(%rsi)
     77f:	00 a6 69 02 00 37    	add    %ah,0x37000269(%rsi)
     785:	23 02                	and    (%rdx),%eax
     787:	00 8f 4e 02 00 e3    	add    %cl,-0x1cfffdb2(%rdi)
     78d:	38 02                	cmp    %al,(%rdx)
     78f:	00 65 59             	add    %ah,0x59(%rbp)
     792:	02 00                	add    (%rax),%al
     794:	60                   	(bad)  
     795:	ad                   	lods   %ds:(%rsi),%eax
     796:	00 00                	add    %al,(%rax)
     798:	37                   	(bad)  
     799:	23 02                	and    (%rdx),%eax
     79b:	00 11                	add    %dl,(%rcx)
     79d:	6f                   	outsl  %ds:(%rsi),(%dx)
     79e:	02 00                	add    (%rax),%al
     7a0:	d0 5e 02             	rcrb   0x2(%rsi)
     7a3:	00 37                	add    %dh,(%rdi)
     7a5:	23 02                	and    (%rdx),%eax
     7a7:	00 61 18             	add    %ah,0x18(%rcx)
     7aa:	02 00                	add    (%rax),%al
     7ac:	e3 38                	jrcxz  7e6 <_init-0x400292>
     7ae:	02 00                	add    (%rax),%al
     7b0:	8b 0d 02 00 24 49    	mov    0x49240002(%rip),%ecx        # 492407b8 <_end+0x48c2c020>
     7b6:	02 00                	add    (%rax),%al
     7b8:	3a f9                	cmp    %cl,%bh
     7ba:	00 00                	add    %al,(%rax)
     7bc:	60                   	(bad)  
     7bd:	ad                   	lods   %ds:(%rsi),%eax
     7be:	00 00                	add    %al,(%rax)
     7c0:	16                   	(bad)  
     7c1:	1b 04 00             	sbb    (%rax,%rax,1),%eax
     7c4:	4b 68 03 00 b1 c1    	rex.WXB pushq $0xffffffffc1b10003
     7ca:	01 00                	add    %eax,(%rax)
     7cc:	e3 38                	jrcxz  806 <_init-0x400272>
     7ce:	02 00                	add    (%rax),%al
     7d0:	0d 2e 02 00 8b       	or     $0x8b00022e,%eax
     7d5:	0d 02 00 fa 53       	or     $0x53fa0002,%eax
     7da:	02 00                	add    (%rax),%al
     7dc:	60                   	(bad)  
     7dd:	ad                   	lods   %ds:(%rsi),%eax
     7de:	00 00                	add    %al,(%rax)
     7e0:	8b 0d 02 00 11 6f    	mov    0x6f110002(%rip),%ecx        # 6f1107e8 <_end+0x6eafc050>
     7e6:	02 00                	add    (%rax),%al
     7e8:	81 20 04 00 4f a9    	andl   $0xa94f0004,(%rax)
     7ee:	03 00                	add    (%rax),%eax
     7f0:	cb                   	lret   
     7f1:	b2 00                	mov    $0x0,%dl
     7f3:	00 2e                	add    %ch,(%rsi)
     7f5:	36 00 00             	add    %al,%ss:(%rax)
     7f8:	00 00                	add    %al,(%rax)
     7fa:	00 00                	add    %al,(%rax)
     7fc:	01 1b                	add    %ebx,(%rbx)
     7fe:	03 3b                	add    (%rbx),%edi
     800:	30 00                	xor    %al,(%rax)
     802:	00 00                	add    %al,(%rax)
     804:	05 00 00 00 d4       	add    $0xd4000000,%eax
     809:	fb                   	sti    
     80a:	ff                   	(bad)  
     80b:	ff                   	(bad)  
     80c:	7c 00                	jl     80e <_init-0x40026a>
     80e:	00 00                	add    %al,(%rax)
     810:	14 fc                	adc    $0xfc,%al
     812:	ff                   	(bad)  
     813:	ff 4c 00 00          	decl   0x0(%rax,%rax,1)
     817:	00 0a                	add    %cl,(%rdx)
     819:	fd                   	std    
     81a:	ff                   	(bad)  
     81b:	ff a4 00 00 00 a4 fd 	jmpq   *-0x25c0000(%rax,%rax,1)
     822:	ff                   	(bad)  
     823:	ff c4                	inc    %esp
     825:	00 00                	add    %al,(%rax)
     827:	00 14 fe             	add    %dl,(%rsi,%rdi,8)
     82a:	ff                   	(bad)  
     82b:	ff 0c 01             	decl   (%rcx,%rax,1)
     82e:	00 00                	add    %al,(%rax)
     830:	14 00                	adc    $0x0,%al
     832:	00 00                	add    %al,(%rax)
     834:	00 00                	add    %al,(%rax)
     836:	00 00                	add    %al,(%rax)
     838:	01 7a 52             	add    %edi,0x52(%rdx)
     83b:	00 01                	add    %al,(%rcx)
     83d:	78 10                	js     84f <_init-0x400229>
     83f:	01 1b                	add    %ebx,(%rbx)
     841:	0c 07                	or     $0x7,%al
     843:	08 90 01 07 10 14    	or     %dl,0x14100701(%rax)
     849:	00 00                	add    %al,(%rax)
     84b:	00 1c 00             	add    %bl,(%rax,%rax,1)
     84e:	00 00                	add    %al,(%rax)
     850:	c0 fb ff             	sar    $0xff,%bl
     853:	ff 2a                	ljmpq  *(%rdx)
	...
     85d:	00 00                	add    %al,(%rax)
     85f:	00 14 00             	add    %dl,(%rax,%rax,1)
     862:	00 00                	add    %al,(%rax)
     864:	00 00                	add    %al,(%rax)
     866:	00 00                	add    %al,(%rax)
     868:	01 7a 52             	add    %edi,0x52(%rdx)
     86b:	00 01                	add    %al,(%rcx)
     86d:	78 10                	js     87f <_init-0x4001f9>
     86f:	01 1b                	add    %ebx,(%rbx)
     871:	0c 07                	or     $0x7,%al
     873:	08 90 01 00 00 24    	or     %dl,0x24000001(%rax)
     879:	00 00                	add    %al,(%rax)
     87b:	00 1c 00             	add    %bl,(%rax,%rax,1)
     87e:	00 00                	add    %al,(%rax)
     880:	50                   	push   %rax
     881:	fb                   	sti    
     882:	ff                   	(bad)  
     883:	ff 40 00             	incl   0x0(%rax)
     886:	00 00                	add    %al,(%rax)
     888:	00 0e                	add    %cl,(%rsi)
     88a:	10 46 0e             	adc    %al,0xe(%rsi)
     88d:	18 4a 0f             	sbb    %cl,0xf(%rdx)
     890:	0b 77 08             	or     0x8(%rdi),%esi
     893:	80 00 3f             	addb   $0x3f,(%rax)
     896:	1a 3b                	sbb    (%rbx),%bh
     898:	2a 33                	sub    (%rbx),%dh
     89a:	24 22                	and    $0x22,%al
     89c:	00 00                	add    %al,(%rax)
     89e:	00 00                	add    %al,(%rax)
     8a0:	1c 00                	sbb    $0x0,%al
     8a2:	00 00                	add    %al,(%rax)
     8a4:	44 00 00             	add    %r8b,(%rax)
     8a7:	00 5e fc             	add    %bl,-0x4(%rsi)
     8aa:	ff                   	(bad)  
     8ab:	ff 8b 00 00 00 00    	decl   0x0(%rbx)
     8b1:	41 0e                	rex.B (bad) 
     8b3:	10 86 02 43 0d 06    	adc    %al,0x60d4302(%rsi)
     8b9:	02 86 0c 07 08 00    	add    0x8070c(%rsi),%al
     8bf:	00 44 00 00          	add    %al,0x0(%rax,%rax,1)
     8c3:	00 64 00 00          	add    %ah,0x0(%rax,%rax,1)
     8c7:	00 d8                	add    %bl,%al
     8c9:	fc                   	cld    
     8ca:	ff                   	(bad)  
     8cb:	ff 65 00             	jmpq   *0x0(%rbp)
     8ce:	00 00                	add    %al,(%rax)
     8d0:	00 42 0e             	add    %al,0xe(%rdx)
     8d3:	10 8f 02 45 0e 18    	adc    %cl,0x180e4502(%rdi)
     8d9:	8e 03                	mov    (%rbx),%es
     8db:	45 0e                	rex.RB (bad) 
     8dd:	20 8d 04 45 0e 28    	and    %cl,0x280e4504(%rbp)
     8e3:	8c 05 48 0e 30 86    	mov    %es,-0x79cff1b8(%rip)        # ffffffff86301731 <_end+0xffffffff85cecf99>
     8e9:	06                   	(bad)  
     8ea:	48 0e                	rex.W (bad) 
     8ec:	38 83 07 4d 0e 40    	cmp    %al,0x400e4d07(%rbx)
     8f2:	6c                   	insb   (%dx),%es:(%rdi)
     8f3:	0e                   	(bad)  
     8f4:	38 41 0e             	cmp    %al,0xe(%rcx)
     8f7:	30 41 0e             	xor    %al,0xe(%rcx)
     8fa:	28 42 0e             	sub    %al,0xe(%rdx)
     8fd:	20 42 0e             	and    %al,0xe(%rdx)
     900:	18 42 0e             	sbb    %al,0xe(%rdx)
     903:	10 42 0e             	adc    %al,0xe(%rdx)
     906:	08 00                	or     %al,(%rax)
     908:	14 00                	adc    $0x0,%al
     90a:	00 00                	add    %al,(%rax)
     90c:	ac                   	lods   %ds:(%rsi),%al
     90d:	00 00                	add    %al,(%rax)
     90f:	00 00                	add    %al,(%rax)
     911:	fd                   	std    
     912:	ff                   	(bad)  
     913:	ff 02                	incl   (%rdx)
	...
     925:	00 00                	add    %al,(%rax)
     927:	00 e0                	add    %ah,%al
     929:	04 40                	add    $0x40,%al
     92b:	00 00                	add    %al,(%rax)
     92d:	00 00                	add    %al,(%rax)
     92f:	00 c0                	add    %al,%al
     931:	04 40                	add    $0x40,%al
	...
     93f:	00 01                	add    %al,(%rcx)
     941:	00 00                	add    %al,(%rax)
     943:	00 00                	add    %al,(%rax)
     945:	00 00                	add    %al,(%rax)
     947:	00 01                	add    %al,(%rcx)
     949:	00 00                	add    %al,(%rax)
     94b:	00 00                	add    %al,(%rax)
     94d:	00 00                	add    %al,(%rax)
     94f:	00 0c 00             	add    %cl,(%rax,%rax,1)
     952:	00 00                	add    %al,(%rax)
     954:	00 00                	add    %al,(%rax)
     956:	00 00                	add    %al,(%rax)
     958:	a8 03                	test   $0x3,%al
     95a:	40 00 00             	add    %al,(%rax)
     95d:	00 00                	add    %al,(%rax)
     95f:	00 0d 00 00 00 00    	add    %cl,0x0(%rip)        # 965 <_init-0x400113>
     965:	00 00                	add    %al,(%rax)
     967:	00 14 06             	add    %dl,(%rsi,%rax,1)
     96a:	40 00 00             	add    %al,(%rax)
     96d:	00 00                	add    %al,(%rax)
     96f:	00 19                	add    %bl,(%rcx)
     971:	00 00                	add    %al,(%rax)
     973:	00 00                	add    %al,(%rax)
     975:	00 00                	add    %al,(%rax)
     977:	00 28                	add    %ch,(%rax)
     979:	09 60 00             	or     %esp,0x0(%rax)
     97c:	00 00                	add    %al,(%rax)
     97e:	00 00                	add    %al,(%rax)
     980:	1b 00                	sbb    (%rax),%eax
     982:	00 00                	add    %al,(%rax)
     984:	00 00                	add    %al,(%rax)
     986:	00 00                	add    %al,(%rax)
     988:	08 00                	or     %al,(%rax)
     98a:	00 00                	add    %al,(%rax)
     98c:	00 00                	add    %al,(%rax)
     98e:	00 00                	add    %al,(%rax)
     990:	1a 00                	sbb    (%rax),%al
     992:	00 00                	add    %al,(%rax)
     994:	00 00                	add    %al,(%rax)
     996:	00 00                	add    %al,(%rax)
     998:	30 09                	xor    %cl,(%rcx)
     99a:	60                   	(bad)  
     99b:	00 00                	add    %al,(%rax)
     99d:	00 00                	add    %al,(%rax)
     99f:	00 1c 00             	add    %bl,(%rax,%rax,1)
     9a2:	00 00                	add    %al,(%rax)
     9a4:	00 00                	add    %al,(%rax)
     9a6:	00 00                	add    %al,(%rax)
     9a8:	08 00                	or     %al,(%rax)
     9aa:	00 00                	add    %al,(%rax)
     9ac:	00 00                	add    %al,(%rax)
     9ae:	00 00                	add    %al,(%rax)
     9b0:	f5                   	cmc    
     9b1:	fe                   	(bad)  
     9b2:	ff 6f 00             	ljmpq  *0x0(%rdi)
     9b5:	00 00                	add    %al,(%rax)
     9b7:	00 60 02             	add    %ah,0x2(%rax)
     9ba:	40 00 00             	add    %al,(%rax)
     9bd:	00 00                	add    %al,(%rax)
     9bf:	00 05 00 00 00 00    	add    %al,0x0(%rip)        # 9c5 <_init-0x4000b3>
     9c5:	00 00                	add    %al,(%rax)
     9c7:	00 e0                	add    %ah,%al
     9c9:	02 40 00             	add    0x0(%rax),%al
     9cc:	00 00                	add    %al,(%rax)
     9ce:	00 00                	add    %al,(%rax)
     9d0:	06                   	(bad)  
     9d1:	00 00                	add    %al,(%rax)
     9d3:	00 00                	add    %al,(%rax)
     9d5:	00 00                	add    %al,(%rax)
     9d7:	00 80 02 40 00 00    	add    %al,0x4002(%rax)
     9dd:	00 00                	add    %al,(%rax)
     9df:	00 0a                	add    %cl,(%rdx)
     9e1:	00 00                	add    %al,(%rax)
     9e3:	00 00                	add    %al,(%rax)
     9e5:	00 00                	add    %al,(%rax)
     9e7:	00 40 00             	add    %al,0x0(%rax)
     9ea:	00 00                	add    %al,(%rax)
     9ec:	00 00                	add    %al,(%rax)
     9ee:	00 00                	add    %al,(%rax)
     9f0:	0b 00                	or     (%rax),%eax
     9f2:	00 00                	add    %al,(%rax)
     9f4:	00 00                	add    %al,(%rax)
     9f6:	00 00                	add    %al,(%rax)
     9f8:	18 00                	sbb    %al,(%rax)
     9fa:	00 00                	add    %al,(%rax)
     9fc:	00 00                	add    %al,(%rax)
     9fe:	00 00                	add    %al,(%rax)
     a00:	15 00 00 00 00       	adc    $0x0,%eax
	...
     a0d:	00 00                	add    %al,(%rax)
     a0f:	00 03                	add    %al,(%rbx)
     a11:	00 00                	add    %al,(%rax)
     a13:	00 00                	add    %al,(%rax)
     a15:	00 00                	add    %al,(%rax)
     a17:	00 18                	add    %bl,(%rax)
     a19:	0b 60 00             	or     0x0(%rax),%esp
     a1c:	00 00                	add    %al,(%rax)
     a1e:	00 00                	add    %al,(%rax)
     a20:	02 00                	add    (%rax),%al
     a22:	00 00                	add    %al,(%rax)
     a24:	00 00                	add    %al,(%rax)
     a26:	00 00                	add    %al,(%rax)
     a28:	48 00 00             	rex.W add %al,(%rax)
     a2b:	00 00                	add    %al,(%rax)
     a2d:	00 00                	add    %al,(%rax)
     a2f:	00 14 00             	add    %dl,(%rax,%rax,1)
     a32:	00 00                	add    %al,(%rax)
     a34:	00 00                	add    %al,(%rax)
     a36:	00 00                	add    %al,(%rax)
     a38:	07                   	(bad)  
     a39:	00 00                	add    %al,(%rax)
     a3b:	00 00                	add    %al,(%rax)
     a3d:	00 00                	add    %al,(%rax)
     a3f:	00 17                	add    %dl,(%rdi)
     a41:	00 00                	add    %al,(%rax)
     a43:	00 00                	add    %al,(%rax)
     a45:	00 00                	add    %al,(%rax)
     a47:	00 60 03             	add    %ah,0x3(%rax)
     a4a:	40 00 00             	add    %al,(%rax)
     a4d:	00 00                	add    %al,(%rax)
     a4f:	00 07                	add    %al,(%rdi)
     a51:	00 00                	add    %al,(%rax)
     a53:	00 00                	add    %al,(%rax)
     a55:	00 00                	add    %al,(%rax)
     a57:	00 48 03             	add    %cl,0x3(%rax)
     a5a:	40 00 00             	add    %al,(%rax)
     a5d:	00 00                	add    %al,(%rax)
     a5f:	00 08                	add    %cl,(%rax)
     a61:	00 00                	add    %al,(%rax)
     a63:	00 00                	add    %al,(%rax)
     a65:	00 00                	add    %al,(%rax)
     a67:	00 18                	add    %bl,(%rax)
     a69:	00 00                	add    %al,(%rax)
     a6b:	00 00                	add    %al,(%rax)
     a6d:	00 00                	add    %al,(%rax)
     a6f:	00 09                	add    %cl,(%rcx)
     a71:	00 00                	add    %al,(%rax)
     a73:	00 00                	add    %al,(%rax)
     a75:	00 00                	add    %al,(%rax)
     a77:	00 18                	add    %bl,(%rax)
     a79:	00 00                	add    %al,(%rax)
     a7b:	00 00                	add    %al,(%rax)
     a7d:	00 00                	add    %al,(%rax)
     a7f:	00 fe                	add    %bh,%dh
     a81:	ff                   	(bad)  
     a82:	ff 6f 00             	ljmpq  *0x0(%rdi)
     a85:	00 00                	add    %al,(%rax)
     a87:	00 28                	add    %ch,(%rax)
     a89:	03 40 00             	add    0x0(%rax),%eax
     a8c:	00 00                	add    %al,(%rax)
     a8e:	00 00                	add    %al,(%rax)
     a90:	ff                   	(bad)  
     a91:	ff                   	(bad)  
     a92:	ff 6f 00             	ljmpq  *0x0(%rdi)
     a95:	00 00                	add    %al,(%rax)
     a97:	00 01                	add    %al,(%rcx)
     a99:	00 00                	add    %al,(%rax)
     a9b:	00 00                	add    %al,(%rax)
     a9d:	00 00                	add    %al,(%rax)
     a9f:	00 f0                	add    %dh,%al
     aa1:	ff                   	(bad)  
     aa2:	ff 6f 00             	ljmpq  *0x0(%rdi)
     aa5:	00 00                	add    %al,(%rax)
     aa7:	00 20                	add    %ah,(%rax)
     aa9:	03 40 00             	add    0x0(%rax),%eax
	...
     b18:	40 09 60 00          	rex or %esp,0x0(%rax)
	...
     b30:	e6 03                	out    %al,$0x3
     b32:	40 00 00             	add    %al,(%rax)
     b35:	00 00                	add    %al,(%rax)
     b37:	00 f6                	add    %dh,%dh
     b39:	03 40 00             	add    0x0(%rax),%eax
     b3c:	00 00                	add    %al,(%rax)
     b3e:	00 00                	add    %al,(%rax)
     b40:	06                   	(bad)  
     b41:	04 40                	add    $0x40,%al
	...
     b57:	00 47 43             	add    %al,0x43(%rdi)
     b5a:	43 3a 20             	rex.XB cmp (%r8),%spl
     b5d:	28 44 65 62          	sub    %al,0x62(%rbp,%riz,2)
     b61:	69 61 6e 20 34 2e 39 	imul   $0x392e3420,0x6e(%rcx),%esp
     b68:	2e 32 2d 31 30 2b 64 	xor    %cs:0x642b3031(%rip),%ch        # 642b3ba0 <_end+0x63c9f408>
     b6f:	65 62                	gs (bad) {%k3}
     b71:	38 75 31             	cmp    %dh,0x31(%rbp)
     b74:	29 20                	sub    %esp,(%rax)
     b76:	34 2e                	xor    $0x2e,%al
     b78:	39 2e                	cmp    %ebp,(%rsi)
     b7a:	32 00                	xor    (%rax),%al
     b7c:	47                   	rex.RXB
     b7d:	43                   	rex.XB
     b7e:	43 3a 20             	rex.XB cmp (%r8),%spl
     b81:	28 44 65 62          	sub    %al,0x62(%rbp,%riz,2)
     b85:	69 61 6e 20 34 2e 38 	imul   $0x382e3420,0x6e(%rcx),%esp
     b8c:	2e 34 2d             	cs xor $0x2d,%al
     b8f:	31 29                	xor    %ebp,(%rcx)
     b91:	20 34 2e             	and    %dh,(%rsi,%rbp,1)
     b94:	38 2e                	cmp    %ch,(%rsi)
     b96:	34 00                	xor    $0x0,%al
     b98:	00 2e                	add    %ch,(%rsi)
     b9a:	73 79                	jae    c15 <_init-0x3ffe63>
     b9c:	6d                   	insl   (%dx),%es:(%rdi)
     b9d:	74 61                	je     c00 <_init-0x3ffe78>
     b9f:	62                   	(bad)  {%k3}
     ba0:	00 2e                	add    %ch,(%rsi)
     ba2:	73 74                	jae    c18 <_init-0x3ffe60>
     ba4:	72 74                	jb     c1a <_init-0x3ffe5e>
     ba6:	61                   	(bad)  
     ba7:	62                   	(bad)  {%k3}
     ba8:	00 2e                	add    %ch,(%rsi)
     baa:	73 68                	jae    c14 <_init-0x3ffe64>
     bac:	73 74                	jae    c22 <_init-0x3ffe56>
     bae:	72 74                	jb     c24 <_init-0x3ffe54>
     bb0:	61                   	(bad)  
     bb1:	62                   	(bad)  {%k3}
     bb2:	00 2e                	add    %ch,(%rsi)
     bb4:	69 6e 74 65 72 70 00 	imul   $0x707265,0x74(%rsi),%ebp
     bbb:	2e 6e                	outsb  %cs:(%rsi),(%dx)
     bbd:	6f                   	outsl  %ds:(%rsi),(%dx)
     bbe:	74 65                	je     c25 <_init-0x3ffe53>
     bc0:	2e 41                	cs rex.B
     bc2:	42                   	rex.X
     bc3:	49 2d 74 61 67 00    	rex.WB sub $0x676174,%rax
     bc9:	2e 6e                	outsb  %cs:(%rsi),(%dx)
     bcb:	6f                   	outsl  %ds:(%rsi),(%dx)
     bcc:	74 65                	je     c33 <_init-0x3ffe45>
     bce:	2e 67 6e             	outsb  %cs:(%esi),(%dx)
     bd1:	75 2e                	jne    c01 <_init-0x3ffe77>
     bd3:	62                   	(bad)  {%k3}
     bd4:	75 69                	jne    c3f <_init-0x3ffe39>
     bd6:	6c                   	insb   (%dx),%es:(%rdi)
     bd7:	64 2d 69 64 00 2e    	fs sub $0x2e006469,%eax
     bdd:	67 6e                	outsb  %ds:(%esi),(%dx)
     bdf:	75 2e                	jne    c0f <_init-0x3ffe69>
     be1:	68 61 73 68 00       	pushq  $0x687361
     be6:	2e 64 79 6e          	cs fs jns,pn c58 <_init-0x3ffe20>
     bea:	73 79                	jae    c65 <_init-0x3ffe13>
     bec:	6d                   	insl   (%dx),%es:(%rdi)
     bed:	00 2e                	add    %ch,(%rsi)
     bef:	64 79 6e             	fs jns c60 <_init-0x3ffe18>
     bf2:	73 74                	jae    c68 <_init-0x3ffe10>
     bf4:	72 00                	jb     bf6 <_init-0x3ffe82>
     bf6:	2e 67 6e             	outsb  %cs:(%esi),(%dx)
     bf9:	75 2e                	jne    c29 <_init-0x3ffe4f>
     bfb:	76 65                	jbe    c62 <_init-0x3ffe16>
     bfd:	72 73                	jb     c72 <_init-0x3ffe06>
     bff:	69 6f 6e 00 2e 67 6e 	imul   $0x6e672e00,0x6e(%rdi),%ebp
     c06:	75 2e                	jne    c36 <_init-0x3ffe42>
     c08:	76 65                	jbe    c6f <_init-0x3ffe09>
     c0a:	72 73                	jb     c7f <_init-0x3ffdf9>
     c0c:	69 6f 6e 5f 72 00 2e 	imul   $0x2e00725f,0x6e(%rdi),%ebp
     c13:	72 65                	jb     c7a <_init-0x3ffdfe>
     c15:	6c                   	insb   (%dx),%es:(%rdi)
     c16:	61                   	(bad)  
     c17:	2e 64 79 6e          	cs fs jns,pn c89 <_init-0x3ffdef>
     c1b:	00 2e                	add    %ch,(%rsi)
     c1d:	72 65                	jb     c84 <_init-0x3ffdf4>
     c1f:	6c                   	insb   (%dx),%es:(%rdi)
     c20:	61                   	(bad)  
     c21:	2e 70 6c             	jo,pn  c90 <_init-0x3ffde8>
     c24:	74 00                	je     c26 <_init-0x3ffe52>
     c26:	2e 69 6e 69 74 00 2e 	imul   $0x742e0074,%cs:0x69(%rsi),%ebp
     c2d:	74 
     c2e:	65 78 74             	gs js  ca5 <_init-0x3ffdd3>
     c31:	00 2e                	add    %ch,(%rsi)
     c33:	66 69 6e 69 00 2e    	imul   $0x2e00,0x69(%rsi),%bp
     c39:	72 6f                	jb     caa <_init-0x3ffdce>
     c3b:	64 61                	fs (bad) 
     c3d:	74 61                	je     ca0 <_init-0x3ffdd8>
     c3f:	00 2e                	add    %ch,(%rsi)
     c41:	65 68 5f 66 72 61    	gs pushq $0x6172665f
     c47:	6d                   	insl   (%dx),%es:(%rdi)
     c48:	65 5f                	gs pop %rdi
     c4a:	68 64 72 00 2e       	pushq  $0x2e007264
     c4f:	65 68 5f 66 72 61    	gs pushq $0x6172665f
     c55:	6d                   	insl   (%dx),%es:(%rdi)
     c56:	65 00 2e             	add    %ch,%gs:(%rsi)
     c59:	69 6e 69 74 5f 61 72 	imul   $0x72615f74,0x69(%rsi),%ebp
     c60:	72 61                	jb     cc3 <_init-0x3ffdb5>
     c62:	79 00                	jns    c64 <_init-0x3ffe14>
     c64:	2e 66 69 6e 69 5f 61 	imul   $0x615f,%cs:0x69(%rsi),%bp
     c6b:	72 72                	jb     cdf <_init-0x3ffd99>
     c6d:	61                   	(bad)  
     c6e:	79 00                	jns    c70 <_init-0x3ffe08>
     c70:	2e 6a 63             	cs pushq $0x63
     c73:	72 00                	jb     c75 <_init-0x3ffe03>
     c75:	2e 64 79 6e          	cs fs jns,pn ce7 <_init-0x3ffd91>
     c79:	61                   	(bad)  
     c7a:	6d                   	insl   (%dx),%es:(%rdi)
     c7b:	69 63 00 2e 67 6f 74 	imul   $0x746f672e,0x0(%rbx),%esp
     c82:	00 2e                	add    %ch,(%rsi)
     c84:	67 6f                	outsl  %ds:(%esi),(%dx)
     c86:	74 2e                	je     cb6 <_init-0x3ffdc2>
     c88:	70 6c                	jo     cf6 <_init-0x3ffd82>
     c8a:	74 00                	je     c8c <_init-0x3ffdec>
     c8c:	2e 64 61             	cs fs (bad) 
     c8f:	74 61                	je     cf2 <_init-0x3ffd86>
     c91:	00 2e                	add    %ch,(%rsi)
     c93:	62 73                	(bad)  {%k3}
     c95:	73 00                	jae    c97 <_init-0x3ffde1>
     c97:	2e 63 6f 6d          	movslq %cs:0x6d(%rdi),%ebp
     c9b:	6d                   	insl   (%dx),%es:(%rdi)
     c9c:	65 6e                	outsb  %gs:(%rsi),(%dx)
     c9e:	74 00                	je     ca0 <_init-0x3ffdd8>
	...
     cbc:	03 00                	add    (%rax),%eax
     cbe:	01 00                	add    %eax,(%rax)
     cc0:	00 02                	add    %al,(%rdx)
     cc2:	40 00 00             	add    %al,(%rax)
	...
     cd1:	00 00                	add    %al,(%rax)
     cd3:	00 03                	add    %al,(%rbx)
     cd5:	00 02                	add    %al,(%rdx)
     cd7:	00 1c 02             	add    %bl,(%rdx,%rax,1)
     cda:	40 00 00             	add    %al,(%rax)
	...
     ce9:	00 00                	add    %al,(%rax)
     ceb:	00 03                	add    %al,(%rbx)
     ced:	00 03                	add    %al,(%rbx)
     cef:	00 3c 02             	add    %bh,(%rdx,%rax,1)
     cf2:	40 00 00             	add    %al,(%rax)
	...
     d01:	00 00                	add    %al,(%rax)
     d03:	00 03                	add    %al,(%rbx)
     d05:	00 04 00             	add    %al,(%rax,%rax,1)
     d08:	60                   	(bad)  
     d09:	02 40 00             	add    0x0(%rax),%al
	...
     d1c:	03 00                	add    (%rax),%eax
     d1e:	05 00 80 02 40       	add    $0x40028000,%eax
	...
     d33:	00 03                	add    %al,(%rbx)
     d35:	00 06                	add    %al,(%rsi)
     d37:	00 e0                	add    %ah,%al
     d39:	02 40 00             	add    0x0(%rax),%al
	...
     d4c:	03 00                	add    (%rax),%eax
     d4e:	07                   	(bad)  
     d4f:	00 20                	add    %ah,(%rax)
     d51:	03 40 00             	add    0x0(%rax),%eax
	...
     d64:	03 00                	add    (%rax),%eax
     d66:	08 00                	or     %al,(%rax)
     d68:	28 03                	sub    %al,(%rbx)
     d6a:	40 00 00             	add    %al,(%rax)
	...
     d79:	00 00                	add    %al,(%rax)
     d7b:	00 03                	add    %al,(%rbx)
     d7d:	00 09                	add    %cl,(%rcx)
     d7f:	00 48 03             	add    %cl,0x3(%rax)
     d82:	40 00 00             	add    %al,(%rax)
	...
     d91:	00 00                	add    %al,(%rax)
     d93:	00 03                	add    %al,(%rbx)
     d95:	00 0a                	add    %cl,(%rdx)
     d97:	00 60 03             	add    %ah,0x3(%rax)
     d9a:	40 00 00             	add    %al,(%rax)
	...
     da9:	00 00                	add    %al,(%rax)
     dab:	00 03                	add    %al,(%rbx)
     dad:	00 0b                	add    %cl,(%rbx)
     daf:	00 a8 03 40 00 00    	add    %ch,0x4003(%rax)
	...
     dc1:	00 00                	add    %al,(%rax)
     dc3:	00 03                	add    %al,(%rbx)
     dc5:	00 0c 00             	add    %cl,(%rax,%rax,1)
     dc8:	d0 03                	rolb   (%rbx)
     dca:	40 00 00             	add    %al,(%rax)
	...
     dd9:	00 00                	add    %al,(%rax)
     ddb:	00 03                	add    %al,(%rbx)
     ddd:	00 0d 00 10 04 40    	add    %cl,0x40041000(%rip)        # 40041de3 <_end+0x3fa2d64b>
	...
     df3:	00 03                	add    %al,(%rbx)
     df5:	00 0e                	add    %cl,(%rsi)
     df7:	00 14 06             	add    %dl,(%rsi,%rax,1)
     dfa:	40 00 00             	add    %al,(%rax)
	...
     e09:	00 00                	add    %al,(%rax)
     e0b:	00 03                	add    %al,(%rbx)
     e0d:	00 0f                	add    %cl,(%rdi)
     e0f:	00 40 06             	add    %al,0x6(%rax)
     e12:	40 00 00             	add    %al,(%rax)
	...
     e21:	00 00                	add    %al,(%rax)
     e23:	00 03                	add    %al,(%rbx)
     e25:	00 10                	add    %dl,(%rax)
     e27:	00 fc                	add    %bh,%ah
     e29:	07                   	(bad)  
     e2a:	40 00 00             	add    %al,(%rax)
	...
     e39:	00 00                	add    %al,(%rax)
     e3b:	00 03                	add    %al,(%rbx)
     e3d:	00 11                	add    %dl,(%rcx)
     e3f:	00 30                	add    %dh,(%rax)
     e41:	08 40 00             	or     %al,0x0(%rax)
	...
     e54:	03 00                	add    (%rax),%eax
     e56:	12 00                	adc    (%rax),%al
     e58:	28 09                	sub    %cl,(%rcx)
     e5a:	60                   	(bad)  
	...
     e6b:	00 03                	add    %al,(%rbx)
     e6d:	00 13                	add    %dl,(%rbx)
     e6f:	00 30                	add    %dh,(%rax)
     e71:	09 60 00             	or     %esp,0x0(%rax)
	...
     e84:	03 00                	add    (%rax),%eax
     e86:	14 00                	adc    $0x0,%al
     e88:	38 09                	cmp    %cl,(%rcx)
     e8a:	60                   	(bad)  
	...
     e9b:	00 03                	add    %al,(%rbx)
     e9d:	00 15 00 40 09 60    	add    %dl,0x60094000(%rip)        # 60094ea3 <_end+0x5fa8070b>
	...
     eb3:	00 03                	add    %al,(%rbx)
     eb5:	00 16                	add    %dl,(%rsi)
     eb7:	00 10                	add    %dl,(%rax)
     eb9:	0b 60 00             	or     0x0(%rax),%esp
	...
     ecc:	03 00                	add    (%rax),%eax
     ece:	17                   	(bad)  
     ecf:	00 18                	add    %bl,(%rax)
     ed1:	0b 60 00             	or     0x0(%rax),%esp
	...
     ee4:	03 00                	add    (%rax),%eax
     ee6:	18 00                	sbb    %al,(%rax)
     ee8:	48 0b 60 00          	or     0x0(%rax),%rsp
	...
     efc:	03 00                	add    (%rax),%eax
     efe:	19 00                	sbb    %eax,(%rax)
     f00:	58                   	pop    %rax
     f01:	0b 60 00             	or     0x0(%rax),%esp
	...
     f14:	03 00                	add    (%rax),%eax
     f16:	1a 00                	sbb    (%rax),%al
	...
     f28:	01 00                	add    %eax,(%rax)
     f2a:	00 00                	add    %al,(%rax)
     f2c:	04 00                	add    $0x0,%al
     f2e:	f1                   	icebp  
     f2f:	ff 00                	incl   (%rax)
	...
     f3d:	00 00                	add    %al,(%rax)
     f3f:	00 0c 00             	add    %cl,(%rax,%rax,1)
     f42:	00 00                	add    %al,(%rax)
     f44:	01 00                	add    %eax,(%rax)
     f46:	14 00                	adc    $0x0,%al
     f48:	38 09                	cmp    %cl,(%rcx)
     f4a:	60                   	(bad)  
	...
     f57:	00 19                	add    %bl,(%rcx)
     f59:	00 00                	add    %al,(%rax)
     f5b:	00 02                	add    %al,(%rdx)
     f5d:	00 0d 00 40 04 40    	add    %cl,0x40044000(%rip)        # 40044f63 <_end+0x3fa307cb>
	...
     f6f:	00 2e                	add    %ch,(%rsi)
     f71:	00 00                	add    %al,(%rax)
     f73:	00 02                	add    %al,(%rdx)
     f75:	00 0d 00 80 04 40    	add    %cl,0x40048000(%rip)        # 40048f7b <_end+0x3fa347e3>
	...
     f87:	00 41 00             	add    %al,0x0(%rcx)
     f8a:	00 00                	add    %al,(%rax)
     f8c:	02 00                	add    (%rax),%al
     f8e:	0d 00 c0 04 40       	or     $0x4004c000,%eax
	...
     f9f:	00 57 00             	add    %dl,0x0(%rdi)
     fa2:	00 00                	add    %al,(%rax)
     fa4:	01 00                	add    %eax,(%rax)
     fa6:	19 00                	sbb    %eax,(%rax)
     fa8:	58                   	pop    %rax
     fa9:	0b 60 00             	or     0x0(%rax),%esp
     fac:	00 00                	add    %al,(%rax)
     fae:	00 00                	add    %al,(%rax)
     fb0:	01 00                	add    %eax,(%rax)
     fb2:	00 00                	add    %al,(%rax)
     fb4:	00 00                	add    %al,(%rax)
     fb6:	00 00                	add    %al,(%rax)
     fb8:	66 00 00             	data16 add %al,(%rax)
     fbb:	00 01                	add    %al,(%rcx)
     fbd:	00 13                	add    %dl,(%rbx)
     fbf:	00 30                	add    %dh,(%rax)
     fc1:	09 60 00             	or     %esp,0x0(%rax)
	...
     fd0:	8d 00                	lea    (%rax),%eax
     fd2:	00 00                	add    %al,(%rax)
     fd4:	02 00                	add    (%rax),%al
     fd6:	0d 00 e0 04 40       	or     $0x4004e000,%eax
	...
     fe7:	00 99 00 00 00 01    	add    %bl,0x1000000(%rcx)
     fed:	00 12                	add    %dl,(%rdx)
     fef:	00 28                	add    %ch,(%rax)
     ff1:	09 60 00             	or     %esp,0x0(%rax)
	...
    1000:	b8 00 00 00 04       	mov    $0x4000000,%eax
    1005:	00 f1                	add    %dh,%cl
    1007:	ff 00                	incl   (%rax)
	...
    1015:	00 00                	add    %al,(%rax)
    1017:	00 01                	add    %al,(%rcx)
    1019:	00 00                	add    %al,(%rax)
    101b:	00 04 00             	add    %al,(%rax,%rax,1)
    101e:	f1                   	icebp  
    101f:	ff 00                	incl   (%rax)
	...
    102d:	00 00                	add    %al,(%rax)
    102f:	00 c2                	add    %al,%dl
    1031:	00 00                	add    %al,(%rax)
    1033:	00 01                	add    %al,(%rcx)
    1035:	00 11                	add    %dl,(%rcx)
    1037:	00 20                	add    %ah,(%rax)
    1039:	09 40 00             	or     %eax,0x0(%rax)
	...
    1048:	d0 00                	rolb   (%rax)
    104a:	00 00                	add    %al,(%rax)
    104c:	01 00                	add    %eax,(%rax)
    104e:	14 00                	adc    $0x0,%al
    1050:	38 09                	cmp    %cl,(%rcx)
    1052:	60                   	(bad)  
	...
    1063:	00 04 00             	add    %al,(%rax,%rax,1)
    1066:	f1                   	icebp  
    1067:	ff 00                	incl   (%rax)
	...
    1075:	00 00                	add    %al,(%rax)
    1077:	00 dc                	add    %bl,%ah
    1079:	00 00                	add    %al,(%rax)
    107b:	00 00                	add    %al,(%rax)
    107d:	00 12                	add    %dl,(%rdx)
    107f:	00 30                	add    %dh,(%rax)
    1081:	09 60 00             	or     %esp,0x0(%rax)
	...
    1090:	ed                   	in     (%dx),%eax
    1091:	00 00                	add    %al,(%rax)
    1093:	00 01                	add    %al,(%rcx)
    1095:	00 15 00 40 09 60    	add    %dl,0x60094000(%rip)        # 6009509b <_end+0x5fa80903>
	...
    10a7:	00 f6                	add    %dh,%dh
    10a9:	00 00                	add    %al,(%rax)
    10ab:	00 00                	add    %al,(%rax)
    10ad:	00 12                	add    %dl,(%rdx)
    10af:	00 28                	add    %ch,(%rax)
    10b1:	09 60 00             	or     %esp,0x0(%rax)
	...
    10c0:	09 01                	or     %eax,(%rcx)
    10c2:	00 00                	add    %al,(%rax)
    10c4:	01 00                	add    %eax,(%rax)
    10c6:	17                   	(bad)  
    10c7:	00 18                	add    %bl,(%rax)
    10c9:	0b 60 00             	or     0x0(%rax),%esp
	...
    10d8:	1f                   	(bad)  
    10d9:	01 00                	add    %eax,(%rax)
    10db:	00 12                	add    %dl,(%rdx)
    10dd:	00 0d 00 10 06 40    	add    %cl,0x40061000(%rip)        # 400620e3 <_end+0x3fa4d94b>
    10e3:	00 00                	add    %al,(%rax)
    10e5:	00 00                	add    %al,(%rax)
    10e7:	00 02                	add    %al,(%rdx)
    10e9:	00 00                	add    %al,(%rax)
    10eb:	00 00                	add    %al,(%rax)
    10ed:	00 00                	add    %al,(%rax)
    10ef:	00 2f                	add    %ch,(%rdi)
    10f1:	01 00                	add    %eax,(%rax)
    10f3:	00 12                	add    %dl,(%rdx)
	...
    1105:	00 00                	add    %al,(%rax)
    1107:	00 44 01 00          	add    %al,0x0(%rcx,%rax,1)
    110b:	00 20                	add    %ah,(%rax)
	...
    111d:	00 00                	add    %al,(%rax)
    111f:	00 60 01             	add    %ah,0x1(%rax)
    1122:	00 00                	add    %al,(%rax)
    1124:	20 00                	and    %al,(%rax)
    1126:	18 00                	sbb    %al,(%rax)
    1128:	48 0b 60 00          	or     0x0(%rax),%rsp
	...
    1138:	6b 01 00             	imul   $0x0,(%rcx),%eax
    113b:	00 10                	add    %dl,(%rax)
    113d:	00 18                	add    %bl,(%rax)
    113f:	00 58 0b             	add    %bl,0xb(%rax)
    1142:	60                   	(bad)  
	...
    114f:	00 72 01             	add    %dh,0x1(%rdx)
    1152:	00 00                	add    %al,(%rax)
    1154:	12 00                	adc    (%rax),%al
    1156:	0e                   	(bad)  
    1157:	00 14 06             	add    %dl,(%rsi,%rax,1)
    115a:	40 00 00             	add    %al,(%rax)
	...
    1165:	00 00                	add    %al,(%rax)
    1167:	00 78 01             	add    %bh,0x1(%rax)
    116a:	00 00                	add    %al,(%rax)
    116c:	12 00                	adc    (%rax),%al
	...
    117e:	00 00                	add    %al,(%rax)
    1180:	97                   	xchg   %eax,%edi
    1181:	01 00                	add    %eax,(%rax)
    1183:	00 10                	add    %dl,(%rax)
    1185:	00 18                	add    %bl,(%rax)
    1187:	00 48 0b             	add    %cl,0xb(%rax)
    118a:	60                   	(bad)  
	...
    1197:	00 a4 01 00 00 20 00 	add    %ah,0x200000(%rcx,%rax,1)
	...
    11ae:	00 00                	add    %al,(%rax)
    11b0:	b3 01                	mov    $0x1,%bl
    11b2:	00 00                	add    %al,(%rax)
    11b4:	11 02                	adc    %eax,(%rdx)
    11b6:	18 00                	sbb    %al,(%rax)
    11b8:	50                   	push   %rax
    11b9:	0b 60 00             	or     0x0(%rax),%esp
	...
    11c8:	c0 01 00             	rolb   $0x0,(%rcx)
    11cb:	00 11                	add    %dl,(%rcx)
    11cd:	00 0f                	add    %cl,(%rdi)
    11cf:	00 40 06             	add    %al,0x6(%rax)
    11d2:	40 00 00             	add    %al,(%rax)
    11d5:	00 00                	add    %al,(%rax)
    11d7:	00 04 00             	add    %al,(%rax,%rax,1)
    11da:	00 00                	add    %al,(%rax)
    11dc:	00 00                	add    %al,(%rax)
    11de:	00 00                	add    %al,(%rax)
    11e0:	cf                   	iret   
    11e1:	01 00                	add    %eax,(%rax)
    11e3:	00 12                	add    %dl,(%rdx)
    11e5:	00 0d 00 a0 05 40    	add    %cl,0x4005a000(%rip)        # 4005b1eb <_end+0x3fa46a53>
    11eb:	00 00                	add    %al,(%rax)
    11ed:	00 00                	add    %al,(%rax)
    11ef:	00 65 00             	add    %ah,0x0(%rbp)
    11f2:	00 00                	add    %al,(%rax)
    11f4:	00 00                	add    %al,(%rax)
    11f6:	00 00                	add    %al,(%rax)
    11f8:	df 01                	fild   (%rcx)
    11fa:	00 00                	add    %al,(%rax)
    11fc:	10 00                	adc    %al,(%rax)
    11fe:	19 00                	sbb    %eax,(%rax)
    1200:	60                   	(bad)  
    1201:	0b 60 00             	or     0x0(%rax),%esp
	...
    1210:	e4 01                	in     $0x1,%al
    1212:	00 00                	add    %al,(%rax)
    1214:	12 00                	adc    (%rax),%al
    1216:	0d 00 10 04 40       	or     $0x40041000,%eax
	...
    1227:	00 eb                	add    %ch,%bl
    1229:	01 00                	add    %eax,(%rax)
    122b:	00 10                	add    %dl,(%rax)
    122d:	00 19                	add    %bl,(%rcx)
    122f:	00 58 0b             	add    %bl,0xb(%rax)
    1232:	60                   	(bad)  
	...
    123f:	00 f7                	add    %dh,%bh
    1241:	01 00                	add    %eax,(%rax)
    1243:	00 12                	add    %dl,(%rdx)
    1245:	00 0d 00 06 05 40    	add    %cl,0x40050600(%rip)        # 4005184b <_end+0x3fa3d0b3>
    124b:	00 00                	add    %al,(%rax)
    124d:	00 00                	add    %al,(%rax)
    124f:	00 8b 00 00 00 00    	add    %cl,0x0(%rbx)
    1255:	00 00                	add    %al,(%rax)
    1257:	00 fc                	add    %bh,%ah
    1259:	01 00                	add    %eax,(%rax)
    125b:	00 20                	add    %ah,(%rax)
	...
    126d:	00 00                	add    %al,(%rax)
    126f:	00 10                	add    %dl,(%rax)
    1271:	02 00                	add    (%rax),%al
    1273:	00 11                	add    %dl,(%rcx)
    1275:	02 18                	add    (%rax),%bl
    1277:	00 58 0b             	add    %bl,0xb(%rax)
    127a:	60                   	(bad)  
	...
    1287:	00 1c 02             	add    %bl,(%rdx,%rax,1)
    128a:	00 00                	add    %al,(%rax)
    128c:	20 00                	and    %al,(%rax)
	...
    129e:	00 00                	add    %al,(%rax)
    12a0:	36 02 00             	add    %ss:(%rax),%al
    12a3:	00 12                	add    %dl,(%rdx)
    12a5:	00 0b                	add    %cl,(%rbx)
    12a7:	00 a8 03 40 00 00    	add    %ch,0x4003(%rax)
	...
    12b9:	63 72 74             	movslq 0x74(%rdx),%esi
    12bc:	73 74                	jae    1332 <_init-0x3ff746>
    12be:	75 66                	jne    1326 <_init-0x3ff752>
    12c0:	66 2e 63 00          	movslq %cs:(%rax),%ax
    12c4:	5f                   	pop    %rdi
    12c5:	5f                   	pop    %rdi
    12c6:	4a                   	rex.WX
    12c7:	43 52                	rex.XB push %r10
    12c9:	5f                   	pop    %rdi
    12ca:	4c                   	rex.WR
    12cb:	49 53                	rex.WB push %r11
    12cd:	54                   	push   %rsp
    12ce:	5f                   	pop    %rdi
    12cf:	5f                   	pop    %rdi
    12d0:	00 64 65 72          	add    %ah,0x72(%rbp,%riz,2)
    12d4:	65 67 69 73 74 65 72 	imul   $0x745f7265,%gs:0x74(%ebx),%esi
    12db:	5f 74 
    12dd:	6d                   	insl   (%dx),%es:(%rdi)
    12de:	5f                   	pop    %rdi
    12df:	63 6c 6f 6e          	movslq 0x6e(%rdi,%rbp,2),%ebp
    12e3:	65 73 00             	gs jae 12e6 <_init-0x3ff792>
    12e6:	72 65                	jb     134d <_init-0x3ff72b>
    12e8:	67 69 73 74 65 72 5f 	imul   $0x745f7265,0x74(%ebx),%esi
    12ef:	74 
    12f0:	6d                   	insl   (%dx),%es:(%rdi)
    12f1:	5f                   	pop    %rdi
    12f2:	63 6c 6f 6e          	movslq 0x6e(%rdi,%rbp,2),%ebp
    12f6:	65 73 00             	gs jae 12f9 <_init-0x3ff77f>
    12f9:	5f                   	pop    %rdi
    12fa:	5f                   	pop    %rdi
    12fb:	64 6f                	outsl  %fs:(%rsi),(%dx)
    12fd:	5f                   	pop    %rdi
    12fe:	67 6c                	insb   (%dx),%es:(%edi)
    1300:	6f                   	outsl  %ds:(%rsi),(%dx)
    1301:	62 61 6c 5f 64       	(bad)  {%k7}
    1306:	74 6f                	je     1377 <_init-0x3ff701>
    1308:	72 73                	jb     137d <_init-0x3ff6fb>
    130a:	5f                   	pop    %rdi
    130b:	61                   	(bad)  
    130c:	75 78                	jne    1386 <_init-0x3ff6f2>
    130e:	00 63 6f             	add    %ah,0x6f(%rbx)
    1311:	6d                   	insl   (%dx),%es:(%rdi)
    1312:	70 6c                	jo     1380 <_init-0x3ff6f8>
    1314:	65 74 65             	gs je  137c <_init-0x3ff6fc>
    1317:	64 2e 36 36 37       	fs cs ss ss (bad) 
    131c:	30 00                	xor    %al,(%rax)
    131e:	5f                   	pop    %rdi
    131f:	5f                   	pop    %rdi
    1320:	64 6f                	outsl  %fs:(%rsi),(%dx)
    1322:	5f                   	pop    %rdi
    1323:	67 6c                	insb   (%dx),%es:(%edi)
    1325:	6f                   	outsl  %ds:(%rsi),(%dx)
    1326:	62 61 6c 5f 64       	(bad)  {%k7}
    132b:	74 6f                	je     139c <_init-0x3ff6dc>
    132d:	72 73                	jb     13a2 <_init-0x3ff6d6>
    132f:	5f                   	pop    %rdi
    1330:	61                   	(bad)  
    1331:	75 78                	jne    13ab <_init-0x3ff6cd>
    1333:	5f                   	pop    %rdi
    1334:	66 69 6e 69 5f 61    	imul   $0x615f,0x69(%rsi),%bp
    133a:	72 72                	jb     13ae <_init-0x3ff6ca>
    133c:	61                   	(bad)  
    133d:	79 5f                	jns    139e <_init-0x3ff6da>
    133f:	65 6e                	outsb  %gs:(%rsi),(%dx)
    1341:	74 72                	je     13b5 <_init-0x3ff6c3>
    1343:	79 00                	jns    1345 <_init-0x3ff733>
    1345:	66 72 61             	data16 jb 13a9 <_init-0x3ff6cf>
    1348:	6d                   	insl   (%dx),%es:(%rdi)
    1349:	65 5f                	gs pop %rdi
    134b:	64 75 6d             	fs jne 13bb <_init-0x3ff6bd>
    134e:	6d                   	insl   (%dx),%es:(%rdi)
    134f:	79 00                	jns    1351 <_init-0x3ff727>
    1351:	5f                   	pop    %rdi
    1352:	5f                   	pop    %rdi
    1353:	66 72 61             	data16 jb 13b7 <_init-0x3ff6c1>
    1356:	6d                   	insl   (%dx),%es:(%rdi)
    1357:	65 5f                	gs pop %rdi
    1359:	64 75 6d             	fs jne 13c9 <_init-0x3ff6af>
    135c:	6d                   	insl   (%dx),%es:(%rdi)
    135d:	79 5f                	jns    13be <_init-0x3ff6ba>
    135f:	69 6e 69 74 5f 61 72 	imul   $0x72615f74,0x69(%rsi),%ebp
    1366:	72 61                	jb     13c9 <_init-0x3ff6af>
    1368:	79 5f                	jns    13c9 <_init-0x3ff6af>
    136a:	65 6e                	outsb  %gs:(%rsi),(%dx)
    136c:	74 72                	je     13e0 <_init-0x3ff698>
    136e:	79 00                	jns    1370 <_init-0x3ff708>
    1370:	77 68                	ja     13da <_init-0x3ff69e>
    1372:	61                   	(bad)  
    1373:	74 41                	je     13b6 <_init-0x3ff6c2>
    1375:	6d                   	insl   (%dx),%es:(%rdi)
    1376:	49                   	rex.WB
    1377:	2e 63 00             	movslq %cs:(%rax),%eax
    137a:	5f                   	pop    %rdi
    137b:	5f                   	pop    %rdi
    137c:	46 52                	rex.RX push %rdx
    137e:	41                   	rex.B
    137f:	4d                   	rex.WRB
    1380:	45 5f                	rex.RB pop %r15
    1382:	45                   	rex.RB
    1383:	4e                   	rex.WRX
    1384:	44 5f                	rex.R pop %rdi
    1386:	5f                   	pop    %rdi
    1387:	00 5f 5f             	add    %bl,0x5f(%rdi)
    138a:	4a                   	rex.WX
    138b:	43 52                	rex.XB push %r10
    138d:	5f                   	pop    %rdi
    138e:	45                   	rex.RB
    138f:	4e                   	rex.WRX
    1390:	44 5f                	rex.R pop %rdi
    1392:	5f                   	pop    %rdi
    1393:	00 5f 5f             	add    %bl,0x5f(%rdi)
    1396:	69 6e 69 74 5f 61 72 	imul   $0x72615f74,0x69(%rsi),%ebp
    139d:	72 61                	jb     1400 <_init-0x3ff678>
    139f:	79 5f                	jns    1400 <_init-0x3ff678>
    13a1:	65 6e                	outsb  %gs:(%rsi),(%dx)
    13a3:	64 00 5f 44          	add    %bl,%fs:0x44(%rdi)
    13a7:	59                   	pop    %rcx
    13a8:	4e                   	rex.WRX
    13a9:	41                   	rex.B
    13aa:	4d                   	rex.WRB
    13ab:	49                   	rex.WB
    13ac:	43 00 5f 5f          	rex.XB add %bl,0x5f(%r15)
    13b0:	69 6e 69 74 5f 61 72 	imul   $0x72615f74,0x69(%rsi),%ebp
    13b7:	72 61                	jb     141a <_init-0x3ff65e>
    13b9:	79 5f                	jns    141a <_init-0x3ff65e>
    13bb:	73 74                	jae    1431 <_init-0x3ff647>
    13bd:	61                   	(bad)  
    13be:	72 74                	jb     1434 <_init-0x3ff644>
    13c0:	00 5f 47             	add    %bl,0x47(%rdi)
    13c3:	4c                   	rex.WR
    13c4:	4f                   	rex.WRXB
    13c5:	42                   	rex.X
    13c6:	41                   	rex.B
    13c7:	4c 5f                	rex.WR pop %rdi
    13c9:	4f                   	rex.WRXB
    13ca:	46                   	rex.RX
    13cb:	46 53                	rex.RX push %rbx
    13cd:	45 54                	rex.RB push %r12
    13cf:	5f                   	pop    %rdi
    13d0:	54                   	push   %rsp
    13d1:	41                   	rex.B
    13d2:	42                   	rex.X
    13d3:	4c                   	rex.WR
    13d4:	45 5f                	rex.RB pop %r15
    13d6:	00 5f 5f             	add    %bl,0x5f(%rdi)
    13d9:	6c                   	insb   (%dx),%es:(%rdi)
    13da:	69 62 63 5f 63 73 75 	imul   $0x7573635f,0x63(%rdx),%esp
    13e1:	5f                   	pop    %rdi
    13e2:	66 69 6e 69 00 70    	imul   $0x7000,0x69(%rsi),%bp
    13e8:	75 74                	jne    145e <_init-0x3ff61a>
    13ea:	63 68 61             	movslq 0x61(%rax),%ebp
    13ed:	72 40                	jb     142f <_init-0x3ff649>
    13ef:	40                   	rex
    13f0:	47                   	rex.RXB
    13f1:	4c                   	rex.WR
    13f2:	49                   	rex.WB
    13f3:	42                   	rex.X
    13f4:	43 5f                	rex.XB pop %r15
    13f6:	32 2e                	xor    (%rsi),%ch
    13f8:	32 2e                	xor    (%rsi),%ch
    13fa:	35 00 5f 49 54       	xor    $0x54495f00,%eax
    13ff:	4d 5f                	rex.WRB pop %r15
    1401:	64 65 72 65          	fs gs jb 146a <_init-0x3ff60e>
    1405:	67 69 73 74 65 72 54 	imul   $0x4d547265,0x74(%ebx),%esi
    140c:	4d 
    140d:	43 6c                	rex.XB insb (%dx),%es:(%rdi)
    140f:	6f                   	outsl  %ds:(%rsi),(%dx)
    1410:	6e                   	outsb  %ds:(%rsi),(%dx)
    1411:	65 54                	gs push %rsp
    1413:	61                   	(bad)  
    1414:	62                   	(bad)  {%k7}
    1415:	6c                   	insb   (%dx),%es:(%rdi)
    1416:	65 00 64 61 74       	add    %ah,%gs:0x74(%rcx,%riz,2)
    141b:	61                   	(bad)  
    141c:	5f                   	pop    %rdi
    141d:	73 74                	jae    1493 <_init-0x3ff5e5>
    141f:	61                   	(bad)  
    1420:	72 74                	jb     1496 <_init-0x3ff5e2>
    1422:	00 5f 65             	add    %bl,0x65(%rdi)
    1425:	64 61                	fs (bad) 
    1427:	74 61                	je     148a <_init-0x3ff5ee>
    1429:	00 5f 66             	add    %bl,0x66(%rdi)
    142c:	69 6e 69 00 5f 5f 6c 	imul   $0x6c5f5f00,0x69(%rsi),%ebp
    1433:	69 62 63 5f 73 74 61 	imul   $0x6174735f,0x63(%rdx),%esp
    143a:	72 74                	jb     14b0 <_init-0x3ff5c8>
    143c:	5f                   	pop    %rdi
    143d:	6d                   	insl   (%dx),%es:(%rdi)
    143e:	61                   	(bad)  
    143f:	69 6e 40 40 47 4c 49 	imul   $0x494c4740,0x40(%rsi),%ebp
    1446:	42                   	rex.X
    1447:	43 5f                	rex.XB pop %r15
    1449:	32 2e                	xor    (%rsi),%ch
    144b:	32 2e                	xor    (%rsi),%ch
    144d:	35 00 5f 5f 64       	xor    $0x645f5f00,%eax
    1452:	61                   	(bad)  
    1453:	74 61                	je     14b6 <_init-0x3ff5c2>
    1455:	5f                   	pop    %rdi
    1456:	73 74                	jae    14cc <_init-0x3ff5ac>
    1458:	61                   	(bad)  
    1459:	72 74                	jb     14cf <_init-0x3ff5a9>
    145b:	00 5f 5f             	add    %bl,0x5f(%rdi)
    145e:	67 6d                	insl   (%dx),%es:(%edi)
    1460:	6f                   	outsl  %ds:(%rsi),(%dx)
    1461:	6e                   	outsb  %ds:(%rsi),(%dx)
    1462:	5f                   	pop    %rdi
    1463:	73 74                	jae    14d9 <_init-0x3ff59f>
    1465:	61                   	(bad)  
    1466:	72 74                	jb     14dc <_init-0x3ff59c>
    1468:	5f                   	pop    %rdi
    1469:	5f                   	pop    %rdi
    146a:	00 5f 5f             	add    %bl,0x5f(%rdi)
    146d:	64 73 6f             	fs jae 14df <_init-0x3ff599>
    1470:	5f                   	pop    %rdi
    1471:	68 61 6e 64 6c       	pushq  $0x6c646e61
    1476:	65 00 5f 49          	add    %bl,%gs:0x49(%rdi)
    147a:	4f 5f                	rex.WRXB pop %r15
    147c:	73 74                	jae    14f2 <_init-0x3ff586>
    147e:	64 69 6e 5f 75 73 65 	imul   $0x64657375,%fs:0x5f(%rsi),%ebp
    1485:	64 
    1486:	00 5f 5f             	add    %bl,0x5f(%rdi)
    1489:	6c                   	insb   (%dx),%es:(%rdi)
    148a:	69 62 63 5f 63 73 75 	imul   $0x7573635f,0x63(%rdx),%esp
    1491:	5f                   	pop    %rdi
    1492:	69 6e 69 74 00 5f 65 	imul   $0x655f0074,0x69(%rsi),%ebp
    1499:	6e                   	outsb  %ds:(%rsi),(%dx)
    149a:	64 00 5f 73          	add    %bl,%fs:0x73(%rdi)
    149e:	74 61                	je     1501 <_init-0x3ff577>
    14a0:	72 74                	jb     1516 <_init-0x3ff562>
    14a2:	00 5f 5f             	add    %bl,0x5f(%rdi)
    14a5:	62 73                	(bad)  {%k7}
    14a7:	73 5f                	jae    1508 <_init-0x3ff570>
    14a9:	73 74                	jae    151f <_init-0x3ff559>
    14ab:	61                   	(bad)  
    14ac:	72 74                	jb     1522 <_init-0x3ff556>
    14ae:	00 6d 61             	add    %ch,0x61(%rbp)
    14b1:	69 6e 00 5f 4a 76 5f 	imul   $0x5f764a5f,0x0(%rsi),%ebp
    14b8:	52                   	push   %rdx
    14b9:	65 67 69 73 74 65 72 	imul   $0x6c437265,%gs:0x74(%ebx),%esi
    14c0:	43 6c 
    14c2:	61                   	(bad)  
    14c3:	73 73                	jae    1538 <_init-0x3ff540>
    14c5:	65 73 00             	gs jae 14c8 <_init-0x3ff5b0>
    14c8:	5f                   	pop    %rdi
    14c9:	5f                   	pop    %rdi
    14ca:	54                   	push   %rsp
    14cb:	4d                   	rex.WRB
    14cc:	43 5f                	rex.XB pop %r15
    14ce:	45                   	rex.RB
    14cf:	4e                   	rex.WRX
    14d0:	44 5f                	rex.R pop %rdi
    14d2:	5f                   	pop    %rdi
    14d3:	00 5f 49             	add    %bl,0x49(%rdi)
    14d6:	54                   	push   %rsp
    14d7:	4d 5f                	rex.WRB pop %r15
    14d9:	72 65                	jb     1540 <_init-0x3ff538>
    14db:	67 69 73 74 65 72 54 	imul   $0x4d547265,0x74(%ebx),%esi
    14e2:	4d 
    14e3:	43 6c                	rex.XB insb (%dx),%es:(%rdi)
    14e5:	6f                   	outsl  %ds:(%rsi),(%dx)
    14e6:	6e                   	outsb  %ds:(%rsi),(%dx)
    14e7:	65 54                	gs push %rsp
    14e9:	61                   	(bad)  
    14ea:	62                   	(bad)  {%k7}
    14eb:	6c                   	insb   (%dx),%es:(%rdi)
    14ec:	65 00 5f 69          	add    %bl,%gs:0x69(%rdi)
    14f0:	6e                   	outsb  %ds:(%rsi),(%dx)
    14f1:	69 74 00 00 00 00 00 	imul   $0x0,0x0(%rax,%rax,1),%esi
    14f8:	00 
	...
    1535:	00 00                	add    %al,(%rax)
    1537:	00 1b                	add    %bl,(%rbx)
    1539:	00 00                	add    %al,(%rax)
    153b:	00 01                	add    %al,(%rcx)
    153d:	00 00                	add    %al,(%rax)
    153f:	00 02                	add    %al,(%rdx)
	...
    1549:	02 40 00             	add    0x0(%rax),%al
    154c:	00 00                	add    %al,(%rax)
    154e:	00 00                	add    %al,(%rax)
    1550:	00 02                	add    %al,(%rdx)
    1552:	00 00                	add    %al,(%rax)
    1554:	00 00                	add    %al,(%rax)
    1556:	00 00                	add    %al,(%rax)
    1558:	1c 00                	sbb    $0x0,%al
	...
    1566:	00 00                	add    %al,(%rax)
    1568:	01 00                	add    %eax,(%rax)
	...
    1576:	00 00                	add    %al,(%rax)
    1578:	23 00                	and    (%rax),%eax
    157a:	00 00                	add    %al,(%rax)
    157c:	07                   	(bad)  
    157d:	00 00                	add    %al,(%rax)
    157f:	00 02                	add    %al,(%rdx)
    1581:	00 00                	add    %al,(%rax)
    1583:	00 00                	add    %al,(%rax)
    1585:	00 00                	add    %al,(%rax)
    1587:	00 1c 02             	add    %bl,(%rdx,%rax,1)
    158a:	40 00 00             	add    %al,(%rax)
    158d:	00 00                	add    %al,(%rax)
    158f:	00 1c 02             	add    %bl,(%rdx,%rax,1)
    1592:	00 00                	add    %al,(%rax)
    1594:	00 00                	add    %al,(%rax)
    1596:	00 00                	add    %al,(%rax)
    1598:	20 00                	and    %al,(%rax)
	...
    15a6:	00 00                	add    %al,(%rax)
    15a8:	04 00                	add    $0x0,%al
	...
    15b6:	00 00                	add    %al,(%rax)
    15b8:	31 00                	xor    %eax,(%rax)
    15ba:	00 00                	add    %al,(%rax)
    15bc:	07                   	(bad)  
    15bd:	00 00                	add    %al,(%rax)
    15bf:	00 02                	add    %al,(%rdx)
    15c1:	00 00                	add    %al,(%rax)
    15c3:	00 00                	add    %al,(%rax)
    15c5:	00 00                	add    %al,(%rax)
    15c7:	00 3c 02             	add    %bh,(%rdx,%rax,1)
    15ca:	40 00 00             	add    %al,(%rax)
    15cd:	00 00                	add    %al,(%rax)
    15cf:	00 3c 02             	add    %bh,(%rdx,%rax,1)
    15d2:	00 00                	add    %al,(%rax)
    15d4:	00 00                	add    %al,(%rax)
    15d6:	00 00                	add    %al,(%rax)
    15d8:	24 00                	and    $0x0,%al
	...
    15e6:	00 00                	add    %al,(%rax)
    15e8:	04 00                	add    $0x0,%al
	...
    15f6:	00 00                	add    %al,(%rax)
    15f8:	44 00 00             	add    %r8b,(%rax)
    15fb:	00 f6                	add    %dh,%dh
    15fd:	ff                   	(bad)  
    15fe:	ff 6f 02             	ljmpq  *0x2(%rdi)
    1601:	00 00                	add    %al,(%rax)
    1603:	00 00                	add    %al,(%rax)
    1605:	00 00                	add    %al,(%rax)
    1607:	00 60 02             	add    %ah,0x2(%rax)
    160a:	40 00 00             	add    %al,(%rax)
    160d:	00 00                	add    %al,(%rax)
    160f:	00 60 02             	add    %ah,0x2(%rax)
    1612:	00 00                	add    %al,(%rax)
    1614:	00 00                	add    %al,(%rax)
    1616:	00 00                	add    %al,(%rax)
    1618:	1c 00                	sbb    $0x0,%al
    161a:	00 00                	add    %al,(%rax)
    161c:	00 00                	add    %al,(%rax)
    161e:	00 00                	add    %al,(%rax)
    1620:	05 00 00 00 00       	add    $0x0,%eax
    1625:	00 00                	add    %al,(%rax)
    1627:	00 08                	add    %cl,(%rax)
	...
    1635:	00 00                	add    %al,(%rax)
    1637:	00 4e 00             	add    %cl,0x0(%rsi)
    163a:	00 00                	add    %al,(%rax)
    163c:	0b 00                	or     (%rax),%eax
    163e:	00 00                	add    %al,(%rax)
    1640:	02 00                	add    (%rax),%al
    1642:	00 00                	add    %al,(%rax)
    1644:	00 00                	add    %al,(%rax)
    1646:	00 00                	add    %al,(%rax)
    1648:	80 02 40             	addb   $0x40,(%rdx)
    164b:	00 00                	add    %al,(%rax)
    164d:	00 00                	add    %al,(%rax)
    164f:	00 80 02 00 00 00    	add    %al,0x2(%rax)
    1655:	00 00                	add    %al,(%rax)
    1657:	00 60 00             	add    %ah,0x0(%rax)
    165a:	00 00                	add    %al,(%rax)
    165c:	00 00                	add    %al,(%rax)
    165e:	00 00                	add    %al,(%rax)
    1660:	06                   	(bad)  
    1661:	00 00                	add    %al,(%rax)
    1663:	00 01                	add    %al,(%rcx)
    1665:	00 00                	add    %al,(%rax)
    1667:	00 08                	add    %cl,(%rax)
    1669:	00 00                	add    %al,(%rax)
    166b:	00 00                	add    %al,(%rax)
    166d:	00 00                	add    %al,(%rax)
    166f:	00 18                	add    %bl,(%rax)
    1671:	00 00                	add    %al,(%rax)
    1673:	00 00                	add    %al,(%rax)
    1675:	00 00                	add    %al,(%rax)
    1677:	00 56 00             	add    %dl,0x0(%rsi)
    167a:	00 00                	add    %al,(%rax)
    167c:	03 00                	add    (%rax),%eax
    167e:	00 00                	add    %al,(%rax)
    1680:	02 00                	add    (%rax),%al
    1682:	00 00                	add    %al,(%rax)
    1684:	00 00                	add    %al,(%rax)
    1686:	00 00                	add    %al,(%rax)
    1688:	e0 02                	loopne 168c <_init-0x3ff3ec>
    168a:	40 00 00             	add    %al,(%rax)
    168d:	00 00                	add    %al,(%rax)
    168f:	00 e0                	add    %ah,%al
    1691:	02 00                	add    (%rax),%al
    1693:	00 00                	add    %al,(%rax)
    1695:	00 00                	add    %al,(%rax)
    1697:	00 40 00             	add    %al,0x0(%rax)
	...
    16a6:	00 00                	add    %al,(%rax)
    16a8:	01 00                	add    %eax,(%rax)
	...
    16b6:	00 00                	add    %al,(%rax)
    16b8:	5e                   	pop    %rsi
    16b9:	00 00                	add    %al,(%rax)
    16bb:	00 ff                	add    %bh,%bh
    16bd:	ff                   	(bad)  
    16be:	ff 6f 02             	ljmpq  *0x2(%rdi)
    16c1:	00 00                	add    %al,(%rax)
    16c3:	00 00                	add    %al,(%rax)
    16c5:	00 00                	add    %al,(%rax)
    16c7:	00 20                	add    %ah,(%rax)
    16c9:	03 40 00             	add    0x0(%rax),%eax
    16cc:	00 00                	add    %al,(%rax)
    16ce:	00 00                	add    %al,(%rax)
    16d0:	20 03                	and    %al,(%rbx)
    16d2:	00 00                	add    %al,(%rax)
    16d4:	00 00                	add    %al,(%rax)
    16d6:	00 00                	add    %al,(%rax)
    16d8:	08 00                	or     %al,(%rax)
    16da:	00 00                	add    %al,(%rax)
    16dc:	00 00                	add    %al,(%rax)
    16de:	00 00                	add    %al,(%rax)
    16e0:	05 00 00 00 00       	add    $0x0,%eax
    16e5:	00 00                	add    %al,(%rax)
    16e7:	00 02                	add    %al,(%rdx)
    16e9:	00 00                	add    %al,(%rax)
    16eb:	00 00                	add    %al,(%rax)
    16ed:	00 00                	add    %al,(%rax)
    16ef:	00 02                	add    %al,(%rdx)
    16f1:	00 00                	add    %al,(%rax)
    16f3:	00 00                	add    %al,(%rax)
    16f5:	00 00                	add    %al,(%rax)
    16f7:	00 6b 00             	add    %ch,0x0(%rbx)
    16fa:	00 00                	add    %al,(%rax)
    16fc:	fe                   	(bad)  
    16fd:	ff                   	(bad)  
    16fe:	ff 6f 02             	ljmpq  *0x2(%rdi)
    1701:	00 00                	add    %al,(%rax)
    1703:	00 00                	add    %al,(%rax)
    1705:	00 00                	add    %al,(%rax)
    1707:	00 28                	add    %ch,(%rax)
    1709:	03 40 00             	add    0x0(%rax),%eax
    170c:	00 00                	add    %al,(%rax)
    170e:	00 00                	add    %al,(%rax)
    1710:	28 03                	sub    %al,(%rbx)
    1712:	00 00                	add    %al,(%rax)
    1714:	00 00                	add    %al,(%rax)
    1716:	00 00                	add    %al,(%rax)
    1718:	20 00                	and    %al,(%rax)
    171a:	00 00                	add    %al,(%rax)
    171c:	00 00                	add    %al,(%rax)
    171e:	00 00                	add    %al,(%rax)
    1720:	06                   	(bad)  
    1721:	00 00                	add    %al,(%rax)
    1723:	00 01                	add    %al,(%rcx)
    1725:	00 00                	add    %al,(%rax)
    1727:	00 08                	add    %cl,(%rax)
	...
    1735:	00 00                	add    %al,(%rax)
    1737:	00 7a 00             	add    %bh,0x0(%rdx)
    173a:	00 00                	add    %al,(%rax)
    173c:	04 00                	add    $0x0,%al
    173e:	00 00                	add    %al,(%rax)
    1740:	02 00                	add    (%rax),%al
    1742:	00 00                	add    %al,(%rax)
    1744:	00 00                	add    %al,(%rax)
    1746:	00 00                	add    %al,(%rax)
    1748:	48 03 40 00          	add    0x0(%rax),%rax
    174c:	00 00                	add    %al,(%rax)
    174e:	00 00                	add    %al,(%rax)
    1750:	48 03 00             	add    (%rax),%rax
    1753:	00 00                	add    %al,(%rax)
    1755:	00 00                	add    %al,(%rax)
    1757:	00 18                	add    %bl,(%rax)
    1759:	00 00                	add    %al,(%rax)
    175b:	00 00                	add    %al,(%rax)
    175d:	00 00                	add    %al,(%rax)
    175f:	00 05 00 00 00 00    	add    %al,0x0(%rip)        # 1765 <_init-0x3ff313>
    1765:	00 00                	add    %al,(%rax)
    1767:	00 08                	add    %cl,(%rax)
    1769:	00 00                	add    %al,(%rax)
    176b:	00 00                	add    %al,(%rax)
    176d:	00 00                	add    %al,(%rax)
    176f:	00 18                	add    %bl,(%rax)
    1771:	00 00                	add    %al,(%rax)
    1773:	00 00                	add    %al,(%rax)
    1775:	00 00                	add    %al,(%rax)
    1777:	00 84 00 00 00 04 00 	add    %al,0x40000(%rax,%rax,1)
    177e:	00 00                	add    %al,(%rax)
    1780:	42 00 00             	rex.X add %al,(%rax)
    1783:	00 00                	add    %al,(%rax)
    1785:	00 00                	add    %al,(%rax)
    1787:	00 60 03             	add    %ah,0x3(%rax)
    178a:	40 00 00             	add    %al,(%rax)
    178d:	00 00                	add    %al,(%rax)
    178f:	00 60 03             	add    %ah,0x3(%rax)
    1792:	00 00                	add    %al,(%rax)
    1794:	00 00                	add    %al,(%rax)
    1796:	00 00                	add    %al,(%rax)
    1798:	48 00 00             	rex.W add %al,(%rax)
    179b:	00 00                	add    %al,(%rax)
    179d:	00 00                	add    %al,(%rax)
    179f:	00 05 00 00 00 0c    	add    %al,0xc000000(%rip)        # c0017a5 <_end+0xb9ed00d>
    17a5:	00 00                	add    %al,(%rax)
    17a7:	00 08                	add    %cl,(%rax)
    17a9:	00 00                	add    %al,(%rax)
    17ab:	00 00                	add    %al,(%rax)
    17ad:	00 00                	add    %al,(%rax)
    17af:	00 18                	add    %bl,(%rax)
    17b1:	00 00                	add    %al,(%rax)
    17b3:	00 00                	add    %al,(%rax)
    17b5:	00 00                	add    %al,(%rax)
    17b7:	00 8e 00 00 00 01    	add    %cl,0x1000000(%rsi)
    17bd:	00 00                	add    %al,(%rax)
    17bf:	00 06                	add    %al,(%rsi)
    17c1:	00 00                	add    %al,(%rax)
    17c3:	00 00                	add    %al,(%rax)
    17c5:	00 00                	add    %al,(%rax)
    17c7:	00 a8 03 40 00 00    	add    %ch,0x4003(%rax)
    17cd:	00 00                	add    %al,(%rax)
    17cf:	00 a8 03 00 00 00    	add    %ch,0x3(%rax)
    17d5:	00 00                	add    %al,(%rax)
    17d7:	00 1a                	add    %bl,(%rdx)
	...
    17e5:	00 00                	add    %al,(%rax)
    17e7:	00 04 00             	add    %al,(%rax,%rax,1)
	...
    17f6:	00 00                	add    %al,(%rax)
    17f8:	89 00                	mov    %eax,(%rax)
    17fa:	00 00                	add    %al,(%rax)
    17fc:	01 00                	add    %eax,(%rax)
    17fe:	00 00                	add    %al,(%rax)
    1800:	06                   	(bad)  
    1801:	00 00                	add    %al,(%rax)
    1803:	00 00                	add    %al,(%rax)
    1805:	00 00                	add    %al,(%rax)
    1807:	00 d0                	add    %dl,%al
    1809:	03 40 00             	add    0x0(%rax),%eax
    180c:	00 00                	add    %al,(%rax)
    180e:	00 00                	add    %al,(%rax)
    1810:	d0 03                	rolb   (%rbx)
    1812:	00 00                	add    %al,(%rax)
    1814:	00 00                	add    %al,(%rax)
    1816:	00 00                	add    %al,(%rax)
    1818:	40 00 00             	add    %al,(%rax)
	...
    1827:	00 10                	add    %dl,(%rax)
    1829:	00 00                	add    %al,(%rax)
    182b:	00 00                	add    %al,(%rax)
    182d:	00 00                	add    %al,(%rax)
    182f:	00 10                	add    %dl,(%rax)
    1831:	00 00                	add    %al,(%rax)
    1833:	00 00                	add    %al,(%rax)
    1835:	00 00                	add    %al,(%rax)
    1837:	00 94 00 00 00 01 00 	add    %dl,0x10000(%rax,%rax,1)
    183e:	00 00                	add    %al,(%rax)
    1840:	06                   	(bad)  
    1841:	00 00                	add    %al,(%rax)
    1843:	00 00                	add    %al,(%rax)
    1845:	00 00                	add    %al,(%rax)
    1847:	00 10                	add    %dl,(%rax)
    1849:	04 40                	add    $0x40,%al
    184b:	00 00                	add    %al,(%rax)
    184d:	00 00                	add    %al,(%rax)
    184f:	00 10                	add    %dl,(%rax)
    1851:	04 00                	add    $0x0,%al
    1853:	00 00                	add    %al,(%rax)
    1855:	00 00                	add    %al,(%rax)
    1857:	00 02                	add    %al,(%rdx)
    1859:	02 00                	add    (%rax),%al
	...
    1867:	00 10                	add    %dl,(%rax)
	...
    1875:	00 00                	add    %al,(%rax)
    1877:	00 9a 00 00 00 01    	add    %bl,0x1000000(%rdx)
    187d:	00 00                	add    %al,(%rax)
    187f:	00 06                	add    %al,(%rsi)
    1881:	00 00                	add    %al,(%rax)
    1883:	00 00                	add    %al,(%rax)
    1885:	00 00                	add    %al,(%rax)
    1887:	00 14 06             	add    %dl,(%rsi,%rax,1)
    188a:	40 00 00             	add    %al,(%rax)
    188d:	00 00                	add    %al,(%rax)
    188f:	00 14 06             	add    %dl,(%rsi,%rax,1)
    1892:	00 00                	add    %al,(%rax)
    1894:	00 00                	add    %al,(%rax)
    1896:	00 00                	add    %al,(%rax)
    1898:	09 00                	or     %eax,(%rax)
	...
    18a6:	00 00                	add    %al,(%rax)
    18a8:	04 00                	add    $0x0,%al
	...
    18b6:	00 00                	add    %al,(%rax)
    18b8:	a0 00 00 00 01 00 00 	movabs 0x200000001000000,%al
    18bf:	00 02 
    18c1:	00 00                	add    %al,(%rax)
    18c3:	00 00                	add    %al,(%rax)
    18c5:	00 00                	add    %al,(%rax)
    18c7:	00 40 06             	add    %al,0x6(%rax)
    18ca:	40 00 00             	add    %al,(%rax)
    18cd:	00 00                	add    %al,(%rax)
    18cf:	00 40 06             	add    %al,0x6(%rax)
    18d2:	00 00                	add    %al,(%rax)
    18d4:	00 00                	add    %al,(%rax)
    18d6:	00 00                	add    %al,(%rax)
    18d8:	bc 01 00 00 00       	mov    $0x1,%esp
	...
    18e5:	00 00                	add    %al,(%rax)
    18e7:	00 40 00             	add    %al,0x0(%rax)
	...
    18f6:	00 00                	add    %al,(%rax)
    18f8:	a8 00                	test   $0x0,%al
    18fa:	00 00                	add    %al,(%rax)
    18fc:	01 00                	add    %eax,(%rax)
    18fe:	00 00                	add    %al,(%rax)
    1900:	02 00                	add    (%rax),%al
    1902:	00 00                	add    %al,(%rax)
    1904:	00 00                	add    %al,(%rax)
    1906:	00 00                	add    %al,(%rax)
    1908:	fc                   	cld    
    1909:	07                   	(bad)  
    190a:	40 00 00             	add    %al,(%rax)
    190d:	00 00                	add    %al,(%rax)
    190f:	00 fc                	add    %bh,%ah
    1911:	07                   	(bad)  
    1912:	00 00                	add    %al,(%rax)
    1914:	00 00                	add    %al,(%rax)
    1916:	00 00                	add    %al,(%rax)
    1918:	34 00                	xor    $0x0,%al
	...
    1926:	00 00                	add    %al,(%rax)
    1928:	04 00                	add    $0x0,%al
	...
    1936:	00 00                	add    %al,(%rax)
    1938:	b6 00                	mov    $0x0,%dh
    193a:	00 00                	add    %al,(%rax)
    193c:	01 00                	add    %eax,(%rax)
    193e:	00 00                	add    %al,(%rax)
    1940:	02 00                	add    (%rax),%al
    1942:	00 00                	add    %al,(%rax)
    1944:	00 00                	add    %al,(%rax)
    1946:	00 00                	add    %al,(%rax)
    1948:	30 08                	xor    %cl,(%rax)
    194a:	40 00 00             	add    %al,(%rax)
    194d:	00 00                	add    %al,(%rax)
    194f:	00 30                	add    %dh,(%rax)
    1951:	08 00                	or     %al,(%rax)
    1953:	00 00                	add    %al,(%rax)
    1955:	00 00                	add    %al,(%rax)
    1957:	00 f4                	add    %dh,%ah
	...
    1965:	00 00                	add    %al,(%rax)
    1967:	00 08                	add    %cl,(%rax)
	...
    1975:	00 00                	add    %al,(%rax)
    1977:	00 c0                	add    %al,%al
    1979:	00 00                	add    %al,(%rax)
    197b:	00 0e                	add    %cl,(%rsi)
    197d:	00 00                	add    %al,(%rax)
    197f:	00 03                	add    %al,(%rbx)
    1981:	00 00                	add    %al,(%rax)
    1983:	00 00                	add    %al,(%rax)
    1985:	00 00                	add    %al,(%rax)
    1987:	00 28                	add    %ch,(%rax)
    1989:	09 60 00             	or     %esp,0x0(%rax)
    198c:	00 00                	add    %al,(%rax)
    198e:	00 00                	add    %al,(%rax)
    1990:	28 09                	sub    %cl,(%rcx)
    1992:	00 00                	add    %al,(%rax)
    1994:	00 00                	add    %al,(%rax)
    1996:	00 00                	add    %al,(%rax)
    1998:	08 00                	or     %al,(%rax)
	...
    19a6:	00 00                	add    %al,(%rax)
    19a8:	08 00                	or     %al,(%rax)
	...
    19b6:	00 00                	add    %al,(%rax)
    19b8:	cc                   	int3   
    19b9:	00 00                	add    %al,(%rax)
    19bb:	00 0f                	add    %cl,(%rdi)
    19bd:	00 00                	add    %al,(%rax)
    19bf:	00 03                	add    %al,(%rbx)
    19c1:	00 00                	add    %al,(%rax)
    19c3:	00 00                	add    %al,(%rax)
    19c5:	00 00                	add    %al,(%rax)
    19c7:	00 30                	add    %dh,(%rax)
    19c9:	09 60 00             	or     %esp,0x0(%rax)
    19cc:	00 00                	add    %al,(%rax)
    19ce:	00 00                	add    %al,(%rax)
    19d0:	30 09                	xor    %cl,(%rcx)
    19d2:	00 00                	add    %al,(%rax)
    19d4:	00 00                	add    %al,(%rax)
    19d6:	00 00                	add    %al,(%rax)
    19d8:	08 00                	or     %al,(%rax)
	...
    19e6:	00 00                	add    %al,(%rax)
    19e8:	08 00                	or     %al,(%rax)
	...
    19f6:	00 00                	add    %al,(%rax)
    19f8:	d8 00                	fadds  (%rax)
    19fa:	00 00                	add    %al,(%rax)
    19fc:	01 00                	add    %eax,(%rax)
    19fe:	00 00                	add    %al,(%rax)
    1a00:	03 00                	add    (%rax),%eax
    1a02:	00 00                	add    %al,(%rax)
    1a04:	00 00                	add    %al,(%rax)
    1a06:	00 00                	add    %al,(%rax)
    1a08:	38 09                	cmp    %cl,(%rcx)
    1a0a:	60                   	(bad)  
    1a0b:	00 00                	add    %al,(%rax)
    1a0d:	00 00                	add    %al,(%rax)
    1a0f:	00 38                	add    %bh,(%rax)
    1a11:	09 00                	or     %eax,(%rax)
    1a13:	00 00                	add    %al,(%rax)
    1a15:	00 00                	add    %al,(%rax)
    1a17:	00 08                	add    %cl,(%rax)
	...
    1a25:	00 00                	add    %al,(%rax)
    1a27:	00 08                	add    %cl,(%rax)
	...
    1a35:	00 00                	add    %al,(%rax)
    1a37:	00 dd                	add    %bl,%ch
    1a39:	00 00                	add    %al,(%rax)
    1a3b:	00 06                	add    %al,(%rsi)
    1a3d:	00 00                	add    %al,(%rax)
    1a3f:	00 03                	add    %al,(%rbx)
    1a41:	00 00                	add    %al,(%rax)
    1a43:	00 00                	add    %al,(%rax)
    1a45:	00 00                	add    %al,(%rax)
    1a47:	00 40 09             	add    %al,0x9(%rax)
    1a4a:	60                   	(bad)  
    1a4b:	00 00                	add    %al,(%rax)
    1a4d:	00 00                	add    %al,(%rax)
    1a4f:	00 40 09             	add    %al,0x9(%rax)
    1a52:	00 00                	add    %al,(%rax)
    1a54:	00 00                	add    %al,(%rax)
    1a56:	00 00                	add    %al,(%rax)
    1a58:	d0 01                	rolb   (%rcx)
    1a5a:	00 00                	add    %al,(%rax)
    1a5c:	00 00                	add    %al,(%rax)
    1a5e:	00 00                	add    %al,(%rax)
    1a60:	06                   	(bad)  
    1a61:	00 00                	add    %al,(%rax)
    1a63:	00 00                	add    %al,(%rax)
    1a65:	00 00                	add    %al,(%rax)
    1a67:	00 08                	add    %cl,(%rax)
    1a69:	00 00                	add    %al,(%rax)
    1a6b:	00 00                	add    %al,(%rax)
    1a6d:	00 00                	add    %al,(%rax)
    1a6f:	00 10                	add    %dl,(%rax)
    1a71:	00 00                	add    %al,(%rax)
    1a73:	00 00                	add    %al,(%rax)
    1a75:	00 00                	add    %al,(%rax)
    1a77:	00 e6                	add    %ah,%dh
    1a79:	00 00                	add    %al,(%rax)
    1a7b:	00 01                	add    %al,(%rcx)
    1a7d:	00 00                	add    %al,(%rax)
    1a7f:	00 03                	add    %al,(%rbx)
    1a81:	00 00                	add    %al,(%rax)
    1a83:	00 00                	add    %al,(%rax)
    1a85:	00 00                	add    %al,(%rax)
    1a87:	00 10                	add    %dl,(%rax)
    1a89:	0b 60 00             	or     0x0(%rax),%esp
    1a8c:	00 00                	add    %al,(%rax)
    1a8e:	00 00                	add    %al,(%rax)
    1a90:	10 0b                	adc    %cl,(%rbx)
    1a92:	00 00                	add    %al,(%rax)
    1a94:	00 00                	add    %al,(%rax)
    1a96:	00 00                	add    %al,(%rax)
    1a98:	08 00                	or     %al,(%rax)
	...
    1aa6:	00 00                	add    %al,(%rax)
    1aa8:	08 00                	or     %al,(%rax)
    1aaa:	00 00                	add    %al,(%rax)
    1aac:	00 00                	add    %al,(%rax)
    1aae:	00 00                	add    %al,(%rax)
    1ab0:	08 00                	or     %al,(%rax)
    1ab2:	00 00                	add    %al,(%rax)
    1ab4:	00 00                	add    %al,(%rax)
    1ab6:	00 00                	add    %al,(%rax)
    1ab8:	eb 00                	jmp    1aba <_init-0x3fefbe>
    1aba:	00 00                	add    %al,(%rax)
    1abc:	01 00                	add    %eax,(%rax)
    1abe:	00 00                	add    %al,(%rax)
    1ac0:	03 00                	add    (%rax),%eax
    1ac2:	00 00                	add    %al,(%rax)
    1ac4:	00 00                	add    %al,(%rax)
    1ac6:	00 00                	add    %al,(%rax)
    1ac8:	18 0b                	sbb    %cl,(%rbx)
    1aca:	60                   	(bad)  
    1acb:	00 00                	add    %al,(%rax)
    1acd:	00 00                	add    %al,(%rax)
    1acf:	00 18                	add    %bl,(%rax)
    1ad1:	0b 00                	or     (%rax),%eax
    1ad3:	00 00                	add    %al,(%rax)
    1ad5:	00 00                	add    %al,(%rax)
    1ad7:	00 30                	add    %dh,(%rax)
	...
    1ae5:	00 00                	add    %al,(%rax)
    1ae7:	00 08                	add    %cl,(%rax)
    1ae9:	00 00                	add    %al,(%rax)
    1aeb:	00 00                	add    %al,(%rax)
    1aed:	00 00                	add    %al,(%rax)
    1aef:	00 08                	add    %cl,(%rax)
    1af1:	00 00                	add    %al,(%rax)
    1af3:	00 00                	add    %al,(%rax)
    1af5:	00 00                	add    %al,(%rax)
    1af7:	00 f4                	add    %dh,%ah
    1af9:	00 00                	add    %al,(%rax)
    1afb:	00 01                	add    %al,(%rcx)
    1afd:	00 00                	add    %al,(%rax)
    1aff:	00 03                	add    %al,(%rbx)
    1b01:	00 00                	add    %al,(%rax)
    1b03:	00 00                	add    %al,(%rax)
    1b05:	00 00                	add    %al,(%rax)
    1b07:	00 48 0b             	add    %cl,0xb(%rax)
    1b0a:	60                   	(bad)  
    1b0b:	00 00                	add    %al,(%rax)
    1b0d:	00 00                	add    %al,(%rax)
    1b0f:	00 48 0b             	add    %cl,0xb(%rax)
    1b12:	00 00                	add    %al,(%rax)
    1b14:	00 00                	add    %al,(%rax)
    1b16:	00 00                	add    %al,(%rax)
    1b18:	10 00                	adc    %al,(%rax)
	...
    1b26:	00 00                	add    %al,(%rax)
    1b28:	08 00                	or     %al,(%rax)
	...
    1b36:	00 00                	add    %al,(%rax)
    1b38:	fa                   	cli    
    1b39:	00 00                	add    %al,(%rax)
    1b3b:	00 08                	add    %cl,(%rax)
    1b3d:	00 00                	add    %al,(%rax)
    1b3f:	00 03                	add    %al,(%rbx)
    1b41:	00 00                	add    %al,(%rax)
    1b43:	00 00                	add    %al,(%rax)
    1b45:	00 00                	add    %al,(%rax)
    1b47:	00 58 0b             	add    %bl,0xb(%rax)
    1b4a:	60                   	(bad)  
    1b4b:	00 00                	add    %al,(%rax)
    1b4d:	00 00                	add    %al,(%rax)
    1b4f:	00 58 0b             	add    %bl,0xb(%rax)
    1b52:	00 00                	add    %al,(%rax)
    1b54:	00 00                	add    %al,(%rax)
    1b56:	00 00                	add    %al,(%rax)
    1b58:	08 00                	or     %al,(%rax)
	...
    1b66:	00 00                	add    %al,(%rax)
    1b68:	01 00                	add    %eax,(%rax)
	...
    1b76:	00 00                	add    %al,(%rax)
    1b78:	ff 00                	incl   (%rax)
    1b7a:	00 00                	add    %al,(%rax)
    1b7c:	01 00                	add    %eax,(%rax)
    1b7e:	00 00                	add    %al,(%rax)
    1b80:	30 00                	xor    %al,(%rax)
	...
    1b8e:	00 00                	add    %al,(%rax)
    1b90:	58                   	pop    %rax
    1b91:	0b 00                	or     (%rax),%eax
    1b93:	00 00                	add    %al,(%rax)
    1b95:	00 00                	add    %al,(%rax)
    1b97:	00 40 00             	add    %al,0x0(%rax)
	...
    1ba6:	00 00                	add    %al,(%rax)
    1ba8:	01 00                	add    %eax,(%rax)
    1baa:	00 00                	add    %al,(%rax)
    1bac:	00 00                	add    %al,(%rax)
    1bae:	00 00                	add    %al,(%rax)
    1bb0:	01 00                	add    %eax,(%rax)
    1bb2:	00 00                	add    %al,(%rax)
    1bb4:	00 00                	add    %al,(%rax)
    1bb6:	00 00                	add    %al,(%rax)
    1bb8:	11 00                	adc    %eax,(%rax)
    1bba:	00 00                	add    %al,(%rax)
    1bbc:	03 00                	add    (%rax),%eax
	...
    1bce:	00 00                	add    %al,(%rax)
    1bd0:	98                   	cwtl   
    1bd1:	0b 00                	or     (%rax),%eax
    1bd3:	00 00                	add    %al,(%rax)
    1bd5:	00 00                	add    %al,(%rax)
    1bd7:	00 08                	add    %cl,(%rax)
    1bd9:	01 00                	add    %eax,(%rax)
	...
    1be7:	00 01                	add    %al,(%rcx)
	...
    1bf5:	00 00                	add    %al,(%rax)
    1bf7:	00 01                	add    %al,(%rcx)
    1bf9:	00 00                	add    %al,(%rax)
    1bfb:	00 02                	add    %al,(%rdx)
	...
    1c0d:	00 00                	add    %al,(%rax)
    1c0f:	00 a0 0c 00 00 00    	add    %ah,0xc(%rax)
    1c15:	00 00                	add    %al,(%rax)
    1c17:	00 18                	add    %bl,(%rax)
    1c19:	06                   	(bad)  
    1c1a:	00 00                	add    %al,(%rax)
    1c1c:	00 00                	add    %al,(%rax)
    1c1e:	00 00                	add    %al,(%rax)
    1c20:	1d 00 00 00 2d       	sbb    $0x2d000000,%eax
    1c25:	00 00                	add    %al,(%rax)
    1c27:	00 08                	add    %cl,(%rax)
    1c29:	00 00                	add    %al,(%rax)
    1c2b:	00 00                	add    %al,(%rax)
    1c2d:	00 00                	add    %al,(%rax)
    1c2f:	00 18                	add    %bl,(%rax)
    1c31:	00 00                	add    %al,(%rax)
    1c33:	00 00                	add    %al,(%rax)
    1c35:	00 00                	add    %al,(%rax)
    1c37:	00 09                	add    %cl,(%rcx)
    1c39:	00 00                	add    %al,(%rax)
    1c3b:	00 03                	add    %al,(%rbx)
	...
    1c4d:	00 00                	add    %al,(%rax)
    1c4f:	00 b8 12 00 00 00    	add    %bh,0x12(%rax)
    1c55:	00 00                	add    %al,(%rax)
    1c57:	00 3c 02             	add    %bh,(%rdx,%rax,1)
	...
    1c66:	00 00                	add    %al,(%rax)
    1c68:	01 00                	add    %eax,(%rax)
	...
