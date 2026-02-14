
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_1400bd9c0(longlong *param_1)

{
  byte bVar1;
  code *pcVar2;
  undefined1 (*pauVar3) [16];
  longlong *plVar4;
  undefined1 auVar5 [16];
  
  pcVar2 = (code *)FUN_1400bef20();
  pauVar3 = (undefined1 (*) [16])(*pcVar2)(0,0x11,0x3000,4);
  *param_1 = (longlong)pauVar3;
  auVar5._0_12_ = ZEXT812(0);
  auVar5._12_4_ = 0;
  *pauVar3 = auVar5;
  pauVar3[1][0] = 0;
  if (*param_1 != 0) {
    pcVar2 = (code *)(ulonglong)((_DAT_7ffe02f8 ^ 0x77190988) + 0xcd42ad3a);
    (*pcVar2)(0x9626887);
    FUN_1400bf0e0();
    bVar1 = (*pcVar2)(0x99a33f9ad5d7800b);
    *(byte *)*param_1 = bVar1 ^ 0x9a;
    plVar4 = (longlong *)(*(code *)0xe5058d4818eb9e75)();
    return plVar4;
  }
  return param_1;
}

