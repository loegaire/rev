
void Unwind_1400a3db0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (0xf < *(ulonglong *)(param_2 + 0x108)) {
    if (0xfff < *(longlong *)(param_2 + 0x108) + 1U) {
      lVar1 = *(longlong *)(*(longlong *)(param_2 + 0xe0) + -8);
      if (0x1f < (ulonglong)((*(longlong *)(param_2 + 0xe0) + -8) - lVar1)) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      *(longlong *)(param_2 + 0xe0) = lVar1;
    }
    free(*(void **)(param_2 + 0xe0));
  }
  return;
}

