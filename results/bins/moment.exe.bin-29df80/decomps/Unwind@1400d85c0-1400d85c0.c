
void Unwind_1400d85c0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_2 + 0x23a0);
  if (*(longlong *)(param_2 + 0x2398) != 1) {
    lVar1 = *(longlong *)(param_2 + 0x2120);
    do {
      FUN_1400dc310(lVar1);
      lVar1 = lVar1 + 0xb0;
      lVar2 = lVar2 + -0xb0;
    } while (lVar2 != 0);
  }
  *(undefined8 *)(param_2 + 0x2240) = *(undefined8 *)(param_2 + 0x2308);
  return;
}

