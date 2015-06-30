/* Starting with the 386 processor, x86 CPUs have 32-bit registers named EAX, EBX,
 * ECX, and EDX. The second half (the least significant bits) of these registers
 * is the same as AX, BX, CX, and DX, respectively. Modify the regs union so
 * that it includes these registers as well as the older ones. Your union should
 * be set up so that modifying EAX changes AX and modifying AX changes the
 * second half of EAX. (The other new registers will work in a similar fashion.)
 * You'll need to add some "dummy" members to the word and byte structures,
 * corresponding to the other half of EAX, EBX, ECX, and EDX. Declare the type
 * of the new registers to be DWORD (double word), which should be defined as
 * unsigned long. Don't forget that the x86 architecture is little-endian.
 */
#include <stdio.h>

typedef unsigned char BYTE;
typedef unsigned short WORD;
typedef unsigned long DWORD;

/* Answer: */
union {
    struct {
        DWORD eax, ebx, ecx, edx;
    } dword;
    struct {
        WORD ax, ae, bx, be, cx, ce, dx, de;
    } word;
    struct {
        BYTE axl, axh, ael, aeh, bxl, bxh, bel, beh,
             cxl, cxh, cel, ceh, dxl, dxh, del, deh;
    } byte;
} regs;

int main(void)
{
    regs.word.ae = 0x1234;
    regs.word.ax = 0x5678;

    printf("EAX: %lx\n", regs.dword.eax);

    return 0;
}
