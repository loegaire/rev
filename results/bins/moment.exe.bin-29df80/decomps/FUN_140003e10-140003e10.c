
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140003e10(void)

{
  undefined1 (*pauVar1) [16];
  void *pvVar2;
  SC_HANDLE pSVar3;
  undefined1 auVar4 [16];
  
  pauVar1 = operator_new(0x18);
  auVar4._0_12_ = ZEXT812(0);
  auVar4._12_4_ = 0;
  *pauVar1 = auVar4;
  *(undefined8 *)pauVar1[1] = 0;
  pvVar2 = operator_new(0xf8);
  *(void **)pvVar2 = pvVar2;
  *(void **)((longlong)pvVar2 + 8) = pvVar2;
  *(void **)((longlong)pvVar2 + 0x10) = pvVar2;
  *(undefined2 *)((longlong)pvVar2 + 0x18) = 0x101;
  *(void **)((longlong)*pauVar1 + 8) = pvVar2;
  pSVar3 = OpenSCManagerA((LPCSTR)0x0,"ServicesActive",0xf003f);
  *(SC_HANDLE *)*pauVar1 = pSVar3;
  _DAT_14012b2d8 = pauVar1;
  return;
}

