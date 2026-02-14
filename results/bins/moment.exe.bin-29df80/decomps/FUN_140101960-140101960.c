
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140101960(void)

{
  void *pvVar1;
  
  _DAT_14012b330 = ZEXT812(0);
  register0x0000120c = 0;
  pvVar1 = operator_new(0x60);
  *(void **)pvVar1 = pvVar1;
  *(void **)((longlong)pvVar1 + 8) = pvVar1;
  *(void **)((longlong)pvVar1 + 0x10) = pvVar1;
  *(undefined2 *)((longlong)pvVar1 + 0x18) = 0x101;
  DAT_14012b330 = pvVar1;
  atexit(FUN_140102a20);
  return;
}

