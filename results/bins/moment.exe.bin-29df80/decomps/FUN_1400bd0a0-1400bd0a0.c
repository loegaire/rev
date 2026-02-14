
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_1400bd0a0(longlong *param_1)

{
  ushort uVar1;
  code *pcVar2;
  undefined1 (*pauVar3) [32];
  longlong *plVar4;
  
  pcVar2 = (code *)FUN_1400bef20();
  pauVar3 = (undefined1 (*) [32])(*pcVar2)(0,0x20,0x3000,4);
  *param_1 = (longlong)pauVar3;
  *pauVar3 = ZEXT1232(ZEXT812(0));
  if (*param_1 != 0) {
    pcVar2 = (code *)(ulonglong)((_DAT_7ffe02f8 ^ 0x77190988) + 0xcd42ad3a);
    (*pcVar2)(0x9626887);
    FUN_1400bf0e0();
    uVar1 = (*pcVar2)(0x99a33f9ad5d7800b);
    *(ushort *)*param_1 = uVar1 ^ 0x1d9a;
    plVar4 = (longlong *)(*(code *)0xe058d481ceb9775)();
    return plVar4;
  }
  return param_1;
}

