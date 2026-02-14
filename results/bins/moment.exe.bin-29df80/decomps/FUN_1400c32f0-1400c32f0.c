
void FUN_1400c32f0(void)

{
  code *pcVar1;
  int iVar2;
  PVOID Handle;
  
  iVar2 = _Mtx_lock(&DAT_14012aa80);
  if (iVar2 == 0) {
    if (DAT_14012aacc != 0x7fffffff) {
      Handle = AddVectoredExceptionHandler(1,(PVECTORED_EXCEPTION_HANDLER)&LAB_1400c3390);
      if (Handle != (PVOID)0x0) {
        DAT_14012ab70 = '\0';
        RemoveVectoredExceptionHandler(Handle);
        if (DAT_14012ab70 == '\0') {
          LOCK();
          DAT_14012b250 = 1;
          UNLOCK();
        }
      }
      _Mtx_unlock(&DAT_14012aa80);
      return;
    }
  }
  else {
    std::_Throw_Cpp_error(5);
  }
  DAT_14012aacc = 0x7ffffffe;
  std::_Throw_Cpp_error(6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

