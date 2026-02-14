
void Unwind_1400175c0(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined1 *)(param_2 + 0x175c);
  uVar2 = *(undefined8 *)(param_2 + 0xdd0);
  FUN_1400bfe30((longlong *)(param_2 + 0x1480));
  *(undefined8 *)(param_2 + 0xdc8) = uVar2;
  *(undefined1 *)(param_2 + 0x175b) = uVar1;
  return;
}

