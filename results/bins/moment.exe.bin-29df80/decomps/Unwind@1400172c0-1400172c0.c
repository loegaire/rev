
void Unwind_1400172c0(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined1 *)(param_2 + 0x1764);
  uVar2 = *(undefined8 *)(param_2 + 0xe10);
  FUN_1400bfe30((longlong *)(param_2 + 0x1580));
  *(undefined8 *)(param_2 + 0xe08) = uVar2;
  *(undefined1 *)(param_2 + 0x1763) = uVar1;
  return;
}

