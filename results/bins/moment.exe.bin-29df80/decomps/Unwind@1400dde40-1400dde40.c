
void Unwind_1400dde40(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x40);
  lVar2 = *(longlong *)(param_2 + 0x50);
  if (lVar1 != *(longlong *)(param_2 + 0xa0)) {
    do {
      FUN_1400dc310(lVar1);
      lVar1 = lVar1 + 0xb0;
      lVar2 = lVar2 + -0xb0;
    } while (lVar2 != 0);
  }
  FUN_1400ddfb0(*(undefined1 (**) [16])(param_2 + 0x58));
  return;
}

