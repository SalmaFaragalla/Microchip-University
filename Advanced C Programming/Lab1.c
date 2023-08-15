#include <stdio.h>
typedef union {
    unsigned long reg;
    struct 
    {
        unsigned char u8rotateForwardSpeed;
        unsigned char u8rotateReverseSpeed;
        unsigned char u8speedRateChange;
        /*2 bit bit field*/
        unsigned char b1rotateStatusFlags:2;       
    }member;

}LED_ROTATE_TYPE;

typedef union {
    unsigned long reg;
    struct 
    {
        unsigned short u16pwmLightIntensity;
        unsigned char u8breatheSpeed;
        unsigned char b1breatheFlags:2;       
    }member;

}LED_BREATHE_TYPE;

typedef union {
    unsigned long reg;
    struct 
    {
        unsigned char u8pattern[4];       
    }member;

}LED_PATTERN_TYPE;

typedef struct 
{
   volatile LED_ROTATE_TYPE  ledRotation;
   volatile LED_PATTERN_TYPE ledPattern;
   volatile LED_BREATHE_TYPE ledBreath;
}STRUCT_LEDVariables;

STRUCT_LEDVariables STRUCT_allLEDVariables;
STRUCT_LEDVariables *pSTRUCT_LEDVariables = &STRUCT_allLEDVariables;

