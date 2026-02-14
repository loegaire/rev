
void Unwind_1400d8f50(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x2308);
  lVar2 = *(longlong *)(param_2 + 0x20e0);
  if (*(longlong *)(param_2 + 0x23a0) != lVar1) {
    do {
      FUN_1400dc310(lVar1);
      lVar1 = lVar1 + 0xb0;
      lVar2 = lVar2 + -0xb0;
    } while (lVar2 != 0);
  }
  *(undefined8 *)(param_2 + 0x2240) = *(undefined8 *)(param_2 + 0x2140);
  return;
}

