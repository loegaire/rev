
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14010a2e0(void)

{
  code *pcVar1;
  BOOL BVar2;
  undefined1 *puVar3;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [48];
  
  puVar3 = auStack_38;
  BVar2 = IsProcessorFeaturePresent(0x17);
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(2);
    puVar3 = auStack_30;
  }
  *(undefined8 *)(puVar3 + -8) = 0x14010a30b;
  capture_previous_context((PCONTEXT)&DAT_14012b6b0);
  _DAT_14012b620 = *(undefined8 *)(puVar3 + 0x38);
  _DAT_14012b748 = puVar3 + 0x40;
  _DAT_14012b730 = *(undefined8 *)(puVar3 + 0x40);
  _DAT_14012b610 = 0xc0000409;
  _DAT_14012b614 = 1;
  _DAT_14012b628 = 1;
  DAT_14012b630 = 2;
  *(undefined8 *)(puVar3 + 0x20) = DAT_140127040;
  *(undefined8 *)(puVar3 + 0x28) = DAT_140127080;
  *(undefined8 *)(puVar3 + -8) = 0x14010a3ad;
  DAT_14012b7a8 = _DAT_14012b620;
  __raise_securityfailure((_EXCEPTION_POINTERS *)&PTR_DAT_1401123f0);
  return;
}

