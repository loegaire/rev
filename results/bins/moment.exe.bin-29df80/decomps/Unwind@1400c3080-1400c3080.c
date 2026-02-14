
void Unwind_1400c3080(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x30) != 0) {
    *(undefined8 *)(param_2 + 0xa0) = 0;
    NtFreeVirtualMemory(0xffffffffffffffff,param_2 + 0x30,param_2 + 0xa0,0x8000);
  }
  return;
}