int main ()
{
    pSTRUCT_LEDVariables->ledRotation.reg = 0xABCDECFF;

    printf ("pSTRUCT_LEDVariables ->ledRotation.reg = %lX \npSTRUCT_LEDVariables->ledRotation.member.u8rotateForwardSpeed = %X \npSTRUCT_LEDVariables->ledRotation.member.u8rotateReverseSpeed = %X \npSTRUCT_LEDVariables->ledRotation.member.u8speedRateChange = %X \npSTRUCT_LEDVariables->ledRotation.member.b1rotateStatusFlags = %x \n\n\n",(pSTRUCT_LEDVariables->ledRotation.reg),(pSTRUCT_LEDVariables->ledRotation.member.u8rotateForwardSpeed),(pSTRUCT_LEDVariables->ledRotation.member.u8rotateReverseSpeed),(pSTRUCT_LEDVariables->ledRotation.member.u8speedRateChange),(pSTRUCT_LEDVariables->ledRotation.member.b1rotateStatusFlags));
    /*
    pSTRUCT_LEDVariables ->ledRotation.reg = ABCDECFF
    pSTRUCT_LEDVariables->ledRotation.member.u8rotateForwardSpeed = FF 
    pSTRUCT_LEDVariables->ledRotation.member.u8rotateReverseSpeed = EC 
    pSTRUCT_LEDVariables->ledRotation.member.u8speedRateChange = CD    
    pSTRUCT_LEDVariables->ledRotation.member.b1rotateStatusFlags = 3 
    */
    pSTRUCT_LEDVariables->ledRotation.member.u8rotateForwardSpeed = 0x11;

    printf ("pSTRUCT_LEDVariables ->ledRotation.reg = %lX \npSTRUCT_LEDVariables->ledRotation.member.u8rotateForwardSpeed = %X \npSTRUCT_LEDVariables->ledRotation.member.u8rotateReverseSpeed = %X \npSTRUCT_LEDVariables->ledRotation.member.u8speedRateChange = %X \npSTRUCT_LEDVariables->ledRotation.member.b1rotateStatusFlags = %x \n\n\n",(pSTRUCT_LEDVariables->ledRotation.reg),(pSTRUCT_LEDVariables->ledRotation.member.u8rotateForwardSpeed),(pSTRUCT_LEDVariables->ledRotation.member.u8rotateReverseSpeed),(pSTRUCT_LEDVariables->ledRotation.member.u8speedRateChange),(pSTRUCT_LEDVariables->ledRotation.member.b1rotateStatusFlags));
    /*
    pSTRUCT_LEDVariables ->ledRotation.reg = ABCDEC11
    pSTRUCT_LEDVariables->ledRotation.member.u8rotateForwardSpeed = 11 
    pSTRUCT_LEDVariables->ledRotation.member.u8rotateReverseSpeed = EC 
    pSTRUCT_LEDVariables->ledRotation.member.u8speedRateChange = CD    
    pSTRUCT_LEDVariables->ledRotation.member.b1rotateStatusFlags = 3
    */
    pSTRUCT_LEDVariables->ledRotation.member.u8rotateReverseSpeed = 0x22;

    printf ("pSTRUCT_LEDVariables ->ledRotation.reg = %lX \npSTRUCT_LEDVariables->ledRotation.member.u8rotateForwardSpeed = %X \npSTRUCT_LEDVariables->ledRotation.member.u8rotateReverseSpeed = %X \npSTRUCT_LEDVariables->ledRotation.member.u8speedRateChange = %X \npSTRUCT_LEDVariables->ledRotation.member.b1rotateStatusFlags = %x \n\n\n",(pSTRUCT_LEDVariables->ledRotation.reg),
    (pSTRUCT_LEDVariables->ledRotation.member.u8rotateForwardSpeed),(pSTRUCT_LEDVariables->ledRotation.member.u8rotateReverseSpeed),(pSTRUCT_LEDVariables->ledRotation.member.u8speedRateChange),(pSTRUCT_LEDVariables->ledRotation.member.b1rotateStatusFlags));
    /*
    pSTRUCT_LEDVariables ->ledRotation.reg = ABCD2211
    pSTRUCT_LEDVariables->ledRotation.member.u8rotateForwardSpeed = 11
    pSTRUCT_LEDVariables->ledRotation.member.u8rotateReverseSpeed = 22
    pSTRUCT_LEDVariables->ledRotation.member.u8speedRateChange = CD
    pSTRUCT_LEDVariables->ledRotation.member.b1rotateStatusFlags = 3
    */
    pSTRUCT_LEDVariables->ledRotation.member.u8speedRateChange = 0x55;

    printf ("pSTRUCT_LEDVariables ->ledRotation.reg = %lX \npSTRUCT_LEDVariables->ledRotation.member.u8rotateForwardSpeed = %X \npSTRUCT_LEDVariables->ledRotation.member.u8rotateReverseSpeed = %X \npSTRUCT_LEDVariables->ledRotation.member.u8speedRateChange = %X \npSTRUCT_LEDVariables->ledRotation.member.b1rotateStatusFlags = %x \n\n\n",(pSTRUCT_LEDVariables->ledRotation.reg),
    (pSTRUCT_LEDVariables->ledRotation.member.u8rotateForwardSpeed),(pSTRUCT_LEDVariables->ledRotation.member.u8rotateReverseSpeed),(pSTRUCT_LEDVariables->ledRotation.member.u8speedRateChange),(pSTRUCT_LEDVariables->ledRotation.member.b1rotateStatusFlags));
    /*
    pSTRUCT_LEDVariables ->ledRotation.reg = AB552211
    pSTRUCT_LEDVariables->ledRotation.member.u8rotateForwardSpeed = 11
    pSTRUCT_LEDVariables->ledRotation.member.u8rotateReverseSpeed = 22
    pSTRUCT_LEDVariables->ledRotation.member.u8speedRateChange = 55
    pSTRUCT_LEDVariables->ledRotation.member.b1rotateStatusFlags = 3
    */
    pSTRUCT_LEDVariables->ledRotation.member.b1rotateStatusFlags = 1;

    printf ("pSTRUCT_LEDVariables ->ledRotation.reg = %lX \npSTRUCT_LEDVariables->ledRotation.member.u8rotateForwardSpeed = %X \npSTRUCT_LEDVariables->ledRotation.member.u8rotateReverseSpeed = %X \npSTRUCT_LEDVariables->ledRotation.member.u8speedRateChange = %X \npSTRUCT_LEDVariables->ledRotation.member.b1rotateStatusFlags = %x \n\n\n",(pSTRUCT_LEDVariables->ledRotation.reg),
    (pSTRUCT_LEDVariables->ledRotation.member.u8rotateForwardSpeed),(pSTRUCT_LEDVariables->ledRotation.member.u8rotateReverseSpeed),(pSTRUCT_LEDVariables->ledRotation.member.u8speedRateChange),(pSTRUCT_LEDVariables->ledRotation.member.b1rotateStatusFlags));
    /*
    pSTRUCT_LEDVariables ->ledRotation.reg = A9552211
    pSTRUCT_LEDVariables->ledRotation.member.u8rotateForwardSpeed = 11
    pSTRUCT_LEDVariables->ledRotation.member.u8rotateReverseSpeed = 22
    pSTRUCT_LEDVariables->ledRotation.member.u8speedRateChange = 55
    pSTRUCT_LEDVariables->ledRotation.member.b1rotateStatusFlags = 1
    */


    pSTRUCT_LEDVariables->ledPattern.reg = 0x11111111;

    printf ("pSTRUCT_LEDVariables->ledPattern.reg = %lX \npSTRUCT_LEDVariables->ledPattern.member.u8pattern[0] = %X \npSTRUCT_LEDVariables->ledPattern.member.u8pattern[1] = %X \npSTRUCT_LEDVariables->ledPattern.member.u8pattern[2] = %X \npSTRUCT_LEDVariables->ledPattern.member.u8pattern[3] = %x \n\n\n",(pSTRUCT_LEDVariables->ledPattern.reg),
    (pSTRUCT_LEDVariables->ledPattern.member.u8pattern[0]),(pSTRUCT_LEDVariables->ledPattern.member.u8pattern[1]),(pSTRUCT_LEDVariables->ledPattern.member.u8pattern[2]),(pSTRUCT_LEDVariables->ledPattern.member.u8pattern[3]));
    /*
    pSTRUCT_LEDVariables->ledPattern.reg = 11111111 
    pSTRUCT_LEDVariables->ledPattern.member.u8pattern[0] = 11
    pSTRUCT_LEDVariables->ledPattern.member.u8pattern[1] = 11
    pSTRUCT_LEDVariables->ledPattern.member.u8pattern[2] = 11
    pSTRUCT_LEDVariables->ledPattern.member.u8pattern[3] = 11  
    */
    pSTRUCT_LEDVariables->ledPattern.member.u8pattern[0] = 0xAA;

    printf ("pSTRUCT_LEDVariables->ledPattern.reg = %lX \npSTRUCT_LEDVariables->ledPattern.member.u8pattern[0] = %X \npSTRUCT_LEDVariables->ledPattern.member.u8pattern[1] = %X \npSTRUCT_LEDVariables->ledPattern.member.u8pattern[2] = %X \npSTRUCT_LEDVariables->ledPattern.member.u8pattern[3] = %x \n\n\n",(pSTRUCT_LEDVariables->ledPattern.reg),
    (pSTRUCT_LEDVariables->ledPattern.member.u8pattern[0]),(pSTRUCT_LEDVariables->ledPattern.member.u8pattern[1]),(pSTRUCT_LEDVariables->ledPattern.member.u8pattern[2]),(pSTRUCT_LEDVariables->ledPattern.member.u8pattern[3]));
    /*
    pSTRUCT_LEDVariables->ledPattern.reg = 111111AA
    pSTRUCT_LEDVariables->ledPattern.member.u8pattern[0] = AA
    pSTRUCT_LEDVariables->ledPattern.member.u8pattern[1] = 11
    pSTRUCT_LEDVariables->ledPattern.member.u8pattern[2] = 11
    pSTRUCT_LEDVariables->ledPattern.member.u8pattern[3] = 11  
    */
    pSTRUCT_LEDVariables->ledPattern.member.u8pattern[1] = 0xBB;

    printf ("pSTRUCT_LEDVariables->ledPattern.reg = %lX \npSTRUCT_LEDVariables->ledPattern.member.u8pattern[0] = %X \npSTRUCT_LEDVariables->ledPattern.member.u8pattern[1] = %X \npSTRUCT_LEDVariables->ledPattern.member.u8pattern[2] = %X \npSTRUCT_LEDVariables->ledPattern.member.u8pattern[3] = %x \n\n\n",(pSTRUCT_LEDVariables->ledPattern.reg),
    (pSTRUCT_LEDVariables->ledPattern.member.u8pattern[0]),(pSTRUCT_LEDVariables->ledPattern.member.u8pattern[1]),(pSTRUCT_LEDVariables->ledPattern.member.u8pattern[2]),(pSTRUCT_LEDVariables->ledPattern.member.u8pattern[3]));
    /*
    pSTRUCT_LEDVariables->ledPattern.reg = 1111BBAA
    pSTRUCT_LEDVariables->ledPattern.member.u8pattern[0] = AA
    pSTRUCT_LEDVariables->ledPattern.member.u8pattern[1] = BB
    pSTRUCT_LEDVariables->ledPattern.member.u8pattern[2] = 11
    pSTRUCT_LEDVariables->ledPattern.member.u8pattern[3] = 11
    */

    pSTRUCT_LEDVariables->ledPattern.member.u8pattern[2] = 0xCC;

    printf ("pSTRUCT_LEDVariables->ledPattern.reg = %lX \npSTRUCT_LEDVariables->ledPattern.member.u8pattern[0] = %X \npSTRUCT_LEDVariables->ledPattern.member.u8pattern[1] = %X \npSTRUCT_LEDVariables->ledPattern.member.u8pattern[2] = %X \npSTRUCT_LEDVariables->ledPattern.member.u8pattern[3] = %x \n\n\n",(pSTRUCT_LEDVariables->ledPattern.reg),
    (pSTRUCT_LEDVariables->ledPattern.member.u8pattern[0]),(pSTRUCT_LEDVariables->ledPattern.member.u8pattern[1]),(pSTRUCT_LEDVariables->ledPattern.member.u8pattern[2]),(pSTRUCT_LEDVariables->ledPattern.member.u8pattern[3]));
    /*
    pSTRUCT_LEDVariables->ledPattern.reg = 11CCBBAA 
    pSTRUCT_LEDVariables->ledPattern.member.u8pattern[0] = AA
    pSTRUCT_LEDVariables->ledPattern.member.u8pattern[1] = BB
    pSTRUCT_LEDVariables->ledPattern.member.u8pattern[2] = CC
    pSTRUCT_LEDVariables->ledPattern.member.u8pattern[3] = 11
    */
    pSTRUCT_LEDVariables->ledPattern.member.u8pattern[3] = 0xDD;

    printf ("pSTRUCT_LEDVariables->ledPattern.reg = %lX \npSTRUCT_LEDVariables->ledPattern.member.u8pattern[0] = %X \npSTRUCT_LEDVariables->ledPattern.member.u8pattern[1] = %X \npSTRUCT_LEDVariables->ledPattern.member.u8pattern[2] = %X \npSTRUCT_LEDVariables->ledPattern.member.u8pattern[3] = %x \n\n\n",(pSTRUCT_LEDVariables->ledPattern.reg),
    (pSTRUCT_LEDVariables->ledPattern.member.u8pattern[0]),(pSTRUCT_LEDVariables->ledPattern.member.u8pattern[1]),(pSTRUCT_LEDVariables->ledPattern.member.u8pattern[2]),(pSTRUCT_LEDVariables->ledPattern.member.u8pattern[3]));
    /*
    pSTRUCT_LEDVariables->ledPattern.reg = DDCCBBAA
    pSTRUCT_LEDVariables->ledPattern.member.u8pattern[0] = AA
    pSTRUCT_LEDVariables->ledPattern.member.u8pattern[1] = BB
    pSTRUCT_LEDVariables->ledPattern.member.u8pattern[2] = CC
    pSTRUCT_LEDVariables->ledPattern.member.u8pattern[3] = dd
    */


}
