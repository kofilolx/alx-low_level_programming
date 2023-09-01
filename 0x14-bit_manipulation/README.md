# Bitwise manipulation
## Treated Or [add] And [Mul] Xor [ different binary digit = 1]
## ~ Not [Inverter]

- Left shift << | N = N * (2**1)
- Right shift >> | N = N / (2**1)

## L Shift << drop the control word in the MSB
- Move the nxt control word to the MSB (Most Significant Bit)
- fill the void created at the LSB with 0

## R-Shift >> Drop the control word at the LSB
- move the nxt control word to the right ie. Occupy the LSB
- fill the void created at the MSB with 0

ex
L-Shift
N = 10 [0000 1010]
N<<1 = 20 [0001 0100]

R-Shift
N = 10 [0000 1010]
N >> 1 = 5 [0000 0101]
Bit manipulation can be used to optimize code, particularly in systems programming or low-level programming for graphics programming, cryptography,  embedded systems