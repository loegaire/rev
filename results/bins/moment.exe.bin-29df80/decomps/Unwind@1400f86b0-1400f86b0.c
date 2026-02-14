
void Unwind_1400f86b0(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x13b0) != 0) {
    *(undefined8 *)(param_2 + 0x1380) = 0;
    NtFreeVirtualMemory(0xffffffffffffffff,param_2 + 0x13b0,param_2 + 0x1380,0x8000);
  }
  FUN_1400c5e50(*(longlong *)(param_2 + 0x13e8));
  *(undefined8 *)(param_2 + 0x1308) = *(undefined8 *)(param_2 + 0x13e0);
  return;
}

