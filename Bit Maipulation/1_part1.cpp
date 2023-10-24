/*                       Part 1 : Bit Operation
Logic Gate:
========================
AND - &
OR - |
NOT -!
XOR- ^
LEFT SHIFT - <<
RIGHT SHIFT - >>
========================

In Term of bit:
                1 = Set bit
                0 = Off bit
========================
AND Operation:
1 & 1 = 1
1 & 0 = 0
0 & 0 = 0
0 & 1 = 0
========================
OR Operation:
1 | 1 = 1
1 | 0 = 1
0 | 0 = 0
0 | 1 = 1
========================
NOT Operation:
!1 = 0
!0 = 1
========================
XOR Operation:
1 ^ 1 = 0
1 ^ 0 = 1
0 ^ 0 = 0
0 ^ 1 = 1

Note: If both are same, then ans is 0
========================
Left Shift:
BCD Code: 16 8 4 2 1
6 = 1 1 0      = 6
6<<1 = 1 1 0 0 = 12
6<<2 = 1 1 0 0 0 = 24
.
.
6<<n = 6 * 2^n
6<<2 = 6 * 2^2 
     = 24
========================
Right Shift:
BCD Code: 16 8 4 2 1
6    = 1 1 0  = 6
6>>1 = 0 1 1  = 3
6>>2 = 0 0 1  = 1
.
.
6>>n = 6 / 2^n
6>>1 = 6 / 2^1 = 3
6>>2 = 6 / 2^2 = 1 
     = 24

*/
