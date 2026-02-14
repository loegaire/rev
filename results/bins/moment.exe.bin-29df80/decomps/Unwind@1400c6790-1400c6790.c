
void Unwind_1400c6790(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x90) != 0) {
    *(undefined8 *)(param_2 + 0x80) = 0;
    NtFreeVirtualMemory(0xffffffffffffffff,param_2 + 0x60,(undefined8 *)(param_2 + 0x80),0x8000);
  }
  return;
}

