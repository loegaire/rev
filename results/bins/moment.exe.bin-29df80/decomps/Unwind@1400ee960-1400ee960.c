
void Unwind_1400ee960(undefined8 param_1,longlong param_2)

{
  if (1 < *(longlong *)(param_2 + 0x40) + 1U) {
    *(undefined8 *)(param_2 + 0x40) = 0;
    NtClose();
  }
  return;
}

