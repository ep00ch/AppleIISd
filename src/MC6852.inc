;*******************************
;
; MC6852 Defines
; Version 0.1
;
; (c) Eric Pooch, 2019
;
;
;*******************************
;
; MC6852 to MOS6502 Connections:
;   RXCLK   <-  PHI1
;   TXCLK   <-  PHI1
;   'IRQ    ->  'IRQ
;   'RESET  <-  'RESET
;   'CS     <-  'IO_SEL
;   RS      <-  A0
;   D[0..7] <>  D[0..7]
;   E       <-  PHI2
;   R/'W    <-  R/'W
;
; MC6852 to SD Connections:
;   Rx Data <-  MISO
;   Tx Data ->  MOSI
;   'DCD    <-  'CD
;   'DTR    ->  'CS
;
;*******************************
;
; MC6852 register locations
SR          :=  $00
C1          :=  $00
RXD         :=  $01
AC          :=  $01
;
; Register bits
BIT7        :=  $80
BIT6        :=  $40
BIT5        :=  $20
BIT4        :=  $10
BIT3        :=  $08
BIT2        :=  $04
BIT1        :=  $02
BIT0        :=  $01
;   Status
IRQ         :=  BIT7
PE          :=  BIT6
RXO         :=  BIT5
TUF         :=  BIT4
CTS         :=  BIT3
DCD         :=  BIT2
TDRA        :=  BIT1
RDA         :=  BIT0
;   Control 1
AC1         :=  BIT7
AC2         :=  BIT6
RIE         :=  BIT5
TIE         :=  BIT4
CSYN        :=  BIT3
SSYN        :=  BIT2
TXRS        :=  BIT1
RXRS        :=  BIT0
;   Control 2
EIE         :=  BIT7
TXSYN       :=  BIT6
WS3         :=  BIT5
WS2         :=  BIT4
WS1         :=  BIT3
NBY         :=  BIT2
PC2         :=  BIT1
PC1         :=  BIT0
;   Control 3
NU          :=  $F0
CTUF        :=  BIT3
CCTS        :=  BIT2
NSYN        :=  BIT1
EISYN       :=  BIT0
;
; Address Control Register (AC1 & AC2) Selections
C2AC        :=  $00
C3AC        :=  BIT6
SYNAC       :=  BIT7
TXAC        :=  $C0
