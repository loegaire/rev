
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_140109480(longlong *param_1)

{
  byte bVar1;
  code *pcVar2;
  undefined1 (*pauVar3) [32];
  longlong *plVar4;
  
  pcVar2 = (code *)FUN_140104330();
  pauVar3 = (undefined1 (*) [32])(*pcVar2)(0,0x3e,0x3000,4);
  *param_1 = (longlong)pauVar3;
  *pauVar3 = ZEXT1232(ZEXT812(0));
  *(undefined1 (*) [32])(*pauVar3 + 0x1e) = ZEXT1232(ZEXT812(0));
  if (*param_1 != 0) {
    pcVar2 = (code *)(ulonglong)((_DAT_7ffe02f8 ^ 0x77190988) + 0xb777868b);
    (*pcVar2)(0x7ed0202a);
    FUN_1400bf0e0();
    bVar1 = (*pcVar2)(0x875a8687b0dde2a9);
    *(byte *)*param_1 = bVar1 ^ 10;
    plVar4 = (longlong *)(*(code *)0x22058d4818eb9b75)();
    return plVar4;
  }
  return param_1;
}

