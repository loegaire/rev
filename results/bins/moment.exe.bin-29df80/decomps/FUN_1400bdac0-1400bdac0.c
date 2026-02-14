
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_1400bdac0(longlong *param_1)

{
  byte bVar1;
  code *pcVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  pcVar2 = (code *)FUN_1400bef20();
  puVar3 = (undefined8 *)(*pcVar2)(0,0xf,0x3000,4);
  *param_1 = (longlong)puVar3;
  *puVar3 = 0;
  *(undefined8 *)((longlong)puVar3 + 7) = 0;
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

