
void FUN_1400f9950(void)

{
  if (DAT_14012b598 != (HANDLE)0x0) {
    CloseHandle(DAT_14012b598);
    DAT_14012b598 = (HANDLE)0x0;
  }
  _Mtx_destroy_in_situ(&DAT_14012b540);
  return;
}

