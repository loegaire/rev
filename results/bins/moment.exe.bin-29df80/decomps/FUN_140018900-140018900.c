
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140018900(void)

{
  undefined8 *puVar1;
  
  _DAT_14012b3a8 = ZEXT812(0);
  register0x0000120c = 0;
  DAT_14012b3b8 = (undefined8 *)0x0;
  puVar1 = operator_new(0x10);
  DAT_14012b3a8 = puVar1;
  DAT_14012b3b8 = puVar1 + 2;
  *puVar1 = L"\\??\\C:\\Windows\\System32\\lsass.exe";
  puVar1[1] = 0x21;
  _DAT_14012b3b0 = puVar1 + 2;
  atexit(FUN_1400bff60);
  return;
}

