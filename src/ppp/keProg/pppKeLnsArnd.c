#include "ppp/pppKeLns.h"

INCLUDE_ASM("asm/nonmatchings/ppp/keProg/pppKeLnsArnd", pppKeLnsArndDraw);

void pppKeLnsArndCon(pppPObject* pobj, pppCtrlTable* ctbl) {
    KeLnsArnd* arnd = (KeLnsArnd*)&pobj->val[ctbl->useVal[0]];
    
    KeLnsArnd_Init(arnd);
}

INCLUDE_ASM("asm/nonmatchings/ppp/keProg/pppKeLnsArnd", func_00193BC8);
