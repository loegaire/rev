
void Unwind_1400a3e50(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (0xfff < *(ulonglong *)(param_2 + 0xe8)) {
    lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x108) + -8);
    if (0x1f < (ulonglong)((*(longlong *)(param_2 + 0x108) + -8) - lVar1)) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    *(longlong *)(param_2 + 0xe8) = *(longlong *)(param_2 + 0xe8) + 0x27;
    *(longlong *)(param_2 + 0x108) = lVar1;
  }
  free(*(void **)(param_2 + 0x108));
  return;
}

